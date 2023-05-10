#include <gui/lightcontrol_screen/LightControlView.hpp>
#include <gui/lightcontrol_screen/LightControlPresenter.hpp>

LightControlPresenter::LightControlPresenter(LightControlView& v)
    : view(v)
{

}

void LightControlPresenter::activate()
{

}

void LightControlPresenter::deactivate()
{

}

void LightControlPresenter::swButtonHwLedToggle()
{
	model->toggleHwLed();
}
void LightControlPresenter::swButtonSwLedToggle()
{
	view.toggleSwLed();
}
void LightControlPresenter::userButtonPressed()
{
	view.toggleSwLed();
}


