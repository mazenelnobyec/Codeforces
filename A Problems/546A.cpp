#include <bits/stdc++.h>

using namespace std;

int main() {
// solution comes here
int k , n , w;
cin >> k >> n >> w;
int total = 0;
for (int i = 1; i < w+1; i++)
{
    /* code */
    total +=i*k;    
}

if(total > n)
cout << total-n <<'\n';
else
cout << 0 <<'\n';



}