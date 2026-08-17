#include<iostream>
using namespace std;

int main() {
    int arr[100];
int size= sizeof(arr)/sizeof(arr[0]);
cout<<"Enter the size of array: ";
cin>>size;
for(int i=0;i<size;i++){
cout<<"Original array at "<<i << " index ";
cin>>arr[i];
}
cout<<" Alternatives are:";
for(int i=0;i<size;i+=2){
cout<<arr[i]<<" ";}
    return 0;
}