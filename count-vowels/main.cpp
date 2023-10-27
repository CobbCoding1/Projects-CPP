#include <iostream>

const std::string VOWELS = "aeiou";

int count_vowels(std::string str){
    int count = 0;
    for(size_t i = 0; i < str.length(); i++){
        for(size_t j = 0; j < VOWELS.length(); j++){
            if(str[i] == VOWELS[j]){
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char *argv[]){
    std::string filename = argv[0];
    if(argc < 2){
        std::cerr << "usage: " << filename << " <string>" << std::endl;
        exit(1);
    }
    std::cout << "number of vowels: " << count_vowels(argv[1]) << std::endl;
}
