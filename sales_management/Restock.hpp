#include<iostream>
#include<array>

class Restock
{
private:
    std::string item;
    int amount;
    std::array<int, 1> restock(std::string item, int amount);

public:
    Restock(/* args */);
    ~Restock();
};

Restock::Restock(/* args */)
{
}

Restock::~Restock()
{
}
