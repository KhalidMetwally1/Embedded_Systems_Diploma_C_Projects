#include <stdio.h>
void swap_pointers (char**,char**);

void main()
{
	char x,y;
	char* ptr1=&x;
	char* ptr2=&y;
	printf("What Character first  pointer derefrences to: ");
	scanf(" %c",&x); 
	printf("What Character second pointer derefrences to: ");
	scanf(" %c",&y);	// Notice the whitespace before %c to clear the buffer first
	
	printf("[BEFORE]\n");
	printf("First  Pointer: %c\n", *ptr1);
	printf("Second Pointer: %c\n", *ptr2);
	swap_pointers(&ptr1,&ptr2);
	printf("[AFTER]\n");
	printf("First  Pointer: %c\n", *ptr1);
	printf("Second Pointer: %c", *ptr2);
}

void swap_pointers (char ** ptp1,char ** ptp2) //ptp: Pointer To Pointer
{
	(**ptp1) = (**ptp1) ^ (**ptp2);
	(**ptp2) = (**ptp1) ^ (**ptp2);
	(**ptp1) = (**ptp1) ^ (**ptp2);
}
