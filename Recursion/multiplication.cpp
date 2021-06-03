#include <bits/stdc++.h>
using namespace std;

int recMul(int x, int y)
{

    int mul = 0 ;
    if (y == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < y; i++)
        {
            /* code */
            mul += x;
        }
        return mul;
    }
}
int main()
{

    int a, b;
    cin >> a >> b;
    cout << recMul(a,b) <<endl;

}