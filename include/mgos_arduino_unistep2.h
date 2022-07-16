#ifndef CS_MOS_LIBS_ARDUINO_UNISTEP2_H_
#define CS_MOS_LIBS_ARDUINO_UNISTEP2_H_

#include "Unistep2.h"

#ifdef __cplusplus
extern "C" {
#endif

Unistep2 *mgos_Unistep2_create(int _p1, int _p2, int _p3, int _p4, int _steps, unsigned long _stepdelay);

bool mgos_Unistep2_run(Unistep2 *unistep2);

void mgos_Unistep2_move(Unistep2 *stepper, int steps);

void mgos_Unistep2_moveTo(Unistep2 *stepper, unsigned int pos);

int mgos_Unistep2_currentPosition(Unistep2 *stepper);

int mgos_Unistep2_stepsToGo(Unistep2 *stepper);

void mgos_Unistep2_stop(Unistep2 *stepper);

#ifdef __cplusplus
}
#endif

#endif /* CS_MOS_LIBS_ARDUINO_UNISTEP2_H_ */