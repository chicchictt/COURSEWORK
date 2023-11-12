#include <iostream> 
#include <vector> 
using namespace std;
struct Student 
{ 
    string name; int averageScore; int reviewScore; char isCadre; char isWestern; int articleNum; //创建输入数据的类型（分别为：字符串、整数、整数、字符、字符、整数）
};
int main()
{
    int N; 
    cin >> N;//输入学生总数
    vector<Student> students(N); // 创建存储学生数据的向量

    for (int i = 0; i < N; i++) // 读取每行的学生数据
    {
        cin >> students[i].name >> students[i].averageScore >> students[i].reviewScore >> students[i].isCadre >> students[i].isWestern >> students[i].articleNum;
        //     输入学生姓名          平均成绩                     评议成绩                     是否为班级干部           是否为西部学生              发表论文数
    }

    int total = 0; //累加初始值为0
    string theTargetStudent;

    for (int i = 0; i < N; i++) // 使用for循环计算每位学生获得的奖金总数，且在循环中，对于每位学生都根据题目提供的条件判断是否满足获得奖金的条件，并计算奖金总数。
    {
        //因为题目说明各项奖学金之间无相互影响关系，所以使用if语句，可进行情况累加
        int total = 0;
        if (students[i].averageScore > 80 && students[i].articleNum >= 1) //判断是否满足条件1并计算奖金
        {
            total += 8000;
        }
        if (students[i].averageScore > 85 && students[i].reviewScore > 80) //判断是否满足条件2并计算奖金
        {
            total += 4000;
        }
        if (students[i].averageScore > 90)//判断是否满足条件3并计算奖金 
        {
            total += 2000;
        }
        if (students[i].averageScore > 85 && students[i].isWestern == 'Y') //判断是否满足条件4并计算奖金 
        {
            total += 1000;
        }
        if (students[i].reviewScore > 80 && students[i].isCadre == 'Y') //判断是否满足条件5并计算奖金 
        {
            total += 850;
        }
        
        int maxTotalBonus = total;
        if (total > maxTotalBonus) // 设置条件对获得最高奖金的对应学生姓名进行不断更新（当无更高奖学金出现时，会得出最高奖学金学生姓名）
        {
            maxTotalBonus = total;
            theTargetStudent = students[i].name;
            cout << theTargetStudent << endl;//按题目要求输出
            cout << maxTotalBonus << endl;
        }
}

int totalBonusSum = 0;
for (int i = 0; i < N; i++) //再次使用一个循环计算所有学生的奖金总和
{
    int total2 = 0;

    if (students[i].averageScore > 80 && students[i].articleNum >= 1) //整体代码编写逻辑与第一个for循环一样
    {
        total2 += 8000;
    }
    if (students[i].averageScore > 85 && students[i].reviewScore > 80) 
    {
        total2 += 4000;
    }
    if (students[i].averageScore > 90) 
    {
        total2 += 2000;
    }
    if (students[i].averageScore > 85 && students[i].isWestern == 'Y') 
    {
        total2 += 1000;
    }
    if (students[i].reviewScore > 80 && students[i].isCadre == 'Y') 
    {
        total2 += 850;
    }

    totalBonusSum += total2;//在循环内对每个学生的每项奖学金进行累加
}

cout << totalBonusSum << endl;//按题目要求输出

return 0;
}
