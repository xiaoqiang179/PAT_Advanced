#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int convert(int *p,int a){
	int i=0;
	if(a==0){
		p[0]=0;
		return 1;
	}
	while(a>0){
		p[i]=a%13;
		a/=13;
		i++;
	}
	return i;
}
int main() {
	int n,m,i,j,arr[20]={0};
	printf("#");
	for(i=0;i<3;i++){
		scanf("%d",&n);
		m=convert(arr, n);
		if(m==1){
			printf("0");
		}
		for(j=m-1;j>=0;j--){
			if(arr[j]>=0&&arr[j]<=9){
				printf("%d",arr[j]);
			}
			if(arr[j]==10){
				printf("A");
			}
			if(arr[j]==11){
				printf("B");
			}
			if(arr[j]==12){
				printf("C");
			}
		}
	}
	return 0;
}
