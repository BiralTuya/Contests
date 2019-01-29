#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t,x1,y1,x2,y2,p,p1,p2;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        printf("Case %d:\n",i);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&p);
        int j;
        for(j=0;j<p;j++){
            scanf("%d %d",&p1,&p2);
            if((p1>=x1 && p1<=x2) && (p2>=y1 && p2<=y2))
                printf("Yes\n");
            else
                printf("No\n");
        }

    }
    return 0;
}
