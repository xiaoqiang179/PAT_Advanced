#include <stdio.h>
int main(void){
    int i,j,k;
    int store[21][60]={0};
    scanf("%d",&k);
    for(i=1;i<55;i++){
        scanf("%d",&store[0][i]);
    }
    for(i=0;i<k;i++){
        if(i==0){
            for(j=1;j<55;j++){
                store[i+1][store[0][j]]=j;
            }
        }
        else{
            for(j=1;j<55;j++){
                store[i+1][store[0][j]]=store[i][j];
            }
        }
    }
    int m=i;
    i=1;
    if(store[m][i]>=1&&store[m][i]<=13){
        printf("S%d",store[m][i]);
    }
    if(store[m][i]>=14&&store[m][i]<=26){
        printf("H%d",store[m][i]-13);
    }
    if(store[m][i]>=27&&store[m][i]<=39){
        printf("C%d",store[m][i]-26);
    }
    if(store[m][i]>=40&&store[m][i]<=52){
        printf("D%d",store[m][i]-39);
    }
    if(store[m][i]==53||store[m][i]==54){
        printf("J%d",store[m][i]-52);
    }
    for(i=2;i<55;i++){
        if(store[m][i]>=1&&store[m][i]<=13){
            printf(" S%d",store[m][i]);
        }
        if(store[m][i]>=14&&store[m][i]<=26){
            printf(" H%d",store[m][i]-13);
        }
        if(store[m][i]>=27&&store[m][i]<=39){
            printf(" C%d",store[m][i]-26);
        }
        if(store[m][i]>=40&&store[m][i]<=52){
            printf(" D%d",store[m][i]-39);
        }
        if(store[m][i]==53||store[m][i]==54){
            printf(" J%d",store[m][i]-52);
        }
    }
    return 0;
}


