#include <iostream>
#include <vector>
#include <algorithm>

//函数 uniqueSort，去除容器中的重复元素并按升序排序
void uniqueSort(std::vector<int>& vec) 
{
    std::sort(vec.begin(), vec.end());//使用 std::sort 对容器进行排序
    auto it = std::unique(vec.begin(), vec.end());//使用 std::unique 去除相邻的重复元素
    vec.erase(it, vec.end());//使用容器的 erase 方法擦除重复元素后的部分
}
int main() 
{
    std::vector<int> myVector;//创建一个 std::vector<int> 容器
    int input;//从标准输入读取一系列整数，输入-1表示结束
    std::cout << "请输入整数，输入-1结束：" << std::endl;
    while (std::cin >> input && input != -1) 
    {
        myVector.push_back(input);// 将整数添加到容器中
    }
    //检查容器是否为空
    if (!myVector.empty()) 
    {
        uniqueSort(myVector);//调用 uniqueSort 函数进行去重和排序
        std::cout << "处理后的容器元素（去重并按升序排序）：" << std::endl;//打印处理后的容器元素
        for (const auto& element : myVector) 
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else 
    {
        std::cout << "容器为空，无需处理。" << std::endl;
    }

    return 0;
}
