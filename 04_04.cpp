#include <iostream>
#include <string>
#include <cctype>//使用了<cctype>中的函数islower()、toupper()和tolower()，用于字符大小写的判断与转换
using namespace std;
int main() 
{
    string str;
    cout << "请输入待互换的字符串：" << endl;
    getline(cin, str); // 使用getline(cin, str)读取字符串，并将其存储在名为str的对象中
    for (char& c : str) //使用范围for循环遍历字符串中的每个字符
    //定义一个引用变量c，依次指向str字符串中的每个字符，同时可以通过修改c来修改原字符串str中对应的字符
    {
        if (islower(c)) // 使用islower(c)函数判断是否为小写字母,如果是,转换成大写字母
            c = toupper(c); 
        else if (isupper(c))// 使用isupper(c)函数判断是否为大写字母,如果是，转换成小写字母
            c = tolower(c);
    }
    cout << "完成互换的字符串为：" << str << endl;//输出完成转换后的字符串

    return 0;
}