/*Output

    *
   **
  ***
 ****
*****

*/

#include<stdio.h>

int main()
{
	int i,j,k,size;
	
	printf("Enter size of pattern=");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		for(k=1;k<=size-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	 printf("\n");
	}
	
 return 0;
}