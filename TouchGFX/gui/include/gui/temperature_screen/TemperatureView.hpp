#ifndef TEMPERATUREVIEW_HPP
#define TEMPERATUREVIEW_HPP

#include <gui_generated/temperature_screen/TemperatureViewBase.hpp>
#include <gui/temperature_screen/TemperaturePresenter.hpp>

class TemperatureView : public TemperatureViewBase
{
public:
    TemperatureView();
    virtual ~TemperatureView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPERATUREVIEW_HPP
