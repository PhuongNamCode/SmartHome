#ifndef VIDEOVIEW_HPP
#define VIDEOVIEW_HPP

#include <gui_generated/video_screen/VideoViewBase.hpp>
#include <gui/video_screen/VideoPresenter.hpp>

class VideoView : public VideoViewBase
{
public:
    VideoView();
    virtual ~VideoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // VIDEOVIEW_HPP
