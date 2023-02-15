#include <iostream>
#include "Invoice.h"

using namespace std;

void displayInvoice(Invoice invoice)
{
    cout << "================" << endl;
    cout << "Id : " << invoice.getId() << endl;
    cout << "Describe : " << invoice.getDescribe() << endl;
    cout << "Sales number : " << invoice.getSalesNumber() << endl;
    cout << "Unit price : " << invoice.getUnitPrice() << endl;
    cout << "Amount : " << invoice.getInvoiceAmount() << endl;
    cout << "================" << endl
         << endl;
}

int main()
{
    Invoice myInvoice("No.001", "No.001 part descriotion.", 1, 2);
    displayInvoice(myInvoice);
    myInvoice.setId("No.002");
    myInvoice.setDescribe("No.002 part descriotion.");
    myInvoice.setSalesNumber(3);
    myInvoice.setUnitPrice(10);
    cout << "Set new part info. " << endl;
    displayInvoice(myInvoice);

    return 0;
}