#include <gui/lightcontrol_screen/LightControlView.hpp>

LightControlView::LightControlView()
{

}

void LightControlView::setupScreen()
{
    LightControlViewBase::setupScreen();
}

void LightControlView::tearDownScreen()
{
    LightControlViewBase::tearDownScreen();
}


void LightControlView::toggleSwLed(){
	if(SwLedOn.isVisible())
		{
			SwLedOn.setVisible(false);
			SwLedOff.setVisible(true);
		}
	else
		{
			SwLedOn.setVisible(true);
			SwLedOff.setVisible(false);
		}
	SwLedOn.invalidate();
	SwLedOff.invalidate();
}
