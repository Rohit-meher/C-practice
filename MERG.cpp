
#include <iostream>
using namespace std;


int conqure (int arr[],int low,int mid,int high){

    int* mearge = new int[high - low + 1];

    int i,j,k;

    i = low;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= high)
    {
        /* code */
        if (arr[i] < arr[j]){
            mearge[k] = arr[i];
            i++;
            k++;
        }
        else{
            mearge[k] = arr[j];
            j++;
            k++;
        }
    }
    

}



void divide(int arr[],int low,int high){

    if (low >= high){
        return;
    }

    int mid = low +(high - low)/2;

    divide(arr,low,mid);
    divide(arr,mid + 1,high);

    conqure (arr,low,mid,high);
} 

int main(){

    return 0;
}