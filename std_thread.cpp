#include <iostream>
#include <thread>

void print_hello() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(print_hello); // สร้าง thread ใหม่
    t.join(); // รอให้ thread ทำงานเสร็จ
    return 0;
}
