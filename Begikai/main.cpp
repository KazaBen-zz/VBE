#include <iostream>
#include <fstream>
int k,h;
int f=0;
using namespace std;
struct begikas{
string vardas;
int minutes;
int sekundes;
int minfull;;
};
struct kieciausias{
string vardas;
int minutes;
int sekundes;
int minfull;
};
int main()
{
    ifstream df("U2.txt");
        begikas A[50];
    kieciausias B[50];
    df>>k;
    begikas temp;
    kieciausias tempo;
int c=0;

    char laik[21];
        for(int z=1;z<=k;z++){
        for(int i=1;i<=50;i++){
        A[i].minfull=0;
        B[i].minfull=0;
    }
        df>>h;
        for(int j=1;j<=h;j++){
            df.ignore(80, '\n');
            df.get(laik,21);
            A[j].vardas=laik;
            df>>A[j].minutes;
            df>>A[j].sekundes;
            A[j].minfull+=A[j].minutes*60+A[j].sekundes;
            cout<<A[j].vardas<<A[j].minutes<<" "<<A[j].sekundes<<" "<<A[j].minfull<<endl;
        }
  for(int i=1;i<=h;i++){
    for(int j=i;j<=h-1;j++){
        if(A[i+1].minfull<A[i].minfull){
            temp=A[j+1];
            A[j+1]=A[i];
            A[j]=temp;

        }
    }
  }
  cout<<endl;
  for(int j=1;j<=h;j++){
    cout<<A[j].vardas<<A[j].minutes<<" "<<A[j].sekundes<<" "<<A[j].minfull<<endl;
  }
  cout<<endl;
for(int i=1;i<=h/2;i++){
    c++;
    B[c].vardas=A[i].vardas;
    B[c].minutes=A[i].minutes;
    B[c].sekundes=A[i].sekundes;
    B[c].minfull=A[i].minfull;
       cout<<B[i].vardas<<B[i].minutes<<" "<<B[i].sekundes<<" "<<B[i].minfull<<endl;
}

        cout<<endl;
  for(int i=1;i<=c;i++){
    for(int j=i;j<=c-1;j++){
        if(B[i+1].minfull<B[i].minfull){
            tempo=B[j+1];
            B[j+1]=B[i];
            B[j]=tempo;

        }
    }
  }}
  for(int i=1;i<=c;i++){
    cout<<B[i].vardas<<B[i].minutes<<" "<<B[i].sekundes<<" "<<B[i].minfull<<endl;
  }
    return 0;
}
