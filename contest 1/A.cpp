#include<iostream>
using namespace std;

int main(){
    long long a=0,b=0,sum=0;

    for(int i=0;;i++){
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        sum=a+b;
        cout<<sum<<endl;
        if(a==0 && b==0)
            break;
    }
    return 0;
}
