#include <iostream>
#include <functional> //これいる

int main(){
    auto func1 = [](int i, int j){std::cout << (i + j) << std::endl;};
    func1(99, 1); //100
}