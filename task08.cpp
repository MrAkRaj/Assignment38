#include <iostream>
#include <list>

int main() {
    std::list<int> mylist = {10, 20, 20, 30, 40, 40, 40, 50};

    // Remove all occurrences of 20
    mylist.remove(20);

    // Remove elements that are greater than 30
    mylist.remove_if([](int x) { return x > 30; });

    for (auto& elem : mylist) {
        std::cout << elem << " ";
    }
    return 0;
}
