#include <stdio.h>
char x='x',y='y';
char* ptr1=&x;
char* ptr2=&y;
void swap_pointers (char**,char**);

void main()
{
	printf("first  pointer derefrences to: %c\n", *ptr1);
	printf("second pointer derefrences to: %c\n", *ptr2);
	swap_pointers(&ptr1,&ptr2);
	printf("first  pointer derefrences to: %c\n", *ptr1);
	printf("second pointer derefrences to: %c", *ptr2);
}

void swap_pointers (char ** ptp1,char ** ptp2){
	(**ptp1) = (**ptp1) ^ (**ptp2);
	(**ptp2) = (**ptp1) ^ (**ptp2);
	(**ptp1) = (**ptp1) ^ (**ptp2);
}