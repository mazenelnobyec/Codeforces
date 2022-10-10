#include <bits/stdc++.h>

using namespace std;

int main() {
// solution comes here
    int a ,b ;
    int c =0;
    cin >> a >> b;
    while (a<b+1)
    {
        c++;
        /* code */
        a *=3;
        b *=2;
    }
    cout<<c<<'\n';
}