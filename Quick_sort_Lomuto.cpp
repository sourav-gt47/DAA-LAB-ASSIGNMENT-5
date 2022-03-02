#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
int temp=*a;
*a= *b;
*b= temp;

}
//lomuto's partition pivot always = arr[right]
int partition(int arr[], int low , int high){
int i= low-1;
int pivot=arr[high];

for(int j=low ; j<=high-1; j++){

if(arr[j] <= pivot){

  i+=1;
  swap(&arr[i],&arr[j]);

}

}
i+=1;
swap(&arr[i], &arr[high]);
return i; //pivot index


}


void quicksort(int arr[], int low , int high){

if(low < high){

int j= partition(arr, low, high);
quicksort(arr , low , j-1);
quicksort(arr, j+1, high);  
}
 }



int main(){

int arr[]={12,5,2,1,90};
int n=sizeof(arr)/sizeof(arr[0]);
quicksort(arr, 0, n-1);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
return 0;

}