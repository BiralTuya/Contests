#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    long long n,sum;
    while(scanf("%lld",&n)!=EOF){
        if(n>0)
            sum=(n*(n+1))/2;
        else if(n<0){
            n=abs(n);
            sum=1-((n*(n+1))/2);
        }
        else if(n==0) sum=1;
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
