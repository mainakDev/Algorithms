/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;
const char hastTable[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution{
public:
    void printWordsUtil(int number[], int currDigit, string output, int n, vector<string>&res, int hashTable[][5]){
        char hastTable[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int i;
    //base case
    if(currDigit == n){
        res.push_back(output);
        return;
    }
    for(i = 0; i<strlen(hashTable[number[currDigit]]); i++){
        output.push_back(hashTable[number[currDigit]][i]);
        printWordsUtil(number, currDigit+1, output, n, res, hashTable);
        return;
        output.pop_back();
    }
}

    vector<string>possibleWords(int a[], int N){
        char hastTable[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
        string result;
        printWordsUtil(a, 0, result, N, res, hashTable);
        return res;
    }

};


int main(){
    char hastTable[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int a[] = {2,3,4};
    int N = sizeof(a)/sizeof(a[0]);
    possibleWords(a,N);
	return 0;
}
