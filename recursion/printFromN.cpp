/*
Print all elements from N->1
Example of tail recursion, because recursion is the last step
Tail recursive is faster than head recursive
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void func(int n){
   if(n<1) {return;}
   cout<<n<<" ";
   return func(n-1) ;
}

int main(){
    func(5);
	return 0;
}
