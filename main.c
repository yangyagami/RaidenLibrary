#include "RaidenLib.h"
#include <stdio.h>

int main() {
	if (!Raiden_initLibrary(800, 600, "hello")) {
		printf("init failed\n");
	}

	float lastTime = 0.0f;
	float time = 0.0f;
	float dt = 0.0f;
	Vec4 color = Raiden_Vec_createVec4(0.5f, 0.5f, 0.5f, 1.0f);
	
	Texture texture = Raiden_Texture_createTexture("res/test.jpg");

	while(Raiden_Window_run()) {
		time = Raiden_getTime();
		dt = time - lastTime;
		lastTime = time;

		//begin render
		Raiden_Renderer_begin();
		{
			Raiden_Renderer_clearColor(&color);
			Vec2 pos = {400.0f, 300.0f};
			Vec2 size = {100.0f, 200.0f};
			Vec4 color = {1.0f, 0.0f, 1.0f, 1.0f};
			Raiden_Renderer_drawTexture(&texture, &pos, &size, &color);
	
		}
		Raiden_Renderer_end();

		printf("%.2f\n", 1.0f / dt);
	}

	Raiden_shutdown();
	return 0;
}
