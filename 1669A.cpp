#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
long long rating;
long long count;
vector<string> results;
cin >> count;
for (size_t i = 0; i < count; i++)
{
    /* code */
    cin >> rating;
    if (rating <= 1399)
    {
        /* code */
        results.push_back("Division 4");

    }else if (1400<=rating&&rating<=1599){
        results.push_back("Division 3");

    }else if (1600<=rating&&rating<=1899){
        results.push_back("Division 2");

    } else  if (rating >= 1900)
    {
        /* code */
        results.push_back("Division 1");

    }
    
}
for (size_t i = 0; i < results.size(); i++)
{
    /* code */
    cout << results[i] << '\n';
}



}