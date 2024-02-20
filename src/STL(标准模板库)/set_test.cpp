#include <iostream>
#include <set>
#include <string>

struct student
{
    std::string name;
    char age;
};

// 自定义比较方法
struct CompareAbsolute
{
    bool operator()(student a, student b) const
    {
        return a.age < b.age;
    }
};

void test01()
{
    // 创建一个使用自定义比较函数的set
    std::set<student, CompareAbsolute> studentSet;

    // 添加学生
    studentSet.insert({"Alice", 20});
    studentSet.insert({"Bob", 22});
    studentSet.insert({"Charlie", 18});
    studentSet.insert({"David", 21});
    studentSet.insert({"Eva", 19});

    // 遍历并输出学生
    for (const auto &s : studentSet)
    {
        std::cout << "Name: " << s.name << ", Age: " << static_cast<int>(s.age) << std::endl;
    }

    // 查找并删除指定学生
    student toDelete = {"David", 21};
    auto it = studentSet.find(toDelete);
    if (it != studentSet.end())
    {
        std::cout << "Deleting student: " << it->name << ", Age: " << static_cast<int>(it->age) << std::endl;
        studentSet.erase(it);
    }
    else
    {
        std::cout << "Student not found for deletion." << std::endl;
    }

    // 输出删除后的学生集合
    std::cout << "Students after deletion:" << std::endl;
    for (const auto &s : studentSet)
    {
        std::cout << "Name: " << s.name << ", Age: " << static_cast<int>(s.age) << std::endl;
    }

    // 获取集合大小
    std::cout << "Size of the set: " << studentSet.size() << std::endl;
}

void test02()
{
    std::set<int> mySet = {1, 2, 4, 5, 7};

    auto it_lower = mySet.lower_bound(4);
    if (it_lower != mySet.end())
    {
        std::cout << *it_lower << std::endl;
    }
    auto it_upper = mySet.upper_bound(4);
    if (it_upper != mySet.end())
    {
        std::cout << *it_upper << std::endl;
    }

    auto pair_ = mySet.equal_range(5);
    if (pair_.first != mySet.end())
    {
        std::cout << *pair_.first << std::endl;
    }
    if (pair_.second != mySet.end())
    {
        std::cout << *pair_.second << std::endl;
    }
}

int main()
{
    test02();
    return 0;
}
