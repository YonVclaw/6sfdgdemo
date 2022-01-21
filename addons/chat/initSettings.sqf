[
    QGVAR(healUsage),
    "LIST",
    "#heal available",
    ["6SFG", "Chat Commands"],
    [
        [0,         1,                  3       ],
        ["Never",   "During safestart", "Always"],
        0
    ], // default value
    1 // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(rpUsage),
    "LIST",
    "#rp available",
    ["6SFG", "Chat Commands"],
    [
        [0,         1,                  3       ],
        ["Never",   "During safestart", "Always"],
        0
    ], // default value
    1 // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(tpUsage),
    "LIST",
    "#tp available",
    ["6SFG", "Chat Commands"],
    [
        [0,         1,                  2,                                  3       ],
        ["Never",   "During safestart", "During safestart & after respawn", "Always"],
        0
    ], // default value
    1 // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(whisperUsage),
    "LIST",
    "#whisper available",
    ["6SFG", "Chat Commands"],
    [
        [0,       3       ],
        ["Never", "Always"],
        0
    ], // default value
    1 // isGlobal
] call CBA_fnc_addSetting;

[
    QGVAR(specUsage),
    "LIST",
    "#spec available",
    ["6SFG", "Chat Commands"],
    [
        [0,         1,                  2,                                  3       ],
        ["Never",   "During safestart", "During safestart & after respawn", "Always"],
        0
    ], // default value
    1 // isGlobal
] call CBA_fnc_addSetting;

if (isClass (configFile >> "CfgPatches" >> QUOTE(DOUBLES(PREFIX,assignGear)))) then {
    [
        QGVAR(loadoutUsage),
        "LIST",
        "#loadout available",
        ["6SFG", "Chat Commands"],
        [
            [0,         1,                  2,                                  3       ],
            ["Never",   "During safestart", "During safestart & after respawn", "Always"],
            0
        ], // default value
        1 // isGlobal
    ] call CBA_fnc_addSetting;
};

if (isClass (configFile >> "CfgPatches" >> QUOTE(DOUBLES(PREFIX,acre2)))) then {
    [
        QGVAR(radioUsage),
        "LIST",
        "#radio available",
        ["6SFG", "Chat Commands"],
        [
            [0,         1,                  2,                                  3       ],
            ["Never",   "During safestart", "During safestart & after respawn", "Always"],
            0
        ], // default value
        1 // isGlobal
    ] call CBA_fnc_addSetting;
};
