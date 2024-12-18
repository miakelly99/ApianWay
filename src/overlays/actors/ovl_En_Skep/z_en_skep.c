#include "z_en_skep.h"
#include "assets/objects/object_en_skep/gEnSkepDL.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void EnSkep_Init(Actor* thisx, PlayState* play);
void EnSkep_Destroy(Actor* thisx, PlayState* play);
void EnSkep_Update(Actor* thisx, PlayState* play);
void EnSkep_Draw(Actor* thisx, PlayState* play);

const ActorProfile En_Skep_Profile = {
	ACTOR_EN_SKEP,
	ACTORCAT_BG,
	FLAGS,
	OBJECT_EN_SKEP,
	// OBJECT_GAMEPLAY_KEEP,
	sizeof(EnSkep),
	(ActorFunc) EnSkep_Init,
	(ActorFunc) EnSkep_Destroy,
	(ActorFunc) EnSkep_Update,
	(ActorFunc) EnSkep_Draw
};

void EnSkep_Init(Actor* thisx, PlayState* play) {
	PRINTF("Skep init called");
}

void EnSkep_Destroy(Actor* thisx, PlayState* play) {
	PRINTF("Skep destroy called");
}

void EnSkep_Update(Actor* thisx, PlayState* play) {
	PRINTF("Skep update called");
}

void EnSkep_Draw(Actor* thisx, PlayState* play) {
	PRINTF("Skep draw called");
	// Gfx_DrawDListOpa(play, gBombchuDL);
	Gfx_DrawDListOpa(play, gEnSkepDL);
}