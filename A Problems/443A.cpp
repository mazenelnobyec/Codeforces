#include <bits/stdc++.h>
using namespace std;


int main() {
    char a;
    set<char> c;
    while (cin >> a){
        if(isalpha(a)) c.insert(a);
    }
    cout<<c.size()<<endl;
}