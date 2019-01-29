#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

string str="";
string str1="";
int len=0,len1=0;

int main(){
    cin>>str;
    cin>>str1;
    reverse(str1.begin(),str1.end());
    if(str1==str) printf("YES\n");
    else printf("NO\n");
    return 0;
}

