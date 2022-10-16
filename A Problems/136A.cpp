#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n,input;
cin >> n;

vector<int> v(n+1);
for(int i=1;i<n+1;i++){
    cin >> input; 
    v[input]=i;
}
for(int i=1;i<n+1;i++)
    cout << v[i] << ' ';


cout<<endl;

}