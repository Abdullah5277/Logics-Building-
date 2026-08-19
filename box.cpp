#include<iostream>
using namespace std;

int main() {
    // int i=0;
    // for(int i=0;i<5;i++){
    //     cout<<"* ";
    // }
    //     for (int j=i;j<4;j++){
    //         cout<<"*"<<endl;
          
    // }

    // for(int k=0;k<=5;k++){
    //     cout<<"* ";
    // }
    // for(i=0;i<5;i++){
    //     cout<<"*"<<endl;
    //     for(int j=0;j<4;j++){
    //         cout<<"   ";
    //     }
    //     // for(int k=1;k<2;k++){
    //     //     cout<<" *";
    //     // }
    // }

  int rows=5;
  
    for(int i=0;i<=rows;i++){
        for(int j=0;j<rows+1;j++){
            if(i==0||i==rows || j==0 ||j==rows){
                cout<<("* ");
            }
            else
                    cout<<"  ";
        }
        cout<<"\n";
    }
    
    return 0;
}