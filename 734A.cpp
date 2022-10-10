#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int games , A=0,D=0;
string gamesS;
cin >> games;
cin >> gamesS;

for (size_t i = 0; i < games; i++)
{
    /* code */
    if (gamesS[i]=='A')
    {
        A++;
        /* code */
    } else if (gamesS[i]=='D')
    {
        /* code */
        D++;
    }
    
}

if (A > D)
{
    cout<<"Anton"<<'\n';
}else if(D > A){
    cout<<"Danik"<<'\n';
}else{
    cout<<"Friendship"<<'\n';

}


}