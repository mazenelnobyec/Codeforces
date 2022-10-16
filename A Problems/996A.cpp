#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n, counter=0;

cin >> n;

while(n != 0){
    if(n >= 100){
        n-=100;
        counter++;
    }
    else if(n >= 20 && n < 100){
        n-=20;
        counter++;
    }
    else if(n >= 10 && n < 20){
        n-=10;
        counter++;
    }
    else if(n < 10 && n >= 5){
        n-=5;
        counter++;
    }else{
        n--;
        counter++;
    }
}
cout << counter << endl;


}