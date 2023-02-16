myapp.out: Invoice.o testInvoice.o
	g++ -o myapp.out Invoice.o testInvoice.o

Invoice.o: Invoice.cpp Invoice.h
	g++ -c Invoice.cpp Invoice.h -std=c++11

testInvoice.o: testInvoice.cpp
	g++ -c testInvoice.cpp -std=c++11

clean:
	*.o
