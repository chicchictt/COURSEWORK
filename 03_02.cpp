#include <iostream>
using namespace std;
int main()
{
    char x;
    int digits = 0,num = 0,i;
    cout << "请输入一个整数：" << endl;
    cin >> num;
    do{
       i = num % 10;//从最低位开始取余，所得的数值为逆向输出值的最高位
       num = num / 10;//去掉最低位继续运算
       ++digits;//每进行一次循环，位数进行一次累加
       cout << i;//无endl进行换行命令，可在循环内部进行输出可获得排列成一串字符的整数数字，且为输入值的逆向输出
    }
    while (num != 0);//设定重新进入循环的条件为num不为0，即当不断去掉最低位又除以10后仍不为0时，可理解为仍有位数存在，继续循环，直到num为0时结束。
    cout << ",且该整数位数为：" << digits << endl;
    return 0;
}