#include <iostream>
#include <list>

int main() {
    std::list<int> mylist;
    int num;

    std::cout << "Enter elements (enter -1 to stop): " << std::endl;
    while (std::cin >> num && num != -1) {
        mylist.push_back(num);
    }

    for (auto& elem : mylist) {
        std::cout << elem << " ";
    }
    return 0;
}
