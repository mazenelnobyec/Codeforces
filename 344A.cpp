#include <bits/stdc++.h>
using namespace std;
int main() {
int input , count,pos=0,val=0;
cin >>count;
for (size_t i = 0; i < count; i++)
{
    cin>> input;
    /* code */
    if(input != val)
        pos++;
    val=input;

}
cout << pos <<endl;

}