/*
 * ackermann.cpp
 * g++ -O2 --pedantic -Wall ackermann.cpp && ./a.out 4 1
 * */

#include <cmath>
#include <cstdlib>
#include <iostream>

double ackermann(const double m, const double n) {
    if (m == 0 || m == 1) {
        return n + 1 + m;
    }

    if (m == 2) {
        return 2 * n + 3;
    }

    if (m == 3) {
        return std::pow(2, n + 3) - 3;
    }

    if (n == 0) {
        return ackermann(m - 1, 1);
    }

    return ackermann(m - 1, ackermann(m, n - 1));
}

int main(const int argc, const char* const argv[]) {
    if (argc < 3) {
        std::cerr
            << "input two integral numbers: "
            << argv[0] << " 3 2"
            << std::endl;
        exit(1);
    }

    const int m = std::atof(argv[1]);
    const int n = std::atof(argv[2]);

    std::cout
        << m << " " << n << "\n"
        << ackermann(m, n)
        << std::endl;

    return 0;
}

