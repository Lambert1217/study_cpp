#include <iostream>
using namespace std;

int main()
{
    cout << "Value of __LINE__ : " << __LINE__ << endl; // 行号
    cout << "Value of __FILE__ : " << __FILE__ << endl; // 文件名   绝对路径
    cout << "Value of __DATE__ : " << __DATE__ << endl; // 这会包含一个形式为 month/day/year 的字符串，它表示把源文件转换为目标代码的日期。
    cout << "Value of __TIME__ : " << __TIME__ << endl; // 这会包含一个形式为 hour:minute:second 的字符串，它表示程序被编译的时间。

    return 0;
}