#include <iostream>
#include <list>

int main() {
    std::list<int> mylist = {10, 20, 30, 40, 50};

    // Iterating through the list
    for (auto it = mylist.begin(); it != mylist.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
