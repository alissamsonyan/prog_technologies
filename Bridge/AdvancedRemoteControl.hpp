#ifndef ADVANCEDREMOTECONTROL_HPP
#define ADVANCEDREMOTECONTROL_HPP

#include "RemoteControl.hpp"

class AdvancedRemoteControl : public RemoteControl {
public:
    AdvancedRemoteControl(IDevice* dev);
    void mute();
};

#endif // ADVANCEDREMOTECONTROL_HPP
