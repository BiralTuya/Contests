#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n==1) printf("0 1\n");
    else if(n>1 && n<6) printf("0 2\n");
    else if(n==6) printf("1 2\n");
    else if(n>=7){
        double ans=(double)(2*n)/7;
        int a=(int)ans;
        int b=ceil(ans);
        printf("%d %d\n",a,b);
    }
    return 0;
}
