#include<stdio.h>
int main ()
{
	int a,b,gcd,i;
	printf("enter the a value:");
	scanf("%d",&a);
	printf("enter the b value:");
	scanf("%d",&b);
	for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", a, b, gcd);
	return 0;
}
