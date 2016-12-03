#include <iostream>
#include <fstream>
int n,N[100],Z[100],laikn[100], laikz[100], temp,laikzt[100],laikzn[100], maxx;
using namespace std;
ifstream df("U1.txt");
ofstream rf("U1rez.txt");

void skaityk(int &n){
    df>>n;
    for(int i=1;i<=n;i++){
    df>>N[i];
    df>>Z[i];
    };}
void spausdinknr(int laikn[]){
    for(int i=1;i<=100;i++){
if(laikn[i]!=0){
if(laikn[i]/10==0)
    cout<<"     "<<laikn[i];
if(laikn[i]/10==1)
    cout<<"    "<<laikn[i];

}
}
}
void daugiausia(int laikzt[]){
    maxx=1;
for(int i=2;i<=100;i++){
    if(laikzt[maxx]<laikzt[i])
    maxx=i;
}
}
int main()
{
    for(int i=1;i<=100;i++){
    laikn[i]=0;
    Z[i]=0;
    N[i]=0;
    laikz[i]=0;
}
skaityk(n);
for(int i=1;i<=100;i++){
    if(N[i]!=0){
        laikn[N[i]]=N[i];
    }
}
spausdinknr(laikn);
for(int i=1;i<=100;i++){
    if(Z[i]>0){
        laikzt[N[i]]+=Z[i];
    }
}
cout<<endl;
for(int i=1;i<=100;i++){
    if(laikzt[i]!=0){
    if(laikzt[i]/10==0)
    cout<<"     "<<laikzt[i];
if((laikzt[i]/10>=1)&&(laikzt[i]/10<10))
    cout<<"    "<<laikzt[i];
    }
}
for(int i=1;i<=100;i++){
    if(Z[i]<0){
        laikzn[N[i]]+=Z[i];
    }
}
cout<<endl;
for(int i=1;i<=100;i++){
    if(laikzn[i]-laikzt[i]!=0){
        if(laikzn[i]/10==0)
    cout<<"     "<<laikzn[i];
if((laikzn[i]/10>=1)&&(laikzn[i]/10<10))
    cout<<"    "<<laikzn[i];
    }
}
daugiausia(laikzt);
cout<<endl<<maxx;
    return 0;
}
