/******************************
*   author: sheare，yuesong
*   事件型驱动
*
*
******************************/
#pragma once
#include <functional>

class Epoll;
class Channel;
class EventLoop
{
private:
    Epoll *ep;
    bool quit;
public:
    EventLoop();
    ~EventLoop();

    void loop();
    void updateChannel(Channel*);

    void addThread(std::function<void()>);
};

