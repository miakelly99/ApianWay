#ifndef TESTING_SCENE_SCENE_H
#define TESTING_SCENE_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd testing_scene_scene_header00[];
extern RomFile testing_scene_scene_roomList[];
extern u8 _testing_scene_room_0SegmentRomStart[];
extern u8 _testing_scene_room_0SegmentRomEnd[];
extern ActorEntry testing_scene_scene_header00_playerEntryList[];
extern Spawn testing_scene_scene_header00_entranceList[];
extern u16 testing_scene_scene_header00_exitList[1];
extern EnvLightSettings testing_scene_scene_header00_lightSettings[1];
extern CollisionHeader testing_scene_scene_collisionHeader;
extern Vec3s testing_scene_scene_camPosData[];
extern BgCamInfo testing_scene_scene_bgCamInfo[];
extern SurfaceType testing_scene_scene_polygonTypes[2];
extern Vec3s testing_scene_scene_vertices[12];
extern CollisionPoly testing_scene_scene_polygons[12];
extern SceneCmd testing_scene_room_0_header00[];
extern s16 testing_scene_room_0_header00_objectList[];
extern ActorEntry testing_scene_room_0_header00_actorList[];
extern Gfx testing_scene_room_0_shapeHeader_entry_0_opaque[];
extern Vtx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_vtx_0[4];
extern Gfx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque_tri_0[];
extern Vtx testing_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testing_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0[8];
extern Gfx testing_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0[];
extern Vtx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_0[4];
extern Gfx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque_tri_0[];
extern Gfx mat_testing_scene_room_0_dl_f3dlite_material_002_layerOpaque[];
extern Gfx mat_testing_scene_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_testing_scene_room_0_dl_f3dlite_material_001_layerOpaque[];
extern Gfx testing_scene_room_0_dl_Ceiling_mesh_layer_Opaque[];
extern Gfx testing_scene_room_0_dl_Ground_mesh_layer_Opaque[];
extern Gfx testing_scene_room_0_dl_Ground_001_mesh_layer_Opaque[];
extern RoomShapeNormal testing_scene_room_0_shapeHeader;
extern RoomShapeDListsEntry testing_scene_room_0_shapeDListsEntry[1];

#endif
