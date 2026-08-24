#include<iostream>
using namespace std;

int main() {
    int sterikCount = 5;// genral purpose 
    int rowCount = 5;
    int i = 0;
    int l=1;
    int space = sterikCount - 1;
    for(int l = 0; l < sterikCount; l++){
       for(int n = l ; n < space; n++){
        cout<<"";
       }
       for(int m= l ;m<=l;m++){
           cout<<" *";
           
        }
        cout<<"\n";
    }

    // for (i= 0; i < rowCount; i++) // look at the number of line    
    // {
    //     for (int k = i; k > 0; k--) {
    //         cout<<" ";                     //prints a space in start where required
    //     }
    //     for (int j = i; j < sterikCount; j++) {
    //         cout<<"* ";                    //prints total number of * required in a row
    //     }
    //     cout<<"\n";
    // }
    
    
    return 0;
   
}

