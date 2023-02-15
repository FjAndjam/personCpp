#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string id, string describe, int salesNumber, int unitPrice)
{
    setId(id);
    setDescribe(describe);
    setSalesNumber(salesNumber);
    setUnitPrice(unitPrice);
};

int Invoice::getInvoiceAmount()
{
    int result;
    if (salesNumber < 0 || unitPrice < 0) {
        result = 0;
    } else {
        result = salesNumber * unitPrice;
    }
    return result;
}
void Invoice::setId(string num)
{
    id = num;
};
string Invoice::getId()
{
    return id;
};
void Invoice::setDescribe(string describe)
{
    describe = describe;
};
string Invoice::getDescribe()
{
    return describe;
};
void Invoice::setSalesNumber(int salesNumber)
{
    salesNumber = salesNumber;
};
int Invoice::getSalesNumber()
{
    return salesNumber;
};
void Invoice::setUnitPrice(int unitPrice)
{
    unitPrice = unitPrice;
};
int Invoice::getUnitPrice()
{
    return unitPrice;
};
