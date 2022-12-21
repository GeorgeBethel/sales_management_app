#include<iostream>

class InventoryStocks
{
private:
    std::string item;
    int getItem(std::string item);

public:

    void getAllInventory();
    InventoryStocks();
    ~InventoryStocks(


    );
};

InventoryStocks::InventoryStocks(/* args */)
{
}





InventoryStocks::~InventoryStocks()
{
}



class InventryUpdate
{
private:
    void addItem(std::string item_toAdd, int amount);
    void deleteItem(std::string item_toDelete, int amount);

public:
    InventryUpdate();
    ~InventryUpdate();
};

InventryUpdate::InventryUpdate(/* args */)
{
}

InventryUpdate::~InventryUpdate()
{
}