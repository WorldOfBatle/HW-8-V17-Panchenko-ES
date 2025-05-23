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

void replaceCapitalWords(char* str) {
    // Если строка пуста - выходим
    if (*str == '\0') {
        return;
    }

    // Если первый символ слова заглавный
    if (*str >= 'A' && *str <= 'Z') {
        // Заменяем его на многоточие
        while (*str != ' ' && *str != '\0') {
            *str = '.';
            str++;
        }
    }
    else {
        // Переходим к следующему символу, если не заглавная буква
        str++;
    }

    // Рекурсивный вызов для следующего символа
    replaceCapitalWords(str);
}

void task1() {
    std::cout << "\n--- Task 1: перевод из двоичной в десятичную ---\n";

    std::cout << "Введите бинарное число (состоящее из цифр 0 и 1): ";
    long binary;
    std::cin >> binary;
    std::cin.get(); // <-- убираем '\n', чтобы getline() во второй задаче не пропускался

    long decimal = bin2dec(binary);
    std::cout << "Десятичный эквивалент: " << decimal << "\n";
}

void task2() {
    std::cout << "\n--- Task 2: Замена слов, начинающихся с заглавной буквы, на многоточие ---\n";

    // 1) выделяем память под строку
    char* buffer = new char[256];
    std::cout << "Введите строку (до 255 символов):\n";
    std::cin.getline(buffer, 256);  // ожидаем ввод строки

    // 2) вызываем рекурсивную функцию
    replaceCapitalWords(buffer);

    // 3) выводим результат
    std::cout << "Результат: " << buffer << "\n";

    delete[] buffer;
}


int main() {
    task1();
    task2();
    return 0;
}
