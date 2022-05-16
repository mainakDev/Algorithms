#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int number){
    while(left <= right){
        int mid = left + (right - 1) / 2;
        if(arr[mid] == number) return number;
        if(arr[mid] < number) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,10,40};
    int number = 10;
    int n = sizeof(arr) /sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, number);
    (result == -1) ? cout << "Element is not present"<<endl : cout<<"Element is present at index " <<result<<endl;
    return 0;
}
