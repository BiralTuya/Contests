#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n[10];

int main(){
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    sort(n,n+10);
    printf("%d\n",n[9]);
    printf("%d\n",n[8]);
    printf("%d\n",n[7]);
    return 0;
}
