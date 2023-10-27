#include <iostream>

std::string reverse_string(std::string str){
    std::string output;
    for(int i = str.length(); i >= 0; i--){
        output = output + str[i];
    }
    return output;
}

int main(int argc, char *argv[]){
    std::string filename = argv[0];
    if(argc < 2){
        std::cerr << "usage: " << filename << " <string>" << std::endl;
        exit(1);
    }
    std::string str = argv[1];
    std::cout << reverse_string(str) << std::endl;
    return 0;
}
