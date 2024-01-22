#include <iostream>
#include <vector>

using namespace std;

// 模板类声明
template <class Temp>
class stack
{
private:
    vector<Temp> elems;

public:
    void push(const Temp &);
    void pop();
    Temp getTop() const;
    bool empty() const
    {
        return elems.empty();
    };
};

// 主函数
int main()
{
    stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    cout << intStack.getTop() << endl;
    intStack.pop();
    cout << intStack.getTop() << endl;
    intStack.pop();
    try
    {
        intStack.pop();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

// 类成员函数定义
template <class Temp>
void stack<Temp>::push(const Temp &elem)
{
    elems.push_back(elem);
}

template <class Temp>
void stack<Temp>::pop()
{
    if (empty())
    {
        throw out_of_range("stack<>::pop() : empty stack");
    }
    elems.pop_back();
}

template <class Temp>
Temp stack<Temp>::getTop() const
{
    if (empty())
    {
        throw out_of_range("stack<>::getTop() : empty stack");
    }
    return elems.back();
}
