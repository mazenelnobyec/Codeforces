#include <bits/stdc++.h>
using namespace std;
bool check(vector<char> current,char c){
    for (size_t i = 0; i < current.size(); i++)
    {
        /* code */
        if (c==current[i])
        {
           return false; 
        }
        
    }
    return true;
}

int main() {
string word;
int number;

cin >>number;
cin >> word;
vector<char> current;
//char alphanet[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','t','u','v','w','x','y','z'};
// if(word.size() < 26){
//     cout<<"NO";
//     return 0;
// }
for (size_t i = 0; i < word.size(); i++)
{
    word[i] = tolower(word[i]);
}


for (size_t i = 0; i < word.size(); i++)
{
    /* code */
     if(check(current,word[i])){
         current.push_back(word[i]);
     } 
}
if(current.size() == 26)
cout << "YES"<<endl;
else
cout << "NO" <<endl;

}