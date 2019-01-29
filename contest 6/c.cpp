#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;

int w[25];

int main(){
    int n,i,min,d;
    while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    int j;
    for(j=n;j>0;j--){
        d=abs(w[j]-w[j-1]);
        min=9999;
        if(d<min) min=d;
    }
    printf("%d\n",min);
    min=0;
    }
    return 0;
}
