// Created on Fri January 23 2015

int main()
{
	//1 print hello world
	printf("Hello, World!\n");
	
	//2 Stop for 3 second
	msleep(3000);
	
	//3 print name 
	printf("Max\n");
	
	//wait befor starting motors
	msleep(2500);
	
	//Start moving forward
	motor(0, 100);
	motor(3, 100);
	msleep(5000);
	
	//start turning
	motor(0, 25);
	motor(3, 100);
	msleep(3000);
	
	//stop motor
	motor(0,0);
	motor(3,0);
	msleep(2000);
	
	//start servos
	enable_servos();
	set_servo_position(0, 1024); //servo moves 90 degrees
	msleep(1200);
	set_servo_position(0, 400); //servo move back to start position
	msleep(3000);
	disable_servos();
	
	//move forward again
	motor(0, 100);
	motor(3, 100);
	msleep(5000);
	
	//stop motors
	ao();
	
	//print bye
	printf("Hasta la vista world!\n");
	
	//End Program
	return 0;
}

