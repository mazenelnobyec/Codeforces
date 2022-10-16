#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;



int main() {
// solution comes here
int t ; cin >> t ;

while (t--)
{
    /* code */
    int n ; cin >> n ;
    vector<int> v(n);
    int e1 =0 , o1 =0 ,o2 =0 ,e2=0;
    for (size_t i = 0; i < n; i++)
    {   cin >> v[i] ; 
        if(i %2 ==0 ){
            if(v[i] %2 ==1) o1 = 1;
            else e1 = 1;
        }else
        {
            if(v[i] %2 ==1) o2 = 1;
            else e2 = 1;
            /* code */
        }
       
        /* code */
    }
     
        if(e1 && o1) {
            cout << "NO\n";
        } else if(e2 && o2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
}





}