#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int number=0;
    scanf("%d",&number);
    if(number==1 || number==10 || number==100 || number==1000)
        printf("NO\n");
    else if(number%4==0 || number%7==0)
        printf("YES\n");
    else if(number>1 && number<10){
        if(number%10==4 || number%10==7) printf("YES\n");
        else
            printf("NO\n");
    }
    else if(number>10 && number<100){
        if((number%10==4)||(number%10==7)){
           if(((number/10)%10==7)||((number/10)%10==4))
                printf("YES\n");
        }
        else
            printf("NO\n");
    }
    else if(number>100 && number<1000){
        if((number%10==4)||(number%10==7)){
           if(((number/10)%10==7)||((number/10)%10==4)){
                if(((number/100)%10==7)||((number/100)%10==4))
                    printf("YES\n");
           }
        }
        else
            printf("NO\n");
    }
    return 0;
}

