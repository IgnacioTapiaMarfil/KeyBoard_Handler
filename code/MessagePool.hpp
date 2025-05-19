#ifndef MESSAGEPOOL_H
#define MESSAGEPOOL_H

#include "Message.hpp"
#include "SDL.h"
#include <vector>

template<typename T>
struct PooledMessage {
    T message;
    bool active = false;
};



template<typename T>
class MessagePool
{

private:
    std::vector<PooledMessage<T>> pool;

public:

    MessagePool() {};

    std::vector<PooledMessage<T>>& getPool() { return pool; }

    T* Get() 
    {
        for (auto& item : pool) 
        {
            if (!item.active) 
            {
                item.active = true;
                return &item.message;
            }
        }
        pool.emplace_back();
        pool.back().active = true;
        return &pool.back().message;
    }

    void Release(T* obj) 
    {
        for (auto& item : pool) 
        {
            if (&item.message == obj) 
            {
                item.active = false;
                return;
            }
        }
    }
};


#endif // !MESSAGEPOOL_H

