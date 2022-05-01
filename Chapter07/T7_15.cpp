/*FileName:T7_15.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 16,2022
Function:add flog to mark to show the order of initialization*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    const size_t row=3;
    const size_t column=5;
    array<array<int ,column>,row>sales;
    for(size_t row=0;row<sales.size();row++)
        for(size_t column=0;column<sales[row].size();column++)
    {sales[row][column]=0;
    cout<<"sales["<<row<<"]["<<column<<"]"<<endl;}
    return 0;
}
