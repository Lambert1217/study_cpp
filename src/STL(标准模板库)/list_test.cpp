#include <iostream>
#include <list>

// 双向链表

int main()
{
    // Create an empty list
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Remove an element from the list
    myList.pop_front();

    // Access elements using iterators
    for (const auto &element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if the list is empty
    if (myList.empty())
    {
        std::cout << "List is empty." << std::endl;
    }
    else
    {
        std::cout << "List is not empty." << std::endl;
    }

    // Get the size of the list
    std::cout << "Size of list: " << myList.size() << std::endl;

    return 0;
}
