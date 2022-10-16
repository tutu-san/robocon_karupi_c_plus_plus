#include "lib.hpp"

#include <iostream>

int function::plus(int i, int j){//function class のメソッド
    std::cout << "in function class" << std::endl;
    return i + j;
}

int plus(int i, int j){//ただの関数
    std::cout << "normal function" << std::endl;
    return i + j;
}