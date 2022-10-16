#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n,input,counter=0,temp=0,largets;
cin >> n;
while (n--)
{
    cin >> input;

    if(input < temp)
        counter = 0;
    /* code */
         counter++;

     if(counter > largets)
        largets = counter;

   
    

    temp = input;
}

cout << largets << endl;

}