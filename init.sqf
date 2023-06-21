OWL_devMode = true;

if (hasInterface || {isServer}) then {
	call compileFinal preprocessFileLineNumbers "Common\initCommon.sqf";
};
if (isServer) then {
	call compileFinal preprocessFileLineNumbers "Server\initServer.sqf";
};
if (hasInterface) then {
	call compileFinal preprocessFileLineNumbers "Client\initClient.sqf";
};

// random start time script by Champ-1
if (isServer) then {
if (random 1 <= 0.90) then {
	myNewTime = 5.5 + random 13; // day
} else {
	if (random 1 <= 0.66) then {
		myNewTime = random 5.5; // night 
	} else {
		myNewTime = 18.5 + random 5.5; // evening
	};
};
publicVariable "myNewTime";
};	
waitUntil{not isNil "myNewTime"};
skipTime myNewTime;