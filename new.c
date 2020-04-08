#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printhello()
{
	printf("Hello Krishna\n");
}/*this prints hello*/
void printname()
{
	printf("My name is Krishna\n");
}/*this prints name*/
void printboth()
{
	printhello();
	printname();
}
int main()
{
	printboth();
	return 0;
}
