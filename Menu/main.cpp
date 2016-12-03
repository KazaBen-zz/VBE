#include <iostream>
#include <fstream>
using namespace std;
int x0,y0,n,ka[30];

struct kom{
int K[30];
int kiekis;
string priezastis;
int x;
int y;
int krak;
};
int main()
{

        ifstream df("U1.txt");
        df>>x0>>y0;
        df>>n;
        cout<<x0<<" "<<y0<<endl<<n<<endl;
        kom A[n];
        for(int i=1;i<=n;i++){
            df>>ka[i];
            cout<<ka[i]<<" ";
            for(int j=1;j<=ka[i];j++){
                df>>A[i].K[j];
                cout<<A[i].K[j]<<" ";
            }
        A[i].kiekis=0;
        cout<<endl;
        }
        cout<<endl;
        for(int i=1;i<=1;i++){
A[i].krak=ka[i];    }
        for(int i=1;i<=n;i++){
            A[i].x=x0;
            A[i].y=y0;
            for(int j=1;j<=ka[i];j++){

                                if(A[i].K[j]==1){
                    A[i].x=A[i].x+1;
                    A[i].y=A[i].y+1;
                    A[i].kiekis++;
                }
                                if(A[i].K[j]==2){
                    A[i].x++;
                    A[i].y--;
                    A[i].kiekis++;
                }
                                if(A[i].K[j]==3){
                    A[i].x--;
                    A[i].y--;
                    A[i].kiekis++;
                }
                                if(A[i].K[j]==4){
                    A[i].x--;
                    A[i].y++;
                    A[i].kiekis++;
                }
                if(A[i].x==x0&&A[i].y==y0&&j!=1){
                A[i].priezastis="pasiektas tikslas    ";
                //cout<<A[i].priezastis<<" "<< A[i].kiekis;
                 break;
                //cout<<A[i].x<<" "<<A[i].y<<endl;

            }
            }
        }
        cout<<A[2].priezastis<<endl<<endl<<endl;
        for(int i=1;i<=n;i++){
            cout<<A[i].priezastis;
            for(int j=1;j<=ka[i];j++){
                cout<<A[i].K[j]<<" ";
            }
            cout<<A[i].kiekis;
            if(A[i].priezastis=="sekos pabaiga        "){
                cout<<A[i].x<<" "<<A[i].y;
            }
            cout<<endl;
     }

        return 0;
}
