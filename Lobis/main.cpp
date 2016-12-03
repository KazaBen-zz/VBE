#include <iostream>
#include <fstream>

using namespace std;
int A[10];
int main()
{
    ifstream df("U1.txt");
    for(int i=1;i<=5;i++){
        df>>A[i];
    }
    for(int i=6;i<=10;i++){
        A[i]=0;
    }
    for(int i=1;i<=15;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=5;i++){
            if(A[i]>0)
        for(int j=2;j<=10;j++){
            A[i]--;
            A[j]++;
        }
    }
        for(int i=1;i<=10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
