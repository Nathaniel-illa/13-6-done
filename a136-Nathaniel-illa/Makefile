all: clean test
programtest: tests.cpp 
	# g++ -fsanitize=address --std=c++17 tests.cpp -o programtest 
	g++ --std=c++17 tests.cpp PostExpression.cpp -o programtest 
test: programtest 
	./programtest
clean:
	rm -f programtest a.out a.exe
	rm -rf a.out.dSYM