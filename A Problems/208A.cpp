#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
    string word; 
    cin >> word;

  for (size_t i = 0; i < word.size(); i++)
  {
      /* code */
      if (word[i] =='W' && word[i+1] == 'U' && word[i+2] == 'B')
      {
          if (i == 0 || i == word.size()-3 || word[i-1] == ' ')
          {
              /* code */
            word=word.erase(i,3);

          }else{
              word=word.replace(i,3,"/");
          }
          
        i--;
          /* code */
      }
  }

  for (size_t j = 0; j < word.size(); j++)
  {
      /* code */
      if(word[j]=='/' && word[j+1]=='/'){
          word.replace(j,2," ");
      }else if(word[j]=='/'){
          word.replace(j,1," ");

      }
  }
  
        cout << word<<endl;

}