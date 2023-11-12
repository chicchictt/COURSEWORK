#include <iostream>
using namespace std;

int fibonacci(int i) 
{
    if (i == 1 || i == 2) //当所求数字为前两个数时，直接输出1
    {
        return 1;
    } 
    else 
    {
        return fibonacci(i - 1) + fibonacci(i - 2);//斐波那契数列的原理：第i个数字数值为第i-1和第i-2个数之和
    }
}

int main() 
{
    int n;
    cout << "请输入组数n:" << endl;
    cin >> n; // 输入测试数据的个数

    while (n--) 
    {
        int a;
        cout << "输入想要求得的斐波那契数列中数字的序号a:" <<endl;
        cin >> a; // 输入正整数a
        cout << "斐波那契数列中第" << a << "个数为：" << fibonacci(a) << endl; // 输出结果
    }

    return 0;
}

