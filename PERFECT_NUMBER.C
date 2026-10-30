#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        num%i==0;
        sum=sum+i;
    }
    if(num==sum){
        printf("perfect");
    }
    else{
        printf("not perfect");
    }
    return 0;
    
}