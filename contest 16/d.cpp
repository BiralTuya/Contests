#include<bits/stdc++.h>
using namespace std;

char str[110];

int main(){
    fgets(str,110,stdin);
    int len=strlen(str);
    int i;
    for(i=0;i<len-1;i++){
        str[i]=tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
                int a;
        }
        else{
            cout<<'.';
            cout<<str[i];
        }
    }
    cout<<endl;
    return 0;
}
