#include "TV.hpp"
#include "AdvancedRemoteControl.hpp"

int main() {
    Tv myTv;

   RemoteControl basicRemote(&myTv);

    basicRemote.togglePower();
    basicRemote.volumeUp();
    basicRemote.volumeDown();
    basicRemote.channelUp();
    basicRemote.channelDown();

    AdvancedRemoteControl advancedRemote(&myTv);

    advancedRemote.mute();
    advancedRemote.togglePower();

    return 0;
}

