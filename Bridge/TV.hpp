#ifndef TV_HPP
#define TV_HPP

#include "IDevice.hpp"

class Tv : public IDevice {
    bool enabled;
    int volume;
    int channel;

public:
    Tv();
    bool isEnabled() const override;
    void enable() override;
    void disable() override;
    int getVolume() const override;
    void setVolume(int percent) override;
    int getChannel() const override;
    void setChannel(int ch) override;
};

#endif // TV_HPP
