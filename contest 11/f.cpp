#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m,n,c=0;
    vector<int>v1,v2;
    while(scanf("%d %d",&m,&n)!=EOF){
        if(m==0 && n==0) break;
        int i;
        for(i=0;i<m;i++) v1.push_back(i);
        int j;
        for(j=0;j<n;j++) v2.push_back(j);
        if(m>=n){
            if(find(v1.begin(),v1.end(),v2)!=v1.end()) c++;
        }
        else if(m<n){
            if(find(v2.begin(),v2.end(),v1)!=v2.end()) c++;
        }
        cout<<c<<endl;c=0;
    }
    return 0;
}
