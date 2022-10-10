#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    int cap =0 , low = 0;
    for (size_t i = 0; i < word.size(); i++) 
    {
        /* code */
        if(int(word[i])<91){
            cap++;
        }else
        {
            low++;
        }
    }
    
    if (cap >low)
    {
        for_each(word.begin(), word.end(),[](char &c){
            c = toupper(c);
        });
        /* code */

    }else{
        for_each(word.begin(), word.end(),[](char &c){
            c = tolower(c);
        });
        
    }
    cout<<word<<'\n';
// solution comes here
}