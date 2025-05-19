#ifndef INPUTTASK_H
#define INPUTTASK_H

#include "Task.hpp"
#include "MessageDispatcher.hpp"
#include <SDL.h>
#include <thread>
#include <iostream>

class InputTask : public Task
{
public:
	MessageDispatcher& dispatcher;

private:
	void event_loop();

	void handle_keydown (const SDL_KeyboardEvent& _key_event);
	void handle_mouse	(const SDL_MouseButtonEvent& _button_event);

public:

	InputTask(Scene* _scene, MessageDispatcher& _dispatcher)
		: Task(_scene), dispatcher(_dispatcher)
	{}

	void update(float delta) override { event_loop(); }
};

#endif
