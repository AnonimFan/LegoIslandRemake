#ifdef _WIN32
	#define APIENTRY __stdcall
#endif

#include <glad/glad.h>
#include <iostream>
#include "Render.hpp"
#include <GLFW/glfw3.h>
#include "gltypes.hpp"
#include "Alert.hpp"


int framedelta;
int* fps;

void SetFrameDelta(int msdelta)
{
	framedelta = msdelta;
	FrameRate(fps, framedelta);
}

void FrameRate(int* fps, int fdelta)
{
#define FRAMEDELTA_SET
	
}

GLRender::GLRender()
	:window(nullptr)
{
	float fdelta = 2.0F;
	framedelta = 10 / 5 * fdelta;
	glfwInit();

	window = glfwCreateWindow(640, 480, "LEGO Island", NULL, NULL);

	SetFrameDelta(framedelta);

	if (!window)
	{
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		AlertError("Failed to initalize GLAD", true, true);
	}


	bool windowifclose = glfwWindowShouldClose(window);

	while (!windowifclose) {
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	} if (windowifclose) { glfwTerminate(); system("exit"); }
}

D3DRender::D3DRender()
{

}
