#ifndef GAMEPLAYINPUTLISTENER_H
#define GAMEPLAYINPUTLISTENER_H

#include "Message.hpp"
#include "MessageHandler.hpp"
#include <iostream>

class InputListener : public MessageHandler
{
public:
	void handle_message(const Message& _message) override
	{
		std::cout << "Input recived: " << _message.type << ", " << _message.content << std::endl;
	}
};

#endif
