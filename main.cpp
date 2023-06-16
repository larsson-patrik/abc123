#include "Recorder.hpp"  // Got help with this one, should be fine
#include "TrackerWrapper.hpp"
#include <utility>

Recorder recorderFactory()
{
    TrackerWrapper myTracker(3);
    myTracker.setExposure(150);
    return Recorder{std::move(myTracker)};  // Ctor declared as: Recorder::Recorder(TrackerWrapper tracker);
}

int main()
{
    Recorder myRecorder = recorderFactory();
    myRecorder.record();
}