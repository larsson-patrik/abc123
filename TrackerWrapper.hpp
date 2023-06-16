#pragma once

#include "tracker.h" // C API to eye-trackers


class TrackerWrapper {
public:
    TrackerWrapper(int trackerSerialNumber)
    {
        tracker_error_t err = tracker_create(&m_tracker, trackerSerialNumber);
        // TODO: I will implement error handling this afternoon
    }

    ~TrackerWrapper()
    {
        tracker_destroy(m_tracker);
    }

    void setExposure(int timeInUs)
    {
        tracker_set_exposure(m_tracker, timeInUs);
    }

protected:
    Tracker * m_tracker;
};