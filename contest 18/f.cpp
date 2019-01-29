#include<bits/stdc++.h>
using namespace std;

int main(){
    int s=0,t=0;
    scanf("%d %d",&s,&t);
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    int i,p=0,c=0,d=0,q=0,ap=0,og=0;
    for(i=0;i<m;i++){
        scanf("%d",&ap);
        p=a+ap;
        if(p>=s && p<=t) c++;
    }
    int j;
    for(j=0;j<n;j++){
        scanf("%d",&og);
        q=b+og;
        if(q>=s && q<=t) d++;
    }
    printf("%d\n%d\n",c,d);
    return 0;
}

