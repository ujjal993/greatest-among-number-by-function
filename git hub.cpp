#include<stdio.h>
#include<conio.h>
int great( int x,int y)
    {
    	
    	if(x>y)
    	return x;
    	else
    	return y;
	}
int max(int a, int b, int c)
{
     a=great(a,b);
     b=great(b,c);
    
}
    
int main(){
	
	int a,b,c,ans;
	printf("enter the three number");
	scanf("%d%d%d",&a,&b,&c);
	ans=max(a,b,c);
	printf("the maximnnu number is=%d",ans);
}
