/* 
input: 1508743953 = (0101 1001 - 1110 1101 - 1001 1011 - 0001 0001)bin
				  = (    89    -    237    -    155    -    17    )hex
size: 4 Bytes
Byte By Byte
*/

#include <stdio.h>
void func(void*,int);

void main()
{
	int x = 1508743953;
	func(&x,4);
}
void func(void*ptr1,int size)
{
	for(int i=size; i!=0 ;i--)
	{
		printf("Starting Address:%x ,Data: %i\n", ptr1, *(unsigned char*)ptr1);
		ptr1++ ;
	}
}