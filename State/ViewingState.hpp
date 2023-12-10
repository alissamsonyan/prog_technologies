#ifndef VIEWING_STATE_HPP
#define VIEWING_STATE_HPP


#include "IState.hpp"

class ViewingState : public IState {
public:
    void handle(EditorContext& context) override;
    void print(EditorContext& context);
};


#endif // VIEWING_STATE_HPP