#include <iostream>
using namespace std;
class Circle // 创建一个名为 Circle 的类
{
private:
    double radius;  // 声明一个私有（不希望外部用户直接访问或修改）的半径成员变量；使用double的原因是输入的半径值可能为小数

public:
    Circle(double r) // 构造函数初始化半径
    {
        radius = r;//赋值
    }
    double calculateArea() //根据题目要求，计算圆的面积的成员函数
    {
        return 3.14159 * radius * radius;  // 利用公式S=πr2来计算圆的面积并返回
    }

    double calculatePerimeter() // 根据题目要求，计算圆的周长的成员函数
    {
        return 2 * 3.14159 * radius;  // 利用公式C=2πr来计算圆的周长并返回
    }
};

int main() 
{
    double radius;  // 在主函数中声明一个变量用于存储用户输入的半径
    cout << "请输入圆的半径: ";
    cin >> radius;  // 用户输入半径值

    Circle myCircle(radius);  // 创建一个名为myCircle的对象，是Circle类的一个具体实例；并用输入的半径值进行初始化

    // 因为Circle类中的成员函数返回的是面积和周长，所以可以直接输出调用这些函数的结果
    cout << "圆的面积为: " << myCircle.calculateArea() << endl;
    cout << "圆的周长为: " << myCircle.calculatePerimeter() << endl;
    return 0;
}