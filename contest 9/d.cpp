#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    long long int n,s=0;
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        int j;
        for(j=0;j<=n;j++){
            s+=pow(2,j);
        }
        printf("Case %d: %lld\n",i,s);s=0;
    }
    return 0;
}
