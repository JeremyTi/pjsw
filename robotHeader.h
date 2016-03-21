//cpu clockspeed
#define F_CPU 8000000 //Base: 8.00MHz  - DO NOT CHANGE! (Volgens blackboard)

//bit macros
#define bitValue(x)	(1 << x)
#define setBit(P,B)	(P |= bitValue(B))
#define clearBit(P,B)	(P &= ~bitValue(B))
#define toggleBit(P,B)	(P ^= bitValue(B))

// I/O PORT pin definitions (bron: http://www.benhup.com/?mf=eduntech&sf=rp6)
// These definitions simplify reading and understanding the source code.
// Definitions taken from: RP6Lib\RP6base\RP6RobotBase.h
// Hints for DDRx and PORTx Registers:
// DDRxy = 0 and PORTxy = 0 ==> Input without internal Pullup
// DDRxy = 0 and PORTxy = 1 ==> Input with internal Pullup
// DDRxy = 1 and PORTxy = 0 ==> Output low
// DDRxy = 1 and PORTxy = 1 ==> Output high
// "=1" indicates that the appropriate bit is set.

// PORTA
#define UBAT		(1 << PINA7) // ADC7 (Input); Battery current
#define MCURRENT_L 	(1 << PINA6) // ADC6 (Input); Motor current left
#define MCURRENT_R 	(1 << PINA5) // ADC5 (Input); Motor current right
#define E_INT1 		(1 << PINA4) // INT1 (input per default... can be output)
#define LS_L 		(1 << PINA3) // ADC3 (Input); Light sensor left
#define LS_R 		(1 << PINA2) // ADC2 (Input); Light sensor right
#define ADC1 		(1 << PINA1) // ADC1 (Input); Free A/D channel
#define ADC0 		(1 << PINA0) // ADC0 (Input); Free A/D channel
// ---------------------------------------------------
// PORTB
#define SL4 		(1 << PINB7) // Output; Left LED1 green
#define ACS_L 		(1 << PINB6) // Output; Anti collision left
#define START 		(1 << PINB5) // Input
#define PWRON 		(1 << PINB4) // Output; Must be 1, else ACS won't work!
#define ACS_PWRH 	(1 << PINB3) // Output; Regulate short/med/long ACS sensing
#define ACS 		(1 << PINB2) // INT2 (Input); ACS interrupt
#define SL5 		(1 << PINB1) // Output; Left LED2 red
#define SL6 		(1 << PINB0) // Output; Left LED3 red and left bumper
// ---------------------------------------------------
// PORTC
#define ACS_R 		(1 << PINC7) // Output; Anti collision right
#define SL3 		(1 << PINC6) // Output; Right LED3 red and right bumper
#define SL2 		(1 << PINC5) // Output; Right LED2 red
#define SL1 		(1 << PINC4) // Output; Right LED1 green
#define DIR_R 		(1 << PINC3) // Output; Motor direction right; 0=drive;1=reverse
#define DIR_L 		(1 << PINC2) // Output; Motor direction left; 0=drive;1=reverse
#define SDA 		(1 << PINC1) // I2C Data (I/O)
#define SCL 		(1 << PINC0) // I2C Clock (Output (Master), Input (Slave))
// ---------------------------------------------------
// PORTD
#define IRCOMM		(1 << PIND7) // Output; DO NOT USE THIS PIN BY YOURSELF!
#define ACS_PWR		(1 << PIND6) // Output; Regulate short/med/long ACS sensing
#define MOTOR_R		(1 << PIND5) // PWM Output (OC1A); Right motor on (1)/off (0)
#define MOTOR_L		(1 << PIND4) // PWM Output (OC1B); Left motor on (1)/off (0)
#define ENC_R		(1 << PIND3) // INT1 (Input); Wheel encoder_R (revolution count)
#define ENC_L		(1 << PIND2) // INT0 (Input); Wheel encoder_L (revolution count)
#define TX		(1 << PIND1) // USART TX (Output)
#define RX		(1 << PIND0) // USART RX (Input)
