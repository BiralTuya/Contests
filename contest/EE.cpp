#include<bits/stdc++.h>
using namespace std;

#define Lim 460300

vector<bool> b((Lim>>1) + 100);
int p[50050];

void prime()
{
    for(int i=3; i<=9257; i+=2)
        if(!b[(i-3)>>1])
            for(int j=i*i; j<Lim; j+=i)
                if(j&1)
                    b[(j-3)>>1]=1;

    p[0]=2;
    int cnt = 1;
    for(int i=0; 2*i<Lim; i++)
        if(!b[i])
            p[cnt++] = 2*i + 3;
}
int main(){
    int i,n,m;
    int sum=0,sum1=0;
    for(i=1;;i++){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0) break;
        sum=prime(n);
        sum1=prime(m);
        int total=sum+sum1;
        //cout<<sum<<endl;
        //cout<<sum1<<endl;
        //cout<<total<<endl;
        if(total%2==0) printf("Case %d: Even.\n",i);
        else printf("Case %d: Odd.\n",i);
}
    return 0;
}
