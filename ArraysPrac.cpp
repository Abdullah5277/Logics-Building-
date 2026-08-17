#include <iostream>
using namespace std;

int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int arr_length = sizeof(arr) / sizeof(arr[0]);
//    for(int i=0;i<4;i++){
//     cout<<arr[i]<<endl;
//    }
//   cout << "Array's Length : " << arr_length;


int arr[2][3]={{1,2,5},{2,3,5}};
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<"The two dimmension array are: "<<arr[i][j]<<endl;
    }
}

  return 0;
}