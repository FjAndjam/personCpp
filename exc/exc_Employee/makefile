myapp.out: testEmployee.o Employee.o
	g++ -o myapp.out testEmployee.o Employee.o

testEmployee.o: testEmployee.cpp 
	g++ -c testEmployee.cpp -std=c++11

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp -std=c++11

clean:
	rm *.o
