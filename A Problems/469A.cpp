#define dbg(data) cout <<data <<endl;

#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int levels,x,y,con;
set<int> passed;
cin >> levels;
cin >>x;
while (x--){
        cin>>con;
        passed.insert(con);
}

cin >> y;
while (y--){
        cin>>con;
        passed.insert(con);
}

if(levels == passed.size()){
    cout <<"I become the guy."<<endl;
}else
    cout <<"Oh, my keyboard!"<<endl;


}