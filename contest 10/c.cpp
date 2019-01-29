#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,c=0;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        while(n>=3){
            n-=3;
            c++;
            n++;
        }
        if(n==2){
            c++;
            printf("%d\n",c);c=0;
        }
        else printf("%d\n",c);c=0;
    }
    return 0;
}
