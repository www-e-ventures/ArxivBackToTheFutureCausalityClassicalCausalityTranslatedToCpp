// Signal.h
#ifndef SIGNAL_H
#define SIGNAL_H
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
class Signal {
public:
    Signal(double velocity, double distance);
    double getTravelTime() const;
private:
    double velocity;
    double distance;
};

#endif // SIGNAL_H
