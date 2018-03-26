#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int arr[200];
bool pdrev(int n,int *p){
	int mid=n/2,i;
	for(i=0;i<mid;i++){
		if(p[i]!=p[n-i-1]){
			return false;
		}
	}
	return true;
}
int convert(int *p,int n,int radix){
	int i=0;
	while(n!=0){
		p[i]=n%radix;
		n/=radix;
		i++;
	}
	return i;
}
int main() {
	int i,n,m,radix;
	scanf("%d%d",&n,&radix);
	m=convert(arr, n, radix);
	if(pdrev(m, arr)==true){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	printf("%d",arr[m-1]);
	for(i=m-2;i>=0;i--){
		printf(" %d",arr[i]);
	}
	printf("\n");
	return 0;
}
