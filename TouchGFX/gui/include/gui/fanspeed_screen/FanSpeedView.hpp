#ifndef FANSPEEDVIEW_HPP
#define FANSPEEDVIEW_HPP

#include <gui_generated/fanspeed_screen/FanSpeedViewBase.hpp>
#include <gui/fanspeed_screen/FanSpeedPresenter.hpp>

class FanSpeedView : public FanSpeedViewBase
{
public:
    FanSpeedView();
    virtual ~FanSpeedView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FANSPEEDVIEW_HPP
