#include <bits/stdc++.h>
using namespace std;
int main() {
long long number,equ=0;
cin >> number;

if(number % 2 == 0)
    equ = number/2;
else 
    equ = -(number+1)/2;
cout <<equ <<'\n';

}