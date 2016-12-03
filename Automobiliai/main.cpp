#include <iostream>
using namespace std;
int A[10];
int main()
{ int laikin;
    for(int i=1;i<=10;i++){
        A[i]=i;
    }
        for(int i=1;i<=10;i++){
        for(int j=1;j<=9;j++){
            if(A[j]<A[j+1]){
            laikin=A[j+1];
            A[j+1]=A[j];
            A[j]=laikin;
            }
        }
    }
        for(int i=1;i<=10;i++){
        cout<<A[i]<<endl;
    }
        return 0;
}
