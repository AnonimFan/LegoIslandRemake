#pragma once
#include <GLFW/glfw3.h>
#include <d3d9.h>



class GLRender
{
public:
	GLRender();
private:
	GLFWwindow* window;
};

class D3DRender
{
public:
	D3DRender();
};

void SetFrameDelta(int msdelta);

void FrameRate(int* fps, int fdelta);