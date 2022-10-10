#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int n,result=0;
string word;
cin >> n;
while(n--){
cin >> word;
if(word == "Tetrahedron")
    result += 4;
else if(word == "Cube")
    result += 6;
else if(word == "Octahedron")
    result += 8;
else if(word == "Dodecahedron")
    result += 12 ;
else if(word == "Icosahedron")
    result += 20 ;
}

cout << result << endl; 

}