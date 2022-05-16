#include<iostream>
using namespace std;
int ternarySearch(int arr[], int left, int right, int number){
    if(right >= 1){
         int mid1 = left + (right - left)/3;
    int mid2 = mid1 + (right - left)/3;
    if(arr[mid1] == number) return mid1;
    if(arr[mid2] == number) return mid2;
    if(arr[mid1] > number) return ternarySearch(arr, left, mid1-1, number);
    if(arr[mid2] < number) return ternarySearch(arr , mid2+1, right, number);
    return ternarySearch(arr, mid1+1, mid2-1, number);
    }
   return -1;
}

int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int number = 7;
    cout<<"Number is at index "<<ternarySearch(arr, 0, n-1, 7)<<endl;
    return 0;
}
