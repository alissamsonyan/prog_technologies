#include "RemoteControl.hpp"

RemoteControl::RemoteControl(IDevice* dev) : device(dev) {}

void RemoteControl::togglePower() {
    if (device->isEnabled()) {
        device->disable();
        std::cout<<"Device is disabled"<<std::endl;
    } else {
        device->enable();
    std::cout<<"Device is enabled"<<std::endl;
    }
}

void RemoteControl::volumeDown() {
 //   device->setVolume(device->getVolume() - 10);
    std::cout<<"Volume is downed"<<std::endl;
}

void RemoteControl::volumeUp() {
 //   device->setVolume(device->getVolume() + 10);
    std::cout<<"Volume is up"<<std::endl;
}

void RemoteControl::channelDown() {
//    device->setChannel(device->getChannel() - 1);
    std::cout<<"Channel is downed"<<std::endl;
}

void RemoteControl::channelUp() {
 //   device->setChannel(device->getChannel() + 1);
    std::cout<<"Channel is uped"<<std::endl;
}
