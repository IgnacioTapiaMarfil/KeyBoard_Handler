#ifndef SCENE_H
#define SCENE_H

#include "Window.hpp"
#include "InputTask.hpp"
#include "Task.hpp"
#include "Kernel.hpp"
#include "MessageDispatcher.hpp"
#include "InputListener.hpp"

//using namespace SDL_Ignacio;
//using namespace messages_ignacio;

class Scene
{
	Window& window;
	InputTask input_task;
	Kernel kernel;
	MessageDispatcher message_dispatcher;

	bool running = false;

public:

	Scene(Window& _window) : window(_window) , input_task(this, message_dispatcher)
	{
		kernel.add_task(input_task);

		InputListener* input_listener = new InputListener();
		message_dispatcher.add_listener(input_listener);
	}
	
	void run();
	void stop();

	Window& get_window() { return window; }

private:

	void update();
};
#endif
