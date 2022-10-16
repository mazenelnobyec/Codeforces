#include <bits/stdc++.h>

using namespace std;

int contenstentsNumber , lastPlace,prevAdvance;

int main(){
    cin >> contenstentsNumber;
    cin >>  lastPlace;

    int currentScore,numberOfAdvanced=0;
    for (size_t i = 0; i < contenstentsNumber; i++)
    {      
        cin >> currentScore;
         if(prevAdvance != currentScore && i >= lastPlace){
            break;
        }
        if (currentScore > 0)
        {
      
                prevAdvance = currentScore;
           
                numberOfAdvanced++;   
                
        }
        
           
        

       
    }
    cout<<numberOfAdvanced<<endl;
}