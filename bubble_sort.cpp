#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
  int i,j;

  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(& arr[j], &arr[j+1]);
      }
    }
  }
}

int main() {
  int arr[5];
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter elements of array: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"Array before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }

  bubble_sort(arr,n);

  cout<<endl<<"Array after sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}
