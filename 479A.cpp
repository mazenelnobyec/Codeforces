#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c;
cin >> a >> b >> c;


// int ope[8]={a+b+c,(a*b)+c,(a*c)+b,(c*b)+a,a*b*c,(a+b)*c,(a+c)*b,(c+b)*a};
 int maxNo=0;
// for (size_t i = 0; i < 8; i++)
// {

//         /* code */
//         maxNo = max(maxNo,ope[i]);
//      //   cout << maxNo <<' '<<ope[i]<<endl;
// }

maxNo = max(maxNo,a+b+c);
maxNo = max(maxNo,(a*b)+c);
// maxNo = max(maxNo,(a*c)+b);
// maxNo = max(maxNo,(c*b)+a);
maxNo = max(maxNo,a*b*c);
maxNo = max(maxNo,(a+b)*c);
// maxNo = max(maxNo,(a+c)*b);
maxNo = max(maxNo,(c+b)*a);







cout << maxNo << endl;
}