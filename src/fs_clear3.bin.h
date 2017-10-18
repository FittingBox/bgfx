static const uint8_t fs_clear3_glsl[250] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0xd4, 0x00, 0x00, 0x00, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, // .....uniform vec
	0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, // 4 bgfx_clear_col
	0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // or[8];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, //  ().{.  gl_FragD
	0x61, 0x74, 0x61, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // ata[0] = bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // ear_color[0];.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x31, 0x5d, 0x20, 0x3d, // gl_FragData[1] =
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, //  bgfx_clear_colo
	0x72, 0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // r[1];.  gl_FragD
	0x61, 0x74, 0x61, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // ata[2] = bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x32, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // ear_color[2];.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x33, 0x5d, 0x20, 0x3d, // gl_FragData[3] =
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, //  bgfx_clear_colo
	0x72, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // r[3];.}...
};
static const uint8_t fs_clear3_spv[2938] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x04, 0x00, 0x00, 0x04, // clear_color.....
	0x00, 0x54, 0x0b, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, // .T.....#........
	0x00, 0x54, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, // .Ta.............
	0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, // .........GLSL.st
	0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // d.450...........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0xc2, 0x11, 0x00, // .main...........
	0x00, 0xb3, 0x15, 0x00, 0x00, 0xe1, 0x0d, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x1f, 0x16, 0x00, // ................
	0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, // ................
	0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, // .........main...
	0x00, 0x05, 0x00, 0x06, 0x00, 0x35, 0x13, 0x00, 0x00, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, // .....5...vec4_sp
	0x6c, 0x61, 0x74, 0x28, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0xdd, 0x0e, 0x00, // lat(f1;.........
	0x00, 0x5f, 0x78, 0x00, 0x00, 0x05, 0x00, 0x08, 0x00, 0xf4, 0x0c, 0x00, 0x00, 0x40, 0x6d, 0x61, // ._x..........@ma
	0x69, 0x6e, 0x28, 0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x34, 0x3b, 0x76, // in(vf4;vf4;vf4;v
	0x66, 0x34, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x8f, 0x22, 0x00, 0x00, 0x67, 0x6c, 0x5f, // f4;......."..gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_0_.....
	0x00, 0xf3, 0x54, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // ..T..gl_FragData
	0x5f, 0x31, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x4e, 0x4a, 0x00, 0x00, 0x67, 0x6c, 0x5f, // _1_......NJ..gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_2_.....
	0x00, 0xd8, 0x4e, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // ..N..gl_FragData
	0x5f, 0x33, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x62, 0x67, 0x66, // _3_..........bgf
	0x78, 0x5f, 0x56, 0x6f, 0x69, 0x64, 0x46, 0x72, 0x61, 0x67, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, // x_VoidFrag......
	0x00, 0x83, 0x46, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, // ..F..param......
	0x00, 0x67, 0x04, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, // .g...$Global....
	0x00, 0x67, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, // .g.......u_viewR
	0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x67, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, // ect......g......
	0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, // .u_viewTexel....
	0x00, 0x67, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, // .g.......u_view.
	0x00, 0x06, 0x00, 0x06, 0x00, 0x67, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, // .....g.......u_i
	0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // nvView.......g..
	0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, // .....u_proj.....
	0x00, 0x67, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, // .g.......u_invPr
	0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x67, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, // oj.......g......
	0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, // .u_viewProj.....
	0x00, 0x67, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, // .g.......u_invVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // ewProj.......g..
	0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, // .....u_model....
	0x00, 0x67, 0x04, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // .g.......u_model
	0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x67, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, // View.....g......
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, // .u_modelViewProj
	0x00, 0x06, 0x00, 0x06, 0x00, 0x67, 0x04, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, // .....g.......u_a
	0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x06, 0x00, 0x08, 0x00, 0x67, 0x04, 0x00, // lphaRef4.....g..
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, // .....bgfx_clear_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, // color........B..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xaa, 0x43, 0x00, 0x00, 0x67, 0x6c, 0x5f, // ..........C..gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_0_.....
	0x00, 0x79, 0x39, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // .y9..gl_FragData
	0x5f, 0x31, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xed, 0x2c, 0x00, 0x00, 0x67, 0x6c, 0x5f, // _1_.......,..gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_2_.....
	0x00, 0x40, 0x2c, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // .@,..gl_FragData
	0x5f, 0x33, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xc9, 0x47, 0x00, 0x00, 0x70, 0x61, 0x72, // _3_.......G..par
	0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x85, 0x55, 0x00, 0x00, 0x70, 0x61, 0x72, // am........U..par
	0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x49, 0x38, 0x00, 0x00, 0x70, 0x61, 0x72, // am.......I8..par
	0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, // am...........par
	0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x67, 0x6c, 0x5f, // am...........gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_0_.....
	0x00, 0xc2, 0x11, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // .....gl_FragData
	0x5f, 0x31, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xb3, 0x15, 0x00, 0x00, 0x67, 0x6c, 0x5f, // _1_..........gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_2_.....
	0x00, 0xe1, 0x0d, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // .....gl_FragData
	0x5f, 0x33, 0x5f, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x94, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, // _3_..G..........
	0x00, 0x40, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xf1, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, // .@...G..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // .....H...g......
	0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // .#.......H...g..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .....#.......H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .g...........H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .g.......#... ..
	0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H...g..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x67, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, // .....H...g......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, // .....H...g......
	0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // .#...`...H...g..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .g...........H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, // .g.......#......
	0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H...g..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x67, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, // .....H...g......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, // .....H...g......
	0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // .#.......H...g..
	0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .g...........H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, // .g.......#... ..
	0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H...g..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x67, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, // .....H...g......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, // .....H...g......
	0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // .#...`...H...g..
	0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .g...........H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, // .g.......#......
	0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H...g..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x67, 0x04, 0x00, 0x00, 0x09, 0x00, 0x00, // .....H...g......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x09, 0x00, 0x00, // .....H...g......
	0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // .#.......H...g..
	0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .g...........H..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, // .g.......#......
	0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H...g..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, 0x00, 0x0b, 0x00, 0x00, // .....H...g......
	0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x67, 0x04, 0x00, // .#... ...H...g..
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x30, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, // .....#...0...G..
	0x00, 0x67, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, // .g.......G...B..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd1, 0x0d, 0x00, // .".......G......
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xc2, 0x11, 0x00, // .........G......
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xb3, 0x15, 0x00, // .........G......
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xe1, 0x0d, 0x00, // .........G......
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, // ................
	0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, // .!..............
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, // ..... ... ......
	0x00, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, // ................
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xef, 0x00, 0x00, // .........!......
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, // ......... ......
	0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x07, 0x00, 0x3a, 0x04, 0x00, // .........!...:..
	0x00, 0x08, 0x00, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, 0x02, 0x00, // ................
	0x00, 0x9a, 0x02, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, // .....+..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, // .........e......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, // .....+.......j..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x94, 0x02, 0x00, 0x00, 0x65, 0x00, 0x00, // . ...........e..
	0x00, 0x6a, 0x0a, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x22, 0x0a, 0x00, // .j...+......."..
	0x00, 0x08, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0xf1, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, // ................
	0x00, 0x22, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0f, 0x00, 0x67, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, // .".......g......
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .....e...e...e..
	0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x94, 0x02, 0x00, // .e...e...e......
	0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xf1, 0x04, 0x00, // .e...e..........
	0x00, 0x20, 0x00, 0x04, 0x00, 0xe4, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x67, 0x04, 0x00, // . ...........g..
	0x00, 0x3b, 0x00, 0x04, 0x00, 0xe4, 0x06, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, // .;.......B......
	0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ......... ......
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x2f, 0x0a, 0x00, 0x00, 0x0c, 0x00, 0x00, // .+......./......
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, // .+..............
	0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, // . ..............
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, // .+..............
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x11, 0x0a, 0x00, 0x00, 0x02, 0x00, 0x00, // .+..............
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x14, 0x0a, 0x00, 0x00, 0x03, 0x00, 0x00, // .+..............
	0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, // . ..............
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, // .;..............
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xc2, 0x11, 0x00, 0x00, 0x03, 0x00, 0x00, // .;..............
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xb3, 0x15, 0x00, 0x00, 0x03, 0x00, 0x00, // .;..............
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xe1, 0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, // .;..............
	0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, // .6..............
	0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, // .........Sa..;..
	0x00, 0x9a, 0x02, 0x00, 0x00, 0xc9, 0x47, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // ......G......;..
	0x00, 0x9a, 0x02, 0x00, 0x00, 0x85, 0x55, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // ......U......;..
	0x00, 0x9a, 0x02, 0x00, 0x00, 0x49, 0x38, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .....I8......;..
	0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x39, 0x00, 0x08, // .............9..
	0x00, 0x08, 0x00, 0x00, 0x00, 0xbe, 0x2c, 0x00, 0x00, 0xf4, 0x0c, 0x00, 0x00, 0xc9, 0x47, 0x00, // ......,.......G.
	0x00, 0x85, 0x55, 0x00, 0x00, 0x49, 0x38, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3d, 0x00, 0x04, // ..U..I8......=..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0xaa, 0x43, 0x00, 0x00, 0xc9, 0x47, 0x00, 0x00, 0x3d, 0x00, 0x04, // ......C...G..=..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x79, 0x39, 0x00, 0x00, 0x85, 0x55, 0x00, 0x00, 0x3d, 0x00, 0x04, // .....y9...U..=..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0xed, 0x2c, 0x00, 0x00, 0x49, 0x38, 0x00, 0x00, 0x3d, 0x00, 0x04, // ......,..I8..=..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x40, 0x2c, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, // .....@,......>..
	0x00, 0xd1, 0x0d, 0x00, 0x00, 0xaa, 0x43, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xc2, 0x11, 0x00, // ......C..>......
	0x00, 0x79, 0x39, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xb3, 0x15, 0x00, 0x00, 0xed, 0x2c, 0x00, // .y9..>........,.
	0x00, 0x3e, 0x00, 0x03, 0x00, 0xe1, 0x0d, 0x00, 0x00, 0x40, 0x2c, 0x00, 0x00, 0xfd, 0x00, 0x01, // .>.......@,.....
	0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x35, 0x13, 0x00, // .8...6.......5..
	0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x8a, 0x02, 0x00, // .........7......
	0x00, 0xdd, 0x0e, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x88, 0x2e, 0x00, 0x00, 0x3d, 0x00, 0x04, // .............=..
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x64, 0x57, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, // .....dW......=..
	0x00, 0x0d, 0x00, 0x00, 0x00, 0xa9, 0x4e, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, // ......N......=..
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x49, 0x39, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, // .....I9......=..
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x5c, 0x39, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x50, 0x00, 0x07, // ......9......P..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0xb0, 0x2a, 0x00, 0x00, 0x64, 0x57, 0x00, 0x00, 0xa9, 0x4e, 0x00, // ......*..dW...N.
	0x00, 0x49, 0x39, 0x00, 0x00, 0x5c, 0x39, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0xb0, 0x2a, 0x00, // .I9...9.......*.
	0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0xf4, 0x0c, 0x00, // .8...6..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x04, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, // .....:...7......
	0x00, 0x8f, 0x22, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xf3, 0x54, 0x00, // .."..7........T.
	0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x4e, 0x4a, 0x00, 0x00, 0x37, 0x00, 0x03, // .7.......NJ..7..
	0x00, 0x9a, 0x02, 0x00, 0x00, 0xd8, 0x4e, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x45, 0x58, 0x00, // ......N......EX.
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x83, 0x46, 0x00, 0x00, 0x07, 0x00, 0x00, // .;........F.....
	0x00, 0x3e, 0x00, 0x03, 0x00, 0x83, 0x46, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x39, 0x00, 0x05, // .>....F......9..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x35, 0x13, 0x00, 0x00, 0x83, 0x46, 0x00, // .........5....F.
	0x00, 0x41, 0x00, 0x06, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x29, 0x5b, 0x00, 0x00, 0x42, 0x13, 0x00, // .A.......)[..B..
	0x00, 0x2f, 0x0a, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, // ./.......=......
	0x00, 0x96, 0x21, 0x00, 0x00, 0x29, 0x5b, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8f, 0x22, 0x00, // ..!..)[..>....".
	0x00, 0x96, 0x21, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x89, 0x46, 0x00, // ..!..A........F.
	0x00, 0x42, 0x13, 0x00, 0x00, 0x2f, 0x0a, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, // .B.../.......=..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x89, 0x46, 0x00, 0x00, 0x3e, 0x00, 0x03, // ......V...F..>..
	0x00, 0xf3, 0x54, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x9b, 0x02, 0x00, // ..T...V..A......
	0x00, 0x8a, 0x46, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x2f, 0x0a, 0x00, 0x00, 0x11, 0x0a, 0x00, // ..F..B.../......
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x56, 0x00, 0x00, 0x8a, 0x46, 0x00, // .=........V...F.
	0x00, 0x3e, 0x00, 0x03, 0x00, 0x4e, 0x4a, 0x00, 0x00, 0x01, 0x56, 0x00, 0x00, 0x41, 0x00, 0x06, // .>...NJ...V..A..
	0x00, 0x9b, 0x02, 0x00, 0x00, 0x8b, 0x46, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x2f, 0x0a, 0x00, // ......F..B.../..
	0x00, 0x14, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x75, 0x19, 0x00, // .....=.......u..
	0x00, 0x8b, 0x46, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd8, 0x4e, 0x00, 0x00, 0x75, 0x19, 0x00, // ..F..>....N..u..
	0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                     // .....8....
};
static const uint8_t fs_clear3_dx9[234] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x08, 0x00, 0x00, 0x04, // clear_color.....
	0x00, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, // ...........".CTA
	0x42, 0x1c, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, // B....[..........
	0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // .........T...0..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........D......
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .bgfx_clear_colo
	0x72, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // r...............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, // hader Compiler 1
	0x30, 0x2e, 0x31, 0x00, 0xab, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, // 0.1.............
	0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x08, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, // ................
	0x02, 0x02, 0x08, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x03, 0x08, 0x0f, // ................
	0x80, 0x03, 0x00, 0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t fs_clear3_dx11[557] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0x04, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xd5, 0x4f, 0xed, 0x6d, 0x3f, 0x90, 0xd6, // .....DXBC.O.m?..
	0xbb, 0x53, 0x7b, 0xdc, 0x55, 0x0b, 0xda, 0x6f, 0x86, 0x01, 0x00, 0x00, 0x00, 0x04, 0x02, 0x00, // .S{.U..o........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x54, 0x01, 0x00, // .....0.......T..
	0x00, 0x88, 0x01, 0x00, 0x00, 0x41, 0x6f, 0x6e, 0x39, 0x68, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .....Aon9h...h..
	0x00, 0x00, 0x02, 0xff, 0xff, 0x38, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x24, // .....8...0.....$
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x30, // ...0...0...$...0
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, // ................
	0xff, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, // ................
	0x02, 0x01, 0x08, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x02, 0x08, 0x0f, // ................
	0x80, 0x02, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x03, 0x08, 0x0f, 0x80, 0x03, 0x00, 0xe4, // ................
	0xa0, 0xff, 0xff, 0x00, 0x00, 0x53, 0x48, 0x44, 0x52, 0xac, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .....SHDR....@..
	0x00, 0x2b, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .+...Y...F. ....
	0x00, 0x04, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....e.... .....
	0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .e.... ......e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, // .. ......e.... .
	0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....6.... .....
	0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .F. .........6..
	0x06, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .. ......F. ....
	0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, // .....6.... .....
	0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .F. .........6..
	0x06, 0xf2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .. ......F. ....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, // .....>...ISGN,..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4f, 0x53, 0x47, // .SV_POSITION.OSG
	0x4e, 0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // Nt...........h..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....h..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .............h..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....h..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, // .............SV_
	0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x00, 0x00, 0x80, 0x00,                   // TARGET.......
};
static const uint8_t fs_clear3_mtl[734] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0xb8, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, // .....using names
	0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, // pace metal;.stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ct xlatMtlShader
	0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // Input {.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // utput {.  float4
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x20, 0x5b, //  gl_FragData_0 [
	0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, // [color(0)]];.  f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // loat4 gl_FragDat
	0x61, 0x5f, 0x31, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x31, 0x29, 0x5d, 0x5d, // a_1 [[color(1)]]
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, // ;.  float4 gl_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // agData_2 [[color
	0x28, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // (2)]];.  float4 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x33, 0x20, 0x5b, 0x5b, // gl_FragData_3 [[
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x33, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, // color(3)]];.};.s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // truct xlatMtlSha
	0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, // derUniform {.  f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, // loat4 bgfx_clear
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, // _color[8];.};.fr
	0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, // agment xlatMtlSh
	0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // aderOutput xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // tlMain (xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // haderInput _mtl_
	0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, // i [[stage_in]], 
	0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // constant xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, // ShaderUniform& _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, // mtl_u [[buffer(0
	0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // )]]).{.  xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, // ShaderOutput _mt
	0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, // l_o;.  _mtl_o.gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, // _FragData_0 = _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, // tl_u.bgfx_clear_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // color[0];.  _mtl
	0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x31, // _o.gl_FragData_1
	0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, //  = _mtl_u.bgfx_c
	0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, // lear_color[1];. 
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, //  _mtl_o.gl_FragD
	0x61, 0x74, 0x61, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, // ata_2 = _mtl_u.b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, // gfx_clear_color[
	0x32, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, // 2];.  _mtl_o.gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, // FragData_3 = _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, // l_u.bgfx_clear_c
	0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // olor[3];.  retur
	0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // n _mtl_o;.}...
};
extern const uint8_t* fs_clear3_pssl;
extern const uint32_t fs_clear3_pssl_size;
