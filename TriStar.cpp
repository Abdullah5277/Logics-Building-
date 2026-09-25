#include<iostream>
using namespace std;

int main() {
    int sterikCount = 5;
    int rowCount = 5;
    int i = 0;

    for (i= 0; i < rowCount; i++) // look at the number of line    
    {
        for (int k = i; k > 0; k--) {
            cout<<" ";                     //prints a space in start where required
        }
        for (int j = i; j < sterikCount; j++) {
            cout<<"* ";                    //prints total number of * required in a row
        }
        cout<<"\n";
    }
    
    
    return 0;
   
}

