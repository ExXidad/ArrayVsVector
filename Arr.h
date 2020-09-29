//
// Created by mi on 29.09.2020.
//

#ifndef ARR_ARR_H
#define ARR_ARR_H

#include <iostream>
#include <random>
#include <ctime>

class Arr
{
private:
    int ***data;
public:
    int ***getData() const;

private:

    int m, n, k;
public:
    int getM() const;

    int getN() const;

    int getK() const;

public:
    Arr(const long int &m, const long int &n, const long int &k);
    ~Arr();
};

std::ostream &operator<<(std::ostream &ostream, Arr &arr);

#endif //ARR_ARR_H
