#include<bits/stdc++.h>
using namespace std;

char a[100];
char b[100];
char c[100];

int main(){
    int t,flag=0,flag2=0;
    //scanf("%d",&t);
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++){
        fgets(a,100,stdin);
        fgets(b,100,stdin);
        if(strcmp(a,b)==0) flag=1;
        else{
            int j;
            for(j=0;j<strlen(a);j++){
                if(isalpha(a[j])){
                    c[j]=a[j];
                    cout<<c[j];
                }
            }
            if(strcmp(c,b)==0) flag2++;
        }
        if(flag>0) printf("Case %d: Yes\n",i);
        else if(flag2>0) printf("Case %d: Output Format Error\n",i);
        else printf("Case %d: Wrong Answer\n",i);
        flag=0;flag2=0;
    }
    return 0;
}
