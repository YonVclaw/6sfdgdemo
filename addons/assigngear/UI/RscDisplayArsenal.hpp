class RscDisplayArsenal
{
   class controls
   {
       class 6SFGexport : RscButtonMenu {
           x ="0.425079 * safezoneW + safezoneX";
           y = "0.951298 * safezoneH + safezoneY";
           w = "0.123399 * safezoneW";
           h ="0.0188041 * safezoneH";
           text = "Export as 6SFG Role";
           action = "[player,'test'] call 6sfg_assigngear_fnc_saveRole";
       };
   };
};
