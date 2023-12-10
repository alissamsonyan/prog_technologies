// main.cpp
#include "EditorContext.hpp"
#include "EditingState.hpp"
#include "ViewingState.hpp"

int main() {
    EditorContext editor;

    // Start in editing mode
    editor.setState(new EditingState);

    // Simulate typing and saving
    editor.typetext("This is a sample document.");
    editor.saveDocument();

    // Switch to viewing mode
    editor.setState(new ViewingState);

    // Simulate printing
    editor.printDocument();

    // Handle a request in the current state
    editor.handleRequest();

    return 0;
}