#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1105);
    disable_servos();
    
    motor(0,40);
    motor(3,40);
    msleep(10000);
    
    motor(0,50);
    motor(3,10);
    msleep(6000);
    
    motor(0,60);
    motor(3,60);
    msleep(6000);
    
    motor(0,40);
    motor(3,40);
    msleep(1000);
    
    motor(0,60);
    motor(3,30);
    msleep(6000);
    
    motor(0,60);
    motor(3,60);
    msleep(11000);
    return 0;
}
