#include<iostream>
#include<cstdio>
using namespace std;

int a[1000009];
int b[1000009];

int main(){
    long long m,n=0;
    int c=0;
    while(1){
    scanf("%lld %lld",&n,&m);
    if(n==0 && m==0) break;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int j;
    for(j=0;j<m;j++){
        cin>>b[j];
    }
    if(n>=m){
        int k;
        for(k=0;k<n;k++){
            int p;
            for(p=0;p<m;p++){
                if(a[k]==b[p]) c++;
            }
        }
    }
    else if(n<m){
        int k;
        for(k=0;k<m;k++){
            int p;
            for(p=0;p<n;p++){
                if(b[k]==a[p]) c++;
            }
        }
    }
    cout<<c<<endl;c=0;
    }

    return 0;
}
