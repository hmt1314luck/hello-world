#include <stdio.h>
int main(){
	int a,b,c,i,j;
	printf("������һ����������");
	scanf("%d",&a);
	
	printf("��������һ����������");
	scanf("%d",&b); 
	
	if(a<b){j=a,a=b,b=j;
	} 
	for(i=a;i>=1;i--)
	if(a%i==0&&b%i==0)
	break;
	c=i;
	
	if(c==1)
	printf("����������������");
	else
	printf("������������������");
	return 0;
}
