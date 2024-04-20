#include <iostream>
#include <cstring>

int main() {
    const char* ptrArrayMSSV[] = {"2305CT1234", "2305CT5678", "2305CT9999", "2305CT3999", "2305CT2468"};
    
    const char* *ptrMax = ptrArrayMSSV; 
    
    for (int i = 1; i < 5; ++i) {
        if (strcmp(ptrArrayMSSV[i], *ptrMax) > 0) {
            ptrMax = ptrArrayMSSV + i; 
        }
    }
    
    std::cout << "Dia chi (address): " << ptrMax << std::endl;
    std::cout << "Phan tu lon nhat: " << *ptrMax << std::endl;
    
    return 0;
}