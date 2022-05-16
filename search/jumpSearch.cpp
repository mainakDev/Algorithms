#include<iostream>
#include<math.h>
using namespace std;

int jumpSearch(int arr[], int number, int size){
    int step = sqrt(size);
    int prev = 0;
    while(arr[min(step, size)-1] < number){
        prev = step;
        step += sqrt(size);
        if(prev >= size) return -1;
    }
    while(arr[prev] < number){
        prev++;
        if(prev == min(step, size)) return -1;
    }
    if(arr[prev] == number) return prev;
    return -1;
}

int main(){
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };
    int number = 55;
    int n= sizeof(arr) / sizeof(arr[0]);
    int index = jumpSearch(arr, number, n);
    cout<< "\nNumber " << number << " is at index "<< index;
    return 0;
}
