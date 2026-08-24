#include <iostream>
using namespace std;
int main() {
    int sterikCount = 7;

    int space = sterikCount - 1;
    for (int i = 0; i < sterikCount; i+=2) // look at the number of line    
    {
        for (int k = 0; k < space; k++) {
            cout<<" ";                     //prints a space in start where required
        }
        for (int j = 0; j <= i; j++) {
            if(j==0||j==i){
                cout<<"* "; }
            else
            {
               cout<<"  ";
            }
                

           
                               //prints total number of * required in a row
            // _sleep(200);
        }
        cout<<"\n";
        space-=2;
    }

    space = 1;
    for (int i = 0; i < sterikCount-2; i+=2) // look at the number of line    
    {
        for (int k = 0; k <= space; k++) {
            cout<<" ";                     //prints a space in start where required
        }
        for (int j = 0; j <= sterikCount-3-i; j++) {
             if(j==0||j==sterikCount-3-i)
                cout<<"* "; 
            else
               cout<<"  ";
                           //prints total number of * required in a row
            // _sleep(200);
        }
        cout<<"\n";
        space+=2;
    }
    
    return 0;
}
