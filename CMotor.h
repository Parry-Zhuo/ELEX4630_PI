/**
 * @brief Brief description of the class.
 *
 * Detailed explanation of the class, its role, responsibilities, and behavior.
 PSEUDO CODE

 So we have 2 pins. which drive the motors. 1.2A for maximum load(GPT)

 1. ALLOCATE 2 GPIO PINS FOR DIRECTION- denoted _pinA and _pinB
 2. ALLOCATE 1 PIN FOR PWM - FOR SPEED - attach to enable pin
 */

class CMotor
{
public:
    /*Initialization of variables.*/
    int _pin1A,_pin2A,_pin1Y,_pin2Y;///y- outputM1, a -- inputM1'
    int _pinPWM1;
    int _pin4A,_pin3A,_pin4Y,_pin3Y;///y- outputM2, a -- inputM2
    int _pinPWM2;

	CMotor();
	~CMotor();
	void set_pwm_left(int val);
	void set_pwm_right(int val);
	int get_pwm_left();
	int get_pwm_right();
	void stop();
	void forward(float time);
	void backward(float time);
	void left(float time);
	void right(float time);
};
