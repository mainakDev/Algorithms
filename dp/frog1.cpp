/*
https://atcoder.jp/contests/dp/tasks/dp_a
*/
#include<bits/stdc++.h>
using namespace std;


const int n = 4;
int h[4] = {10, 30, 40, 20};
int dp[4];

int func(int i){
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;
    cost = min(cost, func(i-1) + abs(h[i] - h[i-1]));
    if(i > 1)
        cost = min(cost, func(i-2) + abs(h[i] - h[i-2]));
    return dp[i] = cost;
}

int main(){
    memset(dp, -1, sizeof(dp));
    cout<<func(n-1); //cost to reach n-1 stone
	return 0;
}
