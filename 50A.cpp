#include <bits/stdc++.h>

using namespace std;

int main(){
    int w,l,noDom,holder;
    noDom = 0;
    cin >> w >> l;
    holder = w*l;
   /* code */
         while(holder>= 2){
             holder -=2;
             noDom++;
         }
    
    cout << noDom <<endl;
}