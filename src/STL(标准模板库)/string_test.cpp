#include <iostream>
#include <string>

using namespace std;

void test01()
{
    string str1("This is test01");
    cout << str1 << endl;
    // 拷贝赋值
    string str2(str1);
    cout << str2 << endl;
    //
    string str3(10, '6');
    cout << str3 << endl;
}

int main()
{
    test01();
    return 0;
}