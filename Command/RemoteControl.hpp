#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include "ICommand.hpp"

class RemoteControl {
private:
    ICommand* command;

public:
    void setCommand(ICommand* cmd);

    void pressButton();
};
 #endif  //REMOTE_CONTROL_HPP