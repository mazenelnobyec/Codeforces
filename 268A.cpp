#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n , aI , hI, c=0;
vector<int> h,a;
cin >> n; 
for (size_t i = 0; i < n; i++){

    cin >> aI >> hI;
    /* code */
    h.push_back(hI);
    a.push_back(aI);
}

for (size_t i = 0; i < n; i++)
{
    /* code */
    for (size_t j = 0; j < n; j++)
    {
        /* code */
        if(i != j &&  h[i]==a[j])
        c++;
    }
    
}


cout << c << endl;
}