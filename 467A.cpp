
#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int noRoom,cap,occ, counter =0;
cin >> noRoom;
for (size_t i = 0; i < noRoom; i++) 
{
    /* code */
    cin >> occ >> cap;
    if (cap - occ >= 2)
    {
        /* code */
        counter++;
    }
    
}
 cout<<counter << endl;
}