#include <iostream>
#include <stack>

int main()
{
    // 创建一个空的栈
    std::stack<int> myStack;

    // 入栈操作
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // 出栈操作
    myStack.pop();

    // 访问栈顶元素
    std::cout << "Top element: " << myStack.top() << std::endl;

    // 检查栈是否为空
    if (myStack.empty())
    {
        std::cout << "Stack is empty." << std::endl;
    }
    else
    {
        std::cout << "Stack is not empty." << std::endl;
    }

    // 获取栈的大小
    std::cout << "Size of stack: " << myStack.size() << std::endl;

    return 0;
}
