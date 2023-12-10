#ifndef EDITOR_CONTEXT_HPP
#define EDITOR_CONTEXT_HPP
#include "IState.hpp"
#include<string>
 class EditorContext {

private:
     IState * state ;
     String documentText;

public:
     EditorContext();
    ~EditorContext();

    void setState(IState* newState);
    void handleRequest();
    void typetext(const String& text);
    void saveDocument();
    void printDocument();
    void setText(const String& text);

 };


#endif //EDITOR_CONTEXT_HPP
