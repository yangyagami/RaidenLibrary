#ifndef TEXTURE_H
#define TEXTURE_H

typedef struct {
    unsigned int id;
    int width;
    int height;
}Texture;

Texture Raiden_Texture_createDefaultTexture();
Texture Raiden_Texture_createTexture(const char *path);
void bindTexture(Texture *texture, int location, int index);

#endif