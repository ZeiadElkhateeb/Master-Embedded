/*
 ============================================================================
 Name        : first.c
 Author      : Zeiad Elkhateeb
 Version     :
 Copyright   : Your copyright notice
 Description : Homework
 ============================================================================
 */
/* Task 1                 *Print C programming on the screen*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("C programming");
	return EXIT_SUCCESS;
}
*/
/*
  Task 2               *Write C Program to Print a Integer Entered by a User*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf(" Enter an integer: ");
	scanf("%d",&x);
	printf("You entered: %d", x);

	return 0;
}
*/
/*
//Task 3                           *Write C Program to Add Two Integers*

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	printf(" Enter two integers: ");
	scanf("%d %d",&x,&y);
	int sum=x+y;
	printf("The sum %d", sum);

	return 0;
	}
	*/
/*
//	Task 4                          *Write C Program to Multiply two Floating Point Numbers*

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x,y;
	printf(" Enter two floating point numbers: ");
	scanf("%f %f",&x,&y);
	float product=x*y;
	printf("The product: %f", product);

	return 0;
}
*/
/*
// TASK 5                          *Write C Program to Find ASCII Value of a Character*

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char C;
	printf("Enter a character:");
	scanf("%c",&C);
	printf("ASCII value of %C = %d",C ,C);

	return 0;
}
 */
/*
// Task 6                                 *Write Source Code to Swap Two Numbers*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,temp;
	printf("Enter two floats:");
	scanf("%f %f",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping A= %f,B=%f ",a ,b);

	return 0;
}
 */
/*
 *Task 7                           *Write Source Code to Swap Two Numbers without temp variable*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,temp;
	printf("Enter two floats:");
	scanf("%f %f",&a,&b);
	 // a = (initial_a - initial_b)
	  a = a - b;

	  // b = (initial_a - initial_b) + initial_b = initial_a
	  b = a + b;

	  // a = initial_a - (initial_a - initial_b) = initial_b
	  a = b - a;

	  // %.2lf displays numbers up to 2 decimal places
	  printf("After swapping, a = %.2f\n", a);
	  printf("After swapping, b = %.2f", b);

	  return 0;
	}
	printf("After swapping A= %f,B=%f ",a ,b);

	return 0;
}
*/



