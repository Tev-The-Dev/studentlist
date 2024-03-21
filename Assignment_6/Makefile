studentlist: driver.o studentlist.o
	g++ -o studentlist driver.o studentlist.o

driver.o: driver.cpp studentlist.h
	g++ -c driver.cpp
 
studentlist.o: studentlist.cpp studentlist.h
	g++ -c studentlist.cpp

clean:
	rm *.o studentlist
