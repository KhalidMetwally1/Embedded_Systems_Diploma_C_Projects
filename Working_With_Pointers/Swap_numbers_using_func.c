#include <stdio.h>
void XCHNG_pm (int*,int*); //Swap 2 numbers using plus and minus
void XCHNG_xor(int*,int*); //Swap 2 numbers using XOR
void XCHNG_md (int*,int*); //Swap 2 numbers using Multiplication and Division

void main()
{	
	int x,y;
	printf("Enter X Value: ");
	scanf("%i",&x);
	printf("Enter Y Value: ");
	scanf("%i",&y);
	
	printf("Before    : X = %i, Y = %i\n",x,y);
	XCHNG_pm(&x,&y);
	printf("Using(+,-): X = %i, Y = %i\n",x,y);
	XCHNG_xor(&x,&y);
	printf("Using(XOR): X = %i, Y = %i\n",x,y);
	XCHNG_md(&x,&y);
	printf("Using(*,/): X = %i, Y = %i"  ,x,y);
}

void XCHNG_pm(int *ptr1,int *ptr2)
{
	*ptr1 = (*ptr1) + (*ptr2);
	*ptr2 = (*ptr1) - (*ptr2);
	*ptr1 = (*ptr1) - (*ptr2);
}
void XCHNG_xor(int *ptr1,int *ptr2)
{
	*ptr1 = (*ptr1) ^ (*ptr2);
	*ptr2 = (*ptr1) ^ (*ptr2);
	*ptr1 = (*ptr1) ^ (*ptr2);
}
void XCHNG_md(int *ptr1,int *ptr2)
{
	*ptr1 = (*ptr1) * (*ptr2)
	*ptr2 = (*ptr1) / (*ptr2);
	*ptr1 = (*ptr1) / (*ptr2);
}
