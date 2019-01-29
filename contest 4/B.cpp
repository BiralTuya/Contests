#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[150];

int main(){
    int len=0,a=0,b=0,c=0,d=0,e=0,flag=0;
    fgets(str,sizeof(str),stdin);
        len=strlen(str);
        if(str[len-1]!='\0'){
            str[len-1]='\0';
            len--;
        }
        int i=0;
        for(i=0;i<len;i++){
            if(str[i]=='h'){
                a=i;
                cout<<flag<<endl;
                for(int j=a;j<len;j++){
                    if(str[j]=='e'){
                        b=j;
                        cout<<flag<<endl;
                        for(int k=b;k<len;k++){
                            if(str[k]=='l'){
                                c=k;
                                cout<<flag<<endl;
                                for(int l=c;l<len;l++){
                                    if(str[l]=='l'){
                                        d=l;
                                        cout<<flag<<endl;
                                        for(int m=d;m<len;m++){
                                            if(str[m]=='o'){
                                                e=m;
                                                flag=1;
                                                cout<<flag<<endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<flag<<endl;
        if(flag==1) printf("YES\n");
        else if(flag==0) printf("NO\n");
        return 0;
    }
