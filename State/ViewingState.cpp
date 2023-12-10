#include "ViewingState.hpp"
#include "EditorContext.hpp"
#include <iostream>

void ViewingState::handle(EditorContext& context) {
    std::cout << "Handling request in ViewingState." << std::endl;
   
}
void ViewingState::print(EditorContext& context) {
    context.printDocument();
    std::cout << "Document printed." << std::endl;
}