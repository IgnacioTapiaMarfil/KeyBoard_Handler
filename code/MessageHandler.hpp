#ifndef MESSAGEHANDLER_H
#define MESSAGEHANDLER_H

#include "Message.hpp"

class MessageHandler
{
public:
    virtual void handle_message(const Message& message) = 0;
};

#endif
