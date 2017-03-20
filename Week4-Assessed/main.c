#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8

int main()
{
	double h1, h2, w, L, v0, angle;
	printf("Please provide the height of the person (in metres): ");
	scanf("%f", h1);
	printf("\nPlease provide the height of the wall (in metres): ");
	scanf("%f", h2);
	printf("\nPlease provide the height of the window on the wall (in metres): ");
	scanf("%f", w);
	printf("\nPlease provide the length of the person from the wall (in metres): ");
	scanf("%f", L);
	printf("\nPlease provide the initial velocity of the rock thrown (in metres): ");
	scanf("%f", v0);
	printf("\nPlease provide the angle of inclination of the rock (in degrees - within 0 and 90, not inclusive): ");
	scanf("%f", angle);

	
	// "** Unsuccessful **"

	// "** Successful **"

	//if successful, compute the values of tf and dw

	double distanceTravelled = distanceTravelled(velocity, angle, time);
	if()

}

// Some time t after rock was through, horizontal distance travelled
// Angle 0 < angle < 90
double distanceTravelled(double velocity, double angle, double time) {
	return (velocity * cos(angle) * time);
}

// height of rock
double rockHeight(double time, double velocity, double angle, double personHeight) {
	return (-(1/2)) * GRAVITY * pow(time, 2) + (velocity * sin(angle))*t + personHeight;
}

//tw
double timeToWall(double distToWall, double velocity, double angle) {
	return (distToWall)/(velocity * cos(angle));
}

// hw
double wallHeight(double distToWall, double velocity, double angle, double time, double personHeight) {
	return (-1/2) * GRAVITY * pow(timeToWall(distToWall, velocity, angle),2) + (velocity * sin(angle))
	*timeToWall + personHeight;
}