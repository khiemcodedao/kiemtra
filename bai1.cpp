#include <iostream>
#include <string>

int main() {
    const int size = 5;
    std::string danhsachmssv[size] = { "", "2301CT1234", "2302CT3456","", "2304CT0002", };

    for (int i = 0; i < size; ++i) {
        std::cout << "MSSV " << i + 1 << ": " << danhsachmssv[i] << std::endl;
    }

    return 0;
}