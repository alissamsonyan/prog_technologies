#ifndef EDITING_STATE_HPP
#define EDITING_STATE_HPP

#include  "IState.hpp"

#include <string>

using String=std::string;


class EditingState: public IState {
public:
 void handle (EditorContext& context) override;
 void typeText(EditorContext& context,const String& text);
 void save (EditorContext& context);
 void print (EditorContext& context);
};
#endif //EDITING_STATE_HPP