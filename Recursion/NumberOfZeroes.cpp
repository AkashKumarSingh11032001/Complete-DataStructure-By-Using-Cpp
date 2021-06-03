#include <bits/stdc++.h>
using namespace std;

int zeroSum(int x)
{
    static int count = 0;
    // cout << x <<" "<<endl;
    // cout << count <<" "<<endl;

    if (x > 0)
    {

        if (x % 10 == 0)

            count++;

        zeroSum(x / 10);
    }
    return count;
}

int main()
{

    int n;
    cin >> n;

    cout << zeroSum(n) << endl;
}