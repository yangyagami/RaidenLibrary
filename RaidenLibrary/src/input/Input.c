#include "Input.h"

int Raiden_Input_keyDown(int keycode) {
	int v = 0;
	if (glfwGetKey(Raiden_window.glfwWindow, keycode) == GLFW_PRESS) {
		v = 1;
	}
	return v;
}
