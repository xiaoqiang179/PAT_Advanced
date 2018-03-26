#include <stdio.h>
char num[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void print(int n){
	if(n/10!=0){
		print(n/10);
	}
	if(n/10==0){
		printf("%s",num[n%10]);
	}
	else{
		printf(" %s",num[n%10]);
	}
}
int main() {
	char in;
	int sum=0;
	while((in=getchar())!='\n'){
		sum+=in-'0';
	}
	//printf("%d\n",sum);
	print(sum);
	return 0;
}
