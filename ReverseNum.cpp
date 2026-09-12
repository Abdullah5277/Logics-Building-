#include<iostream>
using namespace std;

int main() {

    int num[]={10,20,30,40} ;
    cout<<"Original Num are: ";
    for(int i=0;i<4;i++){
       cout<<num[i] <<" " ;
    }
     cout<<"\n";   
      cout<<"Reverse num are : ";
     for(int i=3;i>=0;i--){
        cout<<num[i]<<" ";
     }
    
    return 0;
}