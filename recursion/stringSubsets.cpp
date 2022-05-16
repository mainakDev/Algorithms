/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void sub(string str, string cur, int idx){
    int n = str.length();
    if(idx == n){
        cout<<cur<<" ";
        return;
    }
    sub(str,cur,idx+1);
    sub(str,cur+str[idx],idx+1);
}

int main(){
    sub("ABC","",0);
	return 0;
}
