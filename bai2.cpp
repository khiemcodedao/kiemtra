#include <iostream>
#include <string>

int main() {
    const int size = 5; 
    std::string mssv[size] = { "", "2301CT1234", "2302CT3456", "2305CT0660", "2304CT0002" };
 
    std::cout << "MSSV truoc khi cap nhat:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "MSSV " << i << ": " << mssv[i] << std::endl;
    }

    
    std::cout << "Nhap MSSV cua ban: ";
    std::string userInput;
    std::getline(std::cin, userInput);

    mssv[0] = userInput;

    std::cout << "MSSV sau khi cap nhat:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "MSSV " << i << ": " << mssv[i] << std::endl;
    }

    return 0;
}