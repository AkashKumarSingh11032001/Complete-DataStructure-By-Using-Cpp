#include <bits/stdc++.h>
using namespace std;

int recMul(int x, int y)
{

    
    if (y == 0)
    {
        return 0;
    }
    else
    {
        
        return x + recMul(x,y-1);
    }
}
int main()
{

    int a, b;
    cin >> a >> b;
    cout << recMul(a,b) <<endl;

}