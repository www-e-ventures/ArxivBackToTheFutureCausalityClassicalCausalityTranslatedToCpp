// main.cpp
#include <iostream>
#include "include/Signal.h"
#include "include/Causality.h"
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
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
