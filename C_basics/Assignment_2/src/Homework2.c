/*
 ============================================================================
 Name        : Homework2.c
 Author      : Zeiad Elkhateeb
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
// Task 1              *Write C program to check whether a number is even or odd*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter an integer you want to check: ");
	scanf("%d",&num);
	if((num%2)==0){
		printf("%d is even",num);
	}else{
		printf("%d is odd",num);
	}
	return EXIT_SUCCESS;
}
*/
/*
 *Task 2               *C program to check Vowel or Consonant*

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char Character;
	printf("Enter an alphabet: ");
	scanf("%c",&Character);
	if(Character=='a'||Character=='A'||Character=='e'||Character=='E'||Character=='i'||Character=='I'||Character=='o'||Character=='O'||Character=='u'||Character=='U'){
		printf("%c is a vowel",Character);
	}else{
		printf("%c is a consonent",Character);
	}
	return EXIT_SUCCESS;
}
 */
/*
 * Task 3      * C program to find the largest number among three numbers*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c;
	printf("Enter three numbers: ");

	scanf("%f %f %f",&a,&b,&c);
	if(a>=b && a>=c){
		printf("%.2f is the largest",a);
	}else if (b>=a && b>=c){
		printf("%.2f is the largest",b);
	}else if(c>=a && c>=b){
		printf("%.2f is the largest",c);
	}
	return EXIT_SUCCESS;
}
*/
/*
 *Task 4               *Check whether a number is positive or negative*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf("Enter a number: ");

	scanf("%f",&num);
	if(num>0){
		printf("%.2f is positive",num);
	}else if(num==0){
		printf("you entered zero.");
	}else printf("%.2f is negative",num);

	return EXIT_SUCCESS;
}
*/
/*
 * Task 5            * Check whether a Character is an Alphabet or not*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("Enter a character: ");

	scanf("%c",&ch);
	if((ch>='a'&& ch<='z') ||(ch>='A' && ch<='Z')){
		printf("%c is an alphabet",ch);
	}else printf("%c is not an alphabet",ch);

	return EXIT_SUCCESS;
}
 */
/*
 *Task 6                *Calculate sum of natural numbers*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,sum=0;
	printf("Enter an integer: ");

	scanf("%d",&num);
	for(int i=0;i<=num;i++){
		sum=sum+i;
	}
	printf("The sum: %d",sum);

	return EXIT_SUCCESS;
}
*/
/*
 * Task 7          Find factorial of a number*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,sum=1;
	printf("Enter an integer: ");

	scanf("%d",&num);
	if(num>0){
	for(int i=1;i<=num;i++){
		sum=sum*i;
	}
	printf("The factorial : %d",sum);
	}else if (num==0){
		printf("The factorial : 1 ");
	}else if(num<0) printf("Error! factorial of negative number doesn't exist");

	return EXIT_SUCCESS;
}
*/
/*
 * Task 8        make a simple calculator to add,subtract,multiply or divide*
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	float num1,num2;
	char oper;
	printf("Enter an operator either + or - or * or /: ");
	scanf("%c",&oper);

	printf("Enter two operands: ");
	scanf("%.2f %.2f",&num1 ,&num2);

	switch(oper){
	case '+':
		printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
		break;
	default:
		printf("Error! operator not correct");
		break;
	}
	return EXIT_SUCCESS;
}
 */
