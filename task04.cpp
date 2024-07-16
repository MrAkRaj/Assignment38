#include <iostream>
#include <list>

int main() {
    std::list<int> mylist = {10, 20, 30, 40, 50};

    // Iterating through the list in reverse order
    for (auto it = mylist.rbegin(); it != mylist.rend(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
