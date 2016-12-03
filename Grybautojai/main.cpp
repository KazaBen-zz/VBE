#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int n,a1,a2,a3,z;
        int maxx=1;

struct zmogus{
string vardas;
int a;
int b;
int c;
int gg;
};
void skaityk(zmogus A[],int &n, int z){
        ifstream df("U2.txt");
    char laik[16];
    df>>n;
        for(int i=1;i<=n;i++){
            df.ignore(80,'\n');
            df.get(laik,16);
            A[i].vardas=laik;
            df>>z;
            for(int j=1;j<=z;j++){
            df>>a1>>a2>>a3;
            A[i].a+=a1;
            A[i].b+=a2;
            A[i].c+=a3;
            }
            A[i].gg=A[i].a+A[i].b+A[i].c;
        }
}
void rasyk(zmogus A[], int &n, int &maxx){
        for(int i=1;i<=n;i++){
            cout<<A[i].vardas<<A[i].a<<" "<<A[i].b<<" "<<A[i].c<<" "<<A[i].gg<<endl;
        }
        for(int i=1;i<=100;i++){
            if(A[i].gg>A[maxx].gg){
                maxx=i;
            }
        }
        cout<<A[maxx].vardas<<A[maxx].gg;
        }
int main()
{
    zmogus A[100];
        for(int i=1;i<=100;i++){
        A[i].a=0;
        A[i].b=0;
        A[i].c=0;
        A[i].gg=0;
    }
        skaityk(A,n,z);
        rasyk(A,n,maxx);

    return 0;
}
