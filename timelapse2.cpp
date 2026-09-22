#include<iostream>
using namespace std;

int main() {
    int initialSpace = 6;
    int spaceCount = 6;
    for(int i=0;i<8;i+=2){
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        for(int j=i;j<initialSpace;j++){
            cout<<"  ";
        }
        for(int j=i;j<spaceCount;j++){
            cout<<"  ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int i=5;i>0;i-=2){
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        for(int j=i;j<7;j++){
            cout<<"  ";
        }
        for(int j=i;j<7;j++){
            cout<<"  ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}