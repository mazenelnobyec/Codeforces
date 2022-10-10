#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int lucky[11]={4,7,47,74,444,447,474,477,747,774,777};
int num;
cin >>num;
for (size_t i = 0; i < 10; i++)
{
    /* code */
    if (num % lucky[i]==0)
    {
        /* code */
        cout<<"YES"<<'\n';
         return 0;

    }
    
}

cout<<"NO"<<'\n';


}