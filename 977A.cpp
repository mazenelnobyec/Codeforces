#include <bits/stdc++.h>
using namespace std;
int main() {
    int num,steps;
    cin >> num >> steps;
    for (size_t i = 0; i < steps; i++)
    {
        if (num % 10 == 0)
        {
            num /=10;
        }else{
            num--;
        }
        
    }
    cout<<num << '\n';
// solution comes here
}