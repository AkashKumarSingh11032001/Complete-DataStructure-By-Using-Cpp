#include <bits/stdc++.h>
using namespace std;

int sumdig(int x)
{

    if (x == 0)
    {
        return 0;
    }
    int sum = x % 10 + sumdig(x / 10);
    return sum;
}
int main()
{

    int n;
    cin >> n;

    cout << sumdig(n) << endl;
}