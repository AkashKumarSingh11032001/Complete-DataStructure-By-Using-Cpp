#include <bits/stdc++.h>
using namespace std;

bool checkPal(string x,int low,int high){
    
    if (low >= high){
        return true;
    }
    if (x[low] != x[high]){
        return false;

    }
    checkPal(x,low+1,high-1);
    
}
int main(){

    string n;
    cin >> n;
    int len = n.length();

    if (checkPal(n,0,len-1)) {
        cout << "Yes" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    
}