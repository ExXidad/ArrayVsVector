#include <iostream>
#include "Arr.h"
#include <chrono>
#include <cmath>

int main()
{
    for (int multiplier = 0; multiplier < 11; ++multiplier) {
        long int size = pow(2, multiplier);
        std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

        Arr arr(size, size, size);

        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

        std::cout << "Size: " << pow(2, multiplier) << std::endl;
        std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()
                  << "[ms]" << std::endl;
    }

    return 0;
}