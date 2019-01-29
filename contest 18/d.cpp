#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=0;
    cin>>s;
    int len=s.length();
    int i;
    for(i=0;i<len;i++){
        if(isupper(s[i])) c++;
    }
    printf("%d\n",c+1);
    return 0;
}
