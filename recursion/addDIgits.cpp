/*
Program to add the sum of the digits of a number
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

int fun(int n){
    if(n < 10) return n;
    return fun(n/10)+n%10;
}

int main(){
    cout<<fun(123);
	return 0;
}
