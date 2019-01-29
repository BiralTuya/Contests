#include <string.h>
#include <stdio.h>
#include<iostream>
#include<set>
using namespace std;

char str[250];

int main(){
    int c=0;
   while(fgets(str,250,stdin)){
        const char s[2] ={" "};
        char *token;
        int i=0;
        int len=strlen(str);
        //cout<<len;
        while(i<len){
            if(!isalpha(str[i]))
                str[i]=' ';
            i++;
        }
        token = strtok(str,s);
        while( token != NULL ){
            c++;
            token = strtok(NULL, s);
        }
        cout<<c<<endl;c=0;
   }

   return 0;
}
