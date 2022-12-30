//
// Created by jay on 2022/12/26.
//
#include <iostream>
#include <fstream>

int main(){
//    std::fstream file;
//    file.open("1.txt", std::ios::out); // 只写模式
//    char buf[] = "test";
//    file.write(buf, sizeof buf);
//    file.close();
//
//    file.open("1.txt", std::ios::app); // 追加模式
//    char buf1[] = "\ntest1";
//    file.write(buf1, sizeof buf1);
//    file.close();
//
//    std::fstream file_readme;
//    file_readme.open("README.md", std::ios::in);
//    char buf2[1024];
//    file_readme.read(buf2, 1024);
//    std::cout << buf2 << std::endl;
//    file_readme.close();

    std::cout << "*****************************************" << std::endl;
    // 免打开文件
    std::ifstream f("AMG.txt");
    char buff1[1024];
    f.read(buff1, 1024);
    std::cout << buff1 << std::endl;
//    for (int i = 0; i <= 10; i++){
//        char c = f.get();
//        std::cout << c << std::endl;
//    }

    std::ofstream ff("w.txt");
    char bufw[1024];
    ff.write("hello world", 11);
    ff.put('M');

    return 0;
}