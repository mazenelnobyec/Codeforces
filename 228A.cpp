#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here

set<int> data;
int count = 4,input;
while (count--)
{
    /* code */
    cin >> input ;
    data.insert(input);
}

cout << 4 - data.size() << '\n';




}