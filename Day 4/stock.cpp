#include <iostream>
using namespace std;

class Product {
public:
    int productID;
    string name;
    int quantity;
    float price;

public:
    
    Product(int id, string n, int q, float p) {
        productID = id;
        name = n;
        quantity = q;
        price = p;
    }

    
    void updateStock(int qty) {
        quantity += qty;
    }

    
    float calculateTotalValue() {
        return quantity * price;
    }

    
    void displayProduct() {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
        cout << "Total Value: $" << calculateTotalValue() << endl;
    }
};

int main() {
    Product prod(101, "Yashwanth", 10, 799.99);
    prod.updateStock(5);

    prod.displayProduct();

    return 0;
}
