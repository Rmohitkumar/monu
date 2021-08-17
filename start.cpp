#include <bits/stdc++.h>
using namespace std;
int ways(int n, int m , int x, int y) {
     if (x == n - 1 && y == m - 1) return 1;
     if (x >= n || y >= m)  return 0;
     return ways(n, m , x + 1, y) + ways(n, m , x, y + 1);
}

int main()
{

     cout << ways(2, 1, 0, 0) << endl;
     return 0;
}


knfiegiwgiwen adddufev oex  c
