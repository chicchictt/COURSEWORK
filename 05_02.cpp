#include <iostream>
using namespace std;

class Triangle // 创建一个名为Triangle的类
{
private:
    double side1, side2, side3; // 用于表示三边长度的私有成员变量

public:
    Triangle(double s1, double s2, double s3) 
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;// 构造函数初始化三边长度
    }

    void determine() // 成员函数，用于确定三角形的类型并打印结果
    {
        if (side1 == side2 && side2 == side3) 
        {
            cout << "该三角形为等边三角形" << endl;
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) 
        {
            cout << "该三角形为等腰三角形" << endl;
        } 
        else 
        {
            cout << "该三角形为不等边三角形" << endl;
        }
    }
};

int main() 
{
    double s1, s2, s3; // 声明变量用于存储用户输入的三个边长
    cout << "请输入三角形的三条边长: ";
    cin >> s1 >> s2 >> s3; // 用户输入三角形的三个边长（注：本程序无法判断输入的边长能否真正构成三角形）
    Triangle myTriangle(s1, s2, s3); // 创建一个Triangle对象并用输入的边长值进行初始化
    myTriangle.determine();// 调用成员函数，确定三角形的类型并打印结果
    return 0;
}