#include <bits/stdc++.h>
using namespace std;
int main() {
int w , y ,maxVal;

cin >> w >> y;
 maxVal =6-max(w,y)+1;

 if (maxVal  == 6) {
cout<<1<<'/'<<1<<endl; 
}
else if(maxVal % 2 == 0) {
cout<<maxVal/2<<'/'<<3<<endl;

}else if(maxVal % 3 == 0) {
cout<<maxVal/3<<'/'<<2<<endl;

} else {
cout<<maxVal<<'/'<<6<<endl; 
}
}