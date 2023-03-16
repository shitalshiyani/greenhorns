#include<stdio.h>

/* x= 54
   y= 45
*/
main()
{
	int x,y,z;
	printf("Enter Value of X =");
	scanf("%d=",&x);
	
	printf("Enter Value of Y =");
	scanf("%d=",&y);
	
	z=x;
	x=y;
	y=z;
    
    printf("X=%d",x);
    printf("\nY=%d",y);
}
