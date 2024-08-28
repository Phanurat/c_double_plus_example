#include <iostream>
#include <tbb/parallel_for.h>
#include <tbb/blocked_range.h>

void parallel_task() {
    tbb::parallel_for(tbb::blocked_range<int>(0, 10),
        [](const tbb::blocked_range<int>& r) {
            for (int i = r.begin(); i != r.end(); ++i) {
                std::cout << "Index: " << i << std::endl;
            }
        });
}

int main() {
    parallel_task();
    return 0;
}
