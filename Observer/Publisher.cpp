#include "Publisher.hpp"

void Publisher::subscribe(Subscribers* subscriber) {
    subscribers.push_back(subscriber);
}

void Publisher::unsubscribe(Subscribers* subscriber) {
    subscribers.erase(std::remove(subscribers.begin(), subscribers.end(), subscriber), subscribers.end());
}

void Publisher::notifySubscribers() {
    for (Subscribers* subscriber : subscribers) {
        subscriber->update(mainState);
    }
}

void Publisher::mainBusinessLogic() {
    mainState = "New state from main business logic";
    notifySubscribers();
}
