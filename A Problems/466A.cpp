#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
int noRides , costRegular, costSpecial , specialRides,totalCost=0;
cin >>noRides >> specialRides >> costRegular >> costSpecial;
bool total = true;

if (noRides * costRegular < noRides/specialRides *costSpecial)
{
    /* code */
    total = false;
}


    
        /* code */
        while (noRides > specialRides  &&  total)
        {
            /* code */
            noRides -= specialRides;
            totalCost += costSpecial;
        }
        if (noRides!=0)
        {
            /* code */
            
        if (noRides * costRegular < costSpecial && total)
        {
            /* code */
            totalCost += noRides * costRegular;
        }else if(!total){
            totalCost += noRides * costRegular;
        }
        
        else{
            totalCost += costSpecial;

        }
        }

        

        cout<<totalCost<<endl;
}