#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
long long n , m,mi,counter =0,init=1;
// vector<long long> ms;
cin>> n >> m;
while (m--)
{
    cin >> mi;
    if(mi >= init)
    counter += mi -init;
    else counter += n +mi -init;
    init = mi;
    /* code */
}

// ms.push_back(1);
// for (size_t i = 0; i < m; i++)
// {

//     /* code */
//     cin >> mi;

//     ms.push_back(mi);
// }

// for (size_t i = 0; i < ms.size()-1; i++)
// {
//     /* code */
//     if (ms[i]==ms[i+1])
//     {
//         counter+=0;
//     }else{
//         if(ms[i] > ms[i+1]){
//         counter += (n-ms[i+1]) + ms[i];
//         // cout << counter << endl;
//         }
//         else{
//         counter += ms[i+1]-ms[i];
//         // cout << counter << endl;

//         }
        
//     }
  
    
// }
cout << counter << endl;

// for (int j: nset)
//     std::cout << j << ' ';
// 
}