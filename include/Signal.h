// Signal.h
#ifndef SIGNAL_H
#define SIGNAL_H

class Signal {
public:
    Signal(double velocity, double distance);
    double getTravelTime() const;
private:
    double velocity;
    double distance;
};

#endif // SIGNAL_H
