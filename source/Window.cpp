#include <Window.hpp>
#include <stdexcept>


namespace gl {

        // enum WindowType {
        //     static_window,
        //     stretch_window,
        //     scale_window,
        //     dynamic_window
        // };

        // GLFWwindow* window_;
        // WindowType type_;
        // int width, height;
        // int winWidth_, winHeight_;
        // float ratio_

        void Window::framebuffer_size_callback(GLFWwindow* window, int width, int height) {

        }

        Window::Window(int width, int height, WindowType type, int windowWidth,
                int windowHeight, const char* title, void (*key_callback)
                (GLFWwindow* window, int key, int scancode, int action, int mods)) :
            type_(type), width_(width), height_(height), winWidth_(windowWidth), winHeight_(windowHeight)
        {
            if (!winWidth_) winWidth_ = width_;
            if (!winHeight_) winHeight_ = height_;
            window_ = glfwCreateWindow(winWidth_, winHeight_, title, nullptr, nullptr);
            if (window_ == nullptr)
                throw std::runtime_error("Failed To Create GLFW Window");

            glfwMakeContextCurrent(window_);
            glfwSetFramebufferSizeCallback(window_, framebuffer_size_callback);


            if (key_callback)


        }
        
        void Window::scale(int width, int height) {

        }
        void Window::processInput() {

        }
        void Window::swapBuffers() {

        }
        bool Window::shouldClose() {

        }


}