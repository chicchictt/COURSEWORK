#include <iostream>
#include <deque>
#include <string>
int main()
{
    std::deque<int> myQueue;//创建一个 std::deque<int> 作为队列
    //循环读取标准输入命令，直到输入退出命令
    std::string command;
    std::cout << "请输入命令(push/pop/print/退出):" << std::endl;
    while (std::cin >> command && command != "退出") 
    {
        if (command == "push") 
        {
            //执行入队操作
            int value;
            std::cin >> value;
            myQueue.push_back(value);
            std::cout << value << " 入队成功。" << std::endl;
        } else if (command == "pop") 
        {
            //出队
            if (!myQueue.empty()) 
            {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                std::cout << frontValue << " 出队成功。" << std::endl;
            } else 
            {
                std::cout << "队列为空，无法执行出队操作。" << std::endl;
            }
        } else if (command == "print") 
        {
            //打印队列中的所有元素
            if (!myQueue.empty()) 
            {
                std::cout << "队列中的所有元素：";
                for (const auto& element : myQueue) 
                {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            } else 
            {
                std::cout << "队列为空。" << std::endl;
            }
        } else 
        {
            std::cout << "无效命令，请输入(push/pop/print/退出)。" << std::endl;
        }

        //清空输入缓冲区，防止影响下一次输入
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "请输入命令(push/pop/print/退出):" << std::endl;//提示用户输入下一个命令
    }

    std::cout << "程序结束。" << std::endl;

    return 0;
}
