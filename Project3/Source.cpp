#include <stdio.h>
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	printf("Hello world \n");
	printf("Hello \\world\\ \n");
	printf("Hello \"world\" \n");

	int a = 13, b = 9, c = 8;

	printf("a=%d, b=%d, c=%d \n", a, b, c);

	 a = 113, b = 19, c = 28;

	printf("a=%d, b=%d, c=%d \n", a, b, c);


	system("pause");

}