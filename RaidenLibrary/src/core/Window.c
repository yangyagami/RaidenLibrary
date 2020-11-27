#include "glad/glad.h"
#include "Window.h"
#include <string.h>

WinStruct Raiden_window;

int Raiden_Window_init(int width, int height, const char *title) {
	int v = 1;

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	Raiden_window.width = width;
	Raiden_window.height = height;
	Raiden_window.title = title;
	Raiden_window.glfwWindow = glfwCreateWindow(800, 600, title, NULL, NULL);

	glfwMakeContextCurrent(Raiden_window.glfwWindow);

	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

	return v;
}

int Raiden_Window_run() {
	return (!glfwWindowShouldClose(Raiden_window.glfwWindow));
}

void Raiden_Window_update() {
	glfwSwapBuffers(Raiden_window.glfwWindow);
	glfwPollEvents();
}

void Raiden_Window_terminate() {
	glfwTerminate();
}
