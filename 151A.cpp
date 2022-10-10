#include <bits/stdc++.h>
#include <algorithm>  
using namespace std;

int numberOfToasts(int friendsNeed,int bottleLiter,int bottleNumber){
    return  bottleLiter * bottleNumber / friendsNeed;
}

int slicesOfLime(int limeNo,int sliceNo){
 return limeNo * sliceNo;   
}
int saltAmount(int saltWeight , int saltNeed){
    return saltWeight / saltNeed;
}

int main(){
    int  n, k, l, c, d, p, nl, np;
    cin >> n; cin >> k ; cin >> l;cin >> c; cin >>d;cin >> p; cin >> nl;cin >> np;
    int no = min(min(l*k/nl,c*d),p/np)/n;
    cout << no <<endl;
    
    


}