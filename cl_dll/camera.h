//========= Copyright © 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose:
//
// $NoKeywords: $
//=============================================================================

// Camera.h  --  defines and such for a 3rd person camera
// NOTE: must include quakedef.h first

#pragma once

// pitch, yaw, dist
extern Vector cam_ofs;
// Using third person camera
extern bool cam_thirdperson;

//added by harSens
#define VIEW_FIRSTPERSON 0
#define VIEW_THIRDPERSON 1

void CAM_Init();
void CAM_ClearStates();
void CAM_StartMouseMove();
void CAM_EndMouseMove();
