#include <bits/stdc++.h>
using namespace std;
int main() {
int count,temp;
vector<int> numbers,tent,along ;
cin >> count;

for (size_t i = 0; i < count; i++)
{
    /* code */
    cin >> temp;
    numbers.push_back(temp);

}

for (size_t i = 1; i < 10; i++)
{
    for (size_t k = 0; k < count; k++)
    {
        /* code */
        if(numbers[k] % i== 0)
            tent.push_back(numbers[k]);
        else
            along.push_back(numbers[k]);
    }
    if(tent.size()==numbers.size()-1||along.size()==numbers.size()-1){
    break;}
    else
     tent.clear();

}
if(tent.size() > along.size()){
auto ind = find(numbers.begin(),numbers.end(),along[0]);
int index = ind - numbers.begin();
cout << index+1 << endl;}
else{
auto ind = find(numbers.begin(),numbers.end(),tent[0]);
int index = ind - numbers.begin();
cout << index+1 << endl;

}

}