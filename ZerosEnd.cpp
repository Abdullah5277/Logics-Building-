// #include<iostream>
// using namespace std;

// int main() {
//      int   arr[]={1,0,3,0,5,0,0,6,7};
//      int size= sizeof(arr)/sizeof(arr[0]);

//       cout<<"Original aray are: ";
//       for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";

//       }
//        int zeros=0;
//       for(int i=0;i<size;i++){
//         if(arr[i]!=0){
//             arr[zeros]=arr[i];
//             zeros++;
//         }
        
//     }
//   while(zeros < size){
//         arr[zeros] = 0;
//         zeros++;
//     }

//     cout <<"Array after moving zeros to end: ";
//     for(int i=0;i<size;i++) {
//     cout <<arr[i]<< " ";
   
//     }
//      return 0;
// }

#include<iostream>
using namespace std;
 void MoveZeros(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
      if(arr[i]!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
      }
    }
 }
 
int main() {
    int  arr[]={1,0,3,0,5,0,0,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array are: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    MoveZeros(arr,n);
    cout<<"After move zeros to end: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }


    return 0;
}