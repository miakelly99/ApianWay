#include "z_en_skep.h"
#include "assets/objects/object_en_skep/gEnSkepDL.h"
#include "assets/objects/object_en_skep/gEnSkepCollision_collision.h"
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
	
	EnSkep* this = (EnSkep*)thisx;
	
	CollisionHeader* colHeader = NULL;
	CollisionHeader_GetVirtual(&gEnSkepCollision_collisionHeader, &colHeader);
	
	this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
}

void EnSkep_Destroy(Actor* thisx, PlayState* play) {
	PRINTF("Skep destroy called");

	EnSkep* this = (EnSkep*)thisx;

	DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void EnSkep_Update(Actor* thisx, PlayState* play) {
	PRINTF("Skep update called");

	EnSkep* this = (EnSkep*)thisx;

	Actor_OfferGetItem(&this->dyna.actor, play, GI_MAX, 60.0f, 30.0f);
}

void EnSkep_Draw(Actor* thisx, PlayState* play) {
	PRINTF("Skep draw called");
	// Gfx_DrawDListOpa(play, gBombchuDL);
	Gfx_DrawDListOpa(play, gEnSkepDL);
}