#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain Brain;

// VEXcode device constructors
motor leftF = motor(PORT14, ratio6_1, true);
motor leftM = motor(PORT19, ratio6_1, true); // changed to port 16 from port 4
motor leftR = motor(PORT12, ratio6_1, true);
motor_group left = motor_group(leftF, leftM, leftR);

motor rightF = motor(PORT20, ratio6_1, false);
motor rightM = motor(PORT1, ratio6_1, false);
motor rightR = motor(PORT11, ratio6_1, false);
motor_group right = motor_group(rightF, rightM, rightR);

motor hook = motor(PORT4, ratio6_1, true);
motor intake = motor(PORT9, ratio6_1, true);
motor_group intaking = motor_group(hook, intake);
motor wallstake = motor(PORT21, ratio6_1, true);

inertial iner = inertial(PORT10);
color ColorSensor = color(PORT18);
digital_out pneums = digital_out(Brain.ThreeWirePort.H);
digital_out pneums2 = digital_out(Brain.ThreeWirePort.F);
digital_out sweepPneum = digital_out(Brain.ThreeWirePort.B);
controller Controller1 = controller(primary);

// VEXcode generated functions

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void)
{
  // nothing to initialize
}

// Function to detect color using a given sensor
