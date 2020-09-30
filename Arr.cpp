//
// Created by mi on 29.09.2020.
//

#include "Arr.h"

Arr::Arr(const long int &m, const long int &n, const long int &k)
{
    this->m = m;
    this->n = n;
    this->k = k;

    data = new int **[m];
    for (int i = 0; i < m; ++i) {
        data[i] = new int *[n];
        for (int j = 0; j < n; ++j) {
            data[i][j] = new int[k];
            for (int l = 0; l < k; ++l) {
                data[i][j][l] = 0;
            }
        }
    }
}

int ***Arr::getData() const
{
    return data;
}

int Arr::getM() const
{
    return m;
}

int Arr::getN() const
{
    return n;
}

int Arr::getK() const
{
    return k;
}

Arr::~Arr()
{
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            delete [] data[i][j];
        }
        delete [] data[i];
    }
}

void Arr::setIJK(const long int &i, const long int &j, const long int &k, const int &val)
{
    data[i][j][k] = val;
}

std::ostream &operator<<(std::ostream &ostream, Arr &arr)
{
    for (int k = 0; k < arr.getK(); ++k) {
        for (int n = 0; n < arr.getN(); ++n) {
            for (int m = 0; m < arr.getM(); ++m) {
                ostream << arr.getData()[m][n][k] << " ";
            }
            ostream << std::endl;
        }
        ostream << std::endl;
    }
    ostream << std::endl;
}