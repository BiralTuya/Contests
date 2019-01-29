#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t,m;
    long long n;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
       if(n%2!=0) printf("Case %d: Impossible\n",i);
       else{
            m=1;
            while(n%2==0){
                m=m*2;
                n=n/2;
            }
        printf("Case %d: %lld %d\n",i,n,m);
        m=0;n=0;
        }
    }
    return 0;
}
