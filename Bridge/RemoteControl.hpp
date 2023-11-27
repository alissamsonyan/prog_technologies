#ifndef REMOTECONTROL_HPP
#define REMOTECONTROL_HPP

#include "IDevice.hpp"

class RemoteControl {
protected:
    IDevice* device;

public:
    RemoteControl(IDevice* dev);
    void togglePower();
    void volumeDown();
    void volumeUp();
    void channelDown();
    void channelUp();
};

#endif // REMOTECONTROL_HPP
