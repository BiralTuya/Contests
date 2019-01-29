#include<iostream>
#include<cstdio>
using namespace std;

int n=0;
int main(){
    scanf("%d",&n);
    if(n>=1 && n<5) printf("few\n");
    else if(n>=5 && n<10) printf("several\n");
    else if(n>=10 && n<20) printf("pack\n");
    else if(n>=20 && n<50) printf("lots\n");
    else if(n>=50 && n<100) printf("horde\n");
    else if(n>=100 && n<250) printf("throng\n");
    else if(n>=250 && n<500) printf("swarm\n");
    else if(n>=500 && n<1000) printf("zounds\n");
    else if(n>=1000) printf("legion\n");
    return 0;
}
