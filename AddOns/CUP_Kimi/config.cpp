class CfgPatches
{
	class Watt_Patches
	{
		units[]=
		{};
		ammo[]={};
		weapons[]={};
		requiredVersion=1.3200001;
		requiredAddons[]={
			"cup_airvehicles_uh60"
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
class CfgVehicles
{


	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
		class HitPoints;
		class Reflectors
		{
			class Right;
		};
		class UserActions;
	};
	class CUP_Uh60_Base: Helicopter_Base_H {
		class Components;
	};
	class CUP_MH60L_Dap_2x_Dynamic_Base: CUP_Uh60_Base {
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class MFD
				{
					class Kimi_HMD_Weapons
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Turret_Tape_Symbol
							{
								type="group";
								condition="1-user2";
								class Turret_Tape_Triangle
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0,0},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											}
										}
									};
								};
								class Turret_Tape_Square
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.02},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.02},
												1
											}
										}
									};
								};
							};
							class Gun_Cross
							{
								condition="mgun";
								type="group";
								class GUN_X
								{
									type="line";
									width=9;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											{0,-0.050000001},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,-0.015},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0,0.015},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,0.050000001},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{-0.050000001,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{-0.015,0},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0.015,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{0.050000001,0},
											1
										}
									};
								};
							};
							class Gunner_AIM
							{
								type="group";
								condition="1-mgun";
								class CPG_X
								{
									type="line";
									width=6;
									points[]=
									{

										{
											"TurretAimToView",
											1,
											{0,-0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,-0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.047499999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.047499999,0},
											1
										}
									};
								};
							};
							class TargetACQ
							{
								type="group";
								condition="1";
								class ACQgun
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0049999999,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0049999999,0},
											1
										}
									};
								};
							};
							class TargetACQ_AGM
							{
								condition="ATmissile-missilelocked";
								type="group";
								class ACQbox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.0049999999},
											1
										}
									};
								};
							};
							class TargetACQ_AAM
							{
								condition="AAmissile-missilelocked";
								type="group";
								class Circle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										}
									};
								};
							};
							class AAM_Lock
							{
								condition="(missilelocked*AAmissile)";
								type="group";
								class LockCircle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										}
									};
								};
							};
							class AGM_Lock
							{
								condition="(missilelocked*ATmissile)";
								type="group";
								class LockBox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_P
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={-1};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_C
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Units_Text_Imperial
							{
								type="group";
								condition="user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="I";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};
							class Units_Text_Metric
							{
								type="group";
								condition="1-user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="M";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};

							class WYPT_Group
							{
							type="group";
							condition="WPvalid";

								class WYPT_Fly_2_Cue
								{
									type="line";
									width=3;
									points[]=
									{

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},
										{},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										}
									};
								};

							class WYPT_Block
							{
								type="group";
								condition="speed - (6*1.852/3.6)+1.94384";
								class WYPT_Text
								{
									type="text";
									source="static";
									text="W";
									align="left";
									scale=1;
									pos[]=
									{
										{0.029999999,0.75},
										1
									};
									right[]=
									{
										{0.07,0.75},
										1
									};
									down[]=
									{
										{0.029999999,0.79000002},
										1
									};
								};
								class WYPT_Index
								{
									type="text";
									source="WPIndex";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.039999999,0.75},
										1
									};
									right[]=
									{
										{0.079999998,0.75},
										1
									};
									down[]=
									{
										{0.039999999,0.79000002},
										1
									};
								};
								class WYPT_Distance
								{
									type="text";
									source="WPDist";
									sourceScale=0.001;
									sourceprecision=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.12,0.75},
										1
									};
									right[]=
									{
										{0.16,0.75},
										1
									};
									down[]=
									{
										{0.12,0.79000002},
										1
									};
								};
								class WYPT_KM
								{
									type="text";
									source="static";
									text="KM";
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.75},
										1
									};
									right[]=
									{
										{0.25999999,0.75},
										1
									};
									down[]=
									{
										{0.22,0.79000002},
										1
									};
								};
								class Ground_Speed
								{
									type="text";
									source="Speed";
									sourceScale=1.94384;
									align="center";
									scale=1;
									pos[]=
									{
										{0.029999999,0.79000002},
										1
									};
									right[]=
									{
										{0.07,0.79000002},
										1
									};
									down[]=
									{
										{0.029999999,0.82999998},
										1
									};
								};
								class WYPT_TTG_6
								{
									type="group";
									condition="(6*1.852/3.6) - speed";
									class TTG_6
									{
										type="text";
										source="WPDist";
										sourceScale="1/(6*1.852/3.6)";
										align="right";
										scale=1;
										pos[]=
										{
											{0.13,0.79000002},
											1
										};
										right[]=
										{
											{0.17,0.79000002},
											1
										};
										down[]=
										{
											{0.13,0.82999998},
											1
										};
									};
								};
								class WYPT_TTG_10
								{
									type="group";
									condition="speed- ((10-6)*1.852/3.6)+1";
									class TTG_10
									{
										type="group";
										condition="(10*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(10*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_20
								{
									type="group";
									condition="speed- ((20-10)*1.852/3.6)+1";
									class TTG_20
									{
										type="group";
										condition="(20*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(20*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_30
								{
									type="group";
									condition="speed- ((30-10)*1.852/3.6)+1";
									class TTG_30
									{
										type="group";
										condition="(30*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(30*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_40
								{
									type="group";
									condition="speed- ((40-10)*1.852/3.6)+1";
									class TTG_40
									{
										type="group";
										condition="(40*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(40*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_50
								{
									type="group";
									condition="speed- ((50-10)*1.852/3.6)+1";
									class TTG_50
									{
										type="group";
										condition="(50*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(50*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_60
								{
									type="group";
									condition="speed- ((60-10)*1.852/3.6)+1";
									class TTG_60
									{
										type="group";
										condition="(60*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(60*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_70
								{
									type="group";
									condition="speed- ((70-10)*1.852/3.6)+1";
									class TTG_70
									{
										type="group";
										condition="(70*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(70*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_80
								{
									type="group";
									condition="speed- ((80-10)*1.852/3.6)+1";
									class TTG_80
									{
										type="group";
										condition="(80*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(80*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_90
								{
									type="group";
									condition="speed- ((90-10)*1.852/3.6)+1";
									class TTG_90
									{
										type="group";
										condition="(90*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(90*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_100
								{
									type="group";
									condition="speed- ((100-10)*1.852/3.6)+1";
									class TTG_100
									{
										type="group";
										condition="(100*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(100*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_110
								{
									type="group";
									condition="speed- ((110-10)*1.852/3.6)+1";
									class TTG_110
									{
										type="group";
										condition="(110*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(110*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_120
								{
									type="group";
									condition="speed- ((120-10)*1.852/3.6)+1";
									class TTG_120
									{
										type="group";
										condition="(120*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(120*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_130
								{
									type="group";
									condition="speed- ((130-10)*1.852/3.6)+1";
									class TTG_130
									{
										type="group";
										condition="(130*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(130*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_140
								{
									type="group";
									condition="speed- ((140-10)*1.852/3.6)+1";
									class TTG_140
									{
										type="group";
										condition="(140*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(140*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_150
								{
									type="group";
									condition="speed- ((150-10)*1.852/3.6)+1";
									class TTG_150
									{
										type="group";
										condition="(150*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(150*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_160
								{
									type="group";
									condition="speed- ((160-10)*1.852/3.6)+1";
									class TTG_160
									{
										type="group";
										condition="(160*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(160*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_170
								{
									type="group";
									condition="speed- ((170-10)*1.852/3.6)+1";
									class TTG_170
									{
										type="group";
										condition="(170*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(170*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_180
								{
									type="group";
									condition="speed- ((180-10)*1.852/3.6)+1";
									class TTG_180
									{
										type="group";
										condition="(180*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(180*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_190
								{
									type="group";
									condition="speed- ((190-10)*1.852/3.6)+1";
									class TTG_190
									{
										type="group";
										condition="(190*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(190*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_200
								{
									type="group";
									condition="speed- ((200-10)*1.852/3.6)+1";
									class TTG_200
									{
										type="group";
										condition="(200*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(200*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_210
								{
									type="group";
									condition="speed- ((210-10)*1.852/3.6)+1";
									class TTG_210
									{
										type="group";
										condition="(210*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(210*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_220
								{
									type="group";
									condition="speed- ((220-10)*1.852/3.6)+1";
									class TTG_220
									{
										type="group";
										condition="(220*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(220*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_230
								{
									type="group";
									condition="speed- ((230-10)*1.852/3.6)+1";
									class TTG_230
									{
										type="group";
										condition="(230*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(230*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_240
								{
									type="group";
									condition="speed- ((240-10)*1.852/3.6)+1";
									class TTG_240
									{
										type="group";
										condition="(240*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(240*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_250
								{
									type="group";
									condition="speed- ((250-10)*1.852/3.6)+1";
									class TTG_250
									{
										type="group";
										condition="(250*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(250*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_260
								{
									type="group";
									condition="speed- ((260-10)*1.852/3.6)+1";
									class TTG_260
									{
										type="group";
										condition="(260*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(260*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_270
								{
									type="group";
									condition="speed- ((270-10)*1.852/3.6)+1";
									class TTG_270
									{
										type="group";
										condition="(270*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(270*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_280
								{
									type="group";
									condition="speed- ((280-10)*1.852/3.6)+1";
									class TTG_280
									{
										type="group";
										condition="(280*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(280*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_290
								{
									type="group";
									condition="speed- ((290-10)*1.852/3.6)+1";
									class TTG_290
									{
										type="group";
										condition="(290*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(290*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_300
								{
									type="group";
									condition="speed- ((300-10)*1.852/3.6)+1";
									class TTG_300
									{
										type="group";
										condition="(300*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(300*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
							};
							};
							class Heading_Indexer
							{
								type="line";
								width=7;
								points[]=
								{

									{

										{
											"0.5",
											"0.128 + 0.03"
										},
										1
									},

									{
										{0.5,0.12800001},
										1
									}
								};
							};
							class HeadingScale_LEFT
							{
								clipTL[]={0,0};
								clipBR[]={0.44999999,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_RIGHT
							{
								clipTL[]={0.55000001,0};
								clipBR[]={1,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_BOTTOM
							{
								clipTL[]=
								{
									0.44999999,
									"0.02 + 0.085"
								};
								clipBR[]=
								{
									"0.45 + 0.10",
									1
								};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class WYPT_indexer
							{
								type="group";
								condition="WPvalid";
								class WYPT_tape
								{
									type="line";
									width=4;
									points[]=
									{

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{-0.0099999998,0.015},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0,0},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0.0099999998,0.015},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Laser_Toggle_On
							{
								type="group";
								condition="laseron";
								class Laser_On
								{
									type="text";
									text="LRFD ON";
									source="static";
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.82999998},
										1
									};
									right[]=
									{
										{0.64999998,0.82999998},
										1
									};
									down[]=
									{
										{0.61000001,0.87},
										1
									};
								};
							};
							class Static_HAD_BOX
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},
									{},

									{

										{
											"0.5-0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5-0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											"0.5+0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5+0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9-0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9+0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9+0.032"
										},
										1
									}
								};
							};
							class Missile_limits
							{
								type="group";
								condition="missile";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gun_limits
							{
								type="group";
								condition="mgun";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gunner_Aim_Box
							{
								type="line";
								width=2;
								points[]=
								{

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									}
								};
							};
							class AGM_TOF
							{
								condition="ATmissile*missilelocked";
								type="group";
								class TOFtext
								{
									type="text";
									align="right";
									source="static";
									text="TOF=";
									scale=1;
									pos[]=
									{
										{0.61000001,0.92000002},
										1
									};
									right[]=
									{
										{0.64999998,0.92000002},
										1
									};
									down[]=
									{
										{0.61000001,0.95999998},
										1
									};
								};
								class TOFnumber
								{
									type="text";
									source="targetDist";
									sourcescale=0.0024999999;
									align="right";
									scale=1;
									pos[]=
									{
										{0.69,0.92000002},
										1
									};
									right[]=
									{
										{0.73000002,0.92000002},
										1
									};
									down[]=
									{
										{0.69,0.95999998},
										1
									};
								};
							};
							class Range_group
							{
								type="group";
								condition="targetDist";
								class RangeText
								{
									type="text";
									source="static";
									text="R";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.86000001},
										1
									};
									right[]=
									{
										{0.34,0.86000001},
										1
									};
									down[]=
									{
										{0.30000001,0.89999998},
										1
									};
								};
								class RangeNumber
								{
									type="text";
									source="targetDist";
									sourceprecision=2;
									sourceScale=0.001;
									align="left";
									scale=1;
									pos[]=
									{
										{0.37,0.86000001},
										1
									};
									right[]=
									{
										{0.41,0.86000001},
										1
									};
									down[]=
									{
										{0.37,0.89999998},
										1
									};
								};
							};
							class ACQ_TADS_Source
							{
								type="group";
								condition="1-activeSensorsOn";
								class ACQ_TADS
								{
									type="text";
									source="static";
									text="TADS";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRG_Source
							{
								type="group";
								condition="activeSensorsOn-AAmissile";
								class ACQ_FCRG
								{
									type="text";
									source="static";
									text="FCR/G";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRA_Source
							{
								type="group";
								condition="(activeSensorsOn*AAmissile)";
								class ACQ_FCRA
								{
									type="text";
									source="static";
									text="FCR/A";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
						};
					};
					class Kimi_HMD_Radar
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Radar_Contacts
							{
								condition="activeSensorsOn";
								class Radar_Contact_Boxes
								{
									width=2;
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]=
									{
										"0.5+0.2165",
										"0.5+0.2165"
									};
									points[]=
									{

										{
											{-0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,-0.0049999999},
											1
										}
									};
								};
							};
						};
					};
					class AirplaneHUD
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
						};
					};
					class MFD_Pilot_10
					{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0.25,1,0.25};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.491429,0.452766},
											1
										},

										{
											{0.495,0.452766},
											1
										},

										{
											{0.495,0.457802},
											1
										},

										{
											{0.491429,0.457802},
											1
										},

										{
											{0.491429,0.452766},
											1
										},
										{},

										{
											{0.499286,0.45578799},
											1
										},

										{
											{0.57714301,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.46283901},
											1
										},

										{
											{0.49285701,0.55752701},
											1
										},
										{},

										{
											{0.48857099,0.45578799},
											1
										},

										{
											{0.41,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.35404801},
											1
										},

										{
											{0.49285701,0.446722},
											1
										},
										{},

										{
											{0.61000001,0.29965201},
											1
										},

										{
											{0.64285702,0.29965201},
											1
										},

										{
											{0.64285702,0.342967},
											1
										},
										{},

										{
											{0.64285702,0.57565898},
											1
										},

										{
											{0.64285702,0.619982},
											1
										},

										{
											{0.61071402,0.619982},
											1
										},
										{},

										{
											{0.374286,0.619982},
											1
										},

										{
											{0.341429,0.619982},
											1
										},

										{
											{0.341429,0.57565898},
											1
										},
										{},

										{
											{0.374286,0.29965201},
											1
										},

										{
											{0.341429,0.29965201},
											1
										},

										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="impactDistance";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_8
					{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
					};
					class MFD_Pilot_9
					{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11: MFD_Pilot_10
					{
						topLeft="MFD_11_TL";
						topRight="MFD_11_TR";
						bottomLeft="MFD_11_BL";
						turret[]={0};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class BlackBackgroundGroup
							{
								color[]={0,0,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{
												{0,0.1},
												1
											},

											{
												{1,0.1},
												1
											},

											{
												{1,1},
												1
											},

											{
												{0,1},
												1
											}
										}
									};
								};
							};
							class ReticleGroup
							{
								color[]={0,0.12,0};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.43000001,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.73239303},
											1
										},

										{
											{0.62199998,0.73239303},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.616,0.48273501},
											1
										},

										{
											{0.616,0.29794899},
											1
										},

										{
											{0.59200001,0.29794899},
											1
										},

										{
											{0.55800003,0.286154},
											1
										},

										{
											{0.55800003,0.27239299},
											1
										},

										{
											{0.5,0.27239299},
											1
										},

										{
											{0.5,0.286154},
											1
										},

										{
											{0.46799999,0.29794899},
											1
										},

										{
											{0.44600001,0.29794899},
											1
										},

										{
											{0.44600001,0.48273501},
											1
										},

										{
											{0.43000001,0.49059799},
											1
										},
										{},

										{
											{0.46000001,0.60000002},
											1
										},

										{
											{0.60000002,0.60000002},
											1
										},

										{
											{0.60000002,0.72000003},
											1
										},

										{
											{0.46000001,0.72000003},
											1
										},

										{
											{0.46000001,0.60000002},
											1
										},
										{},

										{
											{0.039999999,0.80000001},
											1
										},

										{
											{0.23999999,0.80000001},
											1
										},

										{
											{0.23999999,0.86000001},
											1
										},

										{
											{0.039999999,0.86000001},
											1
										},

										{
											{0.039999999,0.80000001},
											1
										},
										{},

										{
											{-0.059999999,0.82999998},
											1
										},

										{
											{0.039999999,0.82999998},
											1
										},
										{},

										{
											{0.039999999,0.93000001},
											1
										},

										{
											{0.23999999,0.93000001},
											1
										},

										{
											{0.23999999,0.99000001},
											1
										},

										{
											{0.039999999,0.99000001},
											1
										},

										{
											{0.039999999,0.93000001},
											1
										},
										{},

										{
											{-0.059999999,0.95999998},
											1
										},

										{
											{0.039999999,0.95999998},
											1
										},
										{},

										{
											{0.27000001,0.86000001},
											1
										},

										{
											{0.82999998,0.86000001},
											1
										},

										{
											{0.82999998,0.98000002},
											1
										},

										{
											{0.27000001,0.98000002},
											1
										},

										{
											{0.27000001,0.86000001},
											1
										},
										{},

										{
											{0.23,0.18000001},
											1
										},

										{
											{0.37,0.18000001},
											1
										},

										{
											{0.37,0.25999999},
											1
										},

										{
											{0.23,0.25999999},
											1
										},

										{
											{0.23,0.18000001},
											1
										},
										{},

										{
											{0.69999999,0.18000001},
											1
										},

										{
											{0.83999997,0.18000001},
											1
										},

										{
											{0.83999997,0.25999999},
											1
										},

										{
											{0.69999999,0.25999999},
											1
										},

										{
											{0.69999999,0.18000001},
											1
										},
										{},

										{
											{0.23999999,0.28999999},
											1
										},

										{
											{0.36000001,0.28999999},
											1
										},

										{
											{0.36000001,0.37},
											1
										},

										{
											{0.23999999,0.37},
											1
										},

										{
											{0.23999999,0.28999999},
											1
										},
										{},

										{
											{0.70999998,0.28999999},
											1
										},

										{
											{0.82999998,0.28999999},
											1
										},

										{
											{0.82999998,0.37},
											1
										},

										{
											{0.70999998,0.37},
											1
										},

										{
											{0.70999998,0.28999999},
											1
										}
									};
								};
								class SightSelect1
								{
									type="text";
									source="static";
									text="SIGHT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.28,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.222
										},
										1
									};
								};
								class SightSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.28,0.227},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.26199999
										},
										1
									};
								};
								class AcqSelect1
								{
									type="text";
									source="static";
									text="ACQ";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.86000001,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.222
										},
										1
									};
								};
								class AcqSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.86000001,0.227},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.26199999
										},
										1
									};
								};
								class LSTSelect1
								{
									type="text";
									source="static";
									text="LST";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.34,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.33199999
										},
										1
									};
								};
								class LSTSelect2
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.34,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.37200001
										},
										1
									};
								};
								class LRFDSelect1
								{
									type="text";
									source="static";
									text="LRFD";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.81,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.33199999
										},
										1
									};
								};
								class LRFDSelect2
								{
									type="text";
									source="static";
									text="B";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.81,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.37200001
										},
										1
									};
								};
								class PilotText
								{
									type="text";
									source="static";
									text="PILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.815
										},
										1
									};
									right[]=
									{
										{0.090000004,0.815},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.85000002
										},
										1
									};
								};
								class CopilotText
								{
									type="text";
									source="static";
									text="COPILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.94499999
										},
										1
									};
									right[]=
									{
										{0.090000004,0.94499999},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.98000002
										},
										1
									};
								};
								class PylonText6
								{
									type="text";
									source="static";
									text="#6";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.25999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.58499998
										},
										1
									};
								};
								class PylonText5
								{
									type="text";
									source="static";
									text="#5";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.34999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText4
								{
									type="text";
									source="static";
									text="#4";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.44,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText3
								{
									type="text";
									source="static";
									text="#3";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.69999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText2
								{
									type="text";
									source="static";
									text="#2";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.79000002,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText1
								{
									type="text";
									source="static";
									text="#1";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.88,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.58499998
										},
										1
									};
								};
								class CurrentWeaponText
								{
									type="text";
									source="static";
									text="CURRENT WEAPON";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.55000001,0.81999999},
										1
									};
									right[]=
									{
										{0.58999997,0.81999999},
										1
									};
									down[]=
									{
										{0.55000001,0.85500002},
										1
									};
								};
								class Weapons
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.87},
										1
									};
									right[]=
									{
										{0.58999997,0.87},
										1
									};
									down[]=
									{
										{0.55000001,0.90499997},
										1
									};
								};
								class Ammo
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.92000002},
										1
									};
									right[]=
									{
										{0.58999997,0.92000002},
										1
									};
									down[]=
									{
										{0.55000001,0.95499998},
										1
									};
								};
							};
							class MGun
							{
								class Default
								{
									condition="ammo0 > 0";
									color[]={0,0.12,0};
									class Shape
									{
										type="line";
										width=4;
										points[]=
										{

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.458,0.38641},
												1
											},

											{
												{0.458,0.44931599},
												1
											},

											{
												{0.60000002,0.44931599},
												1
											},

											{
												{0.60000002,0.38641},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},
											{},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.50199997,0.32547},
												1
											},

											{
												{0.52200001,0.32547},
												1
											},

											{
												{0.52200001,0.284188},
												1
											},

											{
												{0.54000002,0.284188},
												1
											},

											{
												{0.54000002,0.327436},
												1
											},

											{
												{0.55599999,0.327436},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											}
										};
									};
									class Ammo
									{
										type="text";
										source="ammo";
										sourceIndex=0;
										sourceScale=1;
										sourceLength=4;
										align="center";
										scale=1;
										pos[]=
										{
											{0.52999997,0.41},
											1
										};
										right[]=
										{
											{0.56999999,0.41},
											1
										};
										down[]=
										{
											{0.52999997,0.44499999},
											1
										};
									};
								};
								class Selected: Default
								{
									condition="(mgun +  (ammo0 min 1))/2";
									color[]={0.99000001,0.94,0.58999997};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
									};
								};
								class Empty: Default
								{
									condition="ammo0 <= 0";
									color[]={1,0,0,1};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
										source="static";
										text="EMPTY";
									};
								};
							};
							class Pylon1
							{
								type="pylonicon";
								pos[]=
								{
									{0.81999999,0.5},
									1
								};
								pylon=1;
								name="Heli_Attack_01";
							};
							class Pylon2: Pylon1
							{
								pos[]=
								{
									{0.73000002,0.5},
									1
								};
								pylon=2;
							};
							class Pylon3: Pylon1
							{
								pos[]=
								{
									{0.63999999,0.5},
									1
								};
								pylon=3;
							};
							class Pylon4: Pylon1
							{
								pos[]=
								{
									{0.36000001,0.5},
									1
								};
								pylon=4;
							};
							class Pylon5: Pylon1
							{
								pos[]=
								{
									{0.27000001,0.5},
									1
								};
								pylon=5;
							};
							class Pylon6: Pylon1
							{
								pos[]=
								{
									{0.18000001,0.5},
									1
								};
								pylon=6;
							};
							class ArmBackground
							{
								color[]={0.19,0.039999999,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{

												{
													"0.0+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.1+0.14"
												},
												1
											},

											{

												{
													"0.0+0.48",
													"0.1+0.14"
												},
												1
											}
										}
									};
								};
							};
							class BlackText
							{
								color[]={0.15000001,0.0099999998,0};
								class CMText
								{
									type="text";
									source="static";
									text="ARM";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.52999997,0.17},
										1
									};
									right[]=
									{
										{0.56999999,0.17},
										1
									};
									down[]=
									{
										{0.52999997,0.205},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11_CM: MFD_Pilot_11
					{
						turret[]={-1};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class CMText
							{
								type="text";
								source="static";
								text="CM";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.52999997,0.61000001},
									1
								};
								right[]=
								{
									{0.56999999,0.61000001},
									1
								};
								down[]=
								{
									{0.52999997,0.64499998},
									1
								};
							};
							class CMAmmo
							{
								type="text";
								source="cmammo";
								sourceScale=1;
								sourceLength=3;
								align="center";
								scale=1;
								pos[]=
								{
									{0.52999997,0.66000003},
									1
								};
								right[]=
								{
									{0.56999999,0.66000003},
									1
								};
								down[]=
								{
									{0.52999997,0.69499999},
									1
								};
							};
						};
					};
					class Kimi_HMD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Aiming_X_Static
							{
								type="line";
								width=5;
								points[]=
								{

									{
										{0.5,0.47999999},
										1
									},

									{
										{0.5,0.44999999},
										1
									},
									{},

									{
										{0.5,0.51999998},
										1
									},

									{
										{0.5,0.55000001},
										1
									},
									{},

									{
										{0.47999999,0.5},
										1
									},

									{
										{0.44999999,0.5},
										1
									},
									{},

									{
										{0.51999998,0.5},
										1
									},

									{
										{0.55000001,0.5},
										1
									}
								};
							};
							class Clock_Text
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.11,0.175},
									1
								};
								right[]=
								{
									{0.15000001,0.175},
									1
								};
								down[]=
								{
									{0.11,0.215},
									1
								};
							};
							class WYPT_Group
							{
								type="group";
								condition="WPvalid";
								class WYPT_Block
								{
									type="group";
									condition="speed - (6*1.852/3.6)+1.94384";
									class WYPT_Fly_2_Cue
									{
										type="line";
										width=3;
										points[]=
										{

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},
											{},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0,-0.029999999},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											}
										};
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class SpeedNumber_Imperial
							{
								type="group";
								condition="user1";
								class Speed_Imperial
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=1.94384;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class SpeedNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Speed_Metric
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=3.5999999;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class AltNumber_Imperial
							{
								type="group";
								condition="user1";
								class Alt_Imperial
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=3.2808399;
									sourceOffset=-6;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class AltNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Alt_Metric
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=1;
									sourceOffset=-2;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class Static_HAD_BOX_CPG_Add
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5-0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9+0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9+0.032"
										},
										1
									}
								};
							};
							class WeaponName
							{
								type="group";
								condition="1-mgun";
								class weaponN
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class WeaponName_Gun
							{
								type="group";
								condition="mgun";
								class weaponG
								{
									type="text";
									align="right";
									source="static";
									text="CGUN";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class AmmoCount
							{
								type="group";
								condition="rocket+bomb+missile+mgun";
								class AmmoC
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.88999999},
										1
									};
									right[]=
									{
										{0.64999998,0.88999999},
										1
									};
									down[]=
									{
										{0.61000001,0.93000001},
										1
									};
								};
							};
						};
					};
				};

				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
			};
		};
	};
	class CUP_MH60L_Dap_4x_Dynamic_Base: CUP_Uh60_Base {
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class MFD
				{
					class Kimi_HMD_Weapons
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Turret_Tape_Symbol
							{
								type="group";
								condition="1-user2";
								class Turret_Tape_Triangle
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0,0},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											}
										}
									};
								};
								class Turret_Tape_Square
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.02},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.02},
												1
											}
										}
									};
								};
							};
							class Gun_Cross
							{
								condition="mgun";
								type="group";
								class GUN_X
								{
									type="line";
									width=9;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											{0,-0.050000001},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,-0.015},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0,0.015},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,0.050000001},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{-0.050000001,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{-0.015,0},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0.015,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{0.050000001,0},
											1
										}
									};
								};
							};
							class Gunner_AIM
							{
								type="group";
								condition="1-mgun";
								class CPG_X
								{
									type="line";
									width=6;
									points[]=
									{

										{
											"TurretAimToView",
											1,
											{0,-0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,-0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.047499999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.047499999,0},
											1
										}
									};
								};
							};
							class TargetACQ
							{
								type="group";
								condition="1";
								class ACQgun
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0049999999,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0049999999,0},
											1
										}
									};
								};
							};
							class TargetACQ_AGM
							{
								condition="ATmissile-missilelocked";
								type="group";
								class ACQbox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.0049999999},
											1
										}
									};
								};
							};
							class TargetACQ_AAM
							{
								condition="AAmissile-missilelocked";
								type="group";
								class Circle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										}
									};
								};
							};
							class AAM_Lock
							{
								condition="(missilelocked*AAmissile)";
								type="group";
								class LockCircle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										}
									};
								};
							};
							class AGM_Lock
							{
								condition="(missilelocked*ATmissile)";
								type="group";
								class LockBox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_P
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={-1};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_C
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Units_Text_Imperial
							{
								type="group";
								condition="user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="I";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};
							class Units_Text_Metric
							{
								type="group";
								condition="1-user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="M";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};

							class WYPT_Group
							{
							type="group";
							condition="WPvalid";

								class WYPT_Fly_2_Cue
								{
									type="line";
									width=3;
									points[]=
									{

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},
										{},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										}
									};
								};

							class WYPT_Block
							{
								type="group";
								condition="speed - (6*1.852/3.6)+1.94384";
								class WYPT_Text
								{
									type="text";
									source="static";
									text="W";
									align="left";
									scale=1;
									pos[]=
									{
										{0.029999999,0.75},
										1
									};
									right[]=
									{
										{0.07,0.75},
										1
									};
									down[]=
									{
										{0.029999999,0.79000002},
										1
									};
								};
								class WYPT_Index
								{
									type="text";
									source="WPIndex";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.039999999,0.75},
										1
									};
									right[]=
									{
										{0.079999998,0.75},
										1
									};
									down[]=
									{
										{0.039999999,0.79000002},
										1
									};
								};
								class WYPT_Distance
								{
									type="text";
									source="WPDist";
									sourceScale=0.001;
									sourceprecision=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.12,0.75},
										1
									};
									right[]=
									{
										{0.16,0.75},
										1
									};
									down[]=
									{
										{0.12,0.79000002},
										1
									};
								};
								class WYPT_KM
								{
									type="text";
									source="static";
									text="KM";
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.75},
										1
									};
									right[]=
									{
										{0.25999999,0.75},
										1
									};
									down[]=
									{
										{0.22,0.79000002},
										1
									};
								};
								class Ground_Speed
								{
									type="text";
									source="Speed";
									sourceScale=1.94384;
									align="center";
									scale=1;
									pos[]=
									{
										{0.029999999,0.79000002},
										1
									};
									right[]=
									{
										{0.07,0.79000002},
										1
									};
									down[]=
									{
										{0.029999999,0.82999998},
										1
									};
								};
								class WYPT_TTG_6
								{
									type="group";
									condition="(6*1.852/3.6) - speed";
									class TTG_6
									{
										type="text";
										source="WPDist";
										sourceScale="1/(6*1.852/3.6)";
										align="right";
										scale=1;
										pos[]=
										{
											{0.13,0.79000002},
											1
										};
										right[]=
										{
											{0.17,0.79000002},
											1
										};
										down[]=
										{
											{0.13,0.82999998},
											1
										};
									};
								};
								class WYPT_TTG_10
								{
									type="group";
									condition="speed- ((10-6)*1.852/3.6)+1";
									class TTG_10
									{
										type="group";
										condition="(10*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(10*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_20
								{
									type="group";
									condition="speed- ((20-10)*1.852/3.6)+1";
									class TTG_20
									{
										type="group";
										condition="(20*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(20*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_30
								{
									type="group";
									condition="speed- ((30-10)*1.852/3.6)+1";
									class TTG_30
									{
										type="group";
										condition="(30*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(30*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_40
								{
									type="group";
									condition="speed- ((40-10)*1.852/3.6)+1";
									class TTG_40
									{
										type="group";
										condition="(40*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(40*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_50
								{
									type="group";
									condition="speed- ((50-10)*1.852/3.6)+1";
									class TTG_50
									{
										type="group";
										condition="(50*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(50*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_60
								{
									type="group";
									condition="speed- ((60-10)*1.852/3.6)+1";
									class TTG_60
									{
										type="group";
										condition="(60*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(60*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_70
								{
									type="group";
									condition="speed- ((70-10)*1.852/3.6)+1";
									class TTG_70
									{
										type="group";
										condition="(70*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(70*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_80
								{
									type="group";
									condition="speed- ((80-10)*1.852/3.6)+1";
									class TTG_80
									{
										type="group";
										condition="(80*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(80*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_90
								{
									type="group";
									condition="speed- ((90-10)*1.852/3.6)+1";
									class TTG_90
									{
										type="group";
										condition="(90*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(90*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_100
								{
									type="group";
									condition="speed- ((100-10)*1.852/3.6)+1";
									class TTG_100
									{
										type="group";
										condition="(100*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(100*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_110
								{
									type="group";
									condition="speed- ((110-10)*1.852/3.6)+1";
									class TTG_110
									{
										type="group";
										condition="(110*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(110*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_120
								{
									type="group";
									condition="speed- ((120-10)*1.852/3.6)+1";
									class TTG_120
									{
										type="group";
										condition="(120*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(120*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_130
								{
									type="group";
									condition="speed- ((130-10)*1.852/3.6)+1";
									class TTG_130
									{
										type="group";
										condition="(130*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(130*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_140
								{
									type="group";
									condition="speed- ((140-10)*1.852/3.6)+1";
									class TTG_140
									{
										type="group";
										condition="(140*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(140*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_150
								{
									type="group";
									condition="speed- ((150-10)*1.852/3.6)+1";
									class TTG_150
									{
										type="group";
										condition="(150*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(150*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_160
								{
									type="group";
									condition="speed- ((160-10)*1.852/3.6)+1";
									class TTG_160
									{
										type="group";
										condition="(160*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(160*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_170
								{
									type="group";
									condition="speed- ((170-10)*1.852/3.6)+1";
									class TTG_170
									{
										type="group";
										condition="(170*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(170*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_180
								{
									type="group";
									condition="speed- ((180-10)*1.852/3.6)+1";
									class TTG_180
									{
										type="group";
										condition="(180*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(180*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_190
								{
									type="group";
									condition="speed- ((190-10)*1.852/3.6)+1";
									class TTG_190
									{
										type="group";
										condition="(190*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(190*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_200
								{
									type="group";
									condition="speed- ((200-10)*1.852/3.6)+1";
									class TTG_200
									{
										type="group";
										condition="(200*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(200*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_210
								{
									type="group";
									condition="speed- ((210-10)*1.852/3.6)+1";
									class TTG_210
									{
										type="group";
										condition="(210*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(210*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_220
								{
									type="group";
									condition="speed- ((220-10)*1.852/3.6)+1";
									class TTG_220
									{
										type="group";
										condition="(220*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(220*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_230
								{
									type="group";
									condition="speed- ((230-10)*1.852/3.6)+1";
									class TTG_230
									{
										type="group";
										condition="(230*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(230*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_240
								{
									type="group";
									condition="speed- ((240-10)*1.852/3.6)+1";
									class TTG_240
									{
										type="group";
										condition="(240*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(240*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_250
								{
									type="group";
									condition="speed- ((250-10)*1.852/3.6)+1";
									class TTG_250
									{
										type="group";
										condition="(250*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(250*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_260
								{
									type="group";
									condition="speed- ((260-10)*1.852/3.6)+1";
									class TTG_260
									{
										type="group";
										condition="(260*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(260*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_270
								{
									type="group";
									condition="speed- ((270-10)*1.852/3.6)+1";
									class TTG_270
									{
										type="group";
										condition="(270*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(270*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_280
								{
									type="group";
									condition="speed- ((280-10)*1.852/3.6)+1";
									class TTG_280
									{
										type="group";
										condition="(280*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(280*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_290
								{
									type="group";
									condition="speed- ((290-10)*1.852/3.6)+1";
									class TTG_290
									{
										type="group";
										condition="(290*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(290*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_300
								{
									type="group";
									condition="speed- ((300-10)*1.852/3.6)+1";
									class TTG_300
									{
										type="group";
										condition="(300*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(300*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
							};
							};
							class Heading_Indexer
							{
								type="line";
								width=7;
								points[]=
								{

									{

										{
											"0.5",
											"0.128 + 0.03"
										},
										1
									},

									{
										{0.5,0.12800001},
										1
									}
								};
							};
							class HeadingScale_LEFT
							{
								clipTL[]={0,0};
								clipBR[]={0.44999999,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_RIGHT
							{
								clipTL[]={0.55000001,0};
								clipBR[]={1,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_BOTTOM
							{
								clipTL[]=
								{
									0.44999999,
									"0.02 + 0.085"
								};
								clipBR[]=
								{
									"0.45 + 0.10",
									1
								};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class WYPT_indexer
							{
								type="group";
								condition="WPvalid";
								class WYPT_tape
								{
									type="line";
									width=4;
									points[]=
									{

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{-0.0099999998,0.015},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0,0},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0.0099999998,0.015},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Laser_Toggle_On
							{
								type="group";
								condition="laseron";
								class Laser_On
								{
									type="text";
									text="LRFD ON";
									source="static";
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.82999998},
										1
									};
									right[]=
									{
										{0.64999998,0.82999998},
										1
									};
									down[]=
									{
										{0.61000001,0.87},
										1
									};
								};
							};
							class Static_HAD_BOX
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},
									{},

									{

										{
											"0.5-0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5-0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											"0.5+0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5+0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9-0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9+0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9+0.032"
										},
										1
									}
								};
							};
							class Missile_limits
							{
								type="group";
								condition="missile";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gun_limits
							{
								type="group";
								condition="mgun";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gunner_Aim_Box
							{
								type="line";
								width=2;
								points[]=
								{

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									}
								};
							};
							class AGM_TOF
							{
								condition="ATmissile*missilelocked";
								type="group";
								class TOFtext
								{
									type="text";
									align="right";
									source="static";
									text="TOF=";
									scale=1;
									pos[]=
									{
										{0.61000001,0.92000002},
										1
									};
									right[]=
									{
										{0.64999998,0.92000002},
										1
									};
									down[]=
									{
										{0.61000001,0.95999998},
										1
									};
								};
								class TOFnumber
								{
									type="text";
									source="targetDist";
									sourcescale=0.0024999999;
									align="right";
									scale=1;
									pos[]=
									{
										{0.69,0.92000002},
										1
									};
									right[]=
									{
										{0.73000002,0.92000002},
										1
									};
									down[]=
									{
										{0.69,0.95999998},
										1
									};
								};
							};
							class Range_group
							{
								type="group";
								condition="targetDist";
								class RangeText
								{
									type="text";
									source="static";
									text="R";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.86000001},
										1
									};
									right[]=
									{
										{0.34,0.86000001},
										1
									};
									down[]=
									{
										{0.30000001,0.89999998},
										1
									};
								};
								class RangeNumber
								{
									type="text";
									source="targetDist";
									sourceprecision=2;
									sourceScale=0.001;
									align="left";
									scale=1;
									pos[]=
									{
										{0.37,0.86000001},
										1
									};
									right[]=
									{
										{0.41,0.86000001},
										1
									};
									down[]=
									{
										{0.37,0.89999998},
										1
									};
								};
							};
							class ACQ_TADS_Source
							{
								type="group";
								condition="1-activeSensorsOn";
								class ACQ_TADS
								{
									type="text";
									source="static";
									text="TADS";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRG_Source
							{
								type="group";
								condition="activeSensorsOn-AAmissile";
								class ACQ_FCRG
								{
									type="text";
									source="static";
									text="FCR/G";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRA_Source
							{
								type="group";
								condition="(activeSensorsOn*AAmissile)";
								class ACQ_FCRA
								{
									type="text";
									source="static";
									text="FCR/A";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
						};
					};
					class Kimi_HMD_Radar
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Radar_Contacts
							{
								condition="activeSensorsOn";
								class Radar_Contact_Boxes
								{
									width=2;
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]=
									{
										"0.5+0.2165",
										"0.5+0.2165"
									};
									points[]=
									{

										{
											{-0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,-0.0049999999},
											1
										}
									};
								};
							};
						};
					};
					class AirplaneHUD
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
						};
					};
					class MFD_Pilot_10
					{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0.25,1,0.25};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.491429,0.452766},
											1
										},

										{
											{0.495,0.452766},
											1
										},

										{
											{0.495,0.457802},
											1
										},

										{
											{0.491429,0.457802},
											1
										},

										{
											{0.491429,0.452766},
											1
										},
										{},

										{
											{0.499286,0.45578799},
											1
										},

										{
											{0.57714301,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.46283901},
											1
										},

										{
											{0.49285701,0.55752701},
											1
										},
										{},

										{
											{0.48857099,0.45578799},
											1
										},

										{
											{0.41,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.35404801},
											1
										},

										{
											{0.49285701,0.446722},
											1
										},
										{},

										{
											{0.61000001,0.29965201},
											1
										},

										{
											{0.64285702,0.29965201},
											1
										},

										{
											{0.64285702,0.342967},
											1
										},
										{},

										{
											{0.64285702,0.57565898},
											1
										},

										{
											{0.64285702,0.619982},
											1
										},

										{
											{0.61071402,0.619982},
											1
										},
										{},

										{
											{0.374286,0.619982},
											1
										},

										{
											{0.341429,0.619982},
											1
										},

										{
											{0.341429,0.57565898},
											1
										},
										{},

										{
											{0.374286,0.29965201},
											1
										},

										{
											{0.341429,0.29965201},
											1
										},

										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="impactDistance";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_8
					{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
					};
					class MFD_Pilot_9
					{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11: MFD_Pilot_10
					{
						topLeft="MFD_11_TL";
						topRight="MFD_11_TR";
						bottomLeft="MFD_11_BL";
						turret[]={0};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class BlackBackgroundGroup
							{
								color[]={0,0,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{
												{0,0.1},
												1
											},

											{
												{1,0.1},
												1
											},

											{
												{1,1},
												1
											},

											{
												{0,1},
												1
											}
										}
									};
								};
							};
							class ReticleGroup
							{
								color[]={0,0.12,0};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.43000001,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.73239303},
											1
										},

										{
											{0.62199998,0.73239303},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.616,0.48273501},
											1
										},

										{
											{0.616,0.29794899},
											1
										},

										{
											{0.59200001,0.29794899},
											1
										},

										{
											{0.55800003,0.286154},
											1
										},

										{
											{0.55800003,0.27239299},
											1
										},

										{
											{0.5,0.27239299},
											1
										},

										{
											{0.5,0.286154},
											1
										},

										{
											{0.46799999,0.29794899},
											1
										},

										{
											{0.44600001,0.29794899},
											1
										},

										{
											{0.44600001,0.48273501},
											1
										},

										{
											{0.43000001,0.49059799},
											1
										},
										{},

										{
											{0.46000001,0.60000002},
											1
										},

										{
											{0.60000002,0.60000002},
											1
										},

										{
											{0.60000002,0.72000003},
											1
										},

										{
											{0.46000001,0.72000003},
											1
										},

										{
											{0.46000001,0.60000002},
											1
										},
										{},

										{
											{0.039999999,0.80000001},
											1
										},

										{
											{0.23999999,0.80000001},
											1
										},

										{
											{0.23999999,0.86000001},
											1
										},

										{
											{0.039999999,0.86000001},
											1
										},

										{
											{0.039999999,0.80000001},
											1
										},
										{},

										{
											{-0.059999999,0.82999998},
											1
										},

										{
											{0.039999999,0.82999998},
											1
										},
										{},

										{
											{0.039999999,0.93000001},
											1
										},

										{
											{0.23999999,0.93000001},
											1
										},

										{
											{0.23999999,0.99000001},
											1
										},

										{
											{0.039999999,0.99000001},
											1
										},

										{
											{0.039999999,0.93000001},
											1
										},
										{},

										{
											{-0.059999999,0.95999998},
											1
										},

										{
											{0.039999999,0.95999998},
											1
										},
										{},

										{
											{0.27000001,0.86000001},
											1
										},

										{
											{0.82999998,0.86000001},
											1
										},

										{
											{0.82999998,0.98000002},
											1
										},

										{
											{0.27000001,0.98000002},
											1
										},

										{
											{0.27000001,0.86000001},
											1
										},
										{},

										{
											{0.23,0.18000001},
											1
										},

										{
											{0.37,0.18000001},
											1
										},

										{
											{0.37,0.25999999},
											1
										},

										{
											{0.23,0.25999999},
											1
										},

										{
											{0.23,0.18000001},
											1
										},
										{},

										{
											{0.69999999,0.18000001},
											1
										},

										{
											{0.83999997,0.18000001},
											1
										},

										{
											{0.83999997,0.25999999},
											1
										},

										{
											{0.69999999,0.25999999},
											1
										},

										{
											{0.69999999,0.18000001},
											1
										},
										{},

										{
											{0.23999999,0.28999999},
											1
										},

										{
											{0.36000001,0.28999999},
											1
										},

										{
											{0.36000001,0.37},
											1
										},

										{
											{0.23999999,0.37},
											1
										},

										{
											{0.23999999,0.28999999},
											1
										},
										{},

										{
											{0.70999998,0.28999999},
											1
										},

										{
											{0.82999998,0.28999999},
											1
										},

										{
											{0.82999998,0.37},
											1
										},

										{
											{0.70999998,0.37},
											1
										},

										{
											{0.70999998,0.28999999},
											1
										}
									};
								};
								class SightSelect1
								{
									type="text";
									source="static";
									text="SIGHT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.28,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.222
										},
										1
									};
								};
								class SightSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.28,0.227},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.26199999
										},
										1
									};
								};
								class AcqSelect1
								{
									type="text";
									source="static";
									text="ACQ";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.86000001,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.222
										},
										1
									};
								};
								class AcqSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.86000001,0.227},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.26199999
										},
										1
									};
								};
								class LSTSelect1
								{
									type="text";
									source="static";
									text="LST";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.34,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.33199999
										},
										1
									};
								};
								class LSTSelect2
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.34,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.37200001
										},
										1
									};
								};
								class LRFDSelect1
								{
									type="text";
									source="static";
									text="LRFD";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.81,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.33199999
										},
										1
									};
								};
								class LRFDSelect2
								{
									type="text";
									source="static";
									text="B";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.81,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.37200001
										},
										1
									};
								};
								class PilotText
								{
									type="text";
									source="static";
									text="PILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.815
										},
										1
									};
									right[]=
									{
										{0.090000004,0.815},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.85000002
										},
										1
									};
								};
								class CopilotText
								{
									type="text";
									source="static";
									text="COPILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.94499999
										},
										1
									};
									right[]=
									{
										{0.090000004,0.94499999},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.98000002
										},
										1
									};
								};
								class PylonText6
								{
									type="text";
									source="static";
									text="#6";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.25999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.58499998
										},
										1
									};
								};
								class PylonText5
								{
									type="text";
									source="static";
									text="#5";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.34999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText4
								{
									type="text";
									source="static";
									text="#4";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.44,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText3
								{
									type="text";
									source="static";
									text="#3";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.69999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText2
								{
									type="text";
									source="static";
									text="#2";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.79000002,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText1
								{
									type="text";
									source="static";
									text="#1";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.88,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.58499998
										},
										1
									};
								};
								class CurrentWeaponText
								{
									type="text";
									source="static";
									text="CURRENT WEAPON";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.55000001,0.81999999},
										1
									};
									right[]=
									{
										{0.58999997,0.81999999},
										1
									};
									down[]=
									{
										{0.55000001,0.85500002},
										1
									};
								};
								class Weapons
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.87},
										1
									};
									right[]=
									{
										{0.58999997,0.87},
										1
									};
									down[]=
									{
										{0.55000001,0.90499997},
										1
									};
								};
								class Ammo
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.92000002},
										1
									};
									right[]=
									{
										{0.58999997,0.92000002},
										1
									};
									down[]=
									{
										{0.55000001,0.95499998},
										1
									};
								};
							};
							class MGun
							{
								class Default
								{
									condition="ammo0 > 0";
									color[]={0,0.12,0};
									class Shape
									{
										type="line";
										width=4;
										points[]=
										{

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.458,0.38641},
												1
											},

											{
												{0.458,0.44931599},
												1
											},

											{
												{0.60000002,0.44931599},
												1
											},

											{
												{0.60000002,0.38641},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},
											{},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.50199997,0.32547},
												1
											},

											{
												{0.52200001,0.32547},
												1
											},

											{
												{0.52200001,0.284188},
												1
											},

											{
												{0.54000002,0.284188},
												1
											},

											{
												{0.54000002,0.327436},
												1
											},

											{
												{0.55599999,0.327436},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											}
										};
									};
									class Ammo
									{
										type="text";
										source="ammo";
										sourceIndex=0;
										sourceScale=1;
										sourceLength=4;
										align="center";
										scale=1;
										pos[]=
										{
											{0.52999997,0.41},
											1
										};
										right[]=
										{
											{0.56999999,0.41},
											1
										};
										down[]=
										{
											{0.52999997,0.44499999},
											1
										};
									};
								};
								class Selected: Default
								{
									condition="(mgun +  (ammo0 min 1))/2";
									color[]={0.99000001,0.94,0.58999997};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
									};
								};
								class Empty: Default
								{
									condition="ammo0 <= 0";
									color[]={1,0,0,1};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
										source="static";
										text="EMPTY";
									};
								};
							};
							class Pylon1
							{
								type="pylonicon";
								pos[]=
								{
									{0.81999999,0.5},
									1
								};
								pylon=1;
								name="Heli_Attack_01";
							};
							class Pylon2: Pylon1
							{
								pos[]=
								{
									{0.73000002,0.5},
									1
								};
								pylon=2;
							};
							class Pylon3: Pylon1
							{
								pos[]=
								{
									{0.63999999,0.5},
									1
								};
								pylon=3;
							};
							class Pylon4: Pylon1
							{
								pos[]=
								{
									{0.36000001,0.5},
									1
								};
								pylon=4;
							};
							class Pylon5: Pylon1
							{
								pos[]=
								{
									{0.27000001,0.5},
									1
								};
								pylon=5;
							};
							class Pylon6: Pylon1
							{
								pos[]=
								{
									{0.18000001,0.5},
									1
								};
								pylon=6;
							};
							class ArmBackground
							{
								color[]={0.19,0.039999999,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{

												{
													"0.0+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.1+0.14"
												},
												1
											},

											{

												{
													"0.0+0.48",
													"0.1+0.14"
												},
												1
											}
										}
									};
								};
							};
							class BlackText
							{
								color[]={0.15000001,0.0099999998,0};
								class CMText
								{
									type="text";
									source="static";
									text="ARM";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.52999997,0.17},
										1
									};
									right[]=
									{
										{0.56999999,0.17},
										1
									};
									down[]=
									{
										{0.52999997,0.205},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11_CM: MFD_Pilot_11
					{
						turret[]={-1};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class CMText
							{
								type="text";
								source="static";
								text="CM";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.52999997,0.61000001},
									1
								};
								right[]=
								{
									{0.56999999,0.61000001},
									1
								};
								down[]=
								{
									{0.52999997,0.64499998},
									1
								};
							};
							class CMAmmo
							{
								type="text";
								source="cmammo";
								sourceScale=1;
								sourceLength=3;
								align="center";
								scale=1;
								pos[]=
								{
									{0.52999997,0.66000003},
									1
								};
								right[]=
								{
									{0.56999999,0.66000003},
									1
								};
								down[]=
								{
									{0.52999997,0.69499999},
									1
								};
							};
						};
					};
					class Kimi_HMD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Aiming_X_Static
							{
								type="line";
								width=5;
								points[]=
								{

									{
										{0.5,0.47999999},
										1
									},

									{
										{0.5,0.44999999},
										1
									},
									{},

									{
										{0.5,0.51999998},
										1
									},

									{
										{0.5,0.55000001},
										1
									},
									{},

									{
										{0.47999999,0.5},
										1
									},

									{
										{0.44999999,0.5},
										1
									},
									{},

									{
										{0.51999998,0.5},
										1
									},

									{
										{0.55000001,0.5},
										1
									}
								};
							};
							class Clock_Text
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.11,0.175},
									1
								};
								right[]=
								{
									{0.15000001,0.175},
									1
								};
								down[]=
								{
									{0.11,0.215},
									1
								};
							};
							class WYPT_Group
							{
								type="group";
								condition="WPvalid";
								class WYPT_Block
								{
									type="group";
									condition="speed - (6*1.852/3.6)+1.94384";
									class WYPT_Fly_2_Cue
									{
										type="line";
										width=3;
										points[]=
										{

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},
											{},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0,-0.029999999},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											}
										};
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class SpeedNumber_Imperial
							{
								type="group";
								condition="user1";
								class Speed_Imperial
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=1.94384;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class SpeedNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Speed_Metric
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=3.5999999;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class AltNumber_Imperial
							{
								type="group";
								condition="user1";
								class Alt_Imperial
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=3.2808399;
									sourceOffset=-6;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class AltNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Alt_Metric
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=1;
									sourceOffset=-2;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class Static_HAD_BOX_CPG_Add
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5-0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9+0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9+0.032"
										},
										1
									}
								};
							};
							class WeaponName
							{
								type="group";
								condition="1-mgun";
								class weaponN
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class WeaponName_Gun
							{
								type="group";
								condition="mgun";
								class weaponG
								{
									type="text";
									align="right";
									source="static";
									text="CGUN";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class AmmoCount
							{
								type="group";
								condition="rocket+bomb+missile+mgun";
								class AmmoC
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.88999999},
										1
									};
									right[]=
									{
										{0.64999998,0.88999999},
										1
									};
									down[]=
									{
										{0.61000001,0.93000001},
										1
									};
								};
							};
						};
					};
				};

				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
			};
		};
	};
	class CUP_UH60S_Dap_4x_Dynamic_Base: CUP_Uh60_Base {
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class MFD
				{
					class Kimi_HMD_Weapons
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Turret_Tape_Symbol
							{
								type="group";
								condition="1-user2";
								class Turret_Tape_Triangle
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0,0},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											}
										}
									};
								};
								class Turret_Tape_Square
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.02},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.02},
												1
											}
										}
									};
								};
							};
							class Gun_Cross
							{
								condition="mgun";
								type="group";
								class GUN_X
								{
									type="line";
									width=9;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											{0,-0.050000001},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,-0.015},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0,0.015},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,0.050000001},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{-0.050000001,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{-0.015,0},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0.015,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{0.050000001,0},
											1
										}
									};
								};
							};
							class Gunner_AIM
							{
								type="group";
								condition="1-mgun";
								class CPG_X
								{
									type="line";
									width=6;
									points[]=
									{

										{
											"TurretAimToView",
											1,
											{0,-0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,-0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.047499999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.047499999,0},
											1
										}
									};
								};
							};
							class TargetACQ
							{
								type="group";
								condition="1";
								class ACQgun
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0049999999,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0049999999,0},
											1
										}
									};
								};
							};
							class TargetACQ_AGM
							{
								condition="ATmissile-missilelocked";
								type="group";
								class ACQbox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.0049999999},
											1
										}
									};
								};
							};
							class TargetACQ_AAM
							{
								condition="AAmissile-missilelocked";
								type="group";
								class Circle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										}
									};
								};
							};
							class AAM_Lock
							{
								condition="(missilelocked*AAmissile)";
								type="group";
								class LockCircle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										}
									};
								};
							};
							class AGM_Lock
							{
								condition="(missilelocked*ATmissile)";
								type="group";
								class LockBox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_P
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={-1};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_C
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Units_Text_Imperial
							{
								type="group";
								condition="user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="I";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};
							class Units_Text_Metric
							{
								type="group";
								condition="1-user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="M";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};

							class WYPT_Group
							{
							type="group";
							condition="WPvalid";

								class WYPT_Fly_2_Cue
								{
									type="line";
									width=3;
									points[]=
									{

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},
										{},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										}
									};
								};

							class WYPT_Block
							{
								type="group";
								condition="speed - (6*1.852/3.6)+1.94384";
								class WYPT_Text
								{
									type="text";
									source="static";
									text="W";
									align="left";
									scale=1;
									pos[]=
									{
										{0.029999999,0.75},
										1
									};
									right[]=
									{
										{0.07,0.75},
										1
									};
									down[]=
									{
										{0.029999999,0.79000002},
										1
									};
								};
								class WYPT_Index
								{
									type="text";
									source="WPIndex";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.039999999,0.75},
										1
									};
									right[]=
									{
										{0.079999998,0.75},
										1
									};
									down[]=
									{
										{0.039999999,0.79000002},
										1
									};
								};
								class WYPT_Distance
								{
									type="text";
									source="WPDist";
									sourceScale=0.001;
									sourceprecision=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.12,0.75},
										1
									};
									right[]=
									{
										{0.16,0.75},
										1
									};
									down[]=
									{
										{0.12,0.79000002},
										1
									};
								};
								class WYPT_KM
								{
									type="text";
									source="static";
									text="KM";
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.75},
										1
									};
									right[]=
									{
										{0.25999999,0.75},
										1
									};
									down[]=
									{
										{0.22,0.79000002},
										1
									};
								};
								class Ground_Speed
								{
									type="text";
									source="Speed";
									sourceScale=1.94384;
									align="center";
									scale=1;
									pos[]=
									{
										{0.029999999,0.79000002},
										1
									};
									right[]=
									{
										{0.07,0.79000002},
										1
									};
									down[]=
									{
										{0.029999999,0.82999998},
										1
									};
								};
								class WYPT_TTG_6
								{
									type="group";
									condition="(6*1.852/3.6) - speed";
									class TTG_6
									{
										type="text";
										source="WPDist";
										sourceScale="1/(6*1.852/3.6)";
										align="right";
										scale=1;
										pos[]=
										{
											{0.13,0.79000002},
											1
										};
										right[]=
										{
											{0.17,0.79000002},
											1
										};
										down[]=
										{
											{0.13,0.82999998},
											1
										};
									};
								};
								class WYPT_TTG_10
								{
									type="group";
									condition="speed- ((10-6)*1.852/3.6)+1";
									class TTG_10
									{
										type="group";
										condition="(10*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(10*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_20
								{
									type="group";
									condition="speed- ((20-10)*1.852/3.6)+1";
									class TTG_20
									{
										type="group";
										condition="(20*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(20*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_30
								{
									type="group";
									condition="speed- ((30-10)*1.852/3.6)+1";
									class TTG_30
									{
										type="group";
										condition="(30*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(30*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_40
								{
									type="group";
									condition="speed- ((40-10)*1.852/3.6)+1";
									class TTG_40
									{
										type="group";
										condition="(40*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(40*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_50
								{
									type="group";
									condition="speed- ((50-10)*1.852/3.6)+1";
									class TTG_50
									{
										type="group";
										condition="(50*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(50*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_60
								{
									type="group";
									condition="speed- ((60-10)*1.852/3.6)+1";
									class TTG_60
									{
										type="group";
										condition="(60*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(60*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_70
								{
									type="group";
									condition="speed- ((70-10)*1.852/3.6)+1";
									class TTG_70
									{
										type="group";
										condition="(70*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(70*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_80
								{
									type="group";
									condition="speed- ((80-10)*1.852/3.6)+1";
									class TTG_80
									{
										type="group";
										condition="(80*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(80*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_90
								{
									type="group";
									condition="speed- ((90-10)*1.852/3.6)+1";
									class TTG_90
									{
										type="group";
										condition="(90*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(90*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_100
								{
									type="group";
									condition="speed- ((100-10)*1.852/3.6)+1";
									class TTG_100
									{
										type="group";
										condition="(100*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(100*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_110
								{
									type="group";
									condition="speed- ((110-10)*1.852/3.6)+1";
									class TTG_110
									{
										type="group";
										condition="(110*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(110*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_120
								{
									type="group";
									condition="speed- ((120-10)*1.852/3.6)+1";
									class TTG_120
									{
										type="group";
										condition="(120*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(120*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_130
								{
									type="group";
									condition="speed- ((130-10)*1.852/3.6)+1";
									class TTG_130
									{
										type="group";
										condition="(130*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(130*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_140
								{
									type="group";
									condition="speed- ((140-10)*1.852/3.6)+1";
									class TTG_140
									{
										type="group";
										condition="(140*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(140*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_150
								{
									type="group";
									condition="speed- ((150-10)*1.852/3.6)+1";
									class TTG_150
									{
										type="group";
										condition="(150*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(150*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_160
								{
									type="group";
									condition="speed- ((160-10)*1.852/3.6)+1";
									class TTG_160
									{
										type="group";
										condition="(160*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(160*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_170
								{
									type="group";
									condition="speed- ((170-10)*1.852/3.6)+1";
									class TTG_170
									{
										type="group";
										condition="(170*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(170*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_180
								{
									type="group";
									condition="speed- ((180-10)*1.852/3.6)+1";
									class TTG_180
									{
										type="group";
										condition="(180*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(180*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_190
								{
									type="group";
									condition="speed- ((190-10)*1.852/3.6)+1";
									class TTG_190
									{
										type="group";
										condition="(190*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(190*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_200
								{
									type="group";
									condition="speed- ((200-10)*1.852/3.6)+1";
									class TTG_200
									{
										type="group";
										condition="(200*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(200*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_210
								{
									type="group";
									condition="speed- ((210-10)*1.852/3.6)+1";
									class TTG_210
									{
										type="group";
										condition="(210*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(210*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_220
								{
									type="group";
									condition="speed- ((220-10)*1.852/3.6)+1";
									class TTG_220
									{
										type="group";
										condition="(220*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(220*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_230
								{
									type="group";
									condition="speed- ((230-10)*1.852/3.6)+1";
									class TTG_230
									{
										type="group";
										condition="(230*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(230*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_240
								{
									type="group";
									condition="speed- ((240-10)*1.852/3.6)+1";
									class TTG_240
									{
										type="group";
										condition="(240*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(240*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_250
								{
									type="group";
									condition="speed- ((250-10)*1.852/3.6)+1";
									class TTG_250
									{
										type="group";
										condition="(250*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(250*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_260
								{
									type="group";
									condition="speed- ((260-10)*1.852/3.6)+1";
									class TTG_260
									{
										type="group";
										condition="(260*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(260*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_270
								{
									type="group";
									condition="speed- ((270-10)*1.852/3.6)+1";
									class TTG_270
									{
										type="group";
										condition="(270*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(270*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_280
								{
									type="group";
									condition="speed- ((280-10)*1.852/3.6)+1";
									class TTG_280
									{
										type="group";
										condition="(280*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(280*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_290
								{
									type="group";
									condition="speed- ((290-10)*1.852/3.6)+1";
									class TTG_290
									{
										type="group";
										condition="(290*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(290*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_300
								{
									type="group";
									condition="speed- ((300-10)*1.852/3.6)+1";
									class TTG_300
									{
										type="group";
										condition="(300*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(300*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
							};
							};
							class Heading_Indexer
							{
								type="line";
								width=7;
								points[]=
								{

									{

										{
											"0.5",
											"0.128 + 0.03"
										},
										1
									},

									{
										{0.5,0.12800001},
										1
									}
								};
							};
							class HeadingScale_LEFT
							{
								clipTL[]={0,0};
								clipBR[]={0.44999999,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_RIGHT
							{
								clipTL[]={0.55000001,0};
								clipBR[]={1,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_BOTTOM
							{
								clipTL[]=
								{
									0.44999999,
									"0.02 + 0.085"
								};
								clipBR[]=
								{
									"0.45 + 0.10",
									1
								};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class WYPT_indexer
							{
								type="group";
								condition="WPvalid";
								class WYPT_tape
								{
									type="line";
									width=4;
									points[]=
									{

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{-0.0099999998,0.015},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0,0},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0.0099999998,0.015},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Laser_Toggle_On
							{
								type="group";
								condition="laseron";
								class Laser_On
								{
									type="text";
									text="LRFD ON";
									source="static";
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.82999998},
										1
									};
									right[]=
									{
										{0.64999998,0.82999998},
										1
									};
									down[]=
									{
										{0.61000001,0.87},
										1
									};
								};
							};
							class Static_HAD_BOX
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},
									{},

									{

										{
											"0.5-0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5-0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											"0.5+0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5+0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9-0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9+0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9+0.032"
										},
										1
									}
								};
							};
							class Missile_limits
							{
								type="group";
								condition="missile";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gun_limits
							{
								type="group";
								condition="mgun";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gunner_Aim_Box
							{
								type="line";
								width=2;
								points[]=
								{

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									}
								};
							};
							class AGM_TOF
							{
								condition="ATmissile*missilelocked";
								type="group";
								class TOFtext
								{
									type="text";
									align="right";
									source="static";
									text="TOF=";
									scale=1;
									pos[]=
									{
										{0.61000001,0.92000002},
										1
									};
									right[]=
									{
										{0.64999998,0.92000002},
										1
									};
									down[]=
									{
										{0.61000001,0.95999998},
										1
									};
								};
								class TOFnumber
								{
									type="text";
									source="targetDist";
									sourcescale=0.0024999999;
									align="right";
									scale=1;
									pos[]=
									{
										{0.69,0.92000002},
										1
									};
									right[]=
									{
										{0.73000002,0.92000002},
										1
									};
									down[]=
									{
										{0.69,0.95999998},
										1
									};
								};
							};
							class Range_group
							{
								type="group";
								condition="targetDist";
								class RangeText
								{
									type="text";
									source="static";
									text="R";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.86000001},
										1
									};
									right[]=
									{
										{0.34,0.86000001},
										1
									};
									down[]=
									{
										{0.30000001,0.89999998},
										1
									};
								};
								class RangeNumber
								{
									type="text";
									source="targetDist";
									sourceprecision=2;
									sourceScale=0.001;
									align="left";
									scale=1;
									pos[]=
									{
										{0.37,0.86000001},
										1
									};
									right[]=
									{
										{0.41,0.86000001},
										1
									};
									down[]=
									{
										{0.37,0.89999998},
										1
									};
								};
							};
							class ACQ_TADS_Source
							{
								type="group";
								condition="1-activeSensorsOn";
								class ACQ_TADS
								{
									type="text";
									source="static";
									text="TADS";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRG_Source
							{
								type="group";
								condition="activeSensorsOn-AAmissile";
								class ACQ_FCRG
								{
									type="text";
									source="static";
									text="FCR/G";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRA_Source
							{
								type="group";
								condition="(activeSensorsOn*AAmissile)";
								class ACQ_FCRA
								{
									type="text";
									source="static";
									text="FCR/A";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
						};
					};
					class Kimi_HMD_Radar
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Radar_Contacts
							{
								condition="activeSensorsOn";
								class Radar_Contact_Boxes
								{
									width=2;
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]=
									{
										"0.5+0.2165",
										"0.5+0.2165"
									};
									points[]=
									{

										{
											{-0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,-0.0049999999},
											1
										}
									};
								};
							};
						};
					};
					class AirplaneHUD
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
						};
					};
					class MFD_Pilot_10
					{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0.25,1,0.25};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.491429,0.452766},
											1
										},

										{
											{0.495,0.452766},
											1
										},

										{
											{0.495,0.457802},
											1
										},

										{
											{0.491429,0.457802},
											1
										},

										{
											{0.491429,0.452766},
											1
										},
										{},

										{
											{0.499286,0.45578799},
											1
										},

										{
											{0.57714301,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.46283901},
											1
										},

										{
											{0.49285701,0.55752701},
											1
										},
										{},

										{
											{0.48857099,0.45578799},
											1
										},

										{
											{0.41,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.35404801},
											1
										},

										{
											{0.49285701,0.446722},
											1
										},
										{},

										{
											{0.61000001,0.29965201},
											1
										},

										{
											{0.64285702,0.29965201},
											1
										},

										{
											{0.64285702,0.342967},
											1
										},
										{},

										{
											{0.64285702,0.57565898},
											1
										},

										{
											{0.64285702,0.619982},
											1
										},

										{
											{0.61071402,0.619982},
											1
										},
										{},

										{
											{0.374286,0.619982},
											1
										},

										{
											{0.341429,0.619982},
											1
										},

										{
											{0.341429,0.57565898},
											1
										},
										{},

										{
											{0.374286,0.29965201},
											1
										},

										{
											{0.341429,0.29965201},
											1
										},

										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="impactDistance";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_8
					{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
					};
					class MFD_Pilot_9
					{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11: MFD_Pilot_10
					{
						topLeft="MFD_11_TL";
						topRight="MFD_11_TR";
						bottomLeft="MFD_11_BL";
						turret[]={0};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class BlackBackgroundGroup
							{
								color[]={0,0,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{
												{0,0.1},
												1
											},

											{
												{1,0.1},
												1
											},

											{
												{1,1},
												1
											},

											{
												{0,1},
												1
											}
										}
									};
								};
							};
							class ReticleGroup
							{
								color[]={0,0.12,0};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.43000001,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.73239303},
											1
										},

										{
											{0.62199998,0.73239303},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.616,0.48273501},
											1
										},

										{
											{0.616,0.29794899},
											1
										},

										{
											{0.59200001,0.29794899},
											1
										},

										{
											{0.55800003,0.286154},
											1
										},

										{
											{0.55800003,0.27239299},
											1
										},

										{
											{0.5,0.27239299},
											1
										},

										{
											{0.5,0.286154},
											1
										},

										{
											{0.46799999,0.29794899},
											1
										},

										{
											{0.44600001,0.29794899},
											1
										},

										{
											{0.44600001,0.48273501},
											1
										},

										{
											{0.43000001,0.49059799},
											1
										},
										{},

										{
											{0.46000001,0.60000002},
											1
										},

										{
											{0.60000002,0.60000002},
											1
										},

										{
											{0.60000002,0.72000003},
											1
										},

										{
											{0.46000001,0.72000003},
											1
										},

										{
											{0.46000001,0.60000002},
											1
										},
										{},

										{
											{0.039999999,0.80000001},
											1
										},

										{
											{0.23999999,0.80000001},
											1
										},

										{
											{0.23999999,0.86000001},
											1
										},

										{
											{0.039999999,0.86000001},
											1
										},

										{
											{0.039999999,0.80000001},
											1
										},
										{},

										{
											{-0.059999999,0.82999998},
											1
										},

										{
											{0.039999999,0.82999998},
											1
										},
										{},

										{
											{0.039999999,0.93000001},
											1
										},

										{
											{0.23999999,0.93000001},
											1
										},

										{
											{0.23999999,0.99000001},
											1
										},

										{
											{0.039999999,0.99000001},
											1
										},

										{
											{0.039999999,0.93000001},
											1
										},
										{},

										{
											{-0.059999999,0.95999998},
											1
										},

										{
											{0.039999999,0.95999998},
											1
										},
										{},

										{
											{0.27000001,0.86000001},
											1
										},

										{
											{0.82999998,0.86000001},
											1
										},

										{
											{0.82999998,0.98000002},
											1
										},

										{
											{0.27000001,0.98000002},
											1
										},

										{
											{0.27000001,0.86000001},
											1
										},
										{},

										{
											{0.23,0.18000001},
											1
										},

										{
											{0.37,0.18000001},
											1
										},

										{
											{0.37,0.25999999},
											1
										},

										{
											{0.23,0.25999999},
											1
										},

										{
											{0.23,0.18000001},
											1
										},
										{},

										{
											{0.69999999,0.18000001},
											1
										},

										{
											{0.83999997,0.18000001},
											1
										},

										{
											{0.83999997,0.25999999},
											1
										},

										{
											{0.69999999,0.25999999},
											1
										},

										{
											{0.69999999,0.18000001},
											1
										},
										{},

										{
											{0.23999999,0.28999999},
											1
										},

										{
											{0.36000001,0.28999999},
											1
										},

										{
											{0.36000001,0.37},
											1
										},

										{
											{0.23999999,0.37},
											1
										},

										{
											{0.23999999,0.28999999},
											1
										},
										{},

										{
											{0.70999998,0.28999999},
											1
										},

										{
											{0.82999998,0.28999999},
											1
										},

										{
											{0.82999998,0.37},
											1
										},

										{
											{0.70999998,0.37},
											1
										},

										{
											{0.70999998,0.28999999},
											1
										}
									};
								};
								class SightSelect1
								{
									type="text";
									source="static";
									text="SIGHT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.28,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.222
										},
										1
									};
								};
								class SightSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.28,0.227},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.26199999
										},
										1
									};
								};
								class AcqSelect1
								{
									type="text";
									source="static";
									text="ACQ";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.86000001,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.222
										},
										1
									};
								};
								class AcqSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.86000001,0.227},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.26199999
										},
										1
									};
								};
								class LSTSelect1
								{
									type="text";
									source="static";
									text="LST";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.34,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.33199999
										},
										1
									};
								};
								class LSTSelect2
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.34,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.37200001
										},
										1
									};
								};
								class LRFDSelect1
								{
									type="text";
									source="static";
									text="LRFD";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.81,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.33199999
										},
										1
									};
								};
								class LRFDSelect2
								{
									type="text";
									source="static";
									text="B";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.81,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.37200001
										},
										1
									};
								};
								class PilotText
								{
									type="text";
									source="static";
									text="PILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.815
										},
										1
									};
									right[]=
									{
										{0.090000004,0.815},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.85000002
										},
										1
									};
								};
								class CopilotText
								{
									type="text";
									source="static";
									text="COPILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.94499999
										},
										1
									};
									right[]=
									{
										{0.090000004,0.94499999},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.98000002
										},
										1
									};
								};
								class PylonText6
								{
									type="text";
									source="static";
									text="#6";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.25999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.58499998
										},
										1
									};
								};
								class PylonText5
								{
									type="text";
									source="static";
									text="#5";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.34999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText4
								{
									type="text";
									source="static";
									text="#4";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.44,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText3
								{
									type="text";
									source="static";
									text="#3";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.69999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText2
								{
									type="text";
									source="static";
									text="#2";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.79000002,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText1
								{
									type="text";
									source="static";
									text="#1";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.88,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.58499998
										},
										1
									};
								};
								class CurrentWeaponText
								{
									type="text";
									source="static";
									text="CURRENT WEAPON";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.55000001,0.81999999},
										1
									};
									right[]=
									{
										{0.58999997,0.81999999},
										1
									};
									down[]=
									{
										{0.55000001,0.85500002},
										1
									};
								};
								class Weapons
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.87},
										1
									};
									right[]=
									{
										{0.58999997,0.87},
										1
									};
									down[]=
									{
										{0.55000001,0.90499997},
										1
									};
								};
								class Ammo
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.92000002},
										1
									};
									right[]=
									{
										{0.58999997,0.92000002},
										1
									};
									down[]=
									{
										{0.55000001,0.95499998},
										1
									};
								};
							};
							class MGun
							{
								class Default
								{
									condition="ammo0 > 0";
									color[]={0,0.12,0};
									class Shape
									{
										type="line";
										width=4;
										points[]=
										{

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.458,0.38641},
												1
											},

											{
												{0.458,0.44931599},
												1
											},

											{
												{0.60000002,0.44931599},
												1
											},

											{
												{0.60000002,0.38641},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},
											{},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.50199997,0.32547},
												1
											},

											{
												{0.52200001,0.32547},
												1
											},

											{
												{0.52200001,0.284188},
												1
											},

											{
												{0.54000002,0.284188},
												1
											},

											{
												{0.54000002,0.327436},
												1
											},

											{
												{0.55599999,0.327436},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											}
										};
									};
									class Ammo
									{
										type="text";
										source="ammo";
										sourceIndex=0;
										sourceScale=1;
										sourceLength=4;
										align="center";
										scale=1;
										pos[]=
										{
											{0.52999997,0.41},
											1
										};
										right[]=
										{
											{0.56999999,0.41},
											1
										};
										down[]=
										{
											{0.52999997,0.44499999},
											1
										};
									};
								};
								class Selected: Default
								{
									condition="(mgun +  (ammo0 min 1))/2";
									color[]={0.99000001,0.94,0.58999997};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
									};
								};
								class Empty: Default
								{
									condition="ammo0 <= 0";
									color[]={1,0,0,1};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
										source="static";
										text="EMPTY";
									};
								};
							};
							class Pylon1
							{
								type="pylonicon";
								pos[]=
								{
									{0.81999999,0.5},
									1
								};
								pylon=1;
								name="Heli_Attack_01";
							};
							class Pylon2: Pylon1
							{
								pos[]=
								{
									{0.73000002,0.5},
									1
								};
								pylon=2;
							};
							class Pylon3: Pylon1
							{
								pos[]=
								{
									{0.63999999,0.5},
									1
								};
								pylon=3;
							};
							class Pylon4: Pylon1
							{
								pos[]=
								{
									{0.36000001,0.5},
									1
								};
								pylon=4;
							};
							class Pylon5: Pylon1
							{
								pos[]=
								{
									{0.27000001,0.5},
									1
								};
								pylon=5;
							};
							class Pylon6: Pylon1
							{
								pos[]=
								{
									{0.18000001,0.5},
									1
								};
								pylon=6;
							};
							class ArmBackground
							{
								color[]={0.19,0.039999999,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{

												{
													"0.0+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.1+0.14"
												},
												1
											},

											{

												{
													"0.0+0.48",
													"0.1+0.14"
												},
												1
											}
										}
									};
								};
							};
							class BlackText
							{
								color[]={0.15000001,0.0099999998,0};
								class CMText
								{
									type="text";
									source="static";
									text="ARM";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.52999997,0.17},
										1
									};
									right[]=
									{
										{0.56999999,0.17},
										1
									};
									down[]=
									{
										{0.52999997,0.205},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11_CM: MFD_Pilot_11
					{
						turret[]={-1};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class CMText
							{
								type="text";
								source="static";
								text="CM";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.52999997,0.61000001},
									1
								};
								right[]=
								{
									{0.56999999,0.61000001},
									1
								};
								down[]=
								{
									{0.52999997,0.64499998},
									1
								};
							};
							class CMAmmo
							{
								type="text";
								source="cmammo";
								sourceScale=1;
								sourceLength=3;
								align="center";
								scale=1;
								pos[]=
								{
									{0.52999997,0.66000003},
									1
								};
								right[]=
								{
									{0.56999999,0.66000003},
									1
								};
								down[]=
								{
									{0.52999997,0.69499999},
									1
								};
							};
						};
					};
					class Kimi_HMD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Aiming_X_Static
							{
								type="line";
								width=5;
								points[]=
								{

									{
										{0.5,0.47999999},
										1
									},

									{
										{0.5,0.44999999},
										1
									},
									{},

									{
										{0.5,0.51999998},
										1
									},

									{
										{0.5,0.55000001},
										1
									},
									{},

									{
										{0.47999999,0.5},
										1
									},

									{
										{0.44999999,0.5},
										1
									},
									{},

									{
										{0.51999998,0.5},
										1
									},

									{
										{0.55000001,0.5},
										1
									}
								};
							};
							class Clock_Text
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.11,0.175},
									1
								};
								right[]=
								{
									{0.15000001,0.175},
									1
								};
								down[]=
								{
									{0.11,0.215},
									1
								};
							};
							class WYPT_Group
							{
								type="group";
								condition="WPvalid";
								class WYPT_Block
								{
									type="group";
									condition="speed - (6*1.852/3.6)+1.94384";
									class WYPT_Fly_2_Cue
									{
										type="line";
										width=3;
										points[]=
										{

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},
											{},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0,-0.029999999},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											}
										};
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class SpeedNumber_Imperial
							{
								type="group";
								condition="user1";
								class Speed_Imperial
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=1.94384;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class SpeedNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Speed_Metric
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=3.5999999;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class AltNumber_Imperial
							{
								type="group";
								condition="user1";
								class Alt_Imperial
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=3.2808399;
									sourceOffset=-6;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class AltNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Alt_Metric
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=1;
									sourceOffset=-2;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class Static_HAD_BOX_CPG_Add
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5-0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9+0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9+0.032"
										},
										1
									}
								};
							};
							class WeaponName
							{
								type="group";
								condition="1-mgun";
								class weaponN
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class WeaponName_Gun
							{
								type="group";
								condition="mgun";
								class weaponG
								{
									type="text";
									align="right";
									source="static";
									text="CGUN";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class AmmoCount
							{
								type="group";
								condition="rocket+bomb+missile+mgun";
								class AmmoC
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.88999999},
										1
									};
									right[]=
									{
										{0.64999998,0.88999999},
										1
									};
									down[]=
									{
										{0.61000001,0.93000001},
										1
									};
								};
							};
						};
					};
				};

				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
			};
		};
	};
	class CUP_UH60S_Dap_2x_Dynamic_Base: CUP_Uh60_Base {
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class MFD
				{
					class Kimi_HMD_Weapons
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Turret_Tape_Symbol
							{
								type="group";
								condition="1-user2";
								class Turret_Tape_Triangle
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0,0},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											}
										}
									};
								};
								class Turret_Tape_Square
								{
									type="polygon";
									points[]=
									{

										{

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.0099999998},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{0.0070000002,0.02},
												1
											},

											{
												"Turret_Tape_Bone",
												1,
												"Tape_Limit",
												1,
												{-0.0070000002,0.02},
												1
											}
										}
									};
								};
							};
							class Gun_Cross
							{
								condition="mgun";
								type="group";
								class GUN_X
								{
									type="line";
									width=9;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											{0,-0.050000001},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,-0.015},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0,0.015},
											1
										},

										{
											"CCIP_2_VIEW",
											{0,0.050000001},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{-0.050000001,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{-0.015,0},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											{0.015,0},
											1
										},

										{
											"CCIP_2_VIEW",
											{0.050000001,0},
											1
										}
									};
								};
							};
							class Gunner_AIM
							{
								type="group";
								condition="1-mgun";
								class CPG_X
								{
									type="line";
									width=6;
									points[]=
									{

										{
											"TurretAimToView",
											1,
											{0,-0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,-0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,-0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.015},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0,0.032499999},
											1
										},

										{
											"TurretAimToView",
											1,
											{0,0.047499999},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{-0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{-0.047499999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.015,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.029999999,0},
											1
										},
										{},

										{
											"TurretAimToView",
											1,
											{0.032499999,0},
											1
										},

										{
											"TurretAimToView",
											1,
											{0.047499999,0},
											1
										}
									};
								};
							};
							class TargetACQ
							{
								type="group";
								condition="1";
								class ACQgun
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.059999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.055},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.050000001},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.045000002},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.039999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.035},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.029999999},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.025},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.02},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.015},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0099999998},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{-0.0049999999,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.059999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.055,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.050000001,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.045000002,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.039999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.035,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.029999999,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.025,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.02,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.015,0},
											1
										},
										{},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0099999998,0},
											1
										},

										{
											"Target2View",
											1,
											"Limit0109",
											1,
											{0.0049999999,0},
											1
										}
									};
								};
							};
							class TargetACQ_AGM
							{
								condition="ATmissile-missilelocked";
								type="group";
								class ACQbox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,-0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{-0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.064999998,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.059999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.050000001,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.045000002,0.075000003},
											1
										},

										{
											"Target2View",
											{0.035,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.029999999,0.075000003},
											1
										},

										{
											"Target2View",
											{0.02,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.015,0.075000003},
											1
										},

										{
											"Target2View",
											{0.0049999999,0.075000003},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{0.075000003,0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,-0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.0049999999},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.064999998},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.059999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.050000001},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.045000002},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.035},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.029999999},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.02},
											1
										},
										{},

										{
											"Target2View",
											{-0.075000003,0.015},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.0049999999},
											1
										}
									};
								};
							};
							class TargetACQ_AAM
							{
								condition="AAmissile-missilelocked";
								type="group";
								class Circle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},
										{},

										{
											"Target2View",
											1,

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",
											1,

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										}
									};
								};
							};
							class AAM_Lock
							{
								condition="(missilelocked*AAmissile)";
								type="group";
								class LockCircle
								{
									type="line";
									width=2.5;
									points[]=
									{

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"0.248559 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 8.333",
												"0 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 8.333",
												"-0.0431499 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 8.333",
												"-0.0850072 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 8.333",
												"-0.12428 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 8.333",
												"-0.159774 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 8.333",
												"-0.190396 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 8.333",
												"-0.215252 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 8.333",
												"-0.233571 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 8.333",
												"-0.244781 / 8.333"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 8.333",
												"-0.248559 / 8.333"
											},
											1
										},
										{},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"0.248559 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.25 / 4.167",
												"0 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2462 / 4.167",
												"-0.0431499 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.234925 / 4.167",
												"-0.0850072 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.2165 / 4.167",
												"-0.12428 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1915 / 4.167",
												"-0.159774 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.1607 / 4.167",
												"-0.190396 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.125 / 4.167",
												"-0.215252 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0855 / 4.167",
												"-0.233571 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"-0.0434 / 4.167",
												"-0.244781 / 4.167"
											},
											1
										},

										{
											"Target2View",

											{
												"0 / 4.167",
												"-0.248559 / 4.167"
											},
											1
										}
									};
								};
							};
							class AGM_Lock
							{
								condition="(missilelocked*ATmissile)";
								type="group";
								class LockBox
								{
									type="line";
									width=2;
									points[]=
									{

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,-0.075000003},
											1
										},

										{
											"Target2View",
											{0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,0.075000003},
											1
										},

										{
											"Target2View",
											{-0.075000003,-0.075000003},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_P
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={-1};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_RKT_C
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={0};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Rocket_I_LLW
							{
								condition="rocket";
								type="group";
								class RocketSight
								{
									type="line";
									width=5.5;
									points[]=
									{

										{
											"CCIP_2_VIEW",
											1,
											{0.022,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,-0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{0,0.029999999},
											1
										},
										{},

										{
											"CCIP_2_VIEW",
											1,
											{0.022,0.029999999},
											1
										},

										{
											"CCIP_2_VIEW",
											1,
											{-0.022,0.029999999},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Units_Text_Imperial
							{
								type="group";
								condition="user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="I";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};
							class Units_Text_Metric
							{
								type="group";
								condition="1-user1";
								class Units_Metric
								{
									type="text";
									source="static";
									text="M";
									align="right";
									scale=1;
									pos[]=
									{
										{0.94999999,0.1},
										1
									};
									right[]=
									{
										{0.98000002,0.1},
										1
									};
									down[]=
									{
										{0.94999999,0.13},
										1
									};
								};
							};

							class WYPT_Group
							{
							type="group";
							condition="WPvalid";

								class WYPT_Fly_2_Cue
								{
									type="line";
									width=3;
									points[]=
									{

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"0.02 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.02 * 0.075",
												"0 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.01732 * 0.075",
												"-0.0099999998 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"-0.0099999998 * 0.075",
												"-0.01732 * 0.075"
											},
											1
										},

										{
											"WYPT_2_VIEW",
											1,

											{
												"0 * 0.075",
												"-0.02 * 0.075"
											},
											1
										},
										{},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0,-0.029999999},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.029999999,0},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.017999999,0.015},
											1
										},

										{
											"WYPT_2_VIEW",
											1,
											{-0.029999999,0},
											1
										}
									};
								};

							class WYPT_Block
							{
								type="group";
								condition="speed - (6*1.852/3.6)+1.94384";
								class WYPT_Text
								{
									type="text";
									source="static";
									text="W";
									align="left";
									scale=1;
									pos[]=
									{
										{0.029999999,0.75},
										1
									};
									right[]=
									{
										{0.07,0.75},
										1
									};
									down[]=
									{
										{0.029999999,0.79000002},
										1
									};
								};
								class WYPT_Index
								{
									type="text";
									source="WPIndex";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.039999999,0.75},
										1
									};
									right[]=
									{
										{0.079999998,0.75},
										1
									};
									down[]=
									{
										{0.039999999,0.79000002},
										1
									};
								};
								class WYPT_Distance
								{
									type="text";
									source="WPDist";
									sourceScale=0.001;
									sourceprecision=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.12,0.75},
										1
									};
									right[]=
									{
										{0.16,0.75},
										1
									};
									down[]=
									{
										{0.12,0.79000002},
										1
									};
								};
								class WYPT_KM
								{
									type="text";
									source="static";
									text="KM";
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.75},
										1
									};
									right[]=
									{
										{0.25999999,0.75},
										1
									};
									down[]=
									{
										{0.22,0.79000002},
										1
									};
								};
								class Ground_Speed
								{
									type="text";
									source="Speed";
									sourceScale=1.94384;
									align="center";
									scale=1;
									pos[]=
									{
										{0.029999999,0.79000002},
										1
									};
									right[]=
									{
										{0.07,0.79000002},
										1
									};
									down[]=
									{
										{0.029999999,0.82999998},
										1
									};
								};
								class WYPT_TTG_6
								{
									type="group";
									condition="(6*1.852/3.6) - speed";
									class TTG_6
									{
										type="text";
										source="WPDist";
										sourceScale="1/(6*1.852/3.6)";
										align="right";
										scale=1;
										pos[]=
										{
											{0.13,0.79000002},
											1
										};
										right[]=
										{
											{0.17,0.79000002},
											1
										};
										down[]=
										{
											{0.13,0.82999998},
											1
										};
									};
								};
								class WYPT_TTG_10
								{
									type="group";
									condition="speed- ((10-6)*1.852/3.6)+1";
									class TTG_10
									{
										type="group";
										condition="(10*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(10*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_20
								{
									type="group";
									condition="speed- ((20-10)*1.852/3.6)+1";
									class TTG_20
									{
										type="group";
										condition="(20*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(20*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_30
								{
									type="group";
									condition="speed- ((30-10)*1.852/3.6)+1";
									class TTG_30
									{
										type="group";
										condition="(30*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(30*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_40
								{
									type="group";
									condition="speed- ((40-10)*1.852/3.6)+1";
									class TTG_40
									{
										type="group";
										condition="(40*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(40*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_50
								{
									type="group";
									condition="speed- ((50-10)*1.852/3.6)+1";
									class TTG_50
									{
										type="group";
										condition="(50*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(50*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_60
								{
									type="group";
									condition="speed- ((60-10)*1.852/3.6)+1";
									class TTG_60
									{
										type="group";
										condition="(60*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(60*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_70
								{
									type="group";
									condition="speed- ((70-10)*1.852/3.6)+1";
									class TTG_70
									{
										type="group";
										condition="(70*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(70*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_80
								{
									type="group";
									condition="speed- ((80-10)*1.852/3.6)+1";
									class TTG_80
									{
										type="group";
										condition="(80*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(80*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_90
								{
									type="group";
									condition="speed- ((90-10)*1.852/3.6)+1";
									class TTG_90
									{
										type="group";
										condition="(90*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(90*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_100
								{
									type="group";
									condition="speed- ((100-10)*1.852/3.6)+1";
									class TTG_100
									{
										type="group";
										condition="(100*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(100*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_110
								{
									type="group";
									condition="speed- ((110-10)*1.852/3.6)+1";
									class TTG_110
									{
										type="group";
										condition="(110*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(110*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_120
								{
									type="group";
									condition="speed- ((120-10)*1.852/3.6)+1";
									class TTG_120
									{
										type="group";
										condition="(120*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(120*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_130
								{
									type="group";
									condition="speed- ((130-10)*1.852/3.6)+1";
									class TTG_130
									{
										type="group";
										condition="(130*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(130*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_140
								{
									type="group";
									condition="speed- ((140-10)*1.852/3.6)+1";
									class TTG_140
									{
										type="group";
										condition="(140*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(140*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_150
								{
									type="group";
									condition="speed- ((150-10)*1.852/3.6)+1";
									class TTG_150
									{
										type="group";
										condition="(150*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(150*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_160
								{
									type="group";
									condition="speed- ((160-10)*1.852/3.6)+1";
									class TTG_160
									{
										type="group";
										condition="(160*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(160*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_170
								{
									type="group";
									condition="speed- ((170-10)*1.852/3.6)+1";
									class TTG_170
									{
										type="group";
										condition="(170*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(170*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_180
								{
									type="group";
									condition="speed- ((180-10)*1.852/3.6)+1";
									class TTG_180
									{
										type="group";
										condition="(180*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(180*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_190
								{
									type="group";
									condition="speed- ((190-10)*1.852/3.6)+1";
									class TTG_190
									{
										type="group";
										condition="(190*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(190*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_200
								{
									type="group";
									condition="speed- ((200-10)*1.852/3.6)+1";
									class TTG_200
									{
										type="group";
										condition="(200*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(200*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_210
								{
									type="group";
									condition="speed- ((210-10)*1.852/3.6)+1";
									class TTG_210
									{
										type="group";
										condition="(210*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(210*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_220
								{
									type="group";
									condition="speed- ((220-10)*1.852/3.6)+1";
									class TTG_220
									{
										type="group";
										condition="(220*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(220*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_230
								{
									type="group";
									condition="speed- ((230-10)*1.852/3.6)+1";
									class TTG_230
									{
										type="group";
										condition="(230*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(230*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_240
								{
									type="group";
									condition="speed- ((240-10)*1.852/3.6)+1";
									class TTG_240
									{
										type="group";
										condition="(240*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(240*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_250
								{
									type="group";
									condition="speed- ((250-10)*1.852/3.6)+1";
									class TTG_250
									{
										type="group";
										condition="(250*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(250*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_260
								{
									type="group";
									condition="speed- ((260-10)*1.852/3.6)+1";
									class TTG_260
									{
										type="group";
										condition="(260*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(260*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_270
								{
									type="group";
									condition="speed- ((270-10)*1.852/3.6)+1";
									class TTG_270
									{
										type="group";
										condition="(270*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(270*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_280
								{
									type="group";
									condition="speed- ((280-10)*1.852/3.6)+1";
									class TTG_280
									{
										type="group";
										condition="(280*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(280*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_290
								{
									type="group";
									condition="speed- ((290-10)*1.852/3.6)+1";
									class TTG_290
									{
										type="group";
										condition="(290*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(290*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
								class WYPT_TTG_300
								{
									type="group";
									condition="speed- ((300-10)*1.852/3.6)+1";
									class TTG_300
									{
										type="group";
										condition="(300*1.852/3.6) - speed";
										class TTG
										{
											type="text";
											source="WPDist";
											sourceScale="1/(300*1.852/3.6)";
											align="right";
											scale=1;
											pos[]=
											{
												{0.13,0.79000002},
												1
											};
											right[]=
											{
												{0.17,0.79000002},
												1
											};
											down[]=
											{
												{0.13,0.82999998},
												1
											};
										};
									};
								};
							};
							};
							class Heading_Indexer
							{
								type="line";
								width=7;
								points[]=
								{

									{

										{
											"0.5",
											"0.128 + 0.03"
										},
										1
									},

									{
										{0.5,0.12800001},
										1
									}
								};
							};
							class HeadingScale_LEFT
							{
								clipTL[]={0,0};
								clipBR[]={0.44999999,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_RIGHT
							{
								clipTL[]={0.55000001,0};
								clipBR[]={1,1};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class HeadingScale_BOTTOM
							{
								clipTL[]=
								{
									0.44999999,
									"0.02 + 0.085"
								};
								clipBR[]=
								{
									"0.45 + 0.10",
									1
								};
								class Heading_group
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									NeverEatSeaWeed=1;
									width=4;
									top=0.2;
									center=0.5;
									bottom=0.80000001;
									lineXleft="0.03 + 0.085";
									lineYright="0.02 + 0.085";
									lineXleftMajor="0.04 + 0.085";
									lineYrightMajor="0.02 + 0.085";
									majorLineEach=3;
									numberEach=3;
									step=1;
									stepSize="0.03";
									align="center";
									scale=1;
									pos[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.000"
									};
									right[]=
									{
										"0.1975 + 0.040",
										"0.060 + 0.000"
									};
									down[]=
									{
										"0.1975 + 0.000",
										"0.060 + 0.040"
									};
								};
							};
							class WYPT_indexer
							{
								type="group";
								condition="WPvalid";
								class WYPT_tape
								{
									type="line";
									width=4;
									points[]=
									{

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{-0.0099999998,0.015},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0,0},
											1
										},

										{
											"WYPT_Tape_Bone",
											1,
											"Tape_Limit",
											1,
											{0.0099999998,0.015},
											1
										}
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_Common
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0";
							class Laser_Toggle_On
							{
								type="group";
								condition="laseron";
								class Laser_On
								{
									type="text";
									text="LRFD ON";
									source="static";
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.82999998},
										1
									};
									right[]=
									{
										{0.64999998,0.82999998},
										1
									};
									down[]=
									{
										{0.61000001,0.87},
										1
									};
								};
							};
							class Static_HAD_BOX
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9+0.04"
										},
										1
									},

									{

										{
											"0.5+0.1",
											"0.9-0.04"
										},
										1
									},

									{

										{
											"0.5-0.1",
											"0.9-0.04"
										},
										1
									},
									{},

									{

										{
											"0.5-0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5-0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											"0.5+0.1",
											"0.9-0.04+0.02667"
										},
										1
									},

									{

										{
											"0.5+0.092",
											"0.9-0.04+0.02667"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9-0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											0.5,
											"0.9+0.040"
										},
										1
									},

									{

										{
											0.5,
											"0.9+0.032"
										},
										1
									}
								};
							};
							class Missile_limits
							{
								type="group";
								condition="missile";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0167",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gun_limits
							{
								type="group";
								condition="mgun";
								class Missile_lines
								{
									type="line";
									width=1;
									points[]=
									{

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5-0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00000"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*2"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*3"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*4"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*5"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*6"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*7"
											},
											1
										},
										{},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*8"
											},
											1
										},

										{

											{
												"0.5+0.0717",
												"0.9-0.04+0.00889*9"
											},
											1
										}
									};
								};
							};
							class Gunner_Aim_Box
							{
								type="line";
								width=2;
								points[]=
								{

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.90799999},
										1
									},

									{
										"GunnerAim",
										{0.51499999,0.89200002},
										1
									},

									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									}
								};
							};
							class AGM_TOF
							{
								condition="ATmissile*missilelocked";
								type="group";
								class TOFtext
								{
									type="text";
									align="right";
									source="static";
									text="TOF=";
									scale=1;
									pos[]=
									{
										{0.61000001,0.92000002},
										1
									};
									right[]=
									{
										{0.64999998,0.92000002},
										1
									};
									down[]=
									{
										{0.61000001,0.95999998},
										1
									};
								};
								class TOFnumber
								{
									type="text";
									source="targetDist";
									sourcescale=0.0024999999;
									align="right";
									scale=1;
									pos[]=
									{
										{0.69,0.92000002},
										1
									};
									right[]=
									{
										{0.73000002,0.92000002},
										1
									};
									down[]=
									{
										{0.69,0.95999998},
										1
									};
								};
							};
							class Range_group
							{
								type="group";
								condition="targetDist";
								class RangeText
								{
									type="text";
									source="static";
									text="R";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.86000001},
										1
									};
									right[]=
									{
										{0.34,0.86000001},
										1
									};
									down[]=
									{
										{0.30000001,0.89999998},
										1
									};
								};
								class RangeNumber
								{
									type="text";
									source="targetDist";
									sourceprecision=2;
									sourceScale=0.001;
									align="left";
									scale=1;
									pos[]=
									{
										{0.37,0.86000001},
										1
									};
									right[]=
									{
										{0.41,0.86000001},
										1
									};
									down[]=
									{
										{0.37,0.89999998},
										1
									};
								};
							};
							class ACQ_TADS_Source
							{
								type="group";
								condition="1-activeSensorsOn";
								class ACQ_TADS
								{
									type="text";
									source="static";
									text="TADS";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRG_Source
							{
								type="group";
								condition="activeSensorsOn-AAmissile";
								class ACQ_FCRG
								{
									type="text";
									source="static";
									text="FCR/G";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
							class ACQ_FCRA_Source
							{
								type="group";
								condition="(activeSensorsOn*AAmissile)";
								class ACQ_FCRA
								{
									type="text";
									source="static";
									text="FCR/A";
									align="right";
									scale=1;
									pos[]=
									{
										{0.30000001,0.88999999},
										1
									};
									right[]=
									{
										{0.34,0.88999999},
										1
									};
									down[]=
									{
										{0.30000001,0.93000001},
										1
									};
								};
							};
						};
					};
					class Kimi_HMD_Radar
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Radar_Contacts
							{
								condition="activeSensorsOn";
								class Radar_Contact_Boxes
								{
									width=2;
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]=
									{
										"0.5+0.2165",
										"0.5+0.2165"
									};
									points[]=
									{

										{
											{-0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,-0.0049999999},
											1
										},

										{
											{0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,0.0049999999},
											1
										},

										{
											{-0.0049999999,-0.0049999999},
											1
										}
									};
								};
							};
						};
					};
					class AirplaneHUD
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
						};
					};
					class MFD_Pilot_10
					{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0.25,1,0.25};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.491429,0.452766},
											1
										},

										{
											{0.495,0.452766},
											1
										},

										{
											{0.495,0.457802},
											1
										},

										{
											{0.491429,0.457802},
											1
										},

										{
											{0.491429,0.452766},
											1
										},
										{},

										{
											{0.499286,0.45578799},
											1
										},

										{
											{0.57714301,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.46283901},
											1
										},

										{
											{0.49285701,0.55752701},
											1
										},
										{},

										{
											{0.48857099,0.45578799},
											1
										},

										{
											{0.41,0.45578799},
											1
										},
										{},

										{
											{0.49285701,0.35404801},
											1
										},

										{
											{0.49285701,0.446722},
											1
										},
										{},

										{
											{0.61000001,0.29965201},
											1
										},

										{
											{0.64285702,0.29965201},
											1
										},

										{
											{0.64285702,0.342967},
											1
										},
										{},

										{
											{0.64285702,0.57565898},
											1
										},

										{
											{0.64285702,0.619982},
											1
										},

										{
											{0.61071402,0.619982},
											1
										},
										{},

										{
											{0.374286,0.619982},
											1
										},

										{
											{0.341429,0.619982},
											1
										},

										{
											{0.341429,0.57565898},
											1
										},
										{},

										{
											{0.374286,0.29965201},
											1
										},

										{
											{0.341429,0.29965201},
											1
										},

										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="impactDistance";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_8
					{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
					};
					class MFD_Pilot_9
					{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11: MFD_Pilot_10
					{
						topLeft="MFD_11_TL";
						topRight="MFD_11_TR";
						bottomLeft="MFD_11_BL";
						turret[]={0};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class BlackBackgroundGroup
							{
								color[]={0,0,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{
												{0,0.1},
												1
											},

											{
												{1,0.1},
												1
											},

											{
												{1,1},
												1
											},

											{
												{0,1},
												1
											}
										}
									};
								};
							};
							class ReticleGroup
							{
								color[]={0,0.12,0};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{

										{
											{0.43000001,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.49059799},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.164,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.630171},
											1
										},

										{
											{0.43799999,0.73239303},
											1
										},

										{
											{0.62199998,0.73239303},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.62199998,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.630171},
											1
										},

										{
											{0.898,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.63,0.49059799},
											1
										},

										{
											{0.616,0.48273501},
											1
										},

										{
											{0.616,0.29794899},
											1
										},

										{
											{0.59200001,0.29794899},
											1
										},

										{
											{0.55800003,0.286154},
											1
										},

										{
											{0.55800003,0.27239299},
											1
										},

										{
											{0.5,0.27239299},
											1
										},

										{
											{0.5,0.286154},
											1
										},

										{
											{0.46799999,0.29794899},
											1
										},

										{
											{0.44600001,0.29794899},
											1
										},

										{
											{0.44600001,0.48273501},
											1
										},

										{
											{0.43000001,0.49059799},
											1
										},
										{},

										{
											{0.46000001,0.60000002},
											1
										},

										{
											{0.60000002,0.60000002},
											1
										},

										{
											{0.60000002,0.72000003},
											1
										},

										{
											{0.46000001,0.72000003},
											1
										},

										{
											{0.46000001,0.60000002},
											1
										},
										{},

										{
											{0.039999999,0.80000001},
											1
										},

										{
											{0.23999999,0.80000001},
											1
										},

										{
											{0.23999999,0.86000001},
											1
										},

										{
											{0.039999999,0.86000001},
											1
										},

										{
											{0.039999999,0.80000001},
											1
										},
										{},

										{
											{-0.059999999,0.82999998},
											1
										},

										{
											{0.039999999,0.82999998},
											1
										},
										{},

										{
											{0.039999999,0.93000001},
											1
										},

										{
											{0.23999999,0.93000001},
											1
										},

										{
											{0.23999999,0.99000001},
											1
										},

										{
											{0.039999999,0.99000001},
											1
										},

										{
											{0.039999999,0.93000001},
											1
										},
										{},

										{
											{-0.059999999,0.95999998},
											1
										},

										{
											{0.039999999,0.95999998},
											1
										},
										{},

										{
											{0.27000001,0.86000001},
											1
										},

										{
											{0.82999998,0.86000001},
											1
										},

										{
											{0.82999998,0.98000002},
											1
										},

										{
											{0.27000001,0.98000002},
											1
										},

										{
											{0.27000001,0.86000001},
											1
										},
										{},

										{
											{0.23,0.18000001},
											1
										},

										{
											{0.37,0.18000001},
											1
										},

										{
											{0.37,0.25999999},
											1
										},

										{
											{0.23,0.25999999},
											1
										},

										{
											{0.23,0.18000001},
											1
										},
										{},

										{
											{0.69999999,0.18000001},
											1
										},

										{
											{0.83999997,0.18000001},
											1
										},

										{
											{0.83999997,0.25999999},
											1
										},

										{
											{0.69999999,0.25999999},
											1
										},

										{
											{0.69999999,0.18000001},
											1
										},
										{},

										{
											{0.23999999,0.28999999},
											1
										},

										{
											{0.36000001,0.28999999},
											1
										},

										{
											{0.36000001,0.37},
											1
										},

										{
											{0.23999999,0.37},
											1
										},

										{
											{0.23999999,0.28999999},
											1
										},
										{},

										{
											{0.70999998,0.28999999},
											1
										},

										{
											{0.82999998,0.28999999},
											1
										},

										{
											{0.82999998,0.37},
											1
										},

										{
											{0.70999998,0.37},
											1
										},

										{
											{0.70999998,0.28999999},
											1
										}
									};
								};
								class SightSelect1
								{
									type="text";
									source="static";
									text="SIGHT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.28,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.222
										},
										1
									};
								};
								class SightSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.28,0.227},
										1
									};
									down[]=
									{

										{
											"0.53-0.29",
											0.26199999
										},
										1
									};
								};
								class AcqSelect1
								{
									type="text";
									source="static";
									text="ACQ";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.86000001,0.18700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.222
										},
										1
									};
								};
								class AcqSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{

										{
											"0.53+0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.86000001,0.227},
										1
									};
									down[]=
									{

										{
											"0.53+0.29",
											0.26199999
										},
										1
									};
								};
								class LSTSelect1
								{
									type="text";
									source="static";
									text="LST";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.34,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.33199999
										},
										1
									};
								};
								class LSTSelect2
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.23",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.34,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53-0.23",
											0.37200001
										},
										1
									};
								};
								class LRFDSelect1
								{
									type="text";
									source="static";
									text="LRFD";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.81,0.29699999},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.33199999
										},
										1
									};
								};
								class LRFDSelect2
								{
									type="text";
									source="static";
									text="B";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.24",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.81,0.33700001},
										1
									};
									down[]=
									{

										{
											"0.53+0.24",
											0.37200001
										},
										1
									};
								};
								class PilotText
								{
									type="text";
									source="static";
									text="PILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.815
										},
										1
									};
									right[]=
									{
										{0.090000004,0.815},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.85000002
										},
										1
									};
								};
								class CopilotText
								{
									type="text";
									source="static";
									text="COPILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{

										{
											"0.53-0.48",
											0.94499999
										},
										1
									};
									right[]=
									{
										{0.090000004,0.94499999},
										1
									};
									down[]=
									{

										{
											"0.53-0.48",
											0.98000002
										},
										1
									};
								};
								class PylonText6
								{
									type="text";
									source="static";
									text="#6";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.25999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.00",
											0.58499998
										},
										1
									};
								};
								class PylonText5
								{
									type="text";
									source="static";
									text="#5";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.34999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText4
								{
									type="text";
									source="static";
									text="#4";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.44,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53-0.31 + 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText3
								{
									type="text";
									source="static";
									text="#3";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.69999999,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText2
								{
									type="text";
									source="static";
									text="#2";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.79000002,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText1
								{
									type="text";
									source="static";
									text="#1";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.88,0.55000001},
										1
									};
									down[]=
									{

										{
											"0.53+0.31 - 0.00",
											0.58499998
										},
										1
									};
								};
								class CurrentWeaponText
								{
									type="text";
									source="static";
									text="CURRENT WEAPON";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.55000001,0.81999999},
										1
									};
									right[]=
									{
										{0.58999997,0.81999999},
										1
									};
									down[]=
									{
										{0.55000001,0.85500002},
										1
									};
								};
								class Weapons
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.87},
										1
									};
									right[]=
									{
										{0.58999997,0.87},
										1
									};
									down[]=
									{
										{0.55000001,0.90499997},
										1
									};
								};
								class Ammo
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										{0.55000001,0.92000002},
										1
									};
									right[]=
									{
										{0.58999997,0.92000002},
										1
									};
									down[]=
									{
										{0.55000001,0.95499998},
										1
									};
								};
							};
							class MGun
							{
								class Default
								{
									condition="ammo0 > 0";
									color[]={0,0.12,0};
									class Shape
									{
										type="line";
										width=4;
										points[]=
										{

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.458,0.38641},
												1
											},

											{
												{0.458,0.44931599},
												1
											},

											{
												{0.60000002,0.44931599},
												1
											},

											{
												{0.60000002,0.38641},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},
											{},

											{
												{0.50199997,0.38641},
												1
											},

											{
												{0.50199997,0.32547},
												1
											},

											{
												{0.52200001,0.32547},
												1
											},

											{
												{0.52200001,0.284188},
												1
											},

											{
												{0.54000002,0.284188},
												1
											},

											{
												{0.54000002,0.327436},
												1
											},

											{
												{0.55599999,0.327436},
												1
											},

											{
												{0.55599999,0.38641},
												1
											},

											{
												{0.50199997,0.38641},
												1
											}
										};
									};
									class Ammo
									{
										type="text";
										source="ammo";
										sourceIndex=0;
										sourceScale=1;
										sourceLength=4;
										align="center";
										scale=1;
										pos[]=
										{
											{0.52999997,0.41},
											1
										};
										right[]=
										{
											{0.56999999,0.41},
											1
										};
										down[]=
										{
											{0.52999997,0.44499999},
											1
										};
									};
								};
								class Selected: Default
								{
									condition="(mgun +  (ammo0 min 1))/2";
									color[]={0.99000001,0.94,0.58999997};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
									};
								};
								class Empty: Default
								{
									condition="ammo0 <= 0";
									color[]={1,0,0,1};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
										source="static";
										text="EMPTY";
									};
								};
							};
							class Pylon1
							{
								type="pylonicon";
								pos[]=
								{
									{0.81999999,0.5},
									1
								};
								pylon=1;
								name="Heli_Attack_01";
							};
							class Pylon2: Pylon1
							{
								pos[]=
								{
									{0.73000002,0.5},
									1
								};
								pylon=2;
							};
							class Pylon3: Pylon1
							{
								pos[]=
								{
									{0.63999999,0.5},
									1
								};
								pylon=3;
							};
							class Pylon4: Pylon1
							{
								pos[]=
								{
									{0.36000001,0.5},
									1
								};
								pylon=4;
							};
							class Pylon5: Pylon1
							{
								pos[]=
								{
									{0.27000001,0.5},
									1
								};
								pylon=5;
							};
							class Pylon6: Pylon1
							{
								pos[]=
								{
									{0.18000001,0.5},
									1
								};
								pylon=6;
							};
							class ArmBackground
							{
								color[]={0.19,0.039999999,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{

										{

											{

												{
													"0.0+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.0+0.14"
												},
												1
											},

											{

												{
													"0.1+0.48",
													"0.1+0.14"
												},
												1
											},

											{

												{
													"0.0+0.48",
													"0.1+0.14"
												},
												1
											}
										}
									};
								};
							};
							class BlackText
							{
								color[]={0.15000001,0.0099999998,0};
								class CMText
								{
									type="text";
									source="static";
									text="ARM";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.52999997,0.17},
										1
									};
									right[]=
									{
										{0.56999999,0.17},
										1
									};
									down[]=
									{
										{0.52999997,0.205},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11_CM: MFD_Pilot_11
					{
						turret[]={-1};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class CMText
							{
								type="text";
								source="static";
								text="CM";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.52999997,0.61000001},
									1
								};
								right[]=
								{
									{0.56999999,0.61000001},
									1
								};
								down[]=
								{
									{0.52999997,0.64499998},
									1
								};
							};
							class CMAmmo
							{
								type="text";
								source="cmammo";
								sourceScale=1;
								sourceLength=3;
								align="center";
								scale=1;
								pos[]=
								{
									{0.52999997,0.66000003},
									1
								};
								right[]=
								{
									{0.56999999,0.66000003},
									1
								};
								down[]=
								{
									{0.52999997,0.69499999},
									1
								};
							};
						};
					};
					class Kimi_HMD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class Aiming_X_Static
							{
								type="line";
								width=5;
								points[]=
								{

									{
										{0.5,0.47999999},
										1
									},

									{
										{0.5,0.44999999},
										1
									},
									{},

									{
										{0.5,0.51999998},
										1
									},

									{
										{0.5,0.55000001},
										1
									},
									{},

									{
										{0.47999999,0.5},
										1
									},

									{
										{0.44999999,0.5},
										1
									},
									{},

									{
										{0.51999998,0.5},
										1
									},

									{
										{0.55000001,0.5},
										1
									}
								};
							};
							class Clock_Text
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.11,0.175},
									1
								};
								right[]=
								{
									{0.15000001,0.175},
									1
								};
								down[]=
								{
									{0.11,0.215},
									1
								};
							};
							class WYPT_Group
							{
								type="group";
								condition="WPvalid";
								class WYPT_Block
								{
									type="group";
									condition="speed - (6*1.852/3.6)+1.94384";
									class WYPT_Fly_2_Cue
									{
										type="line";
										width=3;
										points[]=
										{

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"0.02 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.02 * 0.075",
													"0 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.01732 * 0.075",
													"-0.0099999998 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"-0.0099999998 * 0.075",
													"-0.01732 * 0.075"
												},
												1
											},

											{
												"WYPT_2_VIEW",
												1,

												{
													"0 * 0.075",
													"-0.02 * 0.075"
												},
												1
											},
											{},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0,-0.029999999},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.029999999,0},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.017999999,0.015},
												1
											},

											{
												"WYPT_2_VIEW",
												1,
												{-0.029999999,0},
												1
											}
										};
									};
								};
							};
						};
					};
					class Kimi_HMD_HAD_CPG
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.212,0.76899999,0.204,0.2};
						enableParallax=0;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.039999999,0.039999999,0.1};
						helmetRight[]={0.079999998,0,0};
						helmetDown[]={0,-0.079999998,0};
						class Bones
						{
							class PlaneOrientation
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class ForwardVec
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.21600001,0.21600001};
							};
							class ForwardVec_Center
							{
								type="vector";
								source="forward";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class ForwardVecPNVS
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={-0.055,-0.055};
							};
							class VspeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1.9685;
								min=-20;
								max=20;
								minPos[]={0.93000001,0.2};
								maxPos[]={0.93000001,0.80000001};
							};
							class RadarAltitudeBone
							{
								type="linear";
								source="altitudeAGL";
								sourceOffset=-6;
								sourceScale=3.2808399;
								min=0;
								max=200;
								minPos[]={0.96499997,0.2};
								maxPos[]={0.96499997,0.80000001};
							};
							class WYPT_Tape_Bone
							{
								type="vector";
								source="wppoint";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
							};
							class Tape_Limit
							{
								type="limit";
								limits[]={0.2,0,0.80000001,1};
							};
							class Turret_Tape_Bone
							{
								type="vector";
								source="Turret";
								pos0[]={0.5,0.12800001};
								pos10[]=
								{
									"0.500 + 0.037",
									0.12800001
								};
								projection=1;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0071700001,-0.0099999998};
								projection=0;
							};
							class Gunner_HAD_Limit
							{
								type="limit";
								limits[]={0.40000001,0.86000001,0.60000002,0.94};
							};
							class Slip_Ball_X
							{
								type="vector";
								source="velocity";
								pos0[]={0.5,0.84299999};
								pos10[]={0.51499999,0.84299999};
							};
							class GforceX_Slip
							{
								type="linear";
								source="gmeterX";
								sourceScale=1;
								max=0.15000001;
								min=-0.15000001;
								minPos[]=
								{
									"0.5+0.1",
									"0.9-0.04-0.02"
								};
								maxPos[]=
								{
									"0.5-0.1",
									"0.9-0.04-0.02"
								};
							};
							class WeaponAim: ForwardVec_Center
							{
								source="weapon";
							};
							class TurretAimToView
							{
								type="vector";
								source="weapontoview";
								pos0[]={0.5,0.5};
								pos10[]=
								{
									"0.500 + 0.2165",
									"0.500 + 0.2165"
								};
							};
							class CCIP: ForwardVec_Center
							{
								source="impactpoint";
							};
							class CCIP_2_VIEW: CCIP
							{
								source="impactpointtoview";
							};
							class RocketAim: ForwardVec_Center
							{
								source="weapon";
							};
							class Target: ForwardVec_Center
							{
								source="target";
							};
							class Target2View: Target
							{
								source="targetToView";
							};
							class WYPT_2_VIEW: ForwardVec_Center
							{
								source="wppointtoview";
							};
							class Velocity: ForwardVec_Center
							{
								source="velocityToView";
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class Speed_X_Hover_P
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_X_Hover_N
							{
								type="vector";
								source="velocityToView";
								sourcescale="1";
								pos0[]={0,0};
								pos10[]={0.02,0.02};
							};
							class Speed_Z_Hover
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=20;
								min=-20;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class Speed_X_Transition
							{
								type="vector";
								source="velocity";
								pos0[]={0,0};
								pos10[]={0.02,0};
							};
							class Speed_Z_Transition
							{
								type="linear";
								source="speed";
								sourcescale="1.94384";
								max=60;
								min=-60;
								minPos[]={0.5,0.25};
								maxPos[]={0.5,0.75};
							};
							class GforceX_Hover
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.25,0};
								maxPos[]={-0.25,0};
							};
							class GforceZ_Hover
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.25};
								maxPos[]={0,0.25};
							};
							class GforceX_Transition
							{
								type="linear";
								source="gmeterX";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0.1,0};
								maxPos[]={-0.1,0};
							};
							class GforceZ_Transition
							{
								type="linear";
								source="gmeterZ";
								Sourcescale=1;
								max=7;
								min=-7;
								minPos[]={0,-0.1};
								maxPos[]={0,0.1};
							};
							class Level0_Transition
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.64999998,0.64999998};
								angle=0;
							};
							class Level0
							{
								type="horizon";
								pos0[]={0.5,0.5};
								pos10[]={0.77999997,0.77999997};
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
						};
						turret[]={};
						class Draw
						{
							color[]=
							{
								"user3",
								"user4",
								"user5"
							};
							alpha="user6";
							condition="on*user0-user2";
							class SpeedNumber_Imperial
							{
								type="group";
								condition="user1";
								class Speed_Imperial
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=1.94384;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class SpeedNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Speed_Metric
								{
									type="text";
									align="right";
									scale=1;
									source="speed";
									sourceScale=3.5999999;
									pos[]=
									{
										{0.37,0.79000002},
										1
									};
									right[]=
									{
										{0.41,0.79000002},
										1
									};
									down[]=
									{
										{0.37,0.82999998},
										1
									};
								};
							};
							class AltNumber_Imperial
							{
								type="group";
								condition="user1";
								class Alt_Imperial
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=3.2808399;
									sourceOffset=-6;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class AltNumber_Metric
							{
								type="group";
								condition="1-user1";
								class Alt_Metric
								{
									type="text";
									scale=1;
									align="right";
									source="altitudeAGL";
									sourceScale=1;
									sourceOffset=-2;
									pos[]=
									{
										{0.61000001,0.79000002},
										1
									};
									right[]=
									{
										{0.64999998,0.79000002},
										1
									};
									down[]=
									{
										{0.61000001,0.82999998},
										1
									};
								};
							};
							class Static_HAD_BOX_CPG_Add
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=2;
								points[]=
								{

									{

										{
											"0.5-0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9-0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9-0.032"
										},
										1
									},
									{},

									{

										{
											"0.5-0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5-0.075",
											"0.9+0.032"
										},
										1
									},
									{},

									{

										{
											"0.5+0.075",
											"0.9+0.040"
										},
										1
									},

									{

										{
											"0.5+0.075",
											"0.9+0.032"
										},
										1
									}
								};
							};
							class WeaponName
							{
								type="group";
								condition="1-mgun";
								class weaponN
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class WeaponName_Gun
							{
								type="group";
								condition="mgun";
								class weaponG
								{
									type="text";
									align="right";
									source="static";
									text="CGUN";
									scale=1;
									pos[]=
									{
										{0.61000001,0.86000001},
										1
									};
									right[]=
									{
										{0.64999998,0.86000001},
										1
									};
									down[]=
									{
										{0.61000001,0.89999998},
										1
									};
								};
							};
							class AmmoCount
							{
								type="group";
								condition="rocket+bomb+missile+mgun";
								class AmmoC
								{
									type="text";
									source="ammo";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.61000001,0.88999999},
										1
									};
									right[]=
									{
										{0.64999998,0.88999999},
										1
									};
									down[]=
									{
										{0.61000001,0.93000001},
										1
									};
								};
							};
						};
					};
				};

				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
			};
		};
	};
	class CUP_B_MH60L_DAP_4x_US: CUP_MH60L_Dap_4x_Dynamic_Base {
	};
	class CUP_B_MH60L_DAP_4x_USN: CUP_UH60S_Dap_4x_Dynamic_Base
	{

	};
	class SOAR_MH60L_DAP_4X_M134: CUP_B_MH60L_DAP_4x_US {
		side = 1;
		faction = "160_SOAR";
		displayname="MH-60L DAP (4 Pylons, M134)";
		class AnimationSources: AnimationSources
		{
			class Hide_Probe
			{
				DisplayName="Hide Fuel Probe";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_Nose
			{
				DisplayName="Hide Nose Radar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Filters_Hide
			{
				DisplayName="Hide Filters";
				source="user";
				initphase=1;
				animPeriod=1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
				class presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class AntiTank
					{
						displayName="Anti-Tank";
						attachment[]=
						{
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"
						};
					};
					class MultiRole
					{
						displayName="Multi-Role";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
					class Escort
					{
						displayName="Escort";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"CUP_NATO_HELO_SMALL",
							"CUP_NATO_HELO_LARGE",
							"CUP_NATO_HELO_UH60",
							"RHS_HP_HELLFIRE_RACK",
							"RHS_HP_FFAR_ARMY",
							"RHS_HP_Fuel_ARMY"
						};
						attachment="CUP_PylonPod_19Rnd_Rocket_FFAR_M";
						bay=-1;
						priority=5;
						UIposition[]={0.059999999,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
	};
	class SOAR_MH60L_DAP_4X_GAU21: CUP_B_MH60L_DAP_4x_USN {
		displayname="MH-60L DAP (4 Pylons, GAU-21)";
		side = 1;
		faction = "160_SOAR";
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Hide_Probe
			{
				DisplayName="Hide Fuel Probe";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_Nose
			{
				DisplayName="Hide Nose Radar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Filters_Hide
			{
				DisplayName="Hide Filters";
				source="user";
				initphase=1;
				animPeriod=1;
			};
			class Navyclan_hide
			{
				DisplayName="Hide Navy Decal";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Navyclan2_hide: Navyclan_hide
			{
				DisplayName="Hide Navy Decal Doors";
				initPhase=1;
			};
		};

	};

	class CUP_MH60S_Base: Helicopter_Base_H {

	};
	class CUP_B_MH60S_USMC: CUP_MH60S_Base {
		class Components;
	};
	class SOAR_MH60L_DAP_4x_M240: CUP_B_MH60S_USMC {

		side = 1;
		faction = "160_SOAR";
		displayname="MH-60L DAP (4 Pylons, M240)";
		class AnimationSources: AnimationSources
		{
			class Hide_Probe
			{
				DisplayName="Hide Fuel Probe";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_Nose
			{
				DisplayName="Hide Nose Radar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Filters_Hide
			{
				DisplayName="Hide Filters";
				source="user";
				initphase=1;
				animPeriod=1;
			};
			class Hide_ESSS2x
			{
				DisplayName="Hide ESSS2x";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_ESSS4x: Hide_ESSS2x
			{
				DisplayName="Hide ESSS4x";
				initPhase=0;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
				class presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class AntiTank
					{
						displayName="Anti-Tank";
						attachment[]=
						{
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"
						};
					};
					class MultiRole
					{
						displayName="Multi-Role";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
					class Escort
					{
						displayName="Escort";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"CUP_NATO_HELO_SMALL",
							"CUP_NATO_HELO_LARGE",
							"CUP_NATO_HELO_UH60",
							"RHS_HP_HELLFIRE_RACK",
							"RHS_HP_FFAR_ARMY",
							"RHS_HP_Fuel_ARMY"
						};
						attachment="CUP_PylonPod_19Rnd_Rocket_FFAR_M";
						bay=-1;
						priority=5;
						UIposition[]={0.059999999,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						mirroredMissilePos=1;
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