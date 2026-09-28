// FOUR_FUNCTIONS.cpp : This file contains the 'FOUT=R NESTED FUNCTION'
//

#include <iostream>
using namespace std;
int ReadFirstNumber()
{
    int f_number;
    cout << "ENTER THE FIRST NUMBER:";
    cin >> f_number;
    return f_number;
}
int ReadSecondNumber()
{
    int s_number;
    cout << "ENTER THE SECOND NUMBER:";
    cin >> s_number;
    return s_number;
 }
int summation(int v1, int v2)
{
    return v1 + v2;
}

void chk_summation(int value)
{
    if (value >= 0)
        cout << "THE RESULT IS POSITIVE.";
    else
        cout << "THE RESULT IS NEGTIVE.";
}
int main()
{
    int result;
    result = summation(ReadSecondNumber(),ReadFirstNumber());
    //cout << sum(read_f_num(), read_s_num());
    //chk_sum(sum(read_f_num(), read_s_num())); //FOUR NESTED FUNCTION
    cout << "THE SUMMATION = " << result << endl;
    chk_summation(result);
}
