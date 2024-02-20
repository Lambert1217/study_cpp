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

void test02()
{
    string str1("abcdefgdede");
    cout << str1.find("de", 0) << endl;
    cout << str1.rfind("ab", str1.length()) << endl;
    cout << str1.replace(0, 3, "123") << endl;
    cout << str1 << endl;
}

void test03()
{
    string str1("haha");
    string str2("hehe");
    cout << str1.compare(str2) << endl;
    if (str1 >= str2)
    {
        cout << str1 << endl;
    }
    else
    {
        cout << str2 << endl;
    }
}

void test04()
{
    string str1 = "111111;222222;333333;4444444";
    int pos = 0;
    while (1)
    {
        int ret = str1.find(';', pos);
        if (ret < 0)
        {
            string tmp = str1.substr(pos, str1.length() - pos);
            cout << tmp << endl;
            break;
        }

        string tmp = str1.substr(pos, ret - pos);
        cout << tmp << endl;
        pos = ret + 1;
    }
}

void test05()
{
    string str1 = "Hello world!";
    str1.insert(2, 4, '@');
    // str1.erase(2, 4);
    cout << str1 << endl;
}

void test06()
{
    // char * 转成 string
    string str1;
    str1 = (string) "hello";
    cout << str1 << endl;
    // string 转成 char *
    string str2 = "123456789";
    char *p = (char *)str2.c_str();
    cout << str2 << endl;
}

int main()
{
    test06();
    return 0;
}