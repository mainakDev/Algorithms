/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

int rodCalc(int n, int a, int b, int c){
    if(n==0) return 0;
    if(n<0) return -1;
    int res = max(max(rodCalc(n-a,a,b,c),rodCalc(n-b,a,b,c)),rodCalc(n-c,a,b,c));
    if(res==-1) return -1;
    return 1+res;
}

int main(){
    int n = 25;
    int a = 11, b = 12, c = 13;
    cout<<rodCalc(25,11,12,13);
	return 0;
}
