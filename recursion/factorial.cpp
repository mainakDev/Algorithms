/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

int fact(int n){
    if(n==0) return 1;
    else return n*fact(n-1);
}

//above function implemented in tail recursion manner
int factTailRec(int n, int k){
    if(n==0) return k;
    return factTailRec(n-1,n*k);
}

int main(){
    cout<<fact(5)<<endl;
    cout<<factTailRec(4,1)<<endl;
	return 0;
}
