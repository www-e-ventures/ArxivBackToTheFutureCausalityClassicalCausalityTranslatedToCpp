// Causality.cpp
#include "../include/Causality.h"

Causality::Causality(const Signal& outSignal, const Signal& returnSignal)
        : outSignal(outSignal), returnSignal(returnSignal) {}

double Causality::getRoundTripTime() const {
    return outSignal.getTravelTime() + returnSignal.getTravelTime();
}
