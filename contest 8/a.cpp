#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t,a,sum=0;
    string str;
    scanf("%d",&t);
    while(t--){
        cin>>str;
        if(str=="donate"){
            scanf("%d",&a);
            sum=sum+a;
        }
        else if(str=="report"){
            printf("%d\n",sum);
        }
    }
    return 0;
}
