#include "testing_scene_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_TESTING_SCENE_ROOM_0_HEADER00_OBJECTLIST 4
#define LENGTH_TESTING_SCENE_ROOM_0_HEADER00_ACTORLIST 5
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
    OBJECT_EN_SKEP,
    OBJECT_SMOKE_CLOUD,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
};

ActorEntry testing_scene_room_0_header00_actorList[LENGTH_TESTING_SCENE_ROOM_0_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -177, 1, 56 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x01E1
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -233, 0, 220 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0F80
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -177, 1, -113 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FA2
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 53, 9, -145 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0440
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_EN_SKEP,
        /* Position   */ { 4, 0, 220 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
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
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 255, 4, 255),
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

