#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b;
    if (a > b) swap(a, b);
    cin >> c >> d;
    if (b > c) swap(b, c);
    if (c - a > d) cout << "No";
    else cout << "Yes";
    return 0;
}

