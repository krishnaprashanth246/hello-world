#include <stdio.h>

void printhello()
{
	printf("Hello Krishna\n");
}
void printname()
{
	printf("My name is Krishna\n");
}
void printboth()
{
	printhello();
	printname();
}
int main()
{
	printhello();
	printname();
	printboth();
	return 0;
}
