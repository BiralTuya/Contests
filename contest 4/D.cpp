#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[150];

int main(){
    int i=0,n=0,len=0,number=0,ifalse=0;
    scanf("%d%d",&n,&ifalse);
    for(i=0;i<n;i++){
        fgets(str,sizeof(str),stdin);
        len=strlen(str);
        if(str[len-1]!='\0'){
            str[len-1]='\0';
            len--;
        }

    if(len<=10) printf("%s\n",str);
    else printf("%c%d%c\n",str[0],len-2,str[len-1]);
    }
    return 0;
}
