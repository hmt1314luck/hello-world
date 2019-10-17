#include <stdio.h>
int main(){
	int a,b,c,i,j;
	printf("请输入一个正整数：");
	scanf("%d",&a);
	
	printf("请输入另一个正整数：");
	scanf("%d",&b); 
	
	if(a<b){j=a,a=b,b=j;
	} 
	for(i=a;i>=1;i--)
	if(a%i==0&&b%i==0)
	break;
	c=i;
	
	if(c==1)
	printf("这两个正整数互质");
	else
	printf("这两个正整数不互质");
	return 0;
}
