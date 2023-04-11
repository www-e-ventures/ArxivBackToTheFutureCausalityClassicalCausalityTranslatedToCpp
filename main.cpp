// main.cpp
#include <iostream>
#include "include/Signal.h"
#include "include/Causality.h"

void processCausality(const Causality& causality, double distance) {
    std::cout << "Round trip time for distance " << distance << ": "
              << causality.getRoundTripTime() << std::endl;
}

int main() {
    double distance = 10.0;
    double outVelocity = 5.0;
    double returnVelocity = 7.5;

    Signal outSignal(outVelocity, distance);
    Signal returnSignal(returnVelocity, distance);

    Causality causality(outSignal, returnSignal);

    processCausality(causality, distance);

    return 0;
}
