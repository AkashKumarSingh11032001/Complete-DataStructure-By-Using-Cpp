#include <bits/stdc++.h>
using namespace std;


string rep(string str){
    
    if (str.length() == 0 || str.length() == 1){
        return str;
    }
    if (str[0] == 'p' and str[1] == 'i'){

        string smallout = rep(str.substr(2));

        return "3.14"+smallout;

    } 
    else{
        return str[0] + rep(str.substr(1));
    }

}
int main(){

    string s;
    cin >> s;
    int len = s.length();

    
    cout << rep(s) <<endl;
}