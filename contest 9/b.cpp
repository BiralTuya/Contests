#include<iostream>
#include<cstdio>
using namespace std;

int a[1010];

int main(){
    int t,n,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        cin.ignore();
        int i;
        for(i=0;i<n-1;i++){
            scanf("%d ",&a[i]);
        }
        int j;
        for(j=0;j<n;j++){
            if((a[i]*2)==a[i+1]) c++;
        }
        printf("%d\n",c);c=0;
    }
    return 0;
}
