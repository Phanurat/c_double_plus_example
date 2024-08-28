#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void print_message(const std::string& message) {
    std::lock_guard<std::mutex> lock(mtx); // ใช้ lock_guard เพื่อป้องกันการเข้าถึงพร้อมกัน
    std::cout << message << std::endl;
}

int main() {
    std::thread t1(print_message, "Hello from thread 1");
    std::thread t2(print_message, "Hello from thread 2");

    t1.join();
    t2.join();
    return 0;
}
