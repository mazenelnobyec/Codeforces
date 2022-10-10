#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n , m;
cin >> n >> m;
vector<char> line(m,'.');
//line[1]='#';
char rev;
line[0]='#';
for (size_t i = 0; i < n; i++)
{
    /* code */
    for (size_t j = 0; j <line.size(); j++)
    {
        /* code */
        if(i%2==0){
        cout<<"#";

        }else{
            
            cout << line[j];
        }

    }
        if(i%2==0)
        reverse(line.begin(), line.end());

    cout<<endl;    
}




}