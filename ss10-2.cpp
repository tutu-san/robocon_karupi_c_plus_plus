#include <iostream>

class base{

};

class derived : public base{
public:
    derived(){
        std::cout << 12;
    }
};

int main(){
    base *b = new derived();
    //baseでも、derivedでも通るわけは？
    delete b;
}