#include <iostream>
#include <vector>

class base{

};

class derived_a{
    int a;
public:
    void setter(int _a){
        a = _a;
    }
};

class derived_b{
    int b;
public:
    void setter(int _b){
        b = _b;
    }
};

int main(){
    std::vector<base*>b_vec = {
        new base(),
        new derived_a(),
        new derived_b()
    };

    for(const auto& i : b_vec){
        derived_a*a = dynamic_cast<derived_a>(b_vec.at(i));
        if(a != nullptr){
            a.setter(i);
        }
    }
}