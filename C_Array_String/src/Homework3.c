/*
 ============================================================================
 Name        : Homework3.c
 Author      : Zeiad Elkhateeb
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
//Task 1   *Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where, elements of matrix are entered by user.*
#include <stdio.h>
#include <stdlib.h>

int main() {
	float a[2][2],b[2][2],sum[2][2];
int i,j;
	printf("Enter the elements of the 1st matrix:");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;++i){
		for( j=0;j<2;++j){
			printf("\nEnter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);

			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;i++){
			for( j=0;j<2;j++){
				printf("\nEnter b%d%d: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);

			}
		}
	for(i=0;i<2;++i){
				for( j=0;j<2;++j){
					sum[i][j]=a[i][j]+b[i][j];
				}
			}

	printf("sum of matrix:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;++i){
				for(j=0;j<2;++j){
					printf(".1%f\t  ",sum[i][j]);
					fflush(stdin);fflush(stdout);
					if(j==1) printf("\n");
				}
			}


	return 0;
}
*/
/*
 // Task 2      *This program takes n number of element from user(where, n is specified by user), stores data in an array and calculates the average of those numbers.*
#include <stdio.h>
#include <stdlib.h>

int main() {
	float nums[100],avg,sum;
int i,n;
	printf("Enter the number of data:");
			scanf("%d",&n);

while(n>100 || n<=0){
	printf("Error! enter number in range 1 to 100");
	printf("Enter number again : \n");
	scanf("%d",&n);
			}

	for(i=0;i<n;i++){
				printf("%d. Enter number: ",i+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&nums[i]);
				avg+=nums[i];
		}
	sum=avg/n;
	printf("Average:");
	fflush(stdin);fflush(stdout);
	printf("%.2f  ",sum);
	fflush(stdin);fflush(stdout);


	return 0;
}
*/
/*
 // Task 3     *This program asks user to enter a matrix (size of matrix is specified by user) and this program finds the transpose of that matrix and displays it*
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,x,y;
	printf("Enter the row and columns of the matrix:");
	fflush(stdin);fflush(stdout);
		scanf("%d %d ",&x,&y);
	float nums[x][y],Tnum[x][y];
	printf("Enter elements of matrix: ");
	fflush(stdin);fflush(stdout);

for(i=0;i<x;i++){
	for(j=0;j<y;j++){

	printf("Enter element a%d%d : \n",i+1,j+1);
	fflush(stdin);fflush(stdout);
	scanf("%.2f",nums[i][j]);
	}
			}

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
				printf("%.2f",nums[i][j]);
				fflush(stdin);fflush(stdout);
		}
		printf("\n");
		fflush(stdin);fflush(stdout);
	}
	printf("Entered matrix:\n");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			Tnum[j][i]=nums[i][j];
			printf("%.2f",Tnum[i][j]);
			fflush(stdin);fflush(stdout);

		}
		printf("\n");
		fflush(stdin);fflush(stdout);
	}
	printf("Transpose of a matrix:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				printf("%.2f",Tnum[i][j]);
				fflush(stdin);fflush(stdout);
			}
			printf("\n");
			fflush(stdin);fflush(stdout);
		}

	return 0;
}
*/
/*
 // Task 4               *C Program to Insert an element in an Array*
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,x,y,loc;
	printf("Enter number of elements:");
	fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		int num[x],nums[x+1];
	for(i=0;i<x;i++){
	nums[i]=i+1;
	}
	printf("Enter element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	printf("Enter the location: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&loc);
	for(i=0;i<x+1;i++){
		if(i<loc-1){
			nums[i]=num[i];
		}else if(i==loc-1){
			nums[i]=y;

		}else if(i>loc-1){
				nums[i]=num[i-1];

			}
		}

	for(i=0;i<x+1;i++){
		printf("%d",nums[i]);
	}

	return 0;
}
*/
/*
//Task 5    *C Program to Search an element in Array*

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,x,y,loc=0;
	printf("Enter no of elements:");
	fflush(stdin);fflush(stdout);
		scanf("%d",&x);

	int nums[x+1];
	for(i=0;i<x;i++){
		nums[i]=(i+1)*11;
		}

	printf("Enter elements to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);

	for(i=0;i<x;i++){
		if(nums[i]==y){
		loc=i+1;
		}
	}
	printf("Enter the location: %d",loc);
	fflush(stdin);fflush(stdout);

	return 0;
}
*/
/*
//Part 2 - Assignment 1    *This program asks user to enter a string and a character and this program checks how many times that character is repeated in the string entered by user. *

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,count=0;
	char text[100],c;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("Enter a character to find frequency:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	for(i=0;i<strlen(text);i++){
		if(text[i]==c){
			count++;
		}
		}

	printf("Frequency of %c = %d",c,count);
	fflush(stdin);fflush(stdout);

	return 0;
}
*/
/*
//Part 2 - Task 2     *You can use standard library function strlen() to find the length of a string but, this program computes the length of a string manually without using strlen() funtion.*

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,count=0;
	char text[100];
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(text);

	for(i=0;i<100;i++){
		if(text[i]==0) break;
		count++;
		}

	printf("Length of a string: %d ",count);
	fflush(stdin);fflush(stdout);

	return 0;
}
*/
/*
//Part 2-Task 3      *You can only use library function strlen(),To find the length of the string*

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,len=0;
	char text[100],revtext[100];
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(text);

	len=strlen(text);

	for(i=0,j=len;i<len,j>0;++i,--j){
		revtext[j-1]=text[i];
		}

	revtext[len]=0;
	printf("Reverse string is: %s ",revtext);
	fflush(stdin);fflush(stdout);

	return 0;
}
*/
