/*
 ============================================================================
 Name        : Homework4.c
 Author      : Zeiad Elkhateeb
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 //Task 1   *Prime numbers Between two intervals bu making user-defined function*

#include <stdio.h>
#include <stdlib.h>


int prime(int num){
	int j,flag=0;
	for(j=2;j<=num/2;++j){
		if(num%j==0){
			flag=1;
			break;
		}
	}
	return flag;
}

int main() {
	int low,high,flag;
	printf("Enter two numbers(intervals):");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&low,&high);
	printf("Prime number between %d & %d: ",low,high);
	fflush(stdout);fflush(stdin);
	for(int i=low+1;i<high;++i){

	flag=prime(i);
	if(flag==0){
		printf("%d ",i);
	}
	}

	return 0;
}
 */
/*
 //Task 2   *Calculate Factorial of a number using recursion*

#include <stdio.h>
#include <stdlib.h>


int factorial(int num){
	int j,fac=1;
	for(j=1;j<num+1;++j){
		fac=fac*j;
		}

	return fac;
}

int main() {
	int num,fac;
	printf("Enter a positive integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	printf("Factorial of %d = ",num);
	fflush(stdout);fflush(stdin);
	fac=factorial(num);
	printf("%d ",fac);

	return 0;
}
*/
/*
 //Task 3   *Reverse a sentence using recursion*

#include <stdio.h>
#include <stdlib.h>


void order(){
	char c;
	scanf("%c",&c);
	if(c != '\n'){
		order();
		printf("%c",c);
	}
}

int main() {
	printf("Enter a sentence: ");
	fflush(stdout);fflush(stdin);
	order();

	return 0;
}
*/
/*
 //Task 4    *calculate the power of a number using recursion*

#include <stdio.h>
#include <stdlib.h>


int power(int base,int exp){
	if(exp != 0){
		return (base*power(base,exp-1));
	}
	else
		return 1;
}

int main() {
	int base,exp;
	printf("Enter base number:");
	fflush(stdout);fflush(stdin);
	scanf("%d", &base);
	printf("Enter power number (positive)");
	fflush(stdout);fflush(stdin);
	scanf("%d", &exp);
	printf("%d^%d = %d",base,exp,power(base,exp));
	fflush(stdout);fflush(stdin);
	return 0;
}

*/
