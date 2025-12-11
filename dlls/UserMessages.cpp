/***
*
*	Copyright (c) 1996-2001, Valve LLC. All rights reserved.
*
*	This product contains software technology licensed from Id
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc.
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "shake.h"
#include "UserMessages.h"

void LinkUserMessages()
{
	// Already taken care of?
	if (0 != gmsgCurWeapon)
	{
		return;
	}

	gmsgCurWeapon = REG_USER_MSG("CurWeapon", 3);
	gmsgGeigerRange = REG_USER_MSG("Geiger", 1);
	gmsgFlashlight = REG_USER_MSG("Flashlight", 2);
	gmsgFlashBattery = REG_USER_MSG("FlashBat", 1);
	gmsgHealth = REG_USER_MSG("Health", 2);
	gmsgDamage = REG_USER_MSG("Damage", 12);
	gmsgBattery = REG_USER_MSG("Battery", 2);
	gmsgTrain = REG_USER_MSG("Train", 1);
	//gmsgHudText = REG_USER_MSG( "HudTextPro", -1 );
	gmsgHudText = REG_USER_MSG("HudText", -1); // we don't use the message but 3rd party addons may!
	gmsgSayText = REG_USER_MSG("SayText", -1);
	gmsgTextMsg = REG_USER_MSG("TextMsg", -1);
	gmsgWeaponList = REG_USER_MSG("WeaponList", -1);
	gmsgResetHUD = REG_USER_MSG("ResetHUD", 1); // called every respawn
	gmsgInitHUD = REG_USER_MSG("InitHUD", 0);	// called every time a new player joins the server
	gmsgShowGameTitle = REG_USER_MSG("GameTitle", 1);
	gmsgDeathMsg = REG_USER_MSG("DeathMsg", -1);
	gmsgScoreInfo = REG_USER_MSG("ScoreInfo", 9);
	gmsgTeamInfo = REG_USER_MSG("TeamInfo", -1);   // sets the name of a player's team
	gmsgTeamScore = REG_USER_MSG("TeamScore", -1); // sets the score of a team on the scoreboard
	gmsgGameMode = REG_USER_MSG("GameMode", 1);
	gmsgMOTD = REG_USER_MSG("MOTD", -1);
	gmsgServerName = REG_USER_MSG("ServerName", -1);
	gmsgAmmoPickup = REG_USER_MSG("AmmoPickup", 2);
	gmsgWeapPickup = REG_USER_MSG("WeapPickup", 1);
	gmsgItemPickup = REG_USER_MSG("ItemPickup", -1);
	gmsgHideWeapon = REG_USER_MSG("HideWeapon", 1);
	gmsgSetFOV = REG_USER_MSG("SetFOV", 1);
	gmsgShowMenu = REG_USER_MSG("ShowMenu", -1);
	gmsgShake = REG_USER_MSG("ScreenShake", sizeof(ScreenShake));
	gmsgFade = REG_USER_MSG("ScreenFade", sizeof(ScreenFade));
	//changed by harSens
	//gmsgAmmoX = REG_USER_MSG("AmmoX", 2);
	gmsgAmmoX = REG_USER_MSG("AmmoX", 5);
	gmsgTeamNames = REG_USER_MSG("TeamNames", -1);
	//added by harSens
	gmsgSpeed = REG_USER_MSG("Speed", 2); 
	gmsgVGUIMenu = REG_USER_MSG("VGUIMenu", 1);
	gmsgChangeView = REG_USER_MSG("ChangeView", 2);
	gmsgCharge = REG_USER_MSG("Charge", 1);
	gmsgMaxHealth = REG_USER_MSG("MaxHealth", 1);
	gmsgMaxKi = REG_USER_MSG("MaxKi", 4);
	gmsgPowerLevel = REG_USER_MSG("PowerLevel", 4);	
	gmsgMaxPowerLevel = REG_USER_MSG("MaxPL", 4);
	gmsgExplosion = REG_USER_MSG("Explosion", 14);
	gmsgPowerStruggle = REG_USER_MSG("PowerStrug",1);
	gmsgChargeSB = REG_USER_MSG("ChargeSB",6);
	gmsgStopSBCharge = REG_USER_MSG("StopChSB",0);
	gmsgSensuBean = REG_USER_MSG("SensuBean", 1);
	gmsgCreateTrail = REG_USER_MSG("CreateTrail", 13);
	gmsgRemoveTrail = REG_USER_MSG("RemoveTrail", 4);
	gmsgAddPoint = REG_USER_MSG("AddPoint", 10);

	gmsgStatusText = REG_USER_MSG("StatusText", -1);
	gmsgStatusValue = REG_USER_MSG("StatusValue", 3);

	gmsgWeapons = REG_USER_MSG("Weapons", 8);
}
