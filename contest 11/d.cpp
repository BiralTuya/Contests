#include <string.h>
#include <stdio.h>
#include<iostream>
#include<set>
#include<vector>
#include<sstream>
using namespace std;

char str[250];

int main(){
    string str;
   while(getline(cin,str)){
        string buf;
        vector<string>tokens;
        int i=0;
        int len=str.length();
        //cout<<len;
        while(i<len){
            if(isalpha(str[i]))
                str[i]=tolower(str[i]);
            if(str[i]=='-' && str[i+1]=='\n') str.erase(str.begin()+i);
            else str[i]==' ';
            i++;
        }
        stringstream ss(str);
        while(ss>> buf){
            tokens.push_back(buf);
            cout<<buf<<endl;
        }

   }

   return 0;
}
