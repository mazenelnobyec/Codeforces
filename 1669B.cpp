#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;

int main() {
// solution comes here
int times ; cin >> times ;
while (times--) {
    int n; cin >> n ;
    vector<int> v(n+1,0);
    int def = -1;
    for (size_t i = 0; i < n; i++)
    {
        int x ; cin >> x ;
        /* code */
        v[x]++;
        if( v[x] >= 3 ) def = x;
    }
    cout << def << endl;    
}


}