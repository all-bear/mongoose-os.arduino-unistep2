#ifndef CS_MOS_LIBS_ARDUINO_UNISTEP2_H_
#define CS_MOS_LIBS_ARDUINO_UNISTEP2_H_

#include "Unistep2.h"

#ifdef __cplusplus
extern "C" {
#endif

Unistep2 *mgos_Unistep2_create(int _p1, int _p2, int _p3, int _p4, int _steps, unsigned long _stepdelay);

bool mgos_Unistep2_run(Unistep2 *unistep2);

void mgos_Unistep2_move(Stepper *stepper, int steps);

void mgos_Unistep2_moveTo(Stepper *stepper, unsigned int pos);

int mgos_Unistep2_currentPosition(Stepper *stepper);

int mgos_Unistep2_stepsToGo(Stepper *stepper);

void mgos_Unistep2_stop(Stepper *stepper);

#ifdef __cplusplus
}
#endif

#endif /* CS_MOS_LIBS_ARDUINO_UNISTEP2_H_ */