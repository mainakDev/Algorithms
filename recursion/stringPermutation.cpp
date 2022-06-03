/*
Given a string, print all permutations of it.

    Input : str = "ABC"
    Output : ABC ACB BAC BCA CAB CBA
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void perm(string s, int l, int r){
    if(l==r) cout<<s<<" ";
    else {
        for(int i=l; i<=r; i++){
            swap(s[l],s[i]);
            perm(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}

int main(){
    string s = "ABC";
    perm(s,0,s.size()-1);
	return 0;
}
