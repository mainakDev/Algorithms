#include<iostream>
using namespace std;
void merge(int arr[], int left , int mid, int right){
    int n1 =  mid - left + 1;
    int n2 = right - mid;

    //create new arrays
    int L[n1], R[n2];

    //copy data to temp arrays
    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    //merge two arrays back in arr[left ..... right]
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //copying the remaining element if L[]
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    //copying the remaining element if L[]
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if(left >= right) return;
    int mid = left + (right - left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout<< "Given array is : ";
    printArray(arr, arrSize);

    mergeSort(arr, 0 , arrSize -1);

    cout<< "Sorted array is: ";
    printArray(arr, arrSize);

    return 0;
}
