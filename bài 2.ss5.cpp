#include <stdio.h>
int main()
{
	int i=10, a; 
	while (i>0)
	{
		printf ("moi nhap gia tri:");
		scanf ("%d",&a); 
		if (a==i)
		{
			printf ("dung roi"); 
			break; 
		} else {
			printf ("sai roi\n"); 
		} 
	 }
	 return 0; 
 } 
