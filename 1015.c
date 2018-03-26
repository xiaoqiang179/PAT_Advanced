#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool pdprime(int n){
	int i;
	if(n==1){
		return false;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int reverse(int n,int radix){
	int res=0,rec[200]={0},i=0;
	while(n>0){
		rec[i]=n%radix;
		n/=radix;
		i++;
	}
	int m=i;
	for(i=0;i<m;i++){
		res+=rec[m-i-1]*pow(radix, i);
	}
	return res;
}
int main() {
	int temp1,temp2;
	scanf("%d",&temp1);
	while(temp1>=0){
		scanf("%d",&temp2);
		if(temp1==0){
			printf("Yes\n");
			scanf("%d",&temp1);
			continue;
		}
		if(pdprime(temp1)==true){
			if(pdprime(reverse(temp1, temp2))==true){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
		else{
			printf("No\n");
		}
		scanf("%d",&temp1);
	}
	return 0;
}
