#include <iostream>
#include <list>
int main() 
{
    std::list<int> myList;//创建一个 std::list<int>
    //从标准输入读取一系列整数，输入-1表示结束
    int input;
    std::cout << "请输入整数，输入-1结束:" << std::endl;
    while (std::cin >> input && input != -1) 
    {
        myList.push_back(input);//将整数添加到链表中
    }
    
    if (!myList.empty())//检查链表是否为空
    {
        myList.pop_front();//删除链表中的第一个元素
        myList.pop_back();//删除链表中的最后一个元素
    } else 
    {
        std::cout << "链表为空，无法执行删除操作。" << std::endl;
    }

    //打印剩余的链表
    if (!myList.empty()) 
    {
        std::cout << "剩余的链表元素：" << std::endl;
        for (const auto& element : myList) 
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else 
    {
        std::cout << "链表为空。" << std::endl;
    }

    return 0;
}
