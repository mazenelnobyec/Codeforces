#include <bits/stdc++.h>
using namespace std;

int main() {
// solution comes here
    string num;
    int counter=0;
    cin>> num;
    for (size_t i = 0; i < num.size(); i++)
    {
        /* code */
        if (num[i] == '4' || num[i] == '7')
        {
            /* code */
            counter++;
        }
        
    }
        
 
        /* code */
    if (counter == 4 || counter ==7)
    {
        /* code */
        cout<<"YES"<<'\n';
    }else
        cout<<"NO"<<'\n';

    

    

}