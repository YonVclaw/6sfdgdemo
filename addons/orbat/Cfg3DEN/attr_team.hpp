class 6SFG_ORBAT_team: Combo
{
    onLoad = "uiNamespace setVariable ['Attribute6SFG_Orbat_team',(_this select 0) controlsGroupCtrl 100];";
    attributeLoad = "\
        _ctrlTeams = _this controlsGroupCtrl 100 ;\
        [_ctrlTeams,_value] call 6SFG_orbat_fnc_loadTeams;\
    ";
    attributeSave = "\
        _ctrlTeams = _this controlsGroupCtrl 100; \
        private _output = _ctrlTeams lbData lbCurSel _ctrlTeams; _output \
    ";
    class Controls
    {
        class Title: ctrlStatic {
            style = 0x01;
            x = 0;
            w = ATTRIBUTE_TITLE_W * GRID_W;
            h = SIZE_M * GRID_H;
            colorBackground[] = {0,0,0,0};
        };
        class ValueRole: ctrlCombo
        {
            idc = 100;
            onLoad = "uiNamespace setVariable ['Attribute6SFG_Orbat_team',_this select 0];";
            x = ATTRIBUTE_TITLE_W * GRID_W;
            w = ATTRIBUTE_CONTENT_W * GRID_W;
            h = SIZE_M * GRID_H;
        };
    };
};
