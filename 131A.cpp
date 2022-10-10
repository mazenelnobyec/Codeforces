#include <bits/stdc++.h>
using namespace std;

void applyLow(string& word,bool isCAP){
        if(isCAP){word[0] =tolower(word[0]);}
        else{word[0]=toupper(word[0]);}
    for (size_t i = 1; i < word.size(); i++)
    {
        /* code */
        word[i] =tolower(word[i]);
    }

}
int main() {
    string word; 
    cin >> word;
    int upC;
    for (size_t i = 1; i < word.size(); i++)
    {
        /* code */
        if (isupper(word[i]))
        {
            upC++;
        }
        
    }
    if (islower(word[0]) and upC == word.size())
    {
        applyLow(word,false);
        cout<<word<<endl;
    }else if (isupper(word[0]) and upC == word.size()){
         applyLow(word,true);
        cout<<word<<endl;

    }
    
    else{
        cout<<word<<endl;

    }
    

}