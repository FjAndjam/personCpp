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
void Invoice::setId(string i)
{
    id = i;
};
string Invoice::getId()
{
    return id;
};
void Invoice::setDescribe(string d)
{
    describe = d;
};
string Invoice::getDescribe()
{
    return describe;
};
void Invoice::setSalesNumber(int s)
{
    salesNumber = s;
};
int Invoice::getSalesNumber()
{
    return salesNumber;
};
void Invoice::setUnitPrice(int u)
{
    unitPrice = u;
};
int Invoice::getUnitPrice()
{
    return unitPrice;
};
