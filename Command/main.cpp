#include"LightOffCommand.hpp"
#include"LightOnCommand.hpp"
#include"RemoteControl.hpp"

int main() {
    // Create instances of concrete commands
    LightOnCommand lightOn;
    LightOffCommand lightOff;

    // Create the invoker
    RemoteControl remote;

    // Set and execute the "turn light on" command
    remote.setCommand(&lightOn);
    remote.pressButton();

    // Set and execute the "turn light off" command
    remote.setCommand(&lightOff);
    remote.pressButton();

    return 0;
}