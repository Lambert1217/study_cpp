#include <iostream>
#include <vector>

void test1()
{ // 创建一个空的 vector
    std::vector<int> myVector;

    // 在 vector 尾部添加元素
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // 使用迭代器遍历 vector
    std::cout << "Elements in the vector: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 访问元素
    std::cout << "First element: " << myVector.front() << std::endl;
    std::cout << "Last element: " << myVector.back() << std::endl;

    // 修改元素
    myVector[1] = 25;

    // 删除最后一个元素
    myVector.pop_back();

    // 获取 vector 的大小和容量
    std::cout << "Size of vector: " << myVector.size() << std::endl;
    std::cout << "Capacity of vector: " << myVector.capacity() << std::endl;

    myVector.shrink_to_fit();
    std::cout << "Capacity of vector: " << myVector.capacity() << std::endl;

    // 清空 vector
    myVector.clear();

    // 检查 vector 是否为空
    if (myVector.empty())
    {
        std::cout << "Vector is empty." << std::endl;
    }
}

int main()
{
    test1();
    return 0;
}
