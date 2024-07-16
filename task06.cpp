#include <iostream>
#include <list>

int main() {
    std::list<int> mylist = {10, 20, 30, 40, 50};

    std::cout << "First element: " << mylist.front() << std::endl;
    std::cout << "Last element: " << mylist.back() << std::endl;

    return 0;
}
