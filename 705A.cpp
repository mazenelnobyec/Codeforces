#include <bits/stdc++.h>
using namespace std;
int main() {
string hate = "I hate",love="I love";
vector<string> sentence;
int count ;
cin >> count;
for (size_t i = 0; i < count; i++)
{
    sentence.push_back("that");
    /* code */
    if (i % 2 ==0)
    {
        /* code */
        sentence.push_back(hate);
    }else{
        sentence.push_back(love);
    }
    if(i > 0){

    }
    
}
sentence.push_back("it");
sentence.erase(sentence.begin());
for (size_t i = 0; i < sentence.size(); i++)
{
    /* code */
    cout<<sentence[i]<<" ";
}
    cout<<'\n';

}