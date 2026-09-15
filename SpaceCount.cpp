#include<iostream>
using namespace std;

int main() {
    for (int i=0;i<5;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<5;j++){
            cout<<j;
        }
        cout<<"\n";
    }
     for (int i=4;i>=0;i--){
       //for(int i=0;i<5;i++){    
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<=4;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}