#include <iostream>
using namespace std;
int main()
{
    int line = 0,i = 1,j;//line：用户输入的金字塔层数；i：层序号(第i层)；j：星号或者空格的个数
    cout << "请输入一个正整数作为想要的金字塔层数：" << endl;
    cin >> line;
    while (i <= line)//当逐行打印图案到第line层时（即i=line），循环结束
        {
        //题目要求的三角形为等腰三角形，可知三角形的高为line对应的值，底为最底层星号个数2*line-1，则第i层的空格数为底-星号数=2*line-1-（2i-1）= 2*line-2i
        for (j=1;j<=line-i;++j)//在while循环内层使用for循环，（其实也可以使用while循环，但我认为for语句能使我条理更清晰）输出line-i个空格在星号的左边
            cout << " " ;
        for (j=1;j<=2*i-1;++j)//输出2*i-1个星号
            cout << "*" ;
        for (j=1;j<=line-i;++j)//输出line-i个空格在星号的右边
            cout << " " ;
        cout << endl;//在下一次执行循环命令时换下一行
        ++i;
    }
    return 0;
}

