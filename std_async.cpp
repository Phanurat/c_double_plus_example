#include <iostream>
#include <future>
#include <chrono>

int find_answer() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 42;
}

int main() {
    std::future<int> result = std::async(std::launch::async, find_answer); // เรียกใช้ฟังก์ชันใน background
    std::cout << "Doing other work..." << std::endl;
    std::cout << "The answer is " << result.get() << std::endl; // รอรับผลลัพธ์
    return 0;
}
