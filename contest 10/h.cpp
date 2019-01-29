#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str,str2;
    int n=0,k=0,d=0;
    while(n!=101){
        scanf("%d",&k);
        if(k==0) break;
        cin>>str;
        int len=str.length();
        d=len/k;
        int i;
        for(i=0;i<len;i+=d){
            str2=str.substr(i,d);
            reverse(str2.begin(),str2.end());
            cout<<str2;
        }
        cout<<endl;
    }
    return 0;
}
