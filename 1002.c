#include <stdio.h>
int main() {
	double p1[1010]={0},p2[1010]={0};
	int k,m1,m2,i,max,flag=0,count=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int temp1;
		double temp2;
		scanf("%d%lf",&temp1,&temp2);
		p1[temp1]=temp2;
		if(flag==0){
			m1=temp1;
			flag=1;
		}
	}
	flag=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int temp1;
		double temp2;
		scanf("%d%lf",&temp1,&temp2);
		p2[temp1]=temp2;
		if(flag==0){
			m2=temp1;
			flag=1;
		}
	}
	max=m1>m2? m1:m2;
	for(i=max;i>=0;i--){
		p1[i]+=p2[i];
		if(p1[i]!=0){
			count++;
		}
	}
	printf("%d",count);
	for(i=max;i>=0;i--){
		if(p1[i]!=0){
			printf(" %d %.1f",i,p1[i]);
		}
	}
	return 0;
}
