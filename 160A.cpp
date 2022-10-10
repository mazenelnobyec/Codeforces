#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int coinsN,coin,total = 0,current=0,counter=0;
vector <int> coins;
cin >> coinsN;
while(coinsN--){
cin >> coin;
coins.push_back(coin);
}
sort(coins.begin(),coins.end());

for (size_t i = 0; i < coins.size(); i++)
{
    /* code */
    total += coins[i];
}

for (size_t i = coins.size() - 1; i >= 0; i--)
{
    /* code */
    current += coins[i];
    counter++;
    if (total/2 < current)
    {
        cout << counter << endl;
        break;
    }
    
}




}