#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
string word,reverse;

cin>> word >> reverse;

for (size_t i = 0; i < word.size(); i++)
{
    
    /* code */
    if (word[i] == reverse[word.size()-i-1])
    {
        /* code */
    }else{
        cout<<"NO"<<'\n';
        return 0 ;
    }
    
}


        cout<<"YES"<<'\n';

}