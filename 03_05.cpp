#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) 
/*已知isPrime函数用于判断一个数字是否为质数
  它通过遍历2到sqrt(num)之间的因子，判断数字（num的范围会在后续代码中提及）能否被这些因子整除，若能整除（则代表num除1和它本身外还有其他因数，符合质数定义），则该数字不是质数
  如果遍历完所有可能的因子后，都没有能够整除该数字，则该数字是质数 */
{
    if (num < 2) 
    {
        return false;//排除掉1这个特例
    }
    for (int i = 2; i <= sqrt(num); i++) //遍历2到sqrt(num)之间的因子
    {
        if (num % i == 0) 
        {
            return false;//如果num能被i整除，则num不是质数
        }
    }
    
    return true;
}

int main() 
{
    cout << "质数：";
    // 遍历200到300之间的数字
    for (int num = 200; num <= 300; num++) 
    //使用for循环遍历200到300之间的数字，并调用isPrime函数判断每个数字是否为质数如果是质数，则将其输出 
    {
        // 判断数字是否为质数，是的话则输出
        if (isPrime(num)) 
        {
            cout << num << " ";//不换行输出，用空格隔开
        }
    }
    
    return 0;
}
