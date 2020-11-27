#include "renderer/Renderer.h"
#include "core/Window.h"

int Raiden_initLibrary(int width, int height, const char *title) {
	int v = 1;
	if (!Raiden_Window_init(width, height, title)) {
		v = 0;
	} else {
		Raiden_Renderer_init();
	}
	
	return v;
}

void Raiden_shutdown() {
	Raiden_Renderer_shutdown();
}
