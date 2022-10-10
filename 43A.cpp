#include <bits/stdc++.h>
using namespace std;
int main() {
string A,B,value ;
int sA = 0 , sB=0 , go,ind;
    cin >> go ;
    cin>>A ;
    value = A  ;
    for (size_t i = 0; i < go; i++)
    {
        if(i!=0) cin >> value;
        
        /* code */
        if (A == value)
        {
            /* code */
            sA++;
        }else{
            B = value;
            sB++;
        }

    }
 
    if(sA> sB) cout << A << endl;
    else cout << B << endl;

}