#include "singleton.hpp"

static Singleton* instance = nullptr;

Singleton::Singleton() {
    
}

Singleton& Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return *instance; 
}

