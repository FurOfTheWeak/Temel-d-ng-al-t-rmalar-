#include<iostream>
#include<locale>

int main() {
    setlocale(LC_ALL, "Turkish");

    int satir;
    std::cout << "Lütfen satir sayısını giriniz: ";
    std::cin >> satir;

    for (int i = 1; i <= satir; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
