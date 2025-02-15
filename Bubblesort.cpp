#include<iostream>
using namespace std;
void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }

    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr [5]={64,25,12,22,11};
    cout<<"The original array is "<<endl;
    printarray(arr,5);
    cout<<"The sorted array is "<<endl;
    Bubblesort(arr,5);
    printarray(arr,5);

    
}