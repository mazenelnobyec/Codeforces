#include <bits/stdc++.h>
using namespace std;

int main() {
// solution comes here
    string line;
    int score;
    int current;
    cin>>line;
    for (size_t i = 1; i < line.size(); i++) 
    {
        score++;
        current = line[i];
        if (line[i]==line[i-1])
        {
            /* code */
        if(score >= 7)
            break;
    

    
        }else{
            score =1;
        }
        /* code */
    }
    
    if(score >= 7){
        cout << "YES"<<'\n';
    }else{
        cout << "NO"<<'\n';

    }
    

}