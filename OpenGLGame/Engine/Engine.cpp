#include "Engine.h"
#include "Shaders.h"
bool Engine::isRunning()
{
    return !glfwWindowShouldClose(window);
}

bool Engine::InitWindow(const char* title, int width, int height)
{
    if (!glfwInit())
    {
        std::cerr << "[ERROR]: Failed to initialize window" << std::endl;
        return false;
    }

    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);

    window = glfwCreateWindow(width, height, title, NULL, NULL);

    if (window == NULL)
    {
        std::cerr << "[ERROR]: Failed to initialize window" << std::endl;
        return false;
    }

    glfwMakeContextCurrent(window);

    glewInit();

    int p_width, p_height;
    glfwGetFramebufferSize(window, &p_width, &p_height);
    glViewport(0, 0, p_width, p_height);

    return true;
}

void Engine::StartUpdate()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
    
}

void Engine::FinishUpdate()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}