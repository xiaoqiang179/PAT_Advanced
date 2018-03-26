#include <stdio.h>
#include <string.h>
int flag=0;
void stringtoint(char *p,int *q){
    int i=0;
    while(p[i]!='\0'){
        q[i]=p[i]-'0';
        i++;
    }
}
void doubleit(int *p,int *q,int len){ //待加倍   目标
    int i=0;
    for(i=len-1;i>=0;i--){
        if(i!=0){
            if(p[i]*2<10){
                q[i]+=p[i]*2;
            }
            else{
                q[i-1]+=(p[i]*2)/10;
                q[i]+=(p[i]*2)%10;
            }
        }
        else{
            if(p[i]*2<10){
                q[i]+=p[i]*2;
            }
            else{
                q[i]+=(p[i]*2)%10;
                q[len]=(p[i]*2)/10;
                flag=1;
            }
        }
    }
}
int main(){
    char a[128];
    int s[128],b[128],c[128]={0},len,sum1[10]={0},sum2[10]={0},i,flag1=1;
    gets(a);
    len=strlen(a);
    stringtoint(a, s);
    stringtoint(a, b);
    doubleit(b, c, len);
    if(flag==1){
        for(i=0;i<=len;i++){
            if(sum1[c[i]]==0){
                sum1[c[i]]++;
            }
        }
    }
    else{
        for(i=0;i<len;i++){
            if(sum1[c[i]]==0){
                sum1[c[i]]++;
            }
        }
    }
    for(i=0;i<len;i++){
        if(sum2[s[i]]==0){
            sum2[s[i]]++;
        }
    }
    for(i=0;i<10;i++){
        if(sum1[i]!=sum2[i]){
            flag1=0;
            break;
        }
    }
    if(flag1==1){
        printf("Yes\n");
        if(flag==1){
            printf("%d",c[len]);
            for(i=0;i<len;i++){
                printf("%d",c[i]);
            }
        }
        else{
            for(i=0;i<len;i++){
                printf("%d",c[i]);
            }
        }
    }
    else{
        printf("No\n");
        if(flag==1){
            printf("%d",c[len]);
            for(i=0;i<len;i++){
                printf("%d",c[i]);
            }
        }
        else{
            for(i=0;i<len;i++){
                printf("%d",c[i]);
            }
        }
    }
    printf("\n");
    return 0;
}



//以字符串输入 转换为数字数组 加倍在另一个数组 送入比较函数

