#include "Window.hpp"
#include <iostream>

SDL_Window* Window::inicialite()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "Error al inicializar SDL: " << SDL_GetError() << std::endl;
        return nullptr;
    }


    return SDL_CreateWindow("Keyboard_Handler", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                            dimensions[0], dimensions[1], 0);
}

void Window::off()
{
    if (SDL_window == nullptr)
        return;

    SDL_DestroyWindow(SDL_window);
    SDL_Quit();
}