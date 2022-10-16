#include <bits/stdc++.h>

using namespace std;

int melonWeight;

void calcWeight(int melonWeight){
    if(melonWeight==0){
        cout << "YES"<< endl;
    }else if(melonWeight==1||melonWeight==2){
        cout << "NO"<< endl;
    }else
    {
        calcWeight(melonWeight%2);
    }
    
}

int main() {
    cin >> melonWeight;
    calcWeight(melonWeight);
    return 0;
 }