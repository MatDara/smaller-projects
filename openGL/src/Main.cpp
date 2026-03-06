#include "config.h"

int main() {
    std::cout << "Hello World!" << std::endl;

    GLFWwindow* window;

    if(!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(800, 600, "Hello World", NULL, NULL);

    //glfwClearColor(0.2f, 0.3f, 0.3f, 1.0f); // needs glad

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        //glfwSwapBuffers(window);
    }
    
    glfwTerminate();
    return 0;
}