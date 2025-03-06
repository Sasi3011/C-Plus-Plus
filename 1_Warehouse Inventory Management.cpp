#include <iostream>
#include <string>
using namespace std;

struct StockItem {
    string name;
    int quantity;
};

void addStock();
void viewStock();
void deleteStock();
void updateStock();

const int MAX_STOCK_ITEMS = 100;
StockItem stock[MAX_STOCK_ITEMS];
int stockCount = 0;

int main()
{
    int choice;
    do
    {
        cout << "1. Add Stock" << endl;
        cout << "2. View Stock" << endl;
        cout << "3. Delete Stock" << endl;
        cout << "4. Update Stock" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addStock();
            break;
        case 2:
            viewStock();
            break;
        case 3:
            deleteStock();
            break;
        case 4:
            updateStock();
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 5);
    return 0;
}

void addStock()
{
    if (stockCount >= MAX_STOCK_ITEMS)
    {
        cout << "Stock limit reached" << endl;
        return;
    }
    StockItem item;
    cout << "Enter the name of the stock: ";
    cin >> item.name;
    cout << "Enter the quantity: ";
    cin >> item.quantity;
    stock[stockCount++] = item;
    cout << "Stock added successfully" << endl;
}

void viewStock()
{
    if (stockCount == 0)
    {
        cout << "No stock available" << endl;
    }
    else
    {
        cout << "Current stock details:" << endl;
        for (int i = 0; i < stockCount; ++i)
        {
            cout << "Name: " << stock[i].name << ", Quantity: " << stock[i].quantity << endl;
        }
    }
}

void deleteStock()
{
    string name;
    cout << "Enter the name of the stock to delete: ";
    cin >> name;
    int index = -1;
    for (int i = 0; i < stockCount; ++i)
    {
        if (stock[i].name == name)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        for (int i = index; i < stockCount - 1; ++i)
        {
            stock[i] = stock[i + 1];
        }
        --stockCount;
        cout << "Stock deleted successfully" << endl;
    }
    else
    {
        cout << "Stock not found" << endl;
    }
}

void updateStock()
{
    string name;
    int quantity;
    cout << "Enter the name of the stock to update: ";
    cin >> name;
    cout << "Enter the new quantity: ";
    cin >> quantity;
    int index = -1;
    for (int i = 0; i < stockCount; ++i)
    {
        if (stock[i].name == name)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        stock[index].quantity = quantity;
        cout << "Stock updated successfully" << endl;
    }
    else
    {
        cout << "Stock not found" << endl;
    }
}
