#ifndef LIGHTCONTROLVIEW_HPP
#define LIGHTCONTROLVIEW_HPP

#include <gui_generated/lightcontrol_screen/LightControlViewBase.hpp>
#include <gui/lightcontrol_screen/LightControlPresenter.hpp>

class LightControlView : public LightControlViewBase
{
public:
    LightControlView();
    virtual ~LightControlView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void toggleSwLed();
protected:
};

#endif // LIGHTCONTROLVIEW_HPP
