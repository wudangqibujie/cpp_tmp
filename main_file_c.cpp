//
// Created by jay on 2022/12/26.
//

#include <iostream>

//但在VS环境下直接使用不安全的函数，会直接报错，编译无法通过，此时就必须要定义对应的宏才能正常使用
#define _CRT_SECURE_NO_WARNINGS //vs环境下,必须定义该宏,否则报错
#include <cstdlib>
//C语言库中的函数，很多都存在安全隐患，就会存在一个相应的安全函数，一般对应的安全函数名称都是在原函数后添加_s后缀


int main(){
    FILE *file = fopen("agaricus.txt.train", "r");
//    FILE *file = fopen("README.md", "r");

//    if ( file == NULL )
//        return -1;
//    std::cout << "************ fread ***************" << std::endl;
//    char buff[1024];
//    size_t size = fread(buff, 1, 200, file); // 每次读取1个字节，读100次
//    std::cout << size << std::endl;
//    std::cout << buff << std::endl;
//    std::cout << "************ fgetc ***************" << std::endl; // 从文件中读取一个字符
//    for (int i = 0; i < 5; ++i) {
//        char c = fgetc(file);
//        std::cout << "NO." << i << ": " << c << std::endl;
//    }
//    std::cout << "************ fgets ***************" << std::endl; // 从文件中读取一个字符串
//    char buff1[10];
//    fgets(buff1, 10, file); // 读取一行字符串
//    std::cout << buff1 << std::endl;

//    std::cout << "************ fscanf ***************" << std::endl; // 从文件中读取一个字符串
//    FILE *fi2 = fopen("fi.txt", "r");
//    int d;
//    char buff3[100];
//    fscanf(fi2, "%d %s", &d, buff3);
//    std::cout << d << buff3 << std::endl;


    std::cout << "************ fwrite ***************" << std::endl; // 从文件中读取一个字符串
    FILE * file_write = fopen("BMW.txt", "w");
    if ( file_write == NULL ){
        std::cout << "write fail!" << std::endl;
        return -1;
    }
    char buff[] = "23 AMG";
    fwrite(buff, 1, sizeof(buff), file_write);
    std::cout << "write over" << std::endl;


    std::cout << "************ fputc ***************" << std::endl; // 从文件中读取一个字符串
    FILE *file_write2 = fopen("AMG.txt", "w");
    fputc('A', file_write2);

    std::cout << "************ fputs ***************" << std::endl; // 从文件中读取一个字符串
    char buff4[] = "BMSBSM";
    int ret = fputs(buff4, file_write2);

    std::cout << "************ fprintf ***************" << std::endl; // 从文件中读取一个字符串
    fputc('\n', file_write2);
    fprintf(file_write2, "%d %s", 4, "BENZ");
    int ret2 = fclose(file_write2);
    std::cout << ret2 << std::endl;

    return 0;
}