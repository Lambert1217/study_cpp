#include <iostream>
using namespace std;

// 第一个命名空间
namespace first_space
{
    void func()
    {
        cout << "Inside first_space(func1)" << endl;
    }
}
// 第二个命名空间
namespace second_space
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}
namespace first_space
{
    void func2()
    {
        cout << "Inside first_space(func2)" << endl;
    }
    // 嵌套
    namespace hello
    {
        void printHello()
        {
            cout << "Hello World!" << endl;
        }
    }
}
int main()
{

    using namespace first_space;
    using namespace first_space::hello;

    // 调用第一个命名空间中的函数
    func();
    func2();
    hello::printHello();
    printHello();

    // 调用第二个命名空间中的函数
    second_space::func();

    return 0;
}