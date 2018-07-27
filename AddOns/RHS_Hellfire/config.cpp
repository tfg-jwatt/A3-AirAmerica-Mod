class CfgPatches
{
	class Watt_Patches
	{
		units[]=
		{
			"RHS_MELB_H6M",
			"RHS_MELB_AH6M",
			"RHS_MELB_AH6M_L",
			"RHS_MELB_AH6M_M",
			"RHS_MELB_AH6M_H",
			"RHS_MELB_MH6M",
			"RHS_AH64D",
			"RHS_AH64D_GS",
			"RHS_AH64D_CS",
			"RHS_AH64D_AA",
			"RHS_AH64D_wd",
			"RHS_AH64D_GS_wd",
			"RHS_AH64D_CS_wd",
			"RHS_AH64D_AA_wd",
			"RHS_AH64D_noradar",
			"RHS_AH64D_noradar_GS",
			"RHS_AH64D_noradar_CS",
			"RHS_AH64D_noradar_AA",
			"RHS_AH64D_noradar_wd",
			"RHS_AH64D_noradar_GS_wd",
			"RHS_AH64D_noradar_CS_wd",
			"RHS_AH64D_noradar_AA_wd",
			"RHS_AH64DGrey",
			"RHS_A10",
			"RHS_A10_CBU",
			"RHS_C130j",
			"RHS_CH_47F",
			"RHS_CH_47F_light",
			"RHS_UH60M",
			"RHS_UH60M_d",
			"RHS_UH60M_MEV",
			"RHS_UH60M_MEV_d",
			"RHS_UH60M_MEV2",
			"RHS_UH60M_MEV2_d",
			"RHS_UH1Y",
			"RHS_UH1Y_d",
			"RHS_UH1Y_FFAR",
			"RHS_UH1Y_FFAR_d",
			"RHS_UH1Y_UNARMED",
			"RHS_UH1Y_UNARMED_d",
			"RHS_AH1Z",
			"RHS_AH1Z_GS",
			"RHS_AH1Z_CS",
			"RHS_AH1Z_wd",
			"RHS_AH1Z_GS_wd",
			"RHS_AH1Z_CS_wd",
			"rhsusf_CH53E_USMC",
			"rhsusf_CH53E_USMC_D",
			"RHS_AH64_base",
			"B_T_VTOL_01_infantry_F",
			"VTOL_01_infantry_base_F"
		};
		ammo[]={};
		weapons[]={};
		requiredVersion=1.3200001;
		requiredAddons[]={
			"Kimi_HMDs_Helos",
			"Kimi_HMDs_RHS",
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Air_F_EPB_Heli_Light_03",
			"A3_CargoPoses_F",
			"ace_compat_rhs_usf3",
			"rhsusf_airweapons",
			"rhsusf_c_airweapons",
			"RHS_US_A2_AirImport",
			"rhsusf_c_melb",
			"rhsusf_melb",
			"MELB_UI",
			"ace_aircraft",
			"ace_hellfire",
			"ace_missileguidance"
		};
		magazines[]={};
	};
};
class RscControlsGroup;
class RscText;
class RangeText: RscText
{
};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscControlsGroupNoScrollbars;
class RscIGUIValue;
class MFD;
class Components;

class AirplaneHUD;
class Draw;
class AltNumber;
class AltNumberAGL;
class SpeedNumber;
class RscIGUIText;
class RscVehicleToggles;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfo_MELB: RscUnitInfo
	{
	};
	class RscUnitInfoAir_NoRadar_MELB: RscUnitInfo
	{
		controls[]=
		{
			"CA_VehicleToggles",
			"WeaponInfoControlsGroupRight"
		};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	};
	class Rsc_MELB_UnitInfo: RscUnitInfoAir_NoRadar_MELB
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_MELB_fnc_handler";
	};
	class Rsc_MELB_Turret_UnitInfo: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_MELB_fnc_FLIRHandler";
		controls[]=
		{
			"MELB_GUI"
		};
		class VScrollbar;
		class HScrollbar;
		class MELB_GUI: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 *   (0.01875 * SafezoneH) +   (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w="53.5 *   (0.01875 * SafezoneH)";
			h="40 *   (0.025 * SafezoneH)";
			class controls
			{
				class TextDistance: RangeText
				{
					idc=1010;
					text="RNG";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="41.8 *   (0.01875 * SafezoneH)";
					y="4.8 *   (0.025 * SafezoneH)";
					w="3*   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc=151;
					sizeEx="0.0295*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					font="PuristaMedium";
					x="46 *   (0.01875 * SafezoneH)";
					y="4.8 *   (0.025 * SafezoneH)";
					w="4 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class TextSpeed: RangeText
				{
					idc=1010;
					text="SPD";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="2.5 *   (0.01875 * SafezoneH)";
					y="4.8 *   (0.025 * SafezoneH)";
					w="8 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc=188;
					sizeEx="0.0295*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					font="PuristaMedium";
					text="120";
					x="8 *   (0.01875 * SafezoneH)";
					y="4.8 *   (0.025 * SafezoneH)";
					w="4 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class TextAlt: RangeText
				{
					idc=1010;
					text="ALT";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="2.5 *   (0.01875 * SafezoneH)";
					y="5.6 *   (0.025 * SafezoneH)";
					w="8 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc=189;
					sizeEx="0.0295*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					font="PuristaMedium";
					text="3825";
					x="8 *   (0.01875 * SafezoneH)";
					y="5.6 *   (0.025 * SafezoneH)";
					w="4 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=152;
					sizeEx="0.022*SafezoneH";
					colorText[]={0,0,0,1};
					colorBackground[]={1,1,1,1};
					shadow=0;
					font="PuristaMedium";
					text="VIS";
					x="25.75 *   (0.01875 * SafezoneH)";
					y="7.25 *   (0.025 * SafezoneH)";
					w="1.5 *   (0.01875 * SafezoneH)";
					h="0.6 *   (0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc=153;
					sizeEx="0.022*SafezoneH";
					shadow=2;
					colorText[]={1,1,1,1};
					font="PuristaMedium";
					text="BHOT";
					x="25.5*   (0.01875 * SafezoneH)";
					y="7.75 *   (0.025 * SafezoneH)";
					w="2*   (0.01875 * SafezoneH)";
					h="0.8 *   (0.025 * SafezoneH)";
				};
				class TextACPOS: RangeText
				{
					idc=1010;
					text="CRAFT POS";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="2.5 *   (0.01875 * SafezoneH)";
					y="3 *   (0.025 * SafezoneH)";
					w="8 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class ValueACPOS: RangeText
				{
					idc=171;
					font="PuristaMedium";
					sizeEx="0.0295*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="2.5 *   (0.01875 * SafezoneH)";
					y="4 *   (0.025 * SafezoneH)";
					w="6 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
				class TextTPOS: RangeText
				{
					idc=1010;
					text="TARGET POS";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="41.8*   (0.01875 * SafezoneH)";
					y="3 *   (0.025 * SafezoneH)";
					w="8 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class ValueTPOS: RangeText
				{
					idc=172;
					font="PuristaMedium";
					sizeEx="0.0295*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="41.8*   (0.01875 * SafezoneH)";
					y="4 *   (0.025 * SafezoneH)";
					w="6 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc=190;
					text="20:28:35";
					font="PuristaMedium";
					sizeEx="0.0295*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="2.5*   (0.01875 * SafezoneH)";
					y="9 *   (0.025 * SafezoneH)";
					w="6 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
				class TextLaser: RangeText
				{
					idc=158;
					text="LRF    ARMED";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={0.89999998,0,0,1};
					shadow=2;
					x="3*   (0.01875 * SafezoneH)";
					y="14.1 *   (0.025 * SafezoneH)";
					w="13 *   (0.01875 * SafezoneH)";
					h="2 *   (0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc=156;
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					font="PuristaMedium";
					text="023";
					x="27.25*   (0.01875 * SafezoneH)";
					y="5 *   (0.025 * SafezoneH)";
					w="4 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class TextHDG: RangeText
				{
					idc=1010;
					text="HDG";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="24*   (0.01875 * SafezoneH)";
					y="5*   (0.025 * SafezoneH)";
					w="4 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
				class OpticsZoom1: RangeText
				{
					idc=180;
					text="28x";
					colorText[]={1,1,1,1};
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					shadow=2;
					x="5 *   (0.01875 * SafezoneH)";
					y="25 *   (0.025 * SafezoneH)";
					w="6 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
				class TextZOOM: RangeText
				{
					idc=1010;
					text="ZOOM";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="2.5 *   (0.01875 * SafezoneH)";
					y="25 *   (0.025 * SafezoneH)";
					w="4 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
				class ValueGEOLOCK: RscText
				{
					idc=154;
					text="TRK COR";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="42*   (0.01875 * SafezoneH)";
					y="33 *   (0.025 * SafezoneH)";
					w="8 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
				class TextGEOLOCK: RangeText
				{
					idc=1010;
					text="GEOLOCK";
					font="PuristaMedium";
					sizeEx="0.0255*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=2;
					x="42*   (0.01875 * SafezoneH)";
					y="32 *   (0.025 * SafezoneH)";
					w="8 *   (0.01875 * SafezoneH)";
					h="1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscUnitInfoAir;
	class RscUnitInfoAirRTDFullNoWeapon;
	class RscUnitInfoAirRTD_NoRadar_MELB: RscUnitInfoAirRTDFullNoWeapon
	{
		onLoad="['onLoad',_this,'RscUnitInfoAirRTDFullNoWeapon','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	};
	class Rsc_MELB_RTD_UnitInfo: RscUnitInfoAirRTD_NoRadar_MELB
	{
		controls[]=
		{
			"CA_VehicleTogglesBackground",
			"CA_VehicleToggles",
			"CA_Horizon_Lite",
			"CA_Speed_Analogue",
			"CA_Altitude_Analogue",
			"CA_Horizon_Analogue",
			"CA_Stability_Analogue",
			"CA_Compass_Analogue",
			"WeaponInfoControlsGroupRight"
		};
		onLoad="['onLoad',_this,'RscUnitInfoAirRTD_NoRadar_MELB','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_MELB_fnc_handler";
	};
};
class Turrets;
class MainTurret;
class UserActions;
class CfgWeapons {
	class rhs_weap_HellfireLauncher;
	class rhs_weap_AGM114K_Launcher: rhs_weap_HellfireLauncher
	{
		displayName="AGM-114K Hellfire II";
		displayNameShort = "AGM-114K";
        ace_hellfire_enabled = 1; // handle adding interactions and adding Laser Designator
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 1; // show attack profile / lock on hud
        autoFire = 0;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
        cursor = "EmptyCursor";
        cursorAim = "missile";
        showAimCursorInternal = 0;

		class Direct;
		class TopDown: Direct
		{
			displayName="AGM-114K";
			displayNameShort="AGM-114K";
		};
		magazines[]=
		{
			"rhs_mag_agm114K_4",
			"rhs_mag_agm114K_2",
			"rhs_mag_agm114K"
		};
	};
	class rhs_weap_AGM114L_Launcher: rhs_weap_HellfireLauncher
	{
		displayName="AGM-114L Hellfire II";
		displayNameShort = "AGM-114L";
		canLock=2;
		weaponLockDelay=3;
		missileLockCone=65;
		cursorSize=0;
		cursor="missile";
		cursorAim="EmptyCursor";
		aiRateOfFire=5;
		aiRateOfFireDistance=4000;
		maxrange=8000;
		maxrangeprobab=0.1;
		midrange=2000;
		midrangeprobab=0.89999998;
		minrange=250;
		minrangeprobab=0.60000002;
		class Direct;
		class TopDown: Direct
		{
			displayName="AGM-114L";
			displayNameShort="AGM-114L";
		};
		magazines[]=
		{
			"rhs_mag_agm114L_4",
			"rhs_mag_agm114L_2",
			"rhs_mag_agm114L"
		};
	};
	class rhs_weap_AGM114M_Launcher: rhs_weap_AGM114K_Launcher
	{
		displayName="AGM-114M Hellfire II";
		displayNameShort = "AGM-114M";
        ace_hellfire_enabled = 1; // handle adding interactions and adding Laser Designator
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 1; // show attack profile / lock on hud
        autoFire = 0;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
        cursor = "EmptyCursor";
        cursorAim = "missile";
        showAimCursorInternal = 0;
		magazines[]=
		{
			"rhs_mag_agm114M_4",
			"rhs_mag_agm114M_2",
			"rhs_mag_agm114M"
		};

		class Direct;
		class TopDown: Direct
		{
			displayName="AGM-114M";
			displayNameShort="AGM-114M";
		};
	};
	class rhs_weap_AGM114N_Launcher: rhs_weap_AGM114M_Launcher
	{
		displayName="AGM-114N Hellfire II";
		displayNameShort = "AGM-114N";
        ace_hellfire_enabled = 1; // handle adding interactions and adding Laser Designator
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 1; // show attack profile / lock on hud
        autoFire = 0;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
        cursor = "EmptyCursor";
        cursorAim = "missile";
        showAimCursorInternal = 0;
		magazines[]=
		{
			"rhs_mag_agm114N_4",
			"rhs_mag_agm114N_2",
			"rhs_mag_agm114N"
		};

		class Direct;
		class TopDown: Direct
		{
			displayName="AGM-114N";
			displayNameShort="AGM-114N";
		};
	};
	class aa_dagr_launcher: rhs_weap_HellfireLauncher
	{
		displayName="DAGR";
		displayNameShort = "DAGR";
        ace_hellfire_enabled = 1; // handle adding interactions and adding Laser Designator
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 1; // show attack profile / lock on hud
        autoFire = 0;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
        cursor = "EmptyCursor";
        cursorAim = "missile";
        showAimCursorInternal = 0;
		minRange=600;
		minRangeProbab=0.60000002;
		midRange=2000;
		midRangeProbab=0.89999998;
		maxRange=4000;
		maxRangeProbab=0.1;
		weight=40;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",
				3.2,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		textureType="semi";
		magazines[]=
		{
			"aa_dagr_4",
			"aa_dagr_8",
			"aa_dagr_16"
		};

		class Direct;
		class TopDown: Direct
		{
			displayName="DAGR";
			displayNameShort="DAGR";

			weaponSoundEffect="DefaultRifle";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",
					3.2,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class rhs_weap_DAGR_Launcher: rhs_weap_HellfireLauncher
	{
        ace_hellfire_enabled = 1; // handle adding interactions and adding Laser Designator
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 1; // show attack profile / lock on hud
        autoFire = 0;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
        cursor = "EmptyCursor";
        cursorAim = "missile";
        showAimCursorInternal = 0;
		magazines[]=
		{
			"rhs_mag_DAGR_4",
			"rhs_mag_DAGR_8",
			"rhs_mag_DAGR_16"
		};
	};
};
class CfgAmmo {
	class rhs_ammo_Hellfire_AT;

	class RHS_ammo_AGM_114K: rhs_ammo_Hellfire_AT
	{
        displayName = "AGM-114K";
        displayNameShort = "AGM-114K";
        description = "AGM-114K";
        descriptionShort = "AGM-114K";


        hit = 1400;
        indirectHit = 71;
        indirectHitRange = 4.5;
        effectsMissile = "missile2";

        irLock = 0;
        laserLock = 0;
        manualControl = 0;
        maxSpeed = 450;

        thrustTime = 2.5; // motor burn 2-3 sec
        thrust = 250;
        timeToLive = 40;

        ace_rearm_caliber = 178;

        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 70;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
	};

	class RHS_ammo_AGM_114L: rhs_ammo_Hellfire_AT
	{
        displayName = "AGM-114L";
        displayNameShort = "AGM-114L";
        description = "AGM-114L";
        descriptionShort = "AGM-114L";


        hit = 1400;
        indirectHit = 71;
        indirectHitRange = 4.5;
        effectsMissile = "missile2";

        maxSpeed = 450;

        thrustTime = 2.5; // motor burn 2-3 sec
        thrust = 250;
        timeToLive = 40;

        ace_rearm_caliber = 178;

	};

	class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K
	{
        displayName = "AGM-114M";
        displayNameShort = "AGM-114M";
        description = "AGM-11M";
        descriptionShort = "AGM-114M";


        hit = 400;
        indirectHit = 150;
        indirectHitRange = 14;
        effectsMissile = "missile2";

        irLock = 0;
        laserLock = 0;
        manualControl = 0;
        maxSpeed = 450;

        thrustTime = 2.5; // motor burn 2-3 sec
        thrust = 250;
        timeToLive = 40;

        ace_rearm_caliber = 178;

        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 70;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
	};

	class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M
	{
        displayName = "AGM-114N";
        displayNameShort = "AGM-114N";
        description = "AGM-114N";
        descriptionShort = "AGM-114N";


        hit = 200;
        indirectHit = 200;
        indirectHitRange = 10;
        explosionEffects = "BombExplosion";
        effectsMissile = "missile2";

        irLock = 0;
        laserLock = 0;
        manualControl = 0;
        maxSpeed = 450;

        thrustTime = 2.5; // motor burn 2-3 sec
        thrust = 250;
        timeToLive = 40;

        ace_rearm_caliber = 178;

        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 70;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
	};
	class aa_ammo_dagr: RHS_ammo_AGM_114M {

		displayName="DAGR";
		displayNameShort="DAGR";
		maverickWeaponIndexOffset=80;
		model="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR_fly";
		proxyShape="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR";
		hit=300;
		indirectHit=50;
		indirectHitRange=6;
		cost=100;
		maxSpeed=720;
		irLock=0;
		airLock=0;
		laserLock=1;
		maxControlRange=8000;
		trackOversteer=1;
		trackLead=1;
		maneuvrability=14;
		timeToLive=20;
		simulationStep=0.0099999998;
		airFriction=0.1;
		sideAirFriction=0.30000001;
		initTime=0.0020000001;
		thrustTime=1.5700001;
		thrust=825;
		fuseDistance=50;
		whistleDist=4;
		muzzleEffect="";
		effectsMissileInit="MissileDAR1";
		effectsMissile="missile1";
		explosionEffects="ATMissileExplosion";
		weaponLockSystem=4;
		manualControl=1;
		aiAmmoUsageFlags="64 + 128+512";
		missileLockMaxDistance=6000;
		missileLockMinDistance=1000;
		missileLockMaxSpeed=56;
		missileLockCone=25;
		missileKeepLockedCone=25;

        ace_rearm_caliber = 178;

		 class ace_missileguidance {
	        enabled = 1;

	        minDeflection = 0.0005;      // Minium flap deflection for guidance
	        maxDeflection = 0.01;       // Maximum flap deflection for guidance
	        incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

	        canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

	        // Guidance type for munitions
	        defaultSeekerType = "SALH";
	        seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

	        defaultSeekerLockMode = "LOAL";
	        seekerLockModes[] = { "LOAL", "LOBL" };

	        seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
	        seekerAngle = 70;           // Angle in front of the missile which can be searched
	        seekerAccuracy = 1;         // seeker accuracy multiplier

	        seekerMinRange = 1;
	        seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

	        // Attack profile type selection
	        defaultAttackProfile = "hellfire";
	        attackProfiles[] = {"hellfire"};
	    };

	};


};
class CfgMagazines
{
	class 12Rnd_PG_missiles;

    // Kilo - tandem shaped charge HEAT (anti-tank)
    class 6Rnd_ACE_Hellfire_AGM114K: 12Rnd_PG_missiles { // Old style vehicle magazine

		hardpoints[]=
		{
		};
    };

    // 1.70 pylon magazines:
    class PylonMissile_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K { // Bare missle

		hardpoints[]=
		{
		};
    };
    class PylonRack_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K { // 1x Launcher Support Rack

		hardpoints[]=
		{
		};
    };
    class PylonRack_3Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K { // 3x Launcher Support Rack

		hardpoints[]=
		{
		};
    };
    class PylonRack_4Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K { // 4x Launcher Support Rack

		hardpoints[]=
		{
		};
    };

    // November - Metal augmented charge (Thermobaric) (Enclosures, ships, urban targets, air defense units)
    class 6Rnd_ACE_Hellfire_AGM114N: 6Rnd_ACE_Hellfire_AGM114K { // Old style vehicle magazine

		hardpoints[]=
		{
		};
    };

    // 1.70 pylon magazines:
    class PylonMissile_1Rnd_ACE_Hellfire_AGM114N: PylonMissile_1Rnd_ACE_Hellfire_AGM114K { // Bare missle

		hardpoints[]=
		{
		};
    };
    class PylonRack_1Rnd_ACE_Hellfire_AGM114N: PylonRack_1Rnd_ACE_Hellfire_AGM114K { // 1x Launcher Support Rack

		hardpoints[]=
		{
		};
    };
    class PylonRack_3Rnd_ACE_Hellfire_AGM114N: PylonRack_3Rnd_ACE_Hellfire_AGM114K { // 3x Launcher Support Rack

		hardpoints[]=
		{
		};
    };
    class PylonRack_4Rnd_ACE_Hellfire_AGM114N: PylonRack_4Rnd_ACE_Hellfire_AGM114K { // 4x Launcher Support Rack

		hardpoints[]=
		{
		};
    };
	class 24Rnd_PG_missiles;
	class rhs_mag_DAGR_4: 24Rnd_PG_missiles {
		hardpoints[]=
		{
		};
	};
	class rhs_mag_DAGR_8: rhs_mag_DAGR_4 {
		hardpoints[]=
		{
		};
	};
	class rhs_mag_DAGR_16: rhs_mag_DAGR_8 {
		hardpoints[]=
		{
		};
	};
	class rhs_mag_AGM114K;
	class aa_dagr_4: rhs_mag_AGM114K
	{
		count=4;
		displayName="DAGR 4x";
		displayNameShort="DAGR 4x";
		ammo="aa_ammo_dagr";
		weight=32;
		hardpoints[]=
		{
			"RHS_HP_HELLFIRE_SINGLE",
			"RHS_HP_MELB"
		};
		pylonWeapon="aa_dagr_launcher";
		model="\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class aa_dagr_8: aa_dagr_4
	{
		count=8;
		displayName="DAGR 8x";
		displayNameShort="DAGR 8x";
		ammo="aa_ammo_dagr";
		weight=64;
		hardpoints[]=
		{
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK",
			"RHS_HP_MELB"
		};
		pylonWeapon="aa_dagr_launcher";
		model="\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x";
		mirrorMissilesIndexes[]={2,1,4,3,6,5,8,7};
	};
	class aa_dagr_16: aa_dagr_8
	{
		count=16;
		displayName="DAGR 16x";
		displayNameShort="DAGR 16x";
		weight=128;
		hardpoints[]=
		{
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_16x";
		mirrorMissilesIndexes[]={2,1,4,3,8,7,6,5,12,11,10,9,14,13,16,15};
	};
};
class cfgMods
{
	author="Watt";
	timepacked="1509475975";
};