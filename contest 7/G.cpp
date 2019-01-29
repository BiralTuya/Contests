#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long n=0,sum=0;
    int i=0;
    scanf("%d",&n);
    if(n>0){
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
        printf("%d\n",sum);
    }
    else if(n<=0){
        for(i=1;i>=n;i--){
            sum=sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
