#include <stdio.h> 

// v = final velocity
// s = distance traversed
// a = acceleration of an object
// t = the time that has elapsed
// u = the initial velocity

int main(void)
{
	int velocity; // u
	int acceleration; // a
	int time; // t
	int finalVelocity; // v
	int distance; // s

	 printf("Enter the initial velocity\n");
	 scanf("%d", &velocity);

	 printf("Enter the acceleration of an object\n");
	 scanf("%d", &acceleration);

	 printf("Enter the time that has elapsed\n");
	 scanf("%d", &time);
	 
	 

	 finalVelocity = velocity + (acceleration * time);


	 printf("%d", finalVelocity);
	 printf("\n");

	 printf("Enter the initial velocity\n");
	 scanf("%d", &velocity);

	 printf("Enter the acceleration of an opject\n");
	 scanf("%d", &acceleration);

	 
	 distance = (velocity * time) + ((0,5 * acceleration) * (time * time));

	 printf("%d", distance);

}





