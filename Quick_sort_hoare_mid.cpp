#include<iostream>
using namespace std;

void swap(int* a, int* b){
int temp=*a;
*a= *b;
*b= temp;

}
//hoare's partition pivot  = arr[mid]
int partition(int arr[], int low , int high){
int i= low-1;
int j=high+1;
int mid=(low + high)/2;
int pivot=arr[mid];

while(i<j){

do{

   i++;

}while( arr[i]<pivot );

do
{
    j--;
    
}while (arr[j]>pivot);

if(i < j)
swap(&arr[i], &arr[j]);


}

//swap(&arr[mid], &arr[j]);
return j; //pivot index



}


void quicksort(int arr[], int low , int high){

if(low < high){

int j= partition(arr, low, high);
quicksort(arr , low , j-1);
quicksort(arr, j+1, high);  
}
 }



int main(){

int arr[]={45,2,1,22,11,9};
int n=sizeof(arr) / sizeof(arr[0]);

quicksort(arr, 0, n-1);
cout<<"sorted array::";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
return 0;

}

