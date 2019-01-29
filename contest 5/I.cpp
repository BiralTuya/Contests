#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b && b==c && c==d && d==a)printf("square\n");
        else if(a==c && b==d) printf("rectangle\n");
        else if()
    }
