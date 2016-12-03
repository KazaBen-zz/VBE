#include <fstream>
#include <iostream>
int n, G[100], E[100],A[100],B[100],G1[100],E1[100],n2;
using namespace std;
int a=0;
int b=0;
int e=0;
int g=0;
void skaiciuok(int &a,int &b){
for(int i=1;i<=n;i++){
        a=a+G[i]*A[i];

}
for(int i=1;i<=n2;i++){
        b=b+E[i]*B[i];

}
}
int main()
{
ifstream df("U1.txt");
ofstream rf("U1rez.txt");
df>>n;
for(int i=1;i<=n;i++){
    df>>G[i];
}
for(int i=1;i<=n;i++){
    df>>A[i];
}
df>>n2;
for(int i=1;i<=n2;i++){
    df>>E[i];
}
for(int i=1;i<=n2;i++){
    df>>B[i];
}
skaiciuok(a,b);
for(int i=1;i<=n2;i++){
    rf<<E[i]<<" ";
    rf<<a/E[i]<<endl;
    e=e+a/E[i];
    a=a-(a/E[i]*E[i]);
}
rf<<e<<endl;
for(int i=1;i<=n;i++){
    rf<<G[i]<<" ";
    rf<<b/G[i]<<endl;
    g=g+b/G[i];
    b=b-(b/G[i]*G[i]);
}
rf<<g;

return 0;
}
