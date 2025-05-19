#include "MessageDispatcher.hpp"
#include <iostream>

void MessageDispatcher::add_listener(MessageHandler* _listener)
{
    listeners.push_back(_listener);
}

void MessageDispatcher::add_message(const Message& _message)
{
    *messagePool.Get() = _message;
    std::cout << messagePool.getPool().size() << std::endl;
}

void MessageDispatcher::process_messages()
{
    for (auto& item : messagePool.getPool())
    {
        if (item.active)
        {
            for (auto& listener : listeners)
            {
                listener->handle_message(item.message);
            }
            messagePool.Release(&item.message);
        }
    }
}
