#include "z_en_skep.h"
#include "z64math.h"
#include "assets/objects/object_en_skep/gEnSkepDL.h"
#include "assets/objects/object_en_skep/gEnSkepCollision_collision.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED | ACTOR_FLAG_ATTENTION_ENABLED)

void EnSkep_Init(Actor* thisx, PlayState* play);
void EnSkep_Destroy(Actor* thisx, PlayState* play);
void EnSkep_Update(Actor* thisx, PlayState* play);
void EnSkep_Draw(Actor* thisx, PlayState* play);

bool EnSkep_IsPlayerFacing(EnSkep* this, PlayState* play);

const ActorProfile En_Skep_Profile = {
	ACTOR_EN_SKEP,
	ACTORCAT_BG,
	FLAGS,
	OBJECT_EN_SKEP,
	sizeof(EnSkep),
	(ActorFunc) EnSkep_Init,
	(ActorFunc) EnSkep_Destroy,
	(ActorFunc) EnSkep_Update,
	(ActorFunc) EnSkep_Draw
};

void EnSkep_Init(Actor* thisx, PlayState* play) {
	EnSkep* this = (EnSkep*)thisx;
	
	CollisionHeader* colHeader = NULL;
	CollisionHeader_GetVirtual(&gEnSkepCollision_collisionHeader, &colHeader);
	
	this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
	this->vulnerable_timer = 0;
}

void EnSkep_Destroy(Actor* thisx, PlayState* play) {
	EnSkep* this = (EnSkep*)thisx;

	DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void EnSkep_Update(Actor* thisx, PlayState* play) {
	EnSkep* this = (EnSkep*)thisx;

	// Offer honey if player is facing skep and vulerable timer is running.
	if (EnSkep_IsPlayerFacing(this, play) && this->vulnerable_timer > 0)
	{
		Actor_OfferGetItemNearby(&this->dyna.actor, play, GI_MAX);
	}

	// Decrease timer for honey gathering
	if (this->vulnerable_timer > 0)
	{
		this->vulnerable_timer--;
	}
}

void EnSkep_Draw(Actor* thisx, PlayState* play) {
	Gfx_DrawDListOpa(play, gEnSkepDL);
}

bool EnSkep_IsPlayerFacing(EnSkep* this, PlayState* play)
{
	Player* player = GET_PLAYER(play);
	Vec2f vecToSkep;
	vecToSkep.x = this->dyna.actor.world.pos.x - player->actor.world.pos.x;
	vecToSkep.y = this->dyna.actor.world.pos.z - player->actor.world.pos.z;
	
	s16 angle = player->actor.world.rot.y;

	Vec2f playerFacing;
	playerFacing.x = Math_SinS(angle);
	playerFacing.y = Math_CosS(angle);

	float dot = vecToSkep.x * playerFacing.x + vecToSkep.y * playerFacing.y;
	return dot > 0;
}