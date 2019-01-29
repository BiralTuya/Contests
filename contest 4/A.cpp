#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[150];

int main(){
    int len=0;
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
        if(str[len-1]!='\0'){
            str[len-1]='\0';
            len--;
        }
    int i=0;
    for(i=0;i<len;i++){
        if(str[i]==str[i+1]){
                for(int j=i;j<len;j++){
                    str[j]=str[j+1];
                }
                str[len-1]='\0';
                len--;
        }
    }
    printf("%s\n",str);
    return 0;
}
