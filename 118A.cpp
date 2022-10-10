#include <bits/stdc++.h>
using namespace std;


int main() {
    char vowels[12]= {'a','e','i','o','u','y','A','E','I','O','Y','U'};
    string word;
    cin>>word;

    for (size_t j = 0; j < word.size(); j++)
    {
        /* code */
               for (int i = 0; i < strlen(vowels); i++)
        {
            if(word[j] == vowels[i]){
                break;
            }
            else if(i==strlen(vowels)-1){
                cout<<'.'<<(char) tolower(word[j]);
            }
        }

    }
    
     cout<<endl;
    return 0;
 }