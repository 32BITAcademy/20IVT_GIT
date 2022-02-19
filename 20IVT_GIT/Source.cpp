#include<iostream>
#include "Header.h"

int main()
{
	int a;
	scanf_s("%i", &a);
	printf("You wrote %i, I answer:", a);
	func(a);

	return 0;
}