#include"RemoteControl.hpp"

void RemoteControl::setCommand(ICommand* cmd) {
        command = cmd;
    }

void RemoteControl::pressButton(){

    command->execute();
}
    