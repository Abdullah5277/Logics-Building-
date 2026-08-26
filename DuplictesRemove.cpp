// Remove Duplicates – Remove repeated values from a sorted array.
// Arr [1,2,3,1,4,5,3,6,7,6]
// Also display what numbers were repeated.


// Move Zeros to the End – Move all 0s to the end while keeping the order of other elements.
// Arr [1,0,3,0,5,0,0,6,7]

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[]={1,2,3,1,4,5,3,6,7,6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Before Array are: ";
//     for(int i=0;i<size;i++){
//         // cout<<arr[i]<<" ";
//         bool isDuplicate=false;
//         cout<<"After array are: ";
//         for(int j=0;j<i;j++){
//             if(arr[i]==arr[j])
//              isDuplicate==true;
//         }
//         if(isDuplicate == false)
//             cout << arr[i] << " ";
//     }
//     return 0;
// }


int arr[7]={1,2,3,4,56,6,7};//
int arr[7]={};
#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int arr_length) {
    int i = 0;

    for (int j = 1; j < arr_length; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}
int main() {
    int Arr []={1, 1, 2, 2, 3, 3, 4, 5, 6, 6};
    int arr_length=sizeof(Arr)/sizeof(Arr[0]);

    cout<<"Array are: ";
    for(int i=0;i<arr_length ;i++){
        cout<<Arr[i]<<" ";
    }
cout<<endl;
removeDuplicates(Arr,arr_length);
cout<<"Remove repeated values from a sorted array are: ";
for(int i=0;i<Arr[i];i++){
    cout<<Arr[i]<<" ";
}
    
    return 0;
}





