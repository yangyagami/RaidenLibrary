#include "Texture.h"
#include "stb_image/stb_image.h"
#include "glad/glad.h"

Texture Raiden_Texture_createDefaultTexture() {
    unsigned int id;
    unsigned int data = 0xffffffff;
    
    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &data);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenerateMipmap(0);
    
    Texture texture = { id, 1, 1 };

    return texture;
}

Texture Raiden_Texture_createTexture(const char *path) {
    unsigned int id;
    int width, height, channels;
    unsigned char *data = stbi_load(path, &width, &height, &channels, 0);
    
    int format = 0;

    if (channels == 3) {
        format = GL_RGB;
    } else {
        format = GL_RGBA;
    }

    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenerateMipmap(0);

    Texture texture = { id, width, height };

    stbi_image_free(data);

    return texture;
}

void bindTexture(Texture *texture, int location, int index) {
    glActiveTexture(GL_TEXTURE0 + index);
    glBindTexture(GL_TEXTURE_2D, texture->id);
    glUniform1i(location, index);
}