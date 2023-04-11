// Signal.cpp
#include "../include/Signal.h"
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
Signal::Signal(double velocity, double distance)
        : velocity(velocity), distance(distance) {}

double Signal::getTravelTime() const {
    return distance / velocity;
}
