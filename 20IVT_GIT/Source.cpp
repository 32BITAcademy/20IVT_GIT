#include<iostream>
#include "Header.h"

int main()
{
	int a;
	printf("Tell me number: ");
	scanf_s("%i", &a);
	printf("You said \"%i\", I answer:", a);
	func(a);

	return 0;
}