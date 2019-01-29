#include<iostream>
#include<math.h>
using namespace std;

const int sz=1E2;

int numbers[sz+10],primes[80000];
void sieve(){
    int sqrtn=sqrt((double)sz);
    for(int i=3;i<=sz;i+=2){
        if(numbers[i]==0){
            for(int j=i*i;j<=sz;j+=2){
                numbers[j]==1;
            }
        }
    }
    int k=0;
    primes[k++]=2;
    for(int i=3;i<=sz;i+=2){
        if(numbers[i]==0){
            primes[k++]=i;
            cout<<primes[k]<<endl;
        }
    }
};
int main(){
    //int n=0;
    //cin>>n;
    //for(int i=0;i<n;i++){
        sieve();
   // }
    return 0;
}
