#include<iostream>
using namespace std;

int main() {
    int count =5;
    int space=4;
    for(int i=0;i<count;i++){
        for(int k=0;k<space;k++){
            cout<<"";
        }
        for(int j=i;j<count;j++){
            cout<<"* ";
            
        }
        cout<<"\n";
        
    }
    return 0;
}

