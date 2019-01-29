#include<bits/stdc++.h>
using namespace std;

int n[110];

int main(){
    int t,c=0,d=0,ans=0,ans1=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n[i]);
        if(n[i]%2==0){
            c++;
            ans=i;
        }
        if(n[i]%2!=0){
            d++;
            ans1=i;
        }
    }
    if(c==1) printf("%d\n",ans);
    if(d==1) printf("%d\n",ans1);
    return 0;
}
