#include <stdio.h>
int main(){
	int a,b,c,i,j;
	printf("������һ��������:");
	scanf("%d",&a);
	
	printf("��������һ����������");
	scanf("%d",&b); 
	
    if(a<b) {j=a,a=b,b=j;
	}
    for(i=a;i>=1;i--)
    if(b%i==0&&a%i==0)
    break;
    c=a*b/i;
	 
	printf("��С������Ϊ:%d",c); 
	return 0;
}
