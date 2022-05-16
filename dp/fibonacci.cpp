/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;
//#define n 1000
vector<int>res;
int dp[1000];

int fibo(int n){
    //memset()
    if(n == 0) return 0;
    if(n == 1)return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n-1)+fibo(n-2);
}

int main(){
    memset(dp, -1, sizeof(dp));
    cout<<fibo(213);
	return 0;
}
