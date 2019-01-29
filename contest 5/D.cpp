#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    double u,v,w;
    double area,s;
    while(scanf("%lf %lf %lf",&u,&v,&w)!=EOF){
    s=(u+v+w)/2;
    area=(4.0/3.0)*sqrt(s*(s-u)*(s-v)*(s-w));
    if(area>0) printf("%.3lf\n",area);
    else{
        area=-1;
        printf("%.3lf\n",area);
    }
    area=0;
    }
    return 0;
    }
