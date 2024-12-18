#include "testing_scene_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_TESTING_SCENE_ROOM_0_HEADER00_OBJECTLIST 2
#define LENGTH_TESTING_SCENE_ROOM_0_HEADER00_ACTORLIST 2
SceneCmd testing_scene_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&testing_scene_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_TESTING_SCENE_ROOM_0_HEADER00_OBJECTLIST, testing_scene_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_TESTING_SCENE_ROOM_0_HEADER00_ACTORLIST, testing_scene_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 testing_scene_room_0_header00_objectList[LENGTH_TESTING_SCENE_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
};

ActorEntry testing_scene_room_0_header00_actorList[LENGTH_TESTING_SCENE_ROOM_0_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -233, 0, 220 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0F80
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 53, 9, -145 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0440
    },
};

RoomShapeNormal testing_scene_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(testing_scene_room_0_shapeDListsEntry),
    testing_scene_room_0_shapeDListsEntry,
    testing_scene_room_0_shapeDListsEntry + ARRAY_COUNT(testing_scene_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry testing_scene_room_0_shapeDListsEntry[1] = {
    { testing_scene_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx testing_scene_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque),
	gsSPDisplayList(testing_scene_room_0_dl_Ground_mesh_layer_Opaque),
	gsSPDisplayList(testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 testing_scene_room_0_dl_ground_texture_rgba32[] = {
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff696b00ff, 0x716400ff696b00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x756100ff706500ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6c6900ff, 0x825601ff7d5a01ff, 
	0x686c00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x6b6a00ff686c00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x825601ff7c5b01ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x6a6a00ff686c00ff, 0x676d00ff676d00ff, 0x7c5b01ff825501ff, 
	0x795e01ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x686d00ff795e01ff, 0x815701ff6e6700ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x825601ff7c5b01ff, 0x676d00ff676d00ff, 0x676d00ff746200ff, 0x815701ff766100ff, 0x676d00ff676d00ff, 0x696b00ff805801ff, 
	0x825501ff7c5b01ff, 0x6a6b00ff676d00ff, 0x676d00ff6b6900ff, 0x7e5901ff835501ff, 0x7f5801ff6a6a00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x825601ff7c5b01ff, 0x676d00ff676d00ff, 0x6b6900ff825601ff, 0x825601ff795d01ff, 0x686c00ff676d00ff, 0x676d00ff6a6a00ff, 
	0x7e5a01ff835501ff, 0x815701ff736300ff, 0x756100ff825601ff, 0x825601ff7c5b01ff, 0x6a6a00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x825601ff7b5c01ff, 0x676d00ff676d00ff, 0x7b5c01ff835501ff, 0x795e00ff686c00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x686c00ff756101ff, 0x825601ff835501ff, 0x835501ff835501ff, 0x815701ff6b6a00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff6c6900ff, 0x825501ff795d01ff, 0x676d00ff775f00ff, 0x835501ff805701ff, 0x696c00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x756100ff835501ff, 0x835501ff7c5b01ff, 0x825501ff805801ff, 0x6a6a00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff6f6600ff, 0x825501ff795e01ff, 0x785e01ff835501ff, 0x835501ff746200ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x7f5801ff825601ff, 0x716500ff686c00ff, 0x785e01ff835501ff, 0x7d5a01ff686c00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff6a6a00ff, 0x825601ff7f5901ff, 0x825501ff7f5801ff, 0x6d6800ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x795e01ff756101ff, 0x676d00ff676d00ff, 0x686c00ff7d5a01ff, 0x835501ff756100ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x795e00ff835501ff, 0x7f5801ff6b6a00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6a6b00ff, 0x815601ff815701ff, 0x696b00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x7f5901ff825601ff, 0x6d6800ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x6d6800ff6a6b00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x766001ff835501ff, 0x775f01ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff686c00ff, 0x825601ff7e5901ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6d6800ff, 0x825601ff766001ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x686c00ff815701ff, 0x815601ff6a6a00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff736300ff, 0x835501ff766001ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x686c00ff805801ff, 0x825601ff6f6600ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x696b00ff736300ff, 0x6a6b00ff766001ff, 0x835501ff795e01ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff7e5a01ff, 0x825601ff6d6800ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x7b5c01ff835501ff, 0x785e01ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x785f01ff825601ff, 0x706500ff686c00ff, 0x805701ff815701ff, 0x6a6b00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x6a6b00ff825601ff, 0x7f5801ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff736200ff, 0x825501ff7f5901ff, 0x686c00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff686c00ff, 0x815701ff815701ff, 0x6a6b00ff676d00ff, 0x6f6600ff785f01ff, 0x696c00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x775f01ff825501ff, 0x746200ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff815701ff, 0x835501ff825601ff, 0x726400ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff795e01ff, 0x835501ff775f01ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x716400ff795e01ff, 0x696c00ff676d00ff, 0x676d00ff676d00ff, 0x706500ff825501ff, 0x7f5801ff815601ff, 0x825501ff7a5d01ff, 0x686c00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x716400ff825601ff, 0x7f5801ff696c00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x7c5b01ff825601ff, 0x6f6600ff6c6900ff, 0x7f5801ff835501ff, 0x7b5c01ff686d00ff, 
	0x676d00ff676d00ff, 0x676d00ff6e6700ff, 0x825601ff825601ff, 0x6e6700ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x815701ff805701ff, 0x686c00ff676d00ff, 0x6a6b00ff7e5901ff, 0x835501ff7a5d01ff, 
	0x686d00ff676d00ff, 0x736300ff825601ff, 0x825601ff726300ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6d6800ff, 0x825501ff7a5d01ff, 0x676d00ff676d00ff, 0x676d00ff696b00ff, 0x7e5901ff825601ff, 
	0x716400ff776001ff, 0x825601ff815601ff, 0x716400ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff775f01ff, 0x835501ff726400ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x696b00ff756101ff, 
	0x6b6900ff805701ff, 0x805801ff6e6700ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff7e5a01ff, 0x825601ff6b6900ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff6d6800ff, 0x6a6b00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff7e5901ff, 0x815701ff696b00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6f6600ff, 0x736300ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x6b6a00ff6c6900ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6e6700ff, 0x815701ff7d5a01ff, 0x686c00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6c6800ff, 0x775f01ff7d5a01ff, 0x7e5901ff7e5901ff, 0x7c5b01ff795e01ff, 
	0x726300ff696b00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x746200ff825601ff, 0x825601ff736300ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6a6a00ff, 0x7c5b01ff825601ff, 0x835501ff825601ff, 0x825601ff825601ff, 0x825601ff825501ff, 
	0x835501ff825601ff, 0x825601ff7d5a01ff, 0x696b00ff676d00ff, 0x6b6a00ff7d5a01ff, 0x825501ff815701ff, 0x716500ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6c6900ff, 0x785e01ff815701ff, 0x825501ff7e5901ff, 0x736300ff6c6900ff, 0x6a6a00ff6a6a00ff, 0x6c6900ff706500ff, 
	0x766001ff7b5c01ff, 0x7f5901ff7b5c01ff, 0x6b6b00ff785f01ff, 0x825601ff825501ff, 0x7d5a01ff6c6900ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff7c5b01ff, 0x825501ff815701ff, 0x766001ff686c00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff6d6800ff, 0x756101ff7d5a01ff, 0x825601ff835501ff, 0x805701ff746200ff, 0x686c00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6d6800ff, 0x716500ff6a6b00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff6b6a00ff, 
	0x805801ff825501ff, 0x835501ff825601ff, 0x7f5801ff756100ff, 0x696b00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff696b00ff, 
	0x785f01ff7a5d01ff, 0x746200ff6c6800ff, 0x686d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 0x676d00ff676d00ff, 
	
};

Vtx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-188, 213, 188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-188, 213, 188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-188, 213, -188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-188, 213, -188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {188, 213, 188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {188, 213, 188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {188, 213, -188}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {188, 213, -188}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_vtx_0[4] = {
	{{ {188, 213, 188}, 0, {-16, 1008}, {0, 129, 0, 255} }},
	{{ {-188, 213, 188}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {-188, 213, -188}, 0, {1008, -16}, {0, 129, 0, 255} }},
	{{ {188, 213, -188}, 0, {-16, -16}, {0, 129, 0, 255} }},
};

Gfx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx testing_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-336, 0, 336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-336, 0, 336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-336, 0, -336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-336, 0, -336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {336, 0, 336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {336, 0, 336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {336, 0, -336}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {336, 0, -336}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testing_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0[8] = {
	{{ {-91, 0, 91}, 0, {457, 535}, {0, 127, 0, 255} }},
	{{ {-91, 0, -91}, 0, {457, 457}, {0, 127, 0, 255} }},
	{{ {-336, 0, -336}, 0, {353, 353}, {0, 127, 0, 255} }},
	{{ {336, 0, -336}, 0, {639, 353}, {0, 127, 0, 255} }},
	{{ {91, 0, -91}, 0, {535, 457}, {0, 127, 0, 255} }},
	{{ {336, 0, 336}, 0, {639, 639}, {0, 127, 0, 255} }},
	{{ {91, 0, 91}, 0, {535, 535}, {0, 127, 0, 255} }},
	{{ {-336, 0, 336}, 0, {353, 639}, {0, 127, 0, 255} }},
};

Gfx testing_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testing_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSPEndDisplayList(),
};

Vtx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-91, 0, 91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-91, 0, 91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-91, 0, -91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-91, 0, -91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {91, 0, 91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {91, 0, 91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {91, 0, -91}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {91, 0, -91}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-91, 0, 91}, 0, {357, 635}, {0, 127, 0, 255} }},
	{{ {91, 0, 91}, 0, {635, 635}, {0, 127, 0, 255} }},
	{{ {91, 0, -91}, 0, {635, 357}, {0, 127, 0, 255} }},
	{{ {-91, 0, -91}, 0, {357, 357}, {0, 127, 0, 255} }},
};

Gfx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_testing_scene_room_0_dl_f3dlite_material_002_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 161, 242, 255),
	gsSPEndDisplayList(),
};

Gfx mat_testing_scene_room_0_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, testing_scene_room_0_dl_ground_texture_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_testing_scene_room_0_dl_f3dlite_material_001_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 240, 0, 255),
	gsSPEndDisplayList(),
};

Gfx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testing_scene_room_0_dl_f3dlite_material_002_layerOpaque),
	gsSPDisplayList(testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx testing_scene_room_0_dl_Ground_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testing_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testing_scene_room_0_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(testing_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testing_scene_room_0_dl_f3dlite_material_001_layerOpaque),
	gsSPDisplayList(testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

