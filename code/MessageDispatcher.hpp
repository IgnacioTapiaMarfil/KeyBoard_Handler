#ifndef MESSAGEDISPATCHER_H
#define MESSAGEDISPATCHER_H

//#include "Message.hpp"
#include "MessageHandler.hpp"
#include "MessagePool.hpp"
#include <queue>
#include <mutex>
#include <list>

class MessageDispatcher
{
private:
	std::list<MessageHandler*> listeners;
	std::queue<Message> message_queue;

	MessagePool<Message> messagePool;

public:
	void add_listener(MessageHandler* _listener);
	void add_message(const Message& _message);
	void process_messages();

private:

};

#endif
