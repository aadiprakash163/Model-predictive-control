#include "PID.h"

using namespace std;




/*
* TODO: Complete the PID class.
*/

PID::PID() {}


PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	/* 
	Initialize filter with provided values
	*/

	p_error = 0;
	d_error = 0;
	i_error = 0;

	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;

	last_cte = 0;
}

void PID::UpdateError(double cte) {
	/* 
	Calculate errors for Propotional, Derivative and Integral controllers
	*/

	//  Error for proportional controller 
	p_error = cte;

	// Error for derivative controller
	d_error = cte - last_cte;
	last_cte = cte;

	// Error for integral control
	i_error += cte;
}

double PID::TotalError() {

	// return total error
	double total_error = Kp*p_error + Ki* i_error + Kd*d_error;
	if (total_error > 1.0) total_error = 1.0 ;
	if (total_error < -1.0) total_error = -1.0 ;

	return total_error;
}

