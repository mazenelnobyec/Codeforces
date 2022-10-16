#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int nF,hF,hI,score =0;

cin >> nF >> hF;

for(int i = 0; i < nF; i++){
    cin>>hI;
    if (hI > hF)
    {
        /* code */
        score += 2;
    }else{
        score++;
    }
    
}

cout << score <<'\n';

}