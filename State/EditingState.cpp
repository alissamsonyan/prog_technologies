#include "EditingState.hpp"
#include "EditorContext.hpp"
#include<iostream>

void EditingState::handle (EditorContext& context){
    std::cout <<"Handling request in EditingState"<<std::endl;
}
void EditingState::typeText(EditorContext& context ,const String& text){
    context.setText(text);
    std::cout << "Typed Text: "<<text<<std::endl;

}
void EditingState::save(EditorContext& context){

    context.saveDocument();
    std::cout<<"Document Saved "<<std::endl;
}
void EditingState::print(EditorContext& context){

std::cout<<"Can't print while in editing mode"<<std::endl;

}