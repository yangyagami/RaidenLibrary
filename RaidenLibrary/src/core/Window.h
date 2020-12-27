#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>

typedef struct {
	int width;
	int height;
	const char *title;
	GLFWwindow *glfwWindow;
}WinStruct;

extern WinStruct Raiden_window;

int Raiden_Window_init(int width, int height, const char *title);
int Raiden_Window_run();
int getWinWidth();
int getWinHeight();
void Raiden_Window_update();
void Raiden_Window_terminate();

#endif
