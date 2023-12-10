#ifndef I_STATE_HPP
#define I_STATE_HPP
#include <istream>
using String=std::string;

  class EditorContext; 


class IState {

public:
 virtual ~IState()=default;
 virtual void handle (EditorContext& context ) = 0;
 virtual void typetext(EditorContext& context, const String& text);
 
};

#endif //I_STATE_HPP