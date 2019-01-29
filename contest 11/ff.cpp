#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
    long long m,n,i,p,c=0;
    while(1){
        map<long,long>mm;
        scanf("%lld %lld",&n,&m);
        if(n==0 && m==0) break;
        for(i=0;i<n;i++){
            scanf("%lld",&p);
            mm[p]=1;
        }
        for(i=0;i<m;i++){
            scanf("%lld",&p);
            if(mm[p]!=1) c++;
        }
        printf("%lld\n",c);c=0;p=0;i=0;
    }
    return 0;
}
