// Causality.h
#ifndef CAUSALITY_H
#define CAUSALITY_H
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
#include "Signal.h"

class Causality {
public:
    Causality(const Signal& outSignal, const Signal& returnSignal);
    double getRoundTripTime() const;
private:
    const Signal& outSignal;
    const Signal& returnSignal;
};

#endif // CAUSALITY_H
