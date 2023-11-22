#include "TV.hpp"

Tv::Tv() : enabled(false), volume(50), channel(1) {}

bool Tv::isEnabled() const {
    return enabled;
}

void Tv::enable() {
    enabled = true;
    std::cout<<"Tv is enabled"<<std::endl;
}

void Tv::disable() {
    enabled = false;
    std::cout<<"Tv is disabled"<<std::endl;
}

int Tv::getVolume() const {
    std::cout<<"Tv's volume is "<<volume<<std::endl;
    return 0;
}

void Tv::setVolume(int percent) {
    volume = percent;
    std::cout<<"Tv's volume is setted to  "<<volume<<"%"<<std::endl;
   
}

int Tv::getChannel() const {
    std::cout<<"Tv's channel is "<<channel<<std::endl;
     return 0;
}

void Tv::setChannel(int ch) {
   std::cout<<"Tv's channel is setted to  "<<channel<<std::endl;
}
