#include <iostream>
#include <queue>

int main()
{
    // 创建一个空的队列
    std::queue<int> myQueue;

    // 入队操作
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // 出队操作
    myQueue.pop();

    // 访问队头元素
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // 访问队尾元素（std::queue 不提供直接访问队尾元素的成员函数，需使用底层容器的方式）
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // 检查队列是否为空
    if (myQueue.empty())
    {
        std::cout << "Queue is empty." << std::endl;
    }
    else
    {
        std::cout << "Queue is not empty." << std::endl;
    }

    // 获取队列的大小
    std::cout << "Size of queue: " << myQueue.size() << std::endl;

    return 0;
}
