#include "hash.hpp"
// #include <string>

template<>
int Hash<int>::operator()(const int &x) const {
    long y = ((x*x*MULT) << 20) >> 4;
    return y;
}

// template<>
// int Hash<string>::operator()(const string &) const {
//     unsigned int n = 0;
//     for(unsigned int i = 0; i < x.length(); ++i) {
//         n += x[i]*i; //n es suma el codi ascii
//     }
//     return n;
// } 