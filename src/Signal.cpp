// Signal.cpp
#include "../include/Signal.h"

Signal::Signal(double velocity, double distance)
        : velocity(velocity), distance(distance) {}

double Signal::getTravelTime() const {
    return distance / velocity;
}
