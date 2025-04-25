#include <iostream>

// рекурсивно переводит двоичное число (например, 1011) в десятичное (11)
long bin2dec(long n) {
    if (n == 0) {
        return 0;
    }
    // старший разряд: результат предыдущего умножаем на 2,
    // плюс младший (n % 10)
    return bin2dec(n / 10) * 2 + (n % 10);
}

void task1() {
    std::cout << "\n--- Task 1 ---\n";
}

void task2() {
    std::cout << "\n--- Task 2 ---\n";
}

int main() {
    task1();
    task2();
    return 0;
}
