#include <iostream>
#include <list>

int main() {
    std::list<int> mylist = {10, 20, 20, 30, 40, 40, 40, 50};

    // Remove all consecutive duplicate elements
    mylist.unique();

    for (auto& elem : mylist) {
        std::cout << elem << " ";
    }
    return 0;
}
