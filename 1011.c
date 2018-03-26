#include <stdio.h>
int main() {
	double sum=1,best=0,bestn=0;
	int i,j;
	for(i=0;i<3;i++){
		double temp;
		for(j=0;j<3;j++){
			scanf("%lf",&temp);
			if(temp>best){
				best=temp;
				bestn=j;
			}
		}
		if(bestn==0){
			printf("W ");
		}
		else if(bestn==1){
			printf("T ");
		}
		else{
			printf("L ");
		}
		sum*=best;
		best=0;
	}
	printf("%.2f",(sum*0.65-1)*2);
	return 0;
}
