#include <bits/stdc++.h>

using namespace std;


int noOfEntries,height,width;

void gridWriter(char mainColor,char auxColor,int auxX,int auxY,int height,int width){
    int counter=0;
    cout<<"YES"<<endl;

    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < width; j++)
        {
            /* code */
        if (counter == 0)
        {
             cout<<mainColor;
             counter = 1;
        }else
        {
            cout<<auxColor;
            counter=0;
        }
        

            
        }
        cout<<endl;
        
    }
    
}

void gridChecker(int rLocationX , int wLocationX,int rLocationY,int wLocationY,int height,int width){
        
    // cout<<rLocationX<<' '<<rLocationY<<endl;
    // cout<<wLocationX<<' '<<wLocationY<<endl;
    int avgR= sqrt(rLocationX^2+rLocationY^2);
    int avgW= sqrt(wLocationX^2+wLocationY^2);
    // cout<<avgR<<endl;
    // cout<<avgW<<endl;
    if (avgR > avgW)
    {
        /* code */
        gridWriter('W','R', rLocationX,rLocationY,height,width);
    }else if (avgR < avgW)
    {
        gridWriter('R','W', wLocationX,wLocationY,height,width);

    }else{
        cout<<"NO"<<endl;
    }
    
    
    

    
    
}

void gridReader(int height,int width){
    int rLocationX,wLocationX,rLocationY,wLocationY;
    char input;
    for (size_t i = 0; i < height; i++)
    {
        /* code */
        for (size_t j = 0; j < width; j++)
        {
            /* code */
             cin >> input;
                switch (input)
                {
                case 'R':
                    /* code */
                    rLocationX = i;
                    rLocationY = j;
                    break;

                case 'W':
                    /* code */
                    wLocationX = i;
                    wLocationY = j;
                    break;

                case '.':
                
                    break;
                default:
                    break;
                }
        }
        

    }
    gridChecker(rLocationX , wLocationX, rLocationY,wLocationY,height, width);
   
}

int main(){
 cin >> noOfEntries;
 cin >> height;
 cin >> width;

for (size_t i = 0; i < noOfEntries; i++)
{
    /* code */
    gridReader(height,width); 

}


}