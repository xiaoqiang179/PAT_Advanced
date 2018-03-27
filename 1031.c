#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main() {
    char str[90];
	scanf("%s",str);
	int n1,n2,m=strlen(str),i,j;
	for(i=1;i<m;i++){
		if(i>m-i*2+2){
			break;
		}
	}
	n1=i-2;
	n2=m-n1*2;
	for(i=0;i<n1;i++){
		printf("%c",str[i]);
		for(j=0;j<n2-2;j++){
			printf(" ");
		}
		printf("%c\n",str[m-i-1]);
	}
	for(j=i;j<m-i;j++){
		printf("%c",str[j]);
	}
	return 0;
}
