#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string danhsachMSSV[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};


    cout << "Nhap MSSV cua ban: ";
    getline(cin, danhsachMSSV[0]);

    cout << "Mang truoc khi sap xep:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << danhsachMSSV[i] << endl;
    }

    string sortedMSSV[5];
    copy(begin(danhsachMSSV), end(danhsachMSSV), begin(sortedMSSV));
    sort(sortedMSSV + 1, sortedMSSV + 5);

    cout << "\nMang sau khi sap xep:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << sortedMSSV[i] << endl;
    }

    string *ptrArrayMSSV = danhsachMSSV;
    for (int i = 0; i < 5; ++i) {
        if (*ptrArrayMSSV == "2305CT3999") {
            cout << "\nDia chi cua phan tu chua MSSV lon nhat: " << ptrArrayMSSV << endl;
            cout << "Phan tu: " << *ptrArrayMSSV << endl;
            break;
        }
        ++ptrArrayMSSV;
    }

    return 0;
}