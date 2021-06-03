#include <bits/stdc++.h>
using namespace std;

double gpSum(double n){

    if (n==0){
        return 1;
    }
    double sum =  1/(double)pow(3,n) + gpSum(n-1);
    return sum;
}
int main(){

    int n;
    cin >> n;

    cout << gpSum(n) <<endl;
}