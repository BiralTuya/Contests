#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long n=0,a=0;
    int sum=0;
    while(scanf("%ld",&n)!=EOF){
        if(n==0) break;
        while(n){
            a=n%10;
            n=n/10;
            sum+=a;
            if(n==0 && sum>=10){
                n=sum;sum=0;
            }
        }
        printf("%d\n",sum);sum=0;
    }
return 0;
}
