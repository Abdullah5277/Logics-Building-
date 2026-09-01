#include<iostream>
using namespace std;

int main() {
    
  int rows=10;
  int mid =10/2;
    for(int i=0;i<=rows;i++){
        for(int j=0;j<rows+1;j++){
            if(i==0||i==rows || j==0 ||j==rows){
                cout<<("* ");
            }
            else if(j==mid -1)
                    cout<<"  ";
        }
        cout<<"\n";
    }
    
    return 0;}