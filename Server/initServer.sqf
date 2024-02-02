OWL_fnc_initSpawnPoints = compileFinal preprocessFileLineNumbers "Server\initSpawnPoints.sqf";
OWL_fnc_handleSectorSeizing = compileFinal preprocessFileLineNumbers "Server\handleSectorSeizing.sqf";
OWL_fnc_sectorAreaCheck = compileFinal preprocessFileLineNumbers "Server\sectorAreaCheck.sqf";
OWL_fnc_handleIncomePayout = compileFinal preprocessFileLineNumbers "Server\handleIncomePayout.sqf";

call compileFinal preprocessFileLineNumbers "Server\serverFunctions.sqf";
call compileFinal preprocessFileLineNumbers "Server\clientRequests.sqf";

call compileFinal preprocessFileLineNumbers "Server\initSectors.sqf";

/******************************************************
***********			Variable Init			***********
******************************************************/

/* SERVERSIDE ONLY */
OWL_persistentData = createHashMap;
OWL_allWarlords = createHashMap;
OWL_inAreaZRList = [];
OWL_sectorVoteList = [[],[]];
OWL_bankFunds = [0,0];
OWL_voteTrigger = [false, false];

OWL_sectorPositionMatrix = [];
OWL_sectorAreaMatrix = [];
OWL_sectorAreaBorderMatrix = [];

{
	private _area = _x getVariable "OWL_sectorArea";
	private _border = _x getVariable "OWL_sectorBorderSize";

	OWL_sectorPositionMatrix pushBack (getPosATL _x);
	OWL_sectorAreaMatrix pushBack (_area);
	OWL_sectorAreaBorderMatrix pushBack (_area apply {_x + _border});
} forEach OWL_allSectors;

/* PUBLIC VARIABLES */
OWL_contestedSector = [objNull, objNull];
publicVariable "OWL_contestedSector";

OWL_gameState = ["",""];
publicVariable "OWL_gameState";

private _cfg = missionConfigFile >> "CfgLoadoutCost" >> "OpenWarlords";

OWL_loadoutProgress = [];
{
	private _side = str _x;
	private _arr = [];
	{
		private _class = _x#0;
		_arr pushBack (getNumber (_cfg >> _side >> _class >> "progress"));
	} forEach (OWL_loadoutRequirements get _side);
	OWL_loadoutProgress pushBack _arr;
} forEach OWL_competingSides;

publicVariable "OWL_loadoutProgress";

/******************************************************
***********			Init Finalized			***********
******************************************************/

call compileFinal preprocessFileLineNumbers "Server\serverEventHandlers.sqf";

// Allow clients to request initialization
missionNamespace setVariable ["OWL_serverInitialized", true, true];
["Server initialization finished"] call OWL_fnc_log;

// Init voting for the first sector
{_x call OWL_fnc_initSectorVote} forEach OWL_competingSides;

/*
	From here on out, the server updates clients CP once per minute, and checks
	the status of sectors being seized, and the zone restrictions they have.
	
	Aside from that all the server has to do is recieve requests from clients 
	triggered through the deliberate actions interacting with the UI. 
*/

OWL_garbageCollector = [];

OWL_gameHandle = 0 spawn {
	private _count = 0;
	WHILE {TRUE} do {
		sleep 1;
		_count = _count + 1;

		call OWL_fnc_sectorAreaCheck;

		if (_count % 60 == 0) then {
			call OWL_fnc_handleIncomePayout;
		};
	};
};

//weather code from Warlords: Redux. no fog, no rain, chance of overcast. 
[] spawn {
	while {TRUE} do {
		_overcastPreset = random 1;
		(7200 * timeMultiplier) setOvercast _overcastPreset;
		waitUntil {sleep 600; 0 setFog 0; 10e10 setFog 0; 0 setRain 0; 10e10 setRain 0; simulWeatherSync; abs (overcast - _overcastPreset) < 0.2};
	};
};


//dynamic map marker system
//mission name marker
_markeroneloc = [];
_markertwoloc = [];
_markerthreeloc = [];
_worldname = worldName;  
switch (_worldname) do
{ 
	case "Altis":
	{
    	_markeroneloc = [13998.892,14819.831,0]; 
		_markertwoloc = [13991.464,14401.705,0];
		_markerthreeloc = [13995.007,13756.69,0]; 
	};
	case default 
	{
		_markeroneloc = [(worldSize / 2), ((worldSize / 2) + 200), 0];
		_markertwoloc = [(worldSize / 2), (worldSize / 2), 0];
		_markerthreeloc = [(worldSize / 2), ((worldSize / 2) - 200), 0];
	};

};
_markerone = createMarker ["markerone", _markeroneloc]; // Not visible yet.
_markerone setMarkerType "mil_marker"; // Visible.
_markerone setMarkerColor "ColorOrange";
_markerone setMarkerAlpha 0.50;
_markerone setMarkerText missionName; 

//add server discord to this list to have it auto populate
_serverdiscord = serverName; 
switch (_serverdiscord) do
{ 
	case "Open Warlords":
	{
    	_serverdiscord = "https://discord.gg/SBGrYUpvba"; 
	};
	case default 
	{
		_serverdiscord = "discord.gg/arma3";
	};

};
//server name marker

_markertwo = createMarker ["markertwo", _markertwoloc]; // Not visible yet.
_markertwo setMarkerType "mil_box"; // Visible.
_markertwo setMarkerColor "ColorOrange";
_markertwo setMarkerAlpha 0.50;
_markertwo setMarkerText _serverdiscord; 

_buglink = missionName; 
switch (_buglink) do
{ 
	case "OWLKorb":
	{
    	_buglink = "https://github.com/korbelz/OWLKorb/issues"; 
	};
	case "OWL":
	{
    	_buglink = "https://github.com/aaannnndd/OWL/issues"; 
	};
	case "WarlordsReduxMe":
	{
    	_buglink = "https://github.com/korbelz/WarlordsReduxMe.altis"; 
	};
	case "WarlordsReduxMav":
	{
    	_buglink = "https://github.com/korbelz/WarlordsReduxMav.altis/issues"; 
	};
	case default 
	{
		_buglink = "discord.gg/arma3";
	};

};
//bug reporting marker

_markerthree = createMarker ["markerthree", _markerthreeloc]; // Not visible yet.
_markerthree  setMarkerType "mil_triangle"; // Visible.
_markerthree  setMarkerColor "ColorOrange";
_markerthree  setMarkerAlpha 0.50;
_markerthree  setMarkerText _buglink; 
