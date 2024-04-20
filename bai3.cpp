#include <iostream>
#include <string>

int main() {
    const int size = 5;
    std::string mssv[size] = { "", "2301CT1234", "2302CT3456", "", "2304CT0002" };


    std::cout << "MSSV theo thu tu mac dinh cua mang:\n";
    int i = 0;
    while (i < size) {
        std::cout << "MSSV " << i << ": " << mssv[i] << std::endl;
        ++i;
    }

    return 0;
}