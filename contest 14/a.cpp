#include<bits/stdc++.h>
using namespace std;

int a[5];

int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        int j;
        for(j=0;j<3;j++){
            scanf("%d",&a[j]);
        }
        sort(a,a+3);

        printf("Case %d: %d %d %d\n",i,a[0],a[1],a[2]);
    }
    return 0;
}
