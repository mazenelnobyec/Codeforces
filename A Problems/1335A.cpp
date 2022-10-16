#include <bits/stdc++.h>
using namespace std;
int main() {

int cases,times;
vector<int> cast;
cin >> times;
for (size_t i = 0; i < times; i++)
{
    /* code */
    cin >> cases;
    cases = (cases -1)/2;
    cast.push_back(cases);
}

for (size_t i = 0; i < cast.size(); i++)
{
    /* code */
    cout<<cast[i]<<'\n';
}

}