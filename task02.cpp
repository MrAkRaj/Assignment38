#include <iostream>
#include <list>

int main() {
    std::list<int> mylist;

    // Method 1: Using assign() with range
    std::list<int> temp = {1, 2, 3, 4, 5};
    mylist.assign(temp.begin(), temp.end());

    // Method 2: Using assign() with initializer list
    mylist.assign({10, 20, 30, 40, 50});

    // Method 3: Using assign() with fill
    mylist.assign(5, 100);

    for (auto& elem : mylist) {
        std::cout << elem << " ";
    }
    return 0;
}
