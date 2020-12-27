#ifndef RENDERER_H
#define RENDERER_H

#include "Vec.h"
#include "Texture.h"

void Raiden_Renderer_init();
void Raiden_Renderer_begin();
void Raiden_Renderer_clear();
void Raiden_Renderer_clearColor(Vec4 *color);
void Raiden_Renderer_end();
void Raiden_Renderer_startBatch();
void Raiden_Renderer_reBatch();
void Raiden_Renderer_flush();
void Raiden_Renderer_drawRect(Vec2 *pos, Vec2 *size, Vec4 *color);
void Raiden_Renderer_drawTexture(Texture *texture, Vec2 *pos, Vec2 *size, Vec4 *color);
void Raiden_Renderer_shutdown();

#endif
