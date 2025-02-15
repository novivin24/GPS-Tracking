/** 
  Code to compute PID control - Header File
  Author  : Achmad Syahrul Irwansyah
  Project : GPS Tracking
  For more information contact
  -> email: ach.syahrul99@gmail.com
  Reference :
  - [1]R. C. Dorf and R. H. Bishop, Modern Control Systems. Essex: Pearson, Cop, 2017.
**/

#ifndef PIDIR_H
#define PIDIR_H

#include "math.h"

class pidIr{
    public:
    //constructor - p=proporsional, i=integral, d=differential, Ts=sampling time
    pidIr(float p, float i, float d, float _Ts);

    float compute(float setpoint, float feedback, float max);

    private:
    float error;
    float last_error;
    float output;
    float last_output;
    float Kp;
    float Ki;
    float Kd;
    float Ts;
};

#endif