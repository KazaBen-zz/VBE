#include <iostream>
#include <fstream>
using namespace std;
int x0,y0,n,k,j;

struct kom{
int K[30];
int kiekis;
string priezastis;
int x;
int y;
int k;
};
int main()
{

        ifstream df("U1.txt");
        df>>x0>>y0;
        df>>n;
        cout<<x0<<" "<<y0<<endl<<n<<endl;
        kom A[n];
        for(int i=1;i<=n;i++){
            df>>A[i].k;
            cout<<A[i].k<<" ";
            for(int j=1;j<=A[i].k;j++){
               df>> A[i].K[j];
               cout<<A[i].K[j]<<" ";
            }
        A[i].kiekis=0;
        cout<<endl;
        }
        cout<<"abbas";
        /*cout<<"aaaaaa";
        for(int i=1;i<=n;i++){
            A[i].x=x0;
            A[i].y=y0;
            for(int j=1;j<=A[i].k;j++){
                                if(A[i].K[j]==1){
                    A[i].x=A[i].x+1;
                    A[i].y=A[i].y+1;
                    A[i].kiekis++;
                }
                                if(A[i].K[j]==2){
                    A[i].x=A[i].x+1;
                    A[i].y=A[i].y-1;
                    A[i].kiekis++;
                }
                                if(A[i].K[j]==3){
                    A[i].x=A[i].x-1;
                    A[i].y=A[i].y-1;
                    A[i].kiekis++;
                }
                                if(A[i].K[j]==1){
                    A[i].x=A[i].x-1;
                    A[i].y=A[i].y+1;
                    A[i].kiekis++;
                }

            }
            if(A[i].x==x0&&A[i].y==y0){
                A[i].priezastis=     "pasiektas tikslas    ";
            }
            if(A[i].k==i&&A[i].x!=x0&&A[i].y!=y0){
                    A[i].priezastis=="sekos pabaiga        ";
            }
            cout<<A[i].priezastis<<" "<<A[i].kiekis<<endl;
        }

*/
        return 0;
}
