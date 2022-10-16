#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n,in,l,c=0,p=0,temp=0;
bool h = true;
vector<int> co;
cin >> n;
for (size_t i = 0; i < n; i++)
{
    /* code */
    cin >> in; 
    if(in > 0) {
        temp += in;
    }else{

        if(!temp) c++;
        else temp-- ; 
    }

}
cout << c << endl;
}