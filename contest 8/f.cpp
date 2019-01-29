#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n==4 || n==7 || n==44 || n==77 || n==47 || n==74 || n==444 || n==447 || n==474 || n==477 || n==777 || n==747 || n==774 || n==744)
        printf("YES\n");
    else if(n%4==0 || n%7==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
