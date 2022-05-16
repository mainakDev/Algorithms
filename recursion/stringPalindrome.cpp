/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

bool isPal(string str,int s,int e){
    if(s==e) return true; //for odd number of characters
    if(s>e) return true; //given string matched till this point
    if(str[s] != str[e]) return false;
    return isPal(str,s+1,e-1);
}

int main(){
    cout<<isPal("abbc",0,3); //returns false
    cout<<isPal("abba",0,3); //returns true
	return 0;
}
