#include<stdio.h>
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;

	printf("Size of a char: %zu bytes\n" , sizeof(charType));	
	printf("Size of an int: %zu bytes\n" , sizeof(intType));	
	printf("Size of a long int: %zu bytes\n" , sizeof(longType));
	printf("Size of a long long int: %zu bytes\n" , sizeof(longlongType));
	printf("Size of a float: %zu bytes\n" , sizeof(floatType));

	return(0);
}
