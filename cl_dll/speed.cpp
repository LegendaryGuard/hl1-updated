/*
*	Client speed control
*	With special thanks to Adrian "Fireball" LaVallee
*/

#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"

DECLARE_MESSAGE(m_Speed, Speed);

bool CHudSpeed::Init()
{
	HOOK_MESSAGE(Speed);

	gHUD.AddHudElem(this);

	return true;
}

void CHudSpeed::SetSpeed(int speed)
{
	char cmd[50];

	sprintf(cmd, "cl_forwardspeed %d\n", speed);
	EngineClientCmd(cmd);
	sprintf(cmd, "cl_backspeed %d\n", speed);
	EngineClientCmd(cmd);
	sprintf(cmd, "cl_sidespeed %d\n", speed);
	EngineClientCmd(cmd);
	sprintf(cmd, "cl_movespeedkey %f\n", 0.5);
	EngineClientCmd(cmd);
}

int CHudSpeed::MsgFunc_Speed(const char *pszName,  int iSize, void *pbuf)
{
	BEGIN_READ(pbuf, iSize);
	int x = READ_SHORT();

	SetSpeed(x);

	return 1;
}