#include <iostream>
#include <map>           // 自动升序  红黑树实现
#include <unordered_map> //无序  使用哈希表而不是红黑树实现，这意味着它提供了更快的平均插入、查找和删除操作。
#include <string>

void test03()
{
    // 创建一个空的 multimap，键和值都是 int 类型
    std::multimap<int, std::string> myMultimap;

    // 插入元素
    myMultimap.insert({1, "One"});
    myMultimap.insert({2, "Two"});
    myMultimap.insert({1, "Uno"}); // 允许重复的键值

    // 遍历并输出 multimap
    for (const auto &pair : myMultimap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    // 查找键值为 1 的所有元素
    auto range = myMultimap.equal_range(1);
    for (auto it = range.first; it != range.second; ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    // 删除键值为 1 的第一个元素
    auto it = myMultimap.find(1);
    if (it != myMultimap.end())
    {
        myMultimap.erase(it);
    }
    // 查找键值为 1 的所有元素
    range = myMultimap.equal_range(1);
    for (auto it = range.first; it != range.second; ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }
}
void test02()
{
    // 创建一个空的unordered_map
    std::unordered_map<int, std::string> myUnorderedMap;

    // 插入键值对
    myUnorderedMap[1] = "One";
    myUnorderedMap[3] = "Three";
    myUnorderedMap[2] = "Two";

    // 使用迭代器遍历unordered_map
    for (const auto &pair : myUnorderedMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 查找元素
    auto it = myUnorderedMap.find(2);
    if (it != myUnorderedMap.end())
    {
        std::cout << "Element with key 2 found: " << it->second << std::endl;
    }
    else
    {
        std::cout << "Element with key 2 not found." << std::endl;
    }

    // 删除元素
    myUnorderedMap.erase(1);

    // 输出修改后的unordered_map
    for (const auto &pair : myUnorderedMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

void test01()
{ // 创建一个空的map
    std::map<int, std::string> myMap;

    // 插入键值对
    myMap[1] = "One";
    myMap[3] = "Three";
    myMap[2] = "Two";

    // 使用迭代器遍历map
    for (const auto &pair : myMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // myMap.erase(2);

    // 查找元素
    auto it = myMap.find(2);
    if (it != myMap.end())
    {
        std::cout << "Element with key 2 found: " << it->second << std::endl;
    }
    else
    {
        std::cout << "Element with key 2 not found." << std::endl;
    }

    // 删除元素
    myMap.erase(1);

    // 输出修改后的map
    for (const auto &pair : myMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main()
{
    test03();
    return 0;
}
