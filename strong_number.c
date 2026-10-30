#include<stdio.h>
int main(){
    int num,rem,sum=0,f;

    printf("enter the number");
    scanf("%d",&num);

    int temp=num;

    while(num>0){

        rem=num%10;

        f=1;

        for(int i=1;i<=rem;i++){
            f*=i;
        }

        sum+=f;

        num=num/10;
    }

    if(temp==sum){
        printf("strong");
    }
    else{
        printf("not strong");
    }

    return 0;
}