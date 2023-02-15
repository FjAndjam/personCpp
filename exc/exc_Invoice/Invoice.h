#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice
{
public:
    Invoice(string, string, int, int);
    void setId(string);
    void setDescribe(string);
    void setSalesNumber(int);
    void setUnitPrice(int);
    string getId();
    string getDescribe();
    int getSalesNumber();
    int getUnitPrice();
    int getInvoiceAmount(); // 计算发票额

private:
    string id;       // 零件号
    string describe; // 零件描述
    int salesNumber; // 售出量
    int unitPrice;   // 单价
};

#endif