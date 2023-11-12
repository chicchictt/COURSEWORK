#include <iostream>
#include <cmath>//使用pow函数来计算a的y次方，所以引入cmath头文件
using namespace std;

int main() {
    int a, b;
    cout << "请输入两个正整数a和b:";
    cin >> a >> b;

    int y = 0; // 本题我的主要解题思路为：对数的性质可知logab一定大于0，所以将y从0开始自增，直到符合条件，所求得的y即为题目所求的x+1的值（为避免混淆将变量命名为y）
    while(pow(a, y) <= b) //使用while循环进行迭代，不断增加x，直到满足：a的y次方 <= b才结束循环
    {
        y++;
    }

    cout << "满足条件的x为:" << y - 1 << endl;//需要特别解释的是：整数类型int就能满足题目要求，a、b、y均为整数，y自增后也为整数

    return 0;
}
/*
在循环中，我们判断pow(a, x)是否小于等于b，如果是，我们将x自增1。
这样，当pow(a, x)不再小于等于b时，即得到满足条件的x。最后，我们输出满足条件的x值（x-1）。 
值得注意的是，我们。
另外，这里的整数类型int足够满足题目要求，因为a和b都是正整数，结果x也为整数。*/