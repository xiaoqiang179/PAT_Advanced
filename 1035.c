#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
struct pep{
	char name[15];
	char pss[15];
};
int main() {
    int n,i,j,count=0;
	struct pep store[1010];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char temp[15],temp1[15];
		int flag=0;
		scanf("%s%s",temp1,temp);
		for(j=0;j<strlen(temp);j++){
			if(temp[j]=='1'){
				temp[j]='@';
				flag=1;
			}
			if(temp[j]=='0'){
				temp[j]='%';
				flag=1;
			}
			if(temp[j]=='l'){
				temp[j]='L';
				flag=1;
			}
			if(temp[j]=='O'){
				temp[j]='o';
				flag=1;
			}
		}
		if(flag==1){
			strcpy(store[count].name,temp1);
			strcpy(store[count].pss,temp);
			count++;
		}
	}
	if(count==0&&n!=1){
		printf("There are %d accounts and no account is modified",n);
	}
	else if(count==0&&n==1){
		printf("There is 1 account and no account is modified");
	}
	else{
		printf("%d\n",count);
		for(i=0;i<count;i++){
			printf("%s %s\n",store[i].name,store[i].pss);
		}
	}
	return 0;
}
