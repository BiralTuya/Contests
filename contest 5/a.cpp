#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,l=0;
    double area=0,area1=0,area2=0,w=0,r=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&l);
        w=(double)(6*l/10);
        area1=(double)(l*w);
        r=(double)(l/5);
        int a=-1;
        area2=(double)(a*r*r);
        area=(double)(area1-area2);
        printf("%.2lf %.2lf\n",area,area2);
    }
    return 0;
}
