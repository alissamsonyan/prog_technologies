#ifndef LIGHT_OFF_COMMAND_HPP
#define LIGHT_OFF_COMMAND_HPP
#include "ICommand.hpp"

class LightOffCommand : public ICommand {
public:
    void execute() override ;
};

 
#endif //LIGHT_OFF_COMMAND_HPP