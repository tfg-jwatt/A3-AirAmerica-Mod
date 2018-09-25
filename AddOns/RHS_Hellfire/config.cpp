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
class cfgMagazines {

	// Edit the ACE pylons to use the correct models
	class 6Rnd_ACE_Hellfire_AGM114K;
	class PylonRack_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName="2x AGM-114K";
		count=2;
		weight=90;
		pylonWeapon="ace_hellfire_launcher";
		ammo="ACE_Hellfire_AGM114K";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR",
			"B_ASRRAM_EJECTOR",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_MELB"
		};
		model="\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
		mirrorMissilesIndexes[]={2,1};
	};
	class PylonRack_1Rnd_ACE_Hellfire_AGM114N: PylonRack_1Rnd_ACE_Hellfire_AGM114K {
		displayName="2x AGM-114N";
		ammo="ACE_Hellfire_AGM114N";
	}
	class PylonRack_4Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K {
		displayName="4x AGM-114K";
		model="\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114N: PylonRack_4Rnd_ACE_Hellfire_AGM114K {
		displayName="4x AGM-114N";
		model="\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
		mirrorMissilesIndexes[]={2,1,4,3};
		ammo="ACE_Hellfire_AGM114N";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName="3x AGM-114K";
	};
	// Hide the RHS pylons
	class rhs_mag_AGM114K;
	class rhs_mag_AGM114K_2: rhs_mag_AGM114K {
		hardpoints[]=
		{
		};
	};
	class rhs_mag_AGM114K_4: rhs_mag_AGM114K_2
	{
		hardpoints[]=
		{
		};
	};
	class rhs_mag_AGM114N;
	class rhs_mag_AGM114N_2: rhs_mag_AGM114N
	{
		hardpoints[]=
		{
		};
	};
	class rhs_mag_AGM114N_4: rhs_mag_AGM114N_2
	{
		hardpoints[]=
		{
		};
	};
	class rhs_mag_AGM114M;
	class rhs_mag_AGM114M_2: rhs_mag_AGM114M
	{
		hardpoints[]=
		{
		};
	};
	class rhs_mag_AGM114M_4: rhs_mag_AGM114M_2
	{
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
class cfgAmmo {
	class M_PG_AT;
	class ACE_Hellfire_AGM114K: M_PG_AT
	{
		model="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
	};
	class RHS_ammo_AGM_114M;
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
class cfgWeapons {
	class rhs_weap_HellfireLauncher;
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
};
class cfgVehicles {

	// Edit presets for AH-6
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F {
		class Components;
	}
	class RHS_MELB_base: Helicopter_Base_H {

	};
	class RHS_MELB_AH6M: RHS_MELB_base {
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Presets
				{
					class Heavy
					{
						attachment[]=
						{
							"rhsusf_mag_gau19_melb_left",
							"",
							"",
							"PylonRack_1Rnd_ACE_Hellfire_AGM114K"
						};
						displayname="Heavy";
					};
				};
			};
		};
	}

	// Edit presets for AH-64D
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class RHS_AH64_base: Heli_Attack_01_base_F
	{
	};
	class RHS_AH64D: RHS_AH64_base
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Presets
				{
					class MR
					{
						attachment[]=
						{
							"",
							"rhs_mag_M151_19",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114N",
							"rhs_mag_M151_19",
							""
						};
						displayname="Multi-Role";
					};
					class MR_L
					{
						attachment[]=
						{
							"",
							"rhs_mag_M151_19",
							"rhs_mag_AGM114L_4",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"rhs_mag_M151_19",
							""
						};
						displayname="Multi-Role (Longbow)";
					};
					class CS
					{
						attachment[]=
						{
							"",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114N",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114N",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							""
						};
						displayname="Close Support";
					};
					class CS_L
					{
						attachment[]=
						{
							"",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"rhs_mag_AGM114L_4",
							"rhs_mag_AGM114L_4",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							""
						};
						displayname="Close Support (Longbow)";
					};
					class GS
					{
						attachment[]=
						{
							"",
							"rhs_mag_M151_19",
							"rhs_mag_M151_19",
							"rhs_mag_M151_19",
							"rhs_mag_M151_19",
							""
						};
						displayname="Ground Suppression";
					};
					class AA
					{
						attachment[]=
						{
							"rhs_mag_Sidewinder_heli",
							"rhs_mag_M151_19",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114N",
							"rhs_mag_M151_19",
							"rhs_mag_Sidewinder_heli"
						};
						displayname="AA";
					};
					class AA_L
					{
						attachment[]=
						{
							"rhs_mag_Sidewinder_heli",
							"rhs_mag_M151_19",
							"rhs_mag_AGM114L_4",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"rhs_mag_M151_19",
							"rhs_mag_Sidewinder_heli"
						};
						displayname="AA (Longbow)";
					};
				};
			};
		};
	};

	// Edit presets for AH-1Z
	class RHS_AH1Z_base: Heli_Attack_01_base_F {

	};
	class RHS_AH1Z: RHS_AH1Z_base
	{

		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Presets
				{
					class MR
					{
						attachment[]=
						{
							"rhs_mag_Sidewinder_heli_2",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"rhs_mag_Sidewinder_heli_2"
						};
						displayname="Multi-Role";
					};
					class CS
					{
						attachment[]=
						{
							"rhs_mag_Sidewinder_heli_2",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"rhs_mag_Sidewinder_heli_2"
						};
						displayname="Close Support";
					};
					class GS
					{
						attachment[]=
						{
							"rhs_mag_Sidewinder_heli_2",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_Sidewinder_heli_2"
						};
						displayname="Ground Suppression";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Watt";
	timepacked="1509475975";
};