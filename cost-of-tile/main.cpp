#include <iostream>

float cost_of_tile(int width, int height, float price){
    return (width * height) * price;
}

int main(int argc, char *argv[]){
    std::string filename = argv[0];
    if(argc < 4){
        std::cerr << "usage: " << filename << " <width> <height> <price>" << std::endl;
        exit(1);
    }
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);
    float price = atof(argv[3]);
    std::cout << cost_of_tile(width, height, price) << std::endl;
    return 0;
}
