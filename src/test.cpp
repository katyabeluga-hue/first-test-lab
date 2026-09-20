#include <iostream>
#include <string>

// Возвращает true, если строка непустая и состоит только из цифр 0-9.
static bool isNonNegativeInteger(const std::string& s) {
    if (s.empty()) {
        return false;
    }
    for (char c : s) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Введите целое неотрицательное число: ";
        if (!std::getline(std::cin, input)) {
            // Конец ввода (Ctrl+D) - выходим, чтобы не зациклиться.
            std::cout << std::endl;
            return 1;
        }

        if (isNonNegativeInteger(input)) {
            break;
        }
        std::cout << "Ошибка: нужно ввести только цифры (без пробелов, знаков и букв). Попробуйте ещё раз." << std::endl;
    }

    std::cout << "Вы ввели: " << input << std::endl;
    return 0;
}
