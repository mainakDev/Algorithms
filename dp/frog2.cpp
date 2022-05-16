/*
https://atcoder.jp/contests/dp/tasks/dp_a
*/
#include<bits/stdc++.h>
using namespace std;


const int n = 5;
int h[5] = {10, 30, 40, 50, 20};
int dp[5];
int k = 3;

int func(int i){
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;
    for(int j=1; j<=k; ++j){
    //cost = min(cost, func(i-k) + abs(h[i] - h[i-k]));
        if(i-j >= 0)
            cost = min(cost, func(i-j) + abs(h[i] - h[i-j]));
    }
    return dp[i] = cost;
}

int main(){
    memset(dp, -1, sizeof(dp));
    cout<<func(n-1); //cost to reach n-1 stone
	return 0;
}
