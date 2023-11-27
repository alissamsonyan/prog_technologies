#include "Publisher.hpp"
#include "ConcreteSubscribers.hpp"

int main() {
    Publisher publisher;

    ConcreteSubscribers subscriber1;
    ConcreteSubscribers subscriber2;
    ConcreteSubscribers subscriber3;

    publisher.subscribe(&subscriber1);
    publisher.subscribe(&subscriber2);
    publisher.subscribe(&subscriber3);
    publisher.mainBusinessLogic();
    publisher.unsubscribe(&subscriber1);
    publisher.unsubscribe(&subscriber2);

    return 0;
}
