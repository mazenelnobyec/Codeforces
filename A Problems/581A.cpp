#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int red , blue , td,ts,test=0;
cin >> red >> blue ;
td=min(red,blue);
ts= red+blue-td*2 ;
while (ts >= 2)
{
    /* code */
    test++;
    ts -=2;
}


cout <<td <<' ' << test <<endl;




// for (int j: nset)
//     std::cout << j << ' ';
// 
}