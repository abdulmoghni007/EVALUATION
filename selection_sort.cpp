#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
  int i,j,small;
  for(i=0;i<n;i++){
    small = i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[small]){
          small = j;
      }
      
      //swap elements...
      int temp = arr[small];
      arr[small] = arr[i];
      arr[i] = temp;
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

  selection_sort(arr,n);

  cout<<endl<<"Array after sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }


}