#include <stdio.h>
int main() {
	int n,i,sum=0,arr[110]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		if(arr[i]>arr[i-1]){
			sum+=6*(arr[i]-arr[i-1]);
		}
		else if(arr[i]<arr[i-1]){
			sum+=4*(arr[i-1]-arr[i]);
		}
		sum+=5;
	}
	printf("%d",sum);
	return 0;
}
