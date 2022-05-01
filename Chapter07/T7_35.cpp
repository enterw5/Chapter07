/*FileName:T7_35.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:public opinion survey*/
#include <iostream>
#include <array>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    string topics;//存储5个问题
    for(int c = 0; c < 5; c++ )
    {
        switch(c)
    {
        case 0:topics[0]='digital economy';break;
        case 1:topics[1]='global warming';break;
        case 2:topics[2]='regional contradiction';break;
        case 3:topics[3]='novel coronavirus';break;
        case 4:topics[4]='man and nature';break;
        default:break;
    }
    }

    array<array<int ,10>,5>responses={0};
    int s,s1,s2,s3,s4,sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
    cout<< "1 to fill out the firm or 0 to exit. "<<endl;
    int a;cin>>a;
    int t=0;
    while(a)
    {
        t++;//计算有几个人参与问卷调查
        cout<< "please fill out the questionnaire and 1-10 to stand for from unimportant to important. "<<endl;
        cout<< "Please make a responses to diagital economy. "<<endl;//第一个问题

        cin>>s;
        switch(s)
        {
            case 1:responses[0][0]++;break;
            case 2:responses[0][1]++;break;
            case 3:responses[0][2]++;break;
            case 4:responses[0][3]++;break;
            case 5:responses[0][4]++;break;
            case 6:responses[0][5]++;break;
            case 7:responses[0][6]++;break;
            case 8:responses[0][7]++;break;
            case 9:responses[0][8]++;break;
            case 10:responses[0][9]++;break;
            default:break;
        }
        sum+=s;
        cout<< "Please make a responses to global warming. "<<endl;//第二个问题

        cin>>s1;
        switch(s1)
        {
            case 1:responses[1][0]++;break;
            case 2:responses[1][1]++;break;
            case 3:responses[1][2]++;break;
            case 4:responses[1][3]++;break;
            case 5:responses[1][4]++;break;
            case 6:responses[1][5]++;break;
            case 7:responses[1][6]++;break;
            case 8:responses[1][7]++;break;
            case 9:responses[1][8]++;break;
            case 10:responses[1][9]++;break;
            default:break;
        }
        sum1+=s1;
        cout<< "Please make a responses to regional contradiction. "<<endl;//第三个问题

        cin>>s2;
        switch(s2)
        {
            case 1:responses[2][0]++;break;
            case 2:responses[2][1]++;break;
            case 3:responses[2][2]++;break;
            case 4:responses[2][3]++;break;
            case 5:responses[2][4]++;break;
            case 6:responses[2][5]++;break;
            case 7:responses[2][6]++;break;
            case 8:responses[2][7]++;break;
            case 9:responses[2][8]++;break;
            case 10:responses[2][9]++;break;
            default:break;
        }
        sum2+=s2;
        cout<< "Please make a responses to novel coronavirus. "<<endl;//第四个问题

        cin>>s3;
        switch(s3)
        {
            case 1:responses[3][0]++;break;
            case 2:responses[3][1]++;break;
            case 3:responses[3][2]++;break;
            case 4:responses[3][3]++;break;
            case 5:responses[3][4]++;break;
            case 6:responses[3][5]++;break;
            case 7:responses[3][6]++;break;
            case 8:responses[3][7]++;break;
            case 9:responses[3][8]++;break;
            case 10:responses[3][9]++;break;
            default:break;
        }
        sum3+=s3;
        cout<< "Please make a responses to man and nature. "<<endl;//第五个问题

        cin>>s4;
        switch(s4)
        {
            case 1:responses[4][0]++;break;
            case 2:responses[4][1]++;break;
            case 3:responses[4][2]++;break;
            case 4:responses[4][3]++;break;
            case 5:responses[4][4]++;break;
            case 6:responses[4][5]++;break;
            case 7:responses[4][6]++;break;
            case 8:responses[4][7]++;break;
            case 9:responses[4][8]++;break;
            case 10:responses[4][9]++;break;
            default:break;
        }
        sum4+=s4;
        cout<< "1 to fill out the firm or 0 to exit. "<<endl;
        cin>>a;
    }
    for(int i = 0; i < 5; i++)
    {
        cout<<setw(30)<<topics[i]<<" ";
        for(int m = 0; m < 10; m++)
        {
            cout<<responses[i][m]<<  " ";
        }
        switch(i)//计算平均数
        {
            case 0:cout<<sum/t;break;
            case 1:cout<<sum1/t;break;
            case 2:cout<<sum2/t;break;
            case 3:cout<<sum3/t;break;
            case 4:cout<<sum4/t;break;
            default:break;
        }
        cout<<endl;
    }
    int b[5]={sum,sum1,sum2,sum3,sum4};
    sort(b,b+5);
    if(b[4]==sum)//找出评分最高的问题以及总分数
        cout<<"digital economy"<<" "<<b[4]<<endl;
    if(b[4]==sum1)
        cout<<"global warming"<<" "<<b[4]<<endl;
    if(b[4]==sum2)
        cout<<"regional contradiction"<<" "<<b[4]<<endl;
    if(b[4]==sum3)
        cout<<"novel coronavirus"<<" "<<b[4]<<endl;
    if(b[4]==sum4)
        cout<<"man and nature"<<" "<<b[4]<<endl;
    if(b[0]==sum)
        cout<<"digital economy"<<" "<<b[0]<<endl;//找出评分最低的问题以及总分数
    if(b[0]==sum1)
        cout<<"global warming"<<" "<<b[0]<<endl;
    if(b[0]==sum2)
        cout<<"regional contradiction"<<" "<<b[0]<<endl;
    if(b[0]==sum3)
        cout<<"novel coronavirus"<<" "<<b[0]<<endl;
    if(b[0]==sum4)
        cout<<"man and nature"<<" "<<b[0]<<endl;

    return 0;
}
