#ifndef LIGHTCONTROLPRESENTER_HPP
#define LIGHTCONTROLPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class LightControlView;

class LightControlPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    LightControlPresenter(LightControlView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~LightControlPresenter() {};

    void swButtonHwLedToggle();

    void swButtonSwLedToggle();

    void userButtonPressed();

private:
    LightControlPresenter();

    LightControlView& view;
};

#endif // LIGHTCONTROLPRESENTER_HPP
