#include <iostream>
#include <cmath>
class Point //定义 Point 类
{
private:
    double x;//x 坐标
    double y;//y 坐标
public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}//构造函数，使用点坐标进行初始化
    void showX()// 成员函数，显示 x 坐标 
    {
        std::cout << "X coordinate: " << x << std::endl;
    }
    void showY()//成员函数，显示 y 坐标
    {
        std::cout << "Y coordinate: " << y << std::endl;
    }
    void changeX(double new_x)//成员函数，更改 x 坐标 
    {
        x = new_x;
    }
    void changeY(double new_y)// 成员函数，更改 y 坐标 
    {
        y = new_y;
    }
};

class Rectangle : public Point //定义 Rectangle 类，以公有方式继承 Point 类
{
private:
    double length;//长度
    double width;//宽度
public:
    //构造函数，使用点坐标、长、宽进行初始化
    Rectangle(double x_val, double y_val, double length_val, double width_val)
        : Point(x_val, y_val), length(length_val), width(width_val) {}
    
    double calculateArea()// 成员函数，
    {
        return length * width;//面积计算
    }
    
    double calculatePerimeter()//成员函数，计算矩形的周长 
    {
        return 2 * (length + width);//周长计算
    }
};

int main() 
{
    double x, y, length, width;
    //根据题意，请用户输入矩形点坐标、长和宽
    std::cout << "请输入点的x坐标:";
    std::cin >> x;
    std::cout << "请输入点的y坐标:";
    std::cin >> y;
    std::cout << "请输入矩形的长度:";
    std::cin >> length;
    std::cout << "请输入矩形的宽度:";
    std::cin >> width;
    
    Point point1(x, y);//创建 Point 对象
    Rectangle rectangle1(x, y, length, width);//创建 Rectangle 对象
    //显示 Point 对象的坐标（x、y分别显示）
    point1.showX();
    point1.showY();
    // 计算 Rectangle 对象的面积和周长并输出
    std::cout << "The area of the rectangle is: " << rectangle1.calculateArea() << std::endl;
    std::cout << "The perimeter of the rectangle is: " << rectangle1.calculatePerimeter() << std::endl;
    return 0;
}
