#include "EditorContext.hpp"
#include"EditingState.hpp"
#include"ViewingState.hpp"
#include<iostream>

EditorContext::EditorContext(): state(nullptr){}

EditorContext::~EditorContext(){

    if (state)
        delete state;
}

void EditorContext::setState(IState* newState){

if (state)
        delete state;

    state=newState;
}

void EditorContext::handleRequest(){

if (state)
        state->handle(*this);
else std::cout<<"No state set in the context"<<std::endl;
}

void EditorContext::typetext(const String& text) {
    if (state) {
        dynamic_cast<EditingState*>(state)->typeText(*this, text);
    }
}

void EditorContext::saveDocument() {
    if (state) {
        dynamic_cast<EditingState*>(state)->save(*this);
    }
}

void EditorContext::printDocument() {
    if (state) {
        dynamic_cast<ViewingState*>(state)->print(*this);
    }
}

void EditorContext::setText(const String& text) {
    documentText = text;
    std::cout << "Document text set to: " << text << std::endl;
}