
## PID Tuning

PID stands for Proportional, Integral and Derivative controller. It is the most basic, simple and widely used controller out of many controllers used for control purpose. PID stands out of the pool of controllers because it is very intuitive in terms of contribution of each of the three terms i.e. P, I and D and how they should be modified to achieve required controller performance. There are different ways to tune the Proportional, Integral and Derivative gains such as Manually, Twiddle algorithm, SGD, Zieglar-Nicolas heuristic etc. However, in the presented work, manual hit and trial method is used for this purpose because it helps in developing intuition about effect of each gain in the controller's performance.  
A short description of Proportional, Integral and Derivative terms along with approach towards deciding the parameters is given below.

### Proportinal Gain(Kp)

Proportional gain, Kp, makes the controller to make a correction that is proportinal to the cross-track error.  
To tune Kp; Ki and Kd are kept zero and Kp is varied. Too large value of Kp will result in uncontrolled oscillations of the vehicle around the reference trajectory and too less a value will result in sluggish response of vehicle causing it to get off track.  
** Proportinal gain, Kp, decides the rise time of response ** 
Hence, the gain Kp is varied untill the vehicle starts to follow the reference with desired timing characteristic. Though the vehicle will have continued oscillation and will also jump out of the track, we have obtained the right value Kp because it is resulting in required time period of oscillation about the reference trajectory.

### Derivative Gain(Kd)

After tuning the proportinal gain, we tune the derivative gain. To tune Kd, we keep Ki to be zero and Kp at it's tuned value. Kd makes the controller to make a correction which is proportional to the rate of change of the cross-track error. ** Derivative gain, Kd, decides the overshoot of response **, in other words by varying Kd, we add damping in our system and thus control the overshoot of vehicle around the reference trajectory.  
Kd is adjusted untill we get the desired damping of oscillatins around the reference.

### Integral Gain(Ki)

Integral gain is required when there is an offset error in our system. When a system has an offset error, PD controller fails to achieve the reference trajectory and settles on offset level off the reference. Integral term solves this problem because it considers the integral of error and adding it in our system will remove the offset error if any.  
Ki is varied untill the vehicle tracks the center of the road properly.
