#include<stdio.h>

main()
{
	int bs,hra,da,ta,ans;
	
	bs=100;
	hra=10;
	da=5;
	ta=8;
	ans=123;
	
	printf("bs=%d\n",bs);
	
	hra=(bs*10)/100;
	printf("hra=%d\n",hra);
	
	da=(bs*5)/100;
	printf("da=%d\n",da);
	
	ta=(bs*8)/100;
	printf("ta=%d\n",ta);
	
	ans=(bs+hra+da+ta);
	printf("ans=%d",ans);
}
