CXX = g++
CXXFLAGS = -g

main: Person.o Student.o Teacher.o
	$(CXX) $(CXXFLAGS) Person.o Student.o Teacher.o main.o -o main

Person.o:
	$(CXX) $(CXXFLAGS) -c Person.cpp -o Person.o
Student.o:
	$(CXX) $(CXXFLAGS) -c teacher.cpp -o Teacher.o
Teacher.o:
	$(CXX) $(CXXFLAGS) -c Teacher.cpp -o Teacher.o
clean:
	rm *.o main.out