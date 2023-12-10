#ifndef LIGHT_ON_COMMAND_HPP
#define LIGHT_ON_COMMAND_HPP
#include "ICommand.hpp"

class LightOnCommand : public ICommand {
public:
    void execute() override ;
};

 
#endif //LIGHT_ON_COMMAND_HPP