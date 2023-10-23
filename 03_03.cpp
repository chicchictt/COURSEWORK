#include <iostream>
using namespace std;
int main()
{
    int num ,day;//因为用户输入的数字num不可直接用于swtich语句中int两个帮助完成程序的值；day为余数
    cout << "请输入一个正整数：" << endl;
    cin >> num;
    day = num % 7;//对num进行取余数运算
    switch(day)//switch语句开启分支
    {
        case 1://余数day为1时
            cout << "星期一" << endl;
            break;//跳出分支
        case 2://余数day为2时
            cout << "星期二" << endl;
            break;
        case 3://余数day为3时
            cout << "星期三" << endl;
            break;
        case 4://余数day为4时
            cout << "星期四" << endl;
            break;
        case 5://余数day为5时
            cout << "星期五" << endl;
            break;
        case 6://余数day为7时
            cout << "星期六" << endl;
            break;
        default://作为最后一个分支，使用default，当num能够被7整除时余数为0，即为星期日
            cout << "星期日" << endl;
        break;
    }
    return 0;
}
