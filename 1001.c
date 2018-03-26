#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int a,b,sum,i,t=0,sign[100]={0};
    char out[100];
    scanf("%d%d",&a,&b);
    sum=a+b;
    if(sum<0){
        printf("-");
        sum=-sum;
    }
    sprintf(out, "%d",sum);
    for(i=strlen(out)-1;i>-1;i--){
        t++;
        if(t==3&&i!=0){
            sign[i]=1;
            t=0;
        }
    }
    for(i=0;i<strlen(out);i++){
        if(sign[i]==1){
            printf(",");
        }
        printf("%c",out[i]);
    }
    return 0;
}

