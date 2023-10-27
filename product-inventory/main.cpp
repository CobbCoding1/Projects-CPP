#include <iostream>

class Product{
public:
    float price;
    size_t id;
    size_t quanity;
};

class Inventory{
public:
    void add_product(Product product){
        products[amount] = product; 
        amount++;
    }

    float sum_inventory(){
        float sum = 0;
        for(int i = 0; i < amount; i++){
            sum += products[i].quanity * products[i].price;
        }
        return sum;
    }
private:
    Product products[1024];
    int amount = 0;
};

int main(){
    Product prod = {.price = 5.5, .id = 1, .quanity = 27};
    Product prod2 = {.price = 2, .id = 1, .quanity = 5};
    Inventory inv;
    inv.add_product(prod);
    inv.add_product(prod2);
    std::cout << inv.sum_inventory() << std::endl;
    return 0;
}
