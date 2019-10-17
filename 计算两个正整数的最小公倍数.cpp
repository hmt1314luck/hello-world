#include <stdio.h>
int main(){
	int a,b,c,i,j;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	
	printf("请输入另一个正整数：");
	scanf("%d",&b); 
	
    if(a<b) {j=a,a=b,b=j;
	}
    for(i=a;i>=1;i--)
    if(b%i==0&&a%i==0)
    break;
    c=a*b/i;
	 
	printf("最小公倍数为:%d",c); 
	return 0;
}
