//
// Created by jay on 2022/12/25.
//
#include <iostream>
#include <cstdlib>


int main(){
    std::cout << "BMW" << std::endl;
    srand(120);
    for (int i = 0; i <= 5; i++){
        std::cout << rand() << std::endl;
    }
    return 0;
}