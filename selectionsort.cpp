#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;

        for(int j=i+1;j<n;j++){

            if(arr[j] < arr[minindex]){
                minindex=j;

            }
        }
        swap(arr[minindex],arr[i]);  
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<endl;
    }
}
int main(){
    int arr[5]={64,25,12,22,11};
    cout<<"The original array "<<endl;
    printarray(arr,5);
    cout<<"The sortyed array is"<<endl;
    selectionsort(arr,5);
    printarray(arr,5);
    
    
    return 0;

}