#include <stdio.h>

int main()
{
	int value = 5;
	const int value1 = 5; // value is const
	const int value2 = 5;
	int *ptr = &value;
	int *ptr1 = &value1; // compile error: cannot convert const int* to int*
	const int *ptr2 = &value2; // this is okay, ptr is pointing to a "const int"
	*ptr = 6; // change value to 6
	*ptr1= 6; // change value to 6
	*ptr2 = &value1; // compile error: cannot convert const int* to int*
	printf("The Value in ptr is %X\n",*ptr);
	printf("The Value in ptr1 is %X\n",*ptr1);
	printf("The Value in ptr2 is %X\n",*ptr2);

	return 0;
}