#include "AdvancedRemoteControl.hpp"

AdvancedRemoteControl::AdvancedRemoteControl(IDevice* dev) : RemoteControl(dev) {}

void AdvancedRemoteControl::mute() {
  //  device->setVolume(0);
    std::cout<<"Device is muted"<<std::endl;
}
