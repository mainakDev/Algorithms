/*
print numbers from 1->N using head recursion
this is head recursion
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void func(int n){
    if(n < 1) return;
    func(n-1);
    cout<<n<<" ";
}

//converting the above function into Tail recursive
void tailRec(int n, int k){
    if(n<1) return;
    cout<<k<<" ";
    tailRec(n-1,k+1);
}

int main(){
    func(10);
    cout<<endl;
    tailRec(10,1);
	return 0;
}
