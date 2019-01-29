#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    int sum=0,sum1=0,sum2=0,a,b,c;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    int j;
    for(j=0;j<n-1;j++){
        scanf("%d",&b);
        sum1+=b;
    }
    int k;
    for(k=0;k<n-2;k++){
        scanf("%d",&c);
        sum2+=c;
    }
    printf("%d\n",sum-sum1);
    printf("%d\n",sum1-sum2);
    return 0;
}
