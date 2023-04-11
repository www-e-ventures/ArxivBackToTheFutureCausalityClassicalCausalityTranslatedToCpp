// Causality.h
#ifndef CAUSALITY_H
#define CAUSALITY_H

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
