#include "InputTask.hpp"

void InputTask::event_loop()
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            dispatcher.add_message(Message("system", "quit"));
        }
        else if (event.type == SDL_KEYDOWN)
        {
            handle_keydown(event.key);
        }
        else if (event.type == SDL_MOUSEBUTTONDOWN)
        {
            handle_mouse(event.button);
        }
    }
}

void InputTask::handle_keydown(const SDL_KeyboardEvent& _key_event)
{
    switch (_key_event.keysym.sym)
    {
        case SDLK_a:
            dispatcher.add_message(Message("gameplay-input", "move left"));
            break;
        case SDLK_d:
            dispatcher.add_message(Message("gameplay-input", "move right"));
            break;
        case SDLK_w:
            dispatcher.add_message(Message("gameplay-input", "move up"));
            break;
        case SDLK_s:
            dispatcher.add_message(Message("gameplay-input", "move down"));
            break;
        case SDLK_ESCAPE:
            dispatcher.add_message(Message("system", "quit"));
            break;
    }
}

void InputTask::handle_mouse(const SDL_MouseButtonEvent& _button_event)
{
    switch (_button_event.button)
    {
        case SDL_BUTTON_LEFT:
            dispatcher.add_message(Message("gameplay-input", "left click"));
            break;
        case SDL_BUTTON_RIGHT:
            dispatcher.add_message(Message("gameplay-input", "right click"));
            break;
    }
}