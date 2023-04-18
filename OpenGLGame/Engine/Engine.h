#pragma once

#pragma comment(lib, "opengl32.lib")

#include<iostream>
#include <vector>	
#include <string>
#include <fstream>
#include<GL/glew.h>
#include<GLFW/glfw3.h>

class Engine
{
public:
	bool InitWindow(const char* title, int width, int height);

	void StartUpdate();
	void FinishUpdate();

	bool isRunning();
protected:
	
	GLFWwindow* window;
	unsigned int loadShader(std::string vertexShader, std::string fragmentShader);

};

