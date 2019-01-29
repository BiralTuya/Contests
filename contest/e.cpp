#include<bits/stdc++.h>
using namespace std;

int a[1000009];
int c[1000009];

int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
         cout<<"1";
         exit(0);
    }

    int j;
    for(j=0;j<n;j++){
        if(a[j]<=a[j+1])
        {
            c[j]=1;
        }
        else
            {
                c[j]=0;
        }

    }


    int flag=0;
    int cnt=0;
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        if(c[i]==1)
        {
            cnt++;
            flag=1;
        }
        else
        {
            cnt=0;
        }

        if(cnt>temp)
        {
            temp=cnt;

        }
    }
    if(flag==1)
    {
        cout<<temp+1<<endl;
    }
    else
        {
            cout<<"1"<<endl;
        }
    return 0;
}
