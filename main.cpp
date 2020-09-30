#include <iostream>
#include "Arr.h"
#include <chrono>
#include <cmath>
#include <vector>

int main()
{

    for (int multiplier = 0; multiplier < 10; ++multiplier) {
        long int size = 0;
        long int timeTaken = 0;
        int attempts = 20;
        for (int attempt = 0; attempt < attempts; ++attempt) {
            size = pow(2, multiplier);
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

            std::vector<std::vector<std::vector<int>>>
                    vector(size, std::vector<std::vector<int>>(size, std::vector<int>(size, 0)));

            std::mt19937 gen(time(nullptr));
            std::uniform_int_distribution<> uid(0, 1000000);

            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    for (int k = 0; k < size; ++k) {
                        vector[i][j][k] = uid(gen);
                    }
                }
            }

            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

            timeTaken += std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
        }
        std::cout << size << "\t" << timeTaken / attempts << std::endl
    }

    return 0;
}