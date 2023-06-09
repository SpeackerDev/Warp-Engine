#include <iostream>
#include <string>

#include "WarpEngine/Common.hpp"
#include "WarpEngine/Engine/Window.hpp"
#include "WarpEngine/Engine/Device.hpp"
#include "WarpEngine/Engine/Swapchain.hpp"

int main(){
    glfwInit();
    glfwVulkanSupported();  
    glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);


    WarpEngine::Window window = WarpEngine::Window("Warp Engine",1280,720);
    WarpEngine::Device device = WarpEngine::Device(window);
  

    while(!glfwWindowShouldClose(window.window)){
        glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}