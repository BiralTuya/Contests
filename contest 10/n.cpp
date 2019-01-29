#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b,c,d,j=0;
        int dec=0,rem=0,base=1,dec1=0,rem1=0,base1=1,dec2=0,rem2=0,base2=1,dec3=0,rem3=0,base3=1;
        long int p,q,r,s;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%ld.%ld.%ld.%ld",&p,&q,&r,&s);
        while(p>0){
            rem=p%10;
            dec=dec+rem*base;
            base=base*2;
            p=p/10;
        }
        while(q>0){
            rem1=q%10;
            dec1=dec1+rem1*base1;
            base1=base1*2;
            q=q/10;

        }
        while(r>0){
            rem2=r%10;
            dec2=dec2+rem2*base2;
            base2=base2*2;
            r=r/10;
        }
        while(s>0){
            rem3=s%10;
            dec3=dec3+rem3*base3;
            base3=base3*2;
            s=s/10;
        }
        if(dec==a && dec1==b && dec2==c && dec3==d)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);

    }

    return 0;
}
