// Causality.cpp
#include "../include/Causality.h"
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
Causality::Causality(const Signal& outSignal, const Signal& returnSignal)
        : outSignal(outSignal), returnSignal(returnSignal) {}

double Causality::getRoundTripTime() const {
    return outSignal.getTravelTime() + returnSignal.getTravelTime();
}
