CXX = g++
CXXFLAGS = -g

main: Person.o Student.o Teacher.o main.o
	$(CXX) $(CXXFLAGS) Person.o Student.o Teacher.o main.o -o main

Person.o:
	$(CXX) $(CXXFLAGS) -c Person.cpp -o Person.o

Student.o:
	$(CXX) $(CXXFLAGS) -c Student.cpp -o Student.o

Teacher.o:
	$(CXX) $(CXXFLAGS) -c Teacher.cpp -o Teacher.o

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm *.o main.exe