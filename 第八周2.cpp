//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ

//���������λ����_______��

//��̣���������5�����֣����������Ϊ����5λ�����
#include <stdio.h>
int main(){
	int x[5]={4,3,2,1,0}, i,n,j,k,l;
  while(1) {

    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2],&x[3],&x[4]);

    for(i=0;i<4;i++) {

      if( x[i] > x[i+1]) {

  	    int temp = x[i];

  	    x[i] = x[i+1];

  	    x[i+1] = temp;

      }
      i = i + 1;

      i = i - 1;}
      
      for(j=0;j<3;j++) {

      if( x[j] > x[j+1]) {

  	    int temp = x[j];

  	    x[j] = x[j+1];

  	    x[j+1] = temp;

      }
      j = j + 1;
      
      j = j - 1 ;
      
	  }
	  
	  for(k=0;k<2;k++) {

      if( x[k] > x[k+1]) {

  	    int temp = x[k];

  	    x[k] = x[k+1];

  	    x[k+1] = temp;

      }
      k = k + 1;
      
      k = k - 1 ;
      
	  }
	  
	  for(l=0;l<1;l++) {

      if( x[l] > x[l+1]) {

  	    int temp = x[l];

  	    x[l] = x[l+1];

  	    x[l+1] = temp;

      }
      l = l + 1;
      
      l = l - 1 ;
      
	  }
	n=x[4]*10000+x[3]*1000+x[2]*100+x[1]*10+x[0];
	printf("%d\n",n);
    }
	
	return 0;
}
