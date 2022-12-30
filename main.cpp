#include <iostream>


//char name[100];




int main() {
    int i = 0;
    for (int j = 0; j < 10; j++){
        switch (j) {
            case 0: std::cout << j << std::endl; j + 2;
                break;
            case 2: std::cout << "cat" << std::endl;
            default: std::cout<< "default" << j <<  std::endl;
        }
    }
    return 0;
}
