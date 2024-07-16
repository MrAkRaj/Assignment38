#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 20, 30};
    std::list<int> list2 = {40, 50, 60};

    // Merge list2 into list1
    list1.merge(list2);

    for (auto& elem : list1) {
        std::cout << elem << " ";
    }
    return 0;
}
