/*
 ============================================================================
 Name        : first.c
 Author      : Zeiad Elkhateeb
 Version     :
 Copyright   : Your copyright notice
 Description : Homework
 ============================================================================
 */
/* Task 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("C programming");
	return EXIT_SUCCESS;
}
*/
/*
  Task 2
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
Task 3

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
	Task 4

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
 TASK 5

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
 Task 6
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
 *Task 7
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



