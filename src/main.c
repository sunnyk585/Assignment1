#include<stdio.h>
#include"file_1.h"
#include"file_2.h"


void main()
{
	printf("\nI amin main.c\n");
	printf("\nCalling file_1.c\n");
	file_1();
	printf("\ncalling file_2.c\n");
	file_2();
}
