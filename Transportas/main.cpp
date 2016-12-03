#include <iostream>
#include <fstream>
using namespace std;
int n,G[100];
int maxxnr=1;
struct stotele{
    string name;
int kiekis;
int N[100];
};
void skaitymas(int &n, stotele A[]){
 ifstream df("U1.txt");
    df>>n;
    char laik[21];
    for(int i=1;i<=n;i++){
        df.ignore(80,'\n');
        df.get(laik,21);
        A[i].name=laik;
        df>>A[i].kiekis;
        for(int j=1;j<=A[i].kiekis;j++){
            df>>A[i].N[j];
        }
    }



}
void ieskok(stotele A[],int &maxxnr){ maxxnr=1;
for(int i=1;i<=100;i++){
    if(G[i]>G[maxxnr]){
        maxxnr=i;
    }
}

}
void rasyk(int maxxnr,stotele A[]){
    ofstream rf("U1rez.txt");
rf<<maxxnr<<endl;
for(int i=1;i<=n;i++){
    for(int j=1;j<=A[i].kiekis;j++){
        if(A[i].N[j]==maxxnr){
            rf<<A[i].name;
            rf<<endl;
            break;
        }
    }
}}
int main()

{
    stotele A[100];
   skaitymas(n,A);
    for(int i=1;i<=100;i++){
        G[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=A[i].kiekis;j++){
                G[A[i].N[j]]++;
            }
        }

ieskok(A,maxxnr);
rasyk(maxxnr,A);
    return 0;


}
