#ifndef WINDOW_H
#define WINDOW_H

#include "SDL.h"

//namespace SDL_Ignacio
//{ 
	class Window
	{
	private:
		SDL_Window* SDL_window;
		float dimensions[2];

	public:

		Window() : dimensions{0} { SDL_window = inicialite(); };

		Window(float _width, float _height) : dimensions{ _width,_height } { SDL_window = inicialite(); };

		void off();

	private:

		SDL_Window* inicialite();
	};
//
//}

#endif
