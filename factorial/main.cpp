#include <iostream>
#include <cstdint>

uint factorial_rec(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial_rec(num - 1);
}

uint factorial_iter(int num){
    uint result = 1;
    while(num > 0){
        result *= num;
        num--;
    }
    return result;
}

int main(int argc, char *argv[]){
    std::string filename = argv[0];
    if(argc < 2){
        std::cerr << "usage: " << filename << " <number>" << std::endl;
    }
    uint num = atoi(argv[1]);
    std::cout << "Recursive: " << factorial_rec(num) << std::endl;
    std::cout << "Iterative: " << factorial_iter(num) << std::endl;
    return 0;
}
