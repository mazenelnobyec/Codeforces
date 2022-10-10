#include <bits/stdc++.h>
using namespace std;


int main() {

long long numbers,location,indic=1,result;
// solution comes here
cin>>numbers>>location;









if (numbers % 2 != 0)
{
    /* code */
    numbers+=1;
}

if (location > numbers/2)
{
    /* code */
    location=location-numbers/2;
    result = location * 2  ; //+ numbers/2;
    
}else{
    result = location * 2 - 1 ;
}
cout<<result<<'\n';

// for (size_t i = 1; i < location+1; i++)
// {
//     /* code */

//         nset.push_back(indic);
//         /* code */
//         indic+=2;
    
// }
// // for (int j: nset)
// //     std::cout << j << ' ';

//   cout<<nset[location-1]<<'\n';




}