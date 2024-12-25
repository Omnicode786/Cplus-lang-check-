#include <iostream>
using namespace std;

struct Manufacturer
{
    string manufacturername;
    string country;
};

struct Product
{
    string productname;
    float price;
    Manufacturer manufacturer;
};

void displayallproducts(Product product[], int size, string &manufacturers)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (product[i].manufacturer.manufacturername == manufacturers)
        {
            found = true;
            // if the above bool function becomes true then it meas that we have found the products from that manufacturer
            // yeah no shit sherlock
            cout << product[i].productname << '\t';
            cout << product[i].price << '\t';
            cout << product[i].manufacturer.country << '\n';
        }
    }
    if (!found)
    {
        cout << "Products of the specified manufacturer were not found!!\n";
    }
}

int main()
{
    Product products[3];
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of product no " << i + 1 << ": ";
        
        getline(cin, products[i].productname);

        cout << "Enter the price of the product: ";
        cin >> products[i].price;

     
        cin.ignore();
        cout << "Enter the name of the manufacturer of the product " << products[i].productname << ": ";
        getline(cin, products[i].manufacturer.manufacturername);

        cout << "Enter the country of the manufacturer of the product " << products[i].productname << ": ";
        getline(cin, products[i].manufacturer.country);
    }

    string nameofmanufacturer;
    cout << "Enter the name of the manufacturer for their products: ";
    getline(cin, nameofmanufacturer);
    
    displayallproducts(products, 3, nameofmanufacturer);

    return 0;
}
