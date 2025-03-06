#include <iostream>
#include <string>
using namespace std;
const int MAX_STOCKS = 10;
struct Stock {
    string name;
    int quantity;
    float buyPrice;
    float currentPrice;
};
Stock portfolio[MAX_STOCKS];
int stockCount = 0;
void buyStock() {
    if (stockCount >= MAX_STOCKS) {
        cout << "Portfolio is full!\n";
        return;
    }
    Stock s;
    cout << "Enter stock name: ";
    cin >> s.name;
    cout << "Enter quantity: ";
    cin >> s.quantity;
    cout << "Enter price per stock: ";
    cin >> s.buyPrice;
    s.currentPrice = s.buyPrice;
    portfolio[stockCount++] = s;
    cout << "Stock added to portfolio.\n";
}
void sellStock() {
    if (stockCount == 0) {
        cout << "Portfolio is empty! No stocks to sell.\n";
        return;
    }
    string stockName;
    int quantity;
    float sellPrice;
    cout << "Enter stock name to sell: ";
    cin >> stockName;
    cout << "Enter quantity to sell: ";
    cin >> quantity;
    cout << "Enter selling price per stock: ";
    cin >> sellPrice;
    for (int i = 0; i < stockCount; ++i) {
        if (portfolio[i].name == stockName) {
            if (quantity > portfolio[i].quantity) {
                cout << "Not enough stocks to sell.\n";
                return;
            }
            float profitOrLoss = (sellPrice - portfolio[i].buyPrice) * quantity;
            cout << "Profit/Loss from this transaction: " << profitOrLoss << endl;
            portfolio[i].quantity -= quantity;
            if (portfolio[i].quantity == 0) {
                for (int j = i; j < stockCount - 1; ++j) {
                    portfolio[j] = portfolio[j + 1];
                }
                stockCount--;
            }
            return;
        }
    }
    for (int i = 0; i < stockCount; ++i) {
        if (portfolio[i].name == stockName) {
            if (quantity > portfolio[i].quantity) {
                cout << "Not enough stocks to sell.\n";
                return;
            }
            float profitOrLoss = (sellPrice - portfolio[i].buyPrice) * quantity;
            cout << "Profit/Loss from this transaction: " << profitOrLoss << endl;
            portfolio[i].quantity -= quantity;
            if (portfolio[i].quantity == 0) {
                for (int j = i; j < stockCount - 1; ++j) {
                    portfolio[j] = portfolio[j + 1];
                }
                stockCount--;
            }
            return;
        }
    }
    cout << "Stock not found in portfolio.\n";
}
void viewPortfolio() {
    if (stockCount == 0) {
        cout << "Portfolio is empty.\n";
        return;
    }
    cout << "\nCurrent Portfolio:\n";
    for (int i = 0; i < stockCount; ++i) {
        cout << "Stock: " << portfolio[i].name
             << ", Quantity: " << portfolio[i].quantity
             << ", Buy Price: " << portfolio[i].buyPrice
             << ", Current Price: " << portfolio[i].currentPrice << endl;
    }
}
void calculateProfitLoss() {
    float totalProfitLoss = 0;
    for (int i = 0; i < stockCount; ++i) {
        totalProfitLoss += (portfolio[i].currentPrice - portfolio[i].buyPrice) * portfolio[i].quantity;
    }
    cout << "Total Portfolio Profit/Loss: " << totalProfitLoss << endl;
}
int main() {
    int choice;
    do {
        cout << "\n--- Stock Portfolio Manager ---\n";
        cout << "1. Buy Stocks\n";
        cout << "2. Sell Stocks\n";
        cout << "3. View Portfolio\n";
        cout << "4. Calculate Profit/Loss\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                buyStock();
                break;
            case 2:
                sellStock();
                break;
            case 3:
                viewPortfolio();
                break;
            case 4:
                calculateProfitLoss();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}
