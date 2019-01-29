#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t,l;
    double w,area1,area2,area,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        w=(double)((3*l)/5);
        area1=(double)(l*w);
        r=double(l/5);
        area2=(double)(3.1416*r*r);
        area=(double)area1-area2;
        printf("%.2lf %.2lf\n",area2,area);
    }
    return 0;
}
