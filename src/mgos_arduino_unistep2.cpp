#include "mgos_arduino_unistep2.h"


Unistep2 *mgos_Unistep2_create(int _p1, int _p2, int _p3, int _p4, int _steps, unsigned long _stepdelay) {
    return new Unistep2(_p1, _p2, _p3, _p4, _steps, _stepdelay);
}


bool mgos_Unistep2_run(Unistep2 *unistep) {
    if (unistep == nullptr) return false;

    return unistep->run();
}

void mgos_Unistep2_move(Unistep2 *unistep, int steps) {
    if (unistep == nullptr) return;

    unistep->move(steps);
}

void mgos_Unistep2_moveTo(Unistep2 *unistep, unsigned int pos) {
    if (unistep == nullptr) return;

    unistep->moveTo(pos);
}

int mgos_Unistep2_currentPosition(Unistep2 *unistep) {
    if (unistep == nullptr) return 0;

    return unistep->currentPosition();
}

int mgos_Unistep2_stepsToGo(Unistep2 *unistep) {
    if (unistep == nullptr) return 0;

    return unistep->stepsToGo();
}

void mgos_Unistep2_stop(Unistep2 *unistep) {
    if (unistep == nullptr) return;

    unistep->stop();
}