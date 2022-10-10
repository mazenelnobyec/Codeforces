#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> perm;
    cin>>n;
    if (n %2 == 1){
        cout<<"-1"<<endl;
        
    }else{
        for (int i =1; i <= n; i++)
        {
           perm.push_back(i); 
            
        }
        for (int j = 0; j < perm.size() ; j++)
        {
            /* code */
        //     int temp;
            if(j %2 ==0){
            iter_swap(perm.begin()+j,perm.begin()+j+1);
        //     perm[j]=temp;
        //     perm[j]=perm[j+1];
        //     perm[j+1]=temp;
          cout<<perm[j]<<' '<<perm[j+1]<<' ';}
        // 
       // cout<<perm[j]<<endl;
        }
        
    }
    

    return 0;
}