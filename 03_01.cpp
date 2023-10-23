#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    cout << "请输入第一个数：" << endl;
    cin >> i;
    int j = 0;
    cout << "请输入第二个数:" << endl;
    cin >> j;
    if (i>j)
    {
    cout << i << "大于" <<  j << endl;
    }
    else if (i==j)
    {
        cout << i << "等于" << j << endl;
    }
    else if (i<j)
    {
        cout << i << "小于" << j << endl;
    }
    
    return 0;
}