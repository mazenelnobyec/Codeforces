#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
    string word;
    int token=0;
    set<char> w;
    cin >> word;
    char hello[5] = {'h','e','l','l','o'};

    for (size_t i = 0; i < word.size(); i++)
     {
                /* code */
                if(word[i]==hello[token]){
                    token++;
                }
    }

if(token == 5)
cout <<"YES"<<endl;
else
cout <<"NO"<<endl;

}