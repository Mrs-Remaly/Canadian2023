#include <kipr/wombat.h>

#include <stdio.h>
#include <kipr/wombat.h>


int main()
{
    wait_for_light(0);
    
    //approach black line
while (analog (0) <= 3000)
{
    motor (0,100);
    motor (3,40);
}
    ao();
    
    
    enable_servos();
    set_servo_position(0,277);
    set_servo_position(3,565);
    msleep(3000);
    
//follow black line
     while (digital (0) == 0)
 {
   if (analog(0) > 1500)
   {
     motor(0,10);
     motor(3,100);
   }
   else
   {
     motor(3,10);
     motor(0,100);
   }
 }
    ao();
    
    //grab botgal
    motor(0,-20);
    motor(3,-60);
    msleep(950);
    
   ao();
    
   enable_servos();

    set_servo_position(0,750);
    msleep(3000);
    motor(0,10);
    motor(3,40);
    msleep(250);
    
    ao();
    
    enable_servos();
    set_servo_position(3,2000);
    msleep(3000);
    set_servo_position(0,100);
    msleep(3000);

                       
    //back up with botgal
    motor(0,-90);
    motor(3,-50);
    msleep(2000);
    
    //put botgal down
    set_servo_position(0,1732);
    set_servo_position(0,1237);
        msleep(1000);
   
    //Back to black line w/ Botgal
    while (analog (0) <= 3000)
    {
        //left is 3, right is 0
        motor(0,-100);
        motor(3,-50);
    }
     ao();
    
    motor(0,50);
    motor(3,-50);
    msleep(2000);
    
    //follow black line
     while (digital (0) == 0)
 {
   if (analog(0) > 1500)
   {
     motor(0,10);
     motor(3,100);
   }
   else
   {
     motor(3,10);
     motor(0,100);
   }
 }
    ao();
    // 0 is left 3 is right
    //back buttons are 1 and 2

    
    //Set BotGall Down
    enable_servos();
    set_servo_position(3,1175);
    msleep(1000);
 return 0;
}
