#include <bits/stdc++.h>
using namespace std;

// long long calculate(long long number, long long counter){
//     if(number % 6 == 0){
//         counter++;
//         return calculate(number/6,counter);
//     }
//     else if (number == 1)
//     {
//         /* code */
//         return counter;
//     }
//     else{
//         if(number > 10 || number * 2 % 6 ==0){
//             counter++;
//             return calculate(number*2,counter);}
//             else
//             return -1;
//     }
// }
long long calculate(long long number, long long counter){
    if(number%5 == 0 || number %7 == 0)
        return -1;

    long long fact2 =0 , fact3=0;
    while (number != 1)
    {
        /* code */
        if (number % 2 ==0)
        {
            fact2++;
            /* code */
            number /=2 ;
        }else if (number % 3 ==0){
            fact3++;
            number /=3 ;
        }else{
            break;
        }
        
    }
        if (number == 1 && fact2 <= fact3)
        {
            /* code */
                return (fact3 - fact2) + fact3;
        }else{return -1;}
           
        
 

}
int main() {
// solution comes here
long long number,counter=0,total;
vector<long long> input;
cin >> total;

for (size_t i = 0; i < total; i++)
{
    /* code */
    cin >> number;
    input.push_back(calculate(number,counter));
}

for (size_t i = 0; i < input.size(); i++)

cout <<input[i] << endl;



}