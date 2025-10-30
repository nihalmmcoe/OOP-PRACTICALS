#include <iostream>
#include <fstream>
using namespace std;
class Product {
public:
   string name;
   int id;
   int quantity;
   void accept() {
       cout << "Enter product name: ";
       cin >> name;
       cout << "Enter product ID: ";
       cin >> id;
       cout << "Enter quantity: ";
       cin >> quantity;
   }
   void display() {
       cout << "Name: " << name << ", ID: " << id << ", Quantity: " << quantity << endl;
   }
};
int main() {
   const int SIZE = 3;
   Product products[SIZE];
   for (int i = 0; i < SIZE; i++) {
       cout << "Product " << i + 1 << " details:\n";
       products[i].accept();
   }
   cout << "\nDisplaying products:\n";
   for (int i = 0; i < SIZE; i++) {
       products[i].display();
   }
   // Write to file
   ofstream MyFile("filename.txt");
   if (MyFile.is_open()) {
       MyFile << "Product Name\tProduct ID\tQuantity\n";
       for (int i = 0; i < SIZE; i++) {
           MyFile << products[i].name << "\t\t\t\t"
                  << products[i].id << "\t\t\t\t"
                  << products[i].quantity << "\n";
       }
       MyFile.close();
       cout << "\nData written to filename.txt successfully.\n";
   } else {
       cout << "Error opening file!\n";
   }
   //Read the file
   ifstream inFile("filename.txt");
       if (inFile.is_open()) {
           string header1, header2, header3;
           inFile >> header1 >> header2 >> header3;
           cout << "\nReading products from file:\n";
           for (int i = 0; i < SIZE; i++) {
              
               inFile >> products[i].name >> products[i].id >> products[i].quantity;
               products[i].display();
           }
           inFile.close();
       } else {
           cout << "Error opening file for reading!\n";
       }
   return 0;
}


