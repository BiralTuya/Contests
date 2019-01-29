#include<bits/stdc++.h>
using namespace std;

int a[55];

int main(){
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0 && a[i]>=a[k-1]) c++;
    }
    printf("%d\n",c);
    return 0;
}
