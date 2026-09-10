#include<iostream>
using namespace std;

int main() { 

    for(int i=0;i<5;i++){
        for(int k=0;k<i;k++){
            cout<<" * ";
        }
        for(int j=5;j>i;j--){
            cout<<"";
        }
        cout<<"\n";
    }

    for(int i=2;i<=5;i++){
        for(int k=5;k>i;k--){
            cout<<" * ";
        }
        for(int j=0;j<i;j++){
            cout<<"";
        }
        cout<<"\n";
    }
    return 0;
}

