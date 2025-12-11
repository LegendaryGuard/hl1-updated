add_library(hl SHARED $<$<PLATFORM_ID:Windows>:hl.def>)

set_common_properties(hl)

target_include_directories(hl PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}
	../common
	../engine
	../game_shared
	../pm_shared
	../public)

target_compile_definitions(hl PRIVATE
	VALVE_DLL)

target_sources(hl PRIVATE
	# aflock.cpp
	# agrunt.cpp
	# airtank.cpp
	animating.cpp
	animation.cpp
	aura.cpp	# ESF ALPHA 2.0
	# apache.cpp
	# barnacle.cpp
	# barney.cpp
	# bigmomma.cpp
	# bloater.cpp
	bigbang.cpp	# ESF ALPHA 2.0
	bmodels.cpp
	# bullsquid.cpp
	burningattack.cpp	# ESF ALPHA 2.0
	buttons.cpp
	buu.cpp	# ESF ALPHA 2.0
	capturethedragonballs_gamerules.cpp	# ESF ALPHA 2.0
	cbase.cpp
	cell.cpp	# ESF ALPHA 2.0
	classes.cpp	# ESF ALPHA 2.0
	client.cpp
	combat.cpp
	controlledweapon.cpp	# ESF ALPHA 2.0
	controller.cpp
	# crossbow.cpp
	# crowbar.cpp
	credits.cpp	# ESF ALPHA 2.0
	deathball.cpp	# ESF ALPHA 2.0
	defaultai.cpp
	destructodisc.cpp	# ESF ALPHA 2.0
	doors.cpp
	dragonball.cpp	# ESF ALPHA 2.0
	effects.cpp
	# egon.cpp
	explode.cpp
	eyelaser.cpp	# ESF ALPHA 2.0
	finalflash.cpp	# ESF ALPHA 2.0
	fingerlaser.cpp	# ESF ALPHA 2.0
	flyingmonster.cpp
	frieza.cpp	# ESF ALPHA 2.0
	friezadisc.cpp	# ESF ALPHA 2.0
	func_break.cpp
	# func_tank.cpp
	gallitgun.cpp	# ESF ALPHA 2.0
	game.cpp
	gamerules.cpp
	# gargantua.cpp
	# gauss.cpp
	genericmonster.cpp
	# ggrenade.cpp
	gohan.cpp	# ESF ALPHA 2.0
	goku.cpp	# ESF ALPHA 2.0
	# gman.cpp
	# handgrenade.cpp
	# hassassin.cpp
	# headcrab.cpp
	# healthkit.cpp
	# hgrunt.cpp
	# hornet.cpp
	# hornetgun.cpp
	# houndeye.cpp
	h_ai.cpp
	# h_battery.cpp
	# h_cine.cpp
	h_cycler.cpp
	h_export.cpp
	# ichthyosaur.cpp
	# islave.cpp
	items.cpp
	kamehameha.cpp	# ESF ALPHA 2.0
	kiblast.cpp	# ESF ALPHA 2.0
	krillin.cpp	# ESF ALPHA 2.0
	# leech.cpp
	lights.cpp
	magicattack.cpp	# ESF ALPHA 2.0
	maprules.cpp
	masenko.cpp	# ESF ALPHA 2.0
	melee.cpp	# ESF ALPHA 2.0
	monstermaker.cpp
	monsters.cpp
	monsterstate.cpp
	# mortar.cpp
	# mp5.cpp
	multiplay_gamerules.cpp
	# nihilanth.cpp
	nodes.cpp
	observer.cpp
	# osprey.cpp
	pathcorner.cpp
	piccolo.cpp	# ESF ALPHA 2.0
	plane.cpp
	plats.cpp
	player.cpp
	# python.cpp
	# rat.cpp
	# roach.cpp
	# rpg.cpp
	# satchel.cpp
	schedule.cpp
	# scientist.cpp
	scripted.cpp
	sensubean.cpp	# ESF ALPHA 2.0
	senzubean.cpp	# ESF ALPHA 2.0
	# shotgun.cpp
	singleplay_gamerules.cpp
	skill.cpp
	solarflare.cpp	# ESF ALPHA 2.0
	sound.cpp
	soundent.cpp
	specialbeamcannon.cpp	# ESF ALPHA 2.0
	spectator.cpp
	spiritbomb.cpp	# ESF ALPHA 2.0
	squadmonster.cpp
	# squeakgrenade.cpp
	subs.cpp
	talkmonster.cpp
	teamplay_gamerules.cpp
	tempmonster.cpp
	# tentacle.cpp
	trail.cpp	# ESF ALPHA 2.0
	triggers.cpp
	# tripmine.cpp
	trunks.cpp	# ESF ALPHA 2.0
	# turret.cpp
	UserMessages.cpp
	util.cpp
	vegeta.cpp	# ESF ALPHA 2.0
	# vehicle.cpp
	weapons.cpp
	weapons_shared.cpp
	world.cpp
	# glock.cpp
	xen.cpp
	# zombie.cpp

	../common/mathlib.cpp

	../game_shared/filesystem_utils.cpp
	../game_shared/voice_gamemgr.cpp

	../pm_shared/pm_debug.cpp
	../pm_shared/pm_math.cpp
	../pm_shared/pm_shared.cpp

	../public/interface.cpp

	activity.h
	activitymap.h
	animation.h
	aura.h	# ESF ALPHA 2.0
	basemonster.h
	capturethedragonballs_gamerules.h	# ESF ALPHA 2.0
	cbase.h
	cdll_dll.h
	classes.h	# ESF ALPHA 2.0
	client.h
	controlledbeam.h	# ESF ALPHA 2.0
	credits.h	# ESF ALPHA 2.0
	decals.h
	defaultai.h
	doors.h
	dragonball.h	# ESF ALPHA 2.0
	effects.h
	enginecallback.h
	explode.h
	extdll.h
	flyingmonster.h
	func_break.h
	gamerules.h
	# hornet.h
	items.h
	monsterevent.h
	monsters.h
	nodes.h
	plane.h
	player.h
	saverestore.h
	schedule.h
	scripted.h
	scriptevent.h
	skill.h
	soundent.h
	spectator.h
	# squadmonster.h
	talkmonster.h
	teamplay_gamerules.h
	trail.h	# ESF ALPHA 2.0
	trains.h
	UserMessages.h
	util.h
	vector.h
	weapons.h

	../common/beamdef.h
	../common/com_model.h
	../common/const.h
	../common/con_nprint.h
	../common/crc.h
	../common/cvardef.h
	../common/director_cmds.h
	../common/dlight.h
	../common/dll_state.h
	../common/entity_state.h
	../common/entity_types.h
	../common/enums.h
	../common/event_api.h
	../common/event_args.h
	../common/event_flags.h
	../common/hltv.h
	../common/in_buttons.h
	../common/mathlib.h
	../common/netadr.h
	../common/particledef.h
	../common/Platform.h
	../common/PlatformHeaders.h
	../common/r_efx.h
	../common/r_studioint.h
	../common/screenfade.h
	../common/Sequence.h
	../common/studio_event.h
	../common/usercmd.h
	../common/weaponinfo.h

	../engine/custom.h
	../engine/customentity.h
	../engine/edict.h
	../engine/eiface.h
	../engine/progdefs.h
	../engine/progs.h
	../engine/shake.h
	../engine/studio.h

	../game_shared/filesystem_utils.h

	../pm_shared/pm_debug.h
	../pm_shared/pm_defs.h
	../pm_shared/pm_info.h
	../pm_shared/pm_materials.h
	../pm_shared/pm_movevars.h
	../pm_shared/pm_shared.h

	../public/interface.h)
