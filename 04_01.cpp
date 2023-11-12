#include <iostream>
using namespace std;
int step = 1;//从1开始累积步数作为步骤序号
void move (char x , char y)
{
cout << step << ":" << x << "->" << y <<endl;//可根据用户输入的自定义柱子编号进行输出
step++;
}
void hannoi (int n , char a , char b , char c)
/*将汉诺塔问题简化为三个步骤：1.把n-1层的盘放到b柱；2.把最底层的第n个盘移动到c柱；3.将n-1个盘放到c柱
  其中处理n-1个盘的移动问题需要运用的递归知识*/
{
    if(n == 1)//当汉诺塔层数为1（n-1=0），直接移动到c柱
    {
        move (a ,c);
    }
    else
    {
        hannoi (n-1,a,c,b);//步骤1
        move (a,c);//步骤2
        hannoi (n-1,b,a,c);//步骤3
    }
}

int main()//主函数完成数据的输入、递归函数的运行、结果的输出
{
    int n;
    char a,b,c;
    cout << "请输入汉诺塔层数和三根柱子的编号" <<endl;
    cin >>n>>a>>b>>c;
    hannoi (n,a,b,c);
    return 0;
}