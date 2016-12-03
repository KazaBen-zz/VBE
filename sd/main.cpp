#include <iostream>
#include <fstream>
int n,A[10],B[10],C[10],dir,LA=0,LB=0,LC=0;
using namespace std;

int main()
{
        ifstream df("U1.txt");
        df>>n;
        for(int i=1;i<=n;i++){
            df>>A[i]>>B[i]>>C[i];

        }
            df>>dir;

        for(int i=1;i<=n;i++){
                cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<"    ";
            if(A[i]==B[i]||A[i]==C[i]&&(A[i]<B[i]||A[i]<C[i])){
                if(dir==1){ LA++;}
            }
             if(((A[i]==C[i]&&(dir=2))||(B[i]==C[i])||(A[i]==B[i]))&&B[i]<A[i]&&B[i]<C[i]){
                if(dir==2){ LB++;}
            }
             if((B[i]==C[i]||A[i]==C[i])&&(C[i]<B[i]||C[i]<A[i])){
                if(dir=3){ LC++;}
             }
            if(A[i]<B[i]&&A[i]<C[i]){
                LA++;
            }
             if(B[i]<A[i]&&B[i]<C[i]){
                LB++;
            }
             if(C[i]<A[i]&&C[i]<B[i]){
                LC++;
            }
        cout<<LA<<" "<<LB<<" "<<LC<<endl;
        }

        cout<<LA<<" "<<LB<<" "<<LC;
        return 0;
}
