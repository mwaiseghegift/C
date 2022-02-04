/*
CS 410 Operating Systems
Lastname Firstname
Lab 01
*/

#include <stdio.h>
int main(){
	int intType;
	float floatType;
	double doubleType;
	char charType;

	//sizeof evaluates  the size of a variable
	printf("\nSize of int: %zu bytes\n", sizeof(intType));
	printf("\nSize of float: %zu bytes\n", sizeof(floatType));
	printf("\nSize of double: %zu bytes\n", sizeof(floatType));
	printf("\nSize of char: %zu bytes\n", sizeof(charType));

	return 0;
}
