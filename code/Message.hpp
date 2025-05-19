#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

class Message
{
public:
	std::string type;
	std::string content;

	Message() = default;

	Message(const std::string& _type, const std::string& _content)
		: type(_type), content(_content) {}

};

#endif

