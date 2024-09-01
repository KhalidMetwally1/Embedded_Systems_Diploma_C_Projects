#include <stdio.h>
void* sum_func(void*,void*,void*);

void main()
{
	int x=2,y=3,z;
	sum_func(&x,&y,&z);
	printf("x=%i,y=%i,z=%i",x,y,z);
}

void* sum_func(void*ptr1,void*ptr2,void*ptr3)
{
	(*(float*)ptr3) = (*(float*)ptr1) + (*(float*)ptr2);
}