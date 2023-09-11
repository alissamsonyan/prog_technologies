#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton {
public:
    static Singleton& getInstance();

private:
    Singleton();

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    
    
};



#endif // SINGLETON_HPP
