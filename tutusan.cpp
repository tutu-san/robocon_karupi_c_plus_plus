#include <iostream>
#include <functional> //これいる

int main(){
    int keisan;
    
    auto func1 = [](int i, int j) {
        std::cout << (i + j);
        return i + j;
    };
    auto func2 = [](double i, double j) -> int {
        std::cout << (i + j) << std::endl;
        return i + j;
    };
    auto func3 = [] (auto i ,auto j) {
        std::cout << (i + j) << std::endl;
        return i + j;
    }; 
    //こんなんで許されるのか？

    func1(1, 2);
    keisan = func2(1.35, 2.75);
    func3(1, 1.41);

    std::cout << keisan << std::endl;

    return 0;

    //  結果:許された

}