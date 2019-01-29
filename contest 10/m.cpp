#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
#include<cstring>
using namespace std;

char s[150];

int main(){
    int t;
    scanf("%d",&t);
    getc(stdin);
    while(t--){
        stack<char>stk;
        gets(s);
        int len=strlen(s);
        int i;
        for(i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='['){
                stk.push(s[i]);
            }
            else if(s[i]==')'){
                if(stk.empty() || stk.top()!='('){
                    stk.push('a');
                    break;
                }
                stk.pop();
            }
            else if(s[i]==']'){
                if(stk.empty() || stk.top()!='['){
                    stk.push('a');
                    break;
                }
                stk.pop();
            }
        }
        if(stk.empty()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
