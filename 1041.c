#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main() {
	int n,i,j,a[10010],b[100010],index=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if(a[temp]==0){
			b[index++]=temp;
		}
		a[temp]++;
	}
	for(i=0;i<index;i++){
		if(a[b[i]]==1){
			printf("%d",b[i]);
			return 0;
		}
	}
	printf("None");
	return 0;
}
