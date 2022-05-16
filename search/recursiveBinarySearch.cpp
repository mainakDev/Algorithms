#include<iostream>
using namespace std;
int recursiveBinarySearch(int arr[], int left, int right, int number){
    if(right >= 1){
        int mid = left + (right - 1)/2;
        if(arr[mid] == number) return mid;
        if(arr[mid] > number) return recursiveBinarySearch(arr, left, mid - 1, number);
        return recursiveBinarySearch(arr, mid + 1, right, number);
    }
    return -1;
}

int main(){
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = recursiveBinarySearch(arr, 0, n-1, x);
    (result == -1) ? cout<<"Element is not present in array"<<endl : cout<<"Element is present in index "<< result<<endl;
    return 0;
}
