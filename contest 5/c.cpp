#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long long a=0,b=0;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else if(a==b) printf("=\n");
    }
    return 0;
    }
