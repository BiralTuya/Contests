#include<bits/stdc++.h>
using namespace std;

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        if (val(str[i]) >= base)
        {
           printf("Invalid Number");
           return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

char str[50];
char str1[50];
int main(){
    int digx,basex;
    scanf("%d %d",&digx,&basex);
    int i;
    /*for(i=0;i<digx;i++){
        scanf("%c",&str[i]);
    }*/
    gets(str);
    int a=toDeci(str,basex);

    int digy,basey;
    scanf("%d %d",&digy,&basey);
    int j;
    /*for(j=0;j<digy;j++){
        scanf("%c",&str1[j]);
    }*/
    gets(str1);
    int b=toDeci(str1,basey);

    if(a==b) cout<<"="<<endl;
    if(a>b) cout<<">"<<endl;
    if(a<b) cout<<"<"<<endl;

    return 0;
}
