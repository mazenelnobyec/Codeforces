#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int steps = 0;
int distance;
cin >> distance;
while(distance>5){
    distance-=5;
    steps++;
}


if(distance <= 5)
 steps++;


cout<<steps<<'\n';

}