#include <iostream>
#include <deque>

int main()
{
    // 创建一个空的 deque
    std::deque<int> myDeque;

    // 在头部和尾部插入元素
    myDeque.push_front(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    myDeque.push_front(0);

    // 遍历输出元素
    for (const auto &element : myDeque)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // 在头部和尾部删除元素
    myDeque.pop_front();
    myDeque.pop_back();

    // 输出修改后的元素
    for (const auto &element : myDeque)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
