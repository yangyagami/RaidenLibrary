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

	while(Raiden_Window_run()) {
		time = Raiden_getTime();
		dt = time - lastTime;
		lastTime = time;

		//begin render
		Raiden_Renderer_begin();
		{
			Raiden_Renderer_clearColor(&color);

			for (int i = 0; i < 100; i++) {
				for (int j = 0; j < 100; j++) {
					Vec2 pos = { i * 31.0f, j * 31.0f };
					Vec2 size = { 30.0f, 30.0f };
					Vec4 color = {1.0f, 0.8f, 1.0f, 1.0f};
					Raiden_Renderer_drawRect(&pos, &size, &color);
				}
			}
		}
		Raiden_Renderer_end();

		printf("%.2f\n", 1.0f / dt);
	}

	Raiden_shutdown();
	return 0;
}
