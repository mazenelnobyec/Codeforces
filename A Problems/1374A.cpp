#include <bits/stdc++.h>
using namespace std;

long long calculate(long long x, long long y , long long n){
    int k;
    k = n % x;
    k = n - k ;
    k +=y;
    if(k > n){ k -= x;}
    return k;

    

}




int main() {
// solution comes here
long long x ,y ,n,t;
vector<long long> input;
//k mod x =y
cin >> t ;
for (size_t i = 0; i < t; i++)
{
    /* code */
    cin >>  x >> y >> n;
    input.push_back(calculate(x,y,n));
}

for (size_t i = 0; i < input.size(); i++)

cout <<input[i] << endl;

}