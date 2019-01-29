#include <iostream>
#include <algorithm>
#include <vector>
#include<cstdio>
using namespace std;

int main () {
    int t;
    scanf("%d",&t);
    while(t--){
        int first[10000];
        int second[10000];
        vector<int> v(10000);
        vector<int>::iterator it;
        int m,n;
        cin>>m>>n;

        int i;
        for(i=0;i<m;i++) cin>>first[i];
        int j;
        for(j=0;j<n;j++) cin>>second[j];

        sort(first,first+m);
        sort(second,second+n);

        it=set_intersection (first, first+m, second, second+n, v.begin());
        v.resize(it-v.begin());

        cout<<(m+n)-2*(v.size())<<endl;
    }

    return 0;
}
