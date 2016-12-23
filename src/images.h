#ifndef IMAGES_H
#define IMAGES_H

#include <lib/ce/graphx.h>

extern gfx_image_t mario_0_buffer_left[27*27 + 2];
extern gfx_image_t mario_1_buffer_left[27*27 + 2];
extern gfx_image_t mario_0_buffer_right[27*27 + 2];
extern gfx_image_t mario_1_buffer_right[27*27 + 2];
 
extern gfx_image_t *mario_0_small;
extern gfx_image_t *mario_1_small;
extern gfx_image_t *mario_0_big;
extern gfx_image_t *mario_1_big;
extern gfx_image_t *mario_0_fire;
extern gfx_image_t *mario_1_fire;
extern gfx_image_t *mario_crouch_big;
extern gfx_image_t *mario_crouch_fire;
extern gfx_image_t *mario_fail;
extern gfx_image_t *mushroom;
extern gfx_image_t *fire_flower;
extern gfx_image_t *goomba_0;
extern gfx_image_t *goomba_1;
extern gfx_image_t *goomba_flat;
extern gfx_image_t *koopa_red_right_0;
extern gfx_image_t *koopa_red_right_1;
extern gfx_image_t *koopa_red_left_0;
extern gfx_image_t *koopa_red_left_1;
extern gfx_image_t *koopa_red_shell_0;
extern gfx_image_t *koopa_red_shell_1;
extern gfx_image_t *koopa_green_right_0;
extern gfx_image_t *koopa_green_right_1;
extern gfx_image_t *koopa_green_left_0;
extern gfx_image_t *koopa_green_left_1;
extern gfx_image_t *koopa_green_shell_0;
extern gfx_image_t *koopa_green_shell_1;
extern gfx_image_t *koopa_bones_right_0;
extern gfx_image_t *koopa_bones_right_1;
extern gfx_image_t *koopa_bones_left_0;
extern gfx_image_t *koopa_bones_left_1;
extern gfx_image_t *koopa_bones_dead_left;
extern gfx_image_t *koopa_bones_dead_right;
extern gfx_image_t *chomper_0;
extern gfx_image_t *chomper_1;
extern gfx_image_t *chomper_fire_down_left;
extern gfx_image_t *chomper_fire_down_right;
extern gfx_image_t *chomper_fire_up_left;
extern gfx_image_t *chomper_fire_up_right;
extern gfx_image_t *chomper_body;
extern gfx_image_t *fire_0;
extern gfx_image_t *fire_1;
extern gfx_image_t *poof_0;
extern gfx_image_t *poof_1;
extern gfx_image_t *flame_fire_up_0;
extern gfx_image_t *flame_fire_up_1;
extern gfx_image_t *flame_fire_down_0;
extern gfx_image_t *flame_fire_down_1;
extern gfx_image_t *thwomp_0;
extern gfx_image_t *boo_left_hide;
extern gfx_image_t *boo_right_hide;
extern gfx_image_t *boo_left;
extern gfx_image_t *boo_right;
extern gfx_image_t *bullet_left;
extern gfx_image_t *bullet_right;
extern gfx_image_t *cannonball_sprite;
extern gfx_image_t *wing_left_0;
extern gfx_image_t *wing_left_1;
extern gfx_image_t *wing_right_0;
extern gfx_image_t *wing_right_1;
extern gfx_image_t *star_0;
extern gfx_image_t *easter_egg_0;
extern gfx_image_t *easter_egg_1;
extern gfx_image_t *mario_lives;
extern gfx_image_t *clock;
extern gfx_image_t *one_up;
extern gfx_image_t *mario_up_small_0;
extern gfx_image_t *mario_up_small_1;
extern gfx_image_t *mario_up_big_0;
extern gfx_image_t *mario_up_big_1;
extern gfx_image_t *mario_up_fire_0;
extern gfx_image_t *mario_up_fire_1;
extern gfx_image_t *fish_left_0;
extern gfx_image_t *fish_left_1;
extern gfx_image_t *fish_right_0;
extern gfx_image_t *fish_right_1;
extern gfx_image_t *mushroom_1up;

extern gfx_image_t *fireball_sprite;
extern gfx_image_t *goomba_sprite;
extern gfx_image_t *chomper_sprite;
extern gfx_image_t *wing_left_sprite;
extern gfx_image_t *wing_right_sprite;
extern gfx_image_t *koopa_red_left_sprite;
extern gfx_image_t *koopa_red_right_sprite;
extern gfx_image_t *koopa_green_left_sprite;
extern gfx_image_t *koopa_green_right_sprite;
extern gfx_image_t *koopa_bones_left_sprite;
extern gfx_image_t *koopa_bones_right_sprite;
extern gfx_image_t *flame_sprite_up;
extern gfx_image_t *flame_sprite_down;
extern gfx_image_t *fish_left_sprite;
extern gfx_image_t *fish_right_sprite;

extern gfx_image_t *mario_right[];
extern gfx_image_t *mario_left[];

void extract_sprites(void);
void extract_tiles(void);

#endif