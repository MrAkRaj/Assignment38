#include <iostream>
#include <list>

int main() {
    std::list<int> mylist;

    // Insert at the beginning
    mylist.push_front(10);

    // Insert at the end
    mylist.push_back(20);

    for (auto& elem : mylist) {
        std::cout << elem << " ";
    }
    return 0;
}
