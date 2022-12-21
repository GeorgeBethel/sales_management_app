#include<iostream>
#include "InventoryStocks.cpp"

class TakeOrders
{
private:
    std::string item;
    int amount;
    void placeOrder(std::string item, int amount);
    void updateStock();

public:
    TakeOrders();
    ~TakeOrders();
};

TakeOrders::TakeOrders(/* args */)
{
}

TakeOrders::~TakeOrders()
{
}

 