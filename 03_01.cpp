#include <iostream>
using namespace std;
int main()
{
    int i = 0;//导入第一个数为i，便于比较 
    cout << "请输入第一个数：" << endl;
    cin >> i;
    int j = 0;//提示用户输入第一个值
    cout << "请输入第二个数:" << endl;
    cin >> j;
    if (i>j)//if语句，情况为i大于j，即第一个数大于第二个数
    {
    cout << i << "大于" <<  j << endl;//输出对应判断
    }
    else if (i==j)//二者相等时的情况
    {
        cout << i << "等于" << j << endl;
    }
    else if (i<j)//第一个数小于第二个数
    {
        cout << i << "小于" << j << endl;
    }
    
    return 0;
}
