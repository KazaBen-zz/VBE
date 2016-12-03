#include <iostream>
#include <fstream>

using namespace std;
int n,A[100],B[100],C[100],D[100],AA[100],BB[100],CC[100],maxx;
int main()
{
    ifstream df("U1.txt");
    df>>n;
    for(int i=1;i<=n;i++){
        df>>A[i]>>B[i]>>C[i];
        A[i]=maxx;
        if(B[i]>A[i]) B[i]=maxx;
        if(C[i]>maxx) C[i]=maxx;
        if(A[i]==maxx) AA[i]+=4;
        if(B[i]==maxx]) BB[i]+=4;
        if(C[i]==maxx]) CC[i]+=4;
        if()



    }
    cout << "Hello world!" << endl;
    return 0;
}
