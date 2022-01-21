/*
    Author: Freddo

    Creates a debriefing section for admins containing all
    log messasges sent during the mission.
    Displayed in mission debriefing screen.

    Include this file in description.ext of your mission

    Example:
    class CfgDebriefingSections {
        #include "\z\6sfg\addons\adminmenu\debriefAdminLog.inc"
    };
*/

class 6sfg_adminlog
{
    title = "6SFG Log";
    variable = "6SFG_adminmenu_debrief";
};
