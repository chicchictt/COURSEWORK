#include <iostream>
#include <string>
class Student //定义 Student 类
{
private:
    std::string name;//对应姓名
    std::string className;//班级
    std::string studentID;//学号
    int score;//分数
    static int count;//静态变量，用于统计对象总数

public:
    // 构造函数，使用姓名、班级、学号、分数进行初始化
    Student(std::string name_val, std::string className_val, std::string studentID_val, int score_val)
        : name(name_val), className(className_val), studentID(studentID_val), score(score_val) 
        {
        count++;  // 每次创建对象时增加 count
        }

    // 成员函数，显示学生的信息并输出成绩
    void showInfo() 
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Score: " << score << std::endl;

        // 根据分数输出成绩
        if (score >= 90) 
        {
            std::cout << "Grade: A" << std::endl;
        } 
        else if (score >= 80) 
        {
            std::cout << "Grade: B" << std::endl;
        }
        else if (score >= 70) 
        {
            std::cout << "Grade: C" << std::endl;
        } 
        else 
        {
            std::cout << "Grade: D" << std::endl;
        }
    }
    
    static int getCount()//静态成员函数，返回对象总数 
    {
        return count;
    }
};

int Student::count = 0;//初始化静态变量 count

int main() 
{
    std::string name, className, studentID;
    int score;

    //输入学生信息
    std::cout << "请输入学生姓名: ";
    std::cin >> name;
    std::cout << "请输入学生班级: ";
    std::cin >> className;
    std::cout << "请输入学生学号: ";
    std::cin >> studentID;
    std::cout << "请输入学生成绩: ";
    std::cin >> score;

    Student student(name, className, studentID, score);//创建 Student 对象
    student.showInfo();//显示学生信息
    std::cout << std::endl;
    std::cout << "Total students: " << Student::getCount() << std::endl;// 统计对象总数并输出
    return 0;
}
