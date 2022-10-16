#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
vector<int> squad;
int number,input,currentMax=0,currentMin=0,temp,counter=0,minI=0,maxI=0;

cin >> number;

for (size_t i = 0; i < number; i++)
{
    /* code */
    cin>> input;
    squad.push_back(input);
}
currentMin = squad[0];
for (size_t i = 0; i < squad.size(); i++)
{
    /* code */
    if (squad[i] > currentMax)
    {
        currentMax=squad[i];
        maxI = i;
    }
     if(squad[i] <= currentMin){
        currentMin=squad[i];
        minI = i;
        }
    // cout<<squad[i]<<endl;

}


// if(currentMax == squad[0] && currentMin == squad[squad.size()-1])
// cout << 0 <<endl;
// else 
if(minI > maxI)
cout<<squad.size() +maxI -minI  -1 <<endl;
else 
cout<<squad.size() +maxI -minI -2  <<endl;

// currentMin=squad[0];
// for (size_t i = 0; i < number; i++)
// {
//     /* code */

//     currentMin = min(currentMin,squad[i]);
//     currentMax = max(currentMax,squad[i]);
// }
// auto Min = find(squad.begin(), squad.end(), currentMin);
// auto Max = find(squad.begin() , squad.end(), currentMax);
// //cout<< currentMin << " " << currentMax << endl;

// currentMin = Min - squad.begin();
// currentMax = Max - squad.begin();
// if(currentMin > currentMax)
// cout<< squad.size()  + currentMin - currentMax -1<< endl;
// else
// cout<< squad.size()  - currentMin + currentMax -1 -1<< endl;


}