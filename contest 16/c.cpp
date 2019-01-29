#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c=1;
    int len=s.length();
    int i;
    for(i=0;i<len;i++){
        if(s[i]==s[i-1]){
            c++;
            if(c==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else c=1;
    }
    cout<<"NO"<<endl;
    return 0;
}
