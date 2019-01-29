#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c=0,d=0;
    scanf("%d",&t);
    while(t--){
        int w;
        scanf("%d",&w);
        if(w==100) c++;
        if(w==200) d++;
    }
    if(t==1) cout<<"NO"<<endl;
    if(c%2!=0) cout<<"NO"<<endl;
    else if(d%2!=0 && c==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
