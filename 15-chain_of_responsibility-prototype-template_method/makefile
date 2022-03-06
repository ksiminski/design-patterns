kompilator=g++
standard=-std=c++14
optymalizacja=-O3
errors=-pedantic-errors

# debug=-g
debug=



.PHONY : clean 


__ : main
	./main

#	valgrind --leak-check=yes ./main

higrometer.o : higrometer.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
main.o : main.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
parameters.o : parameters.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
radiometer.o : radiometer.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
security_system.o : security_system.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
service.o : service.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
thermometer.o : thermometer.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^

main : higrometer.o main.o parameters.o radiometer.o security_system.o service.o thermometer.o 
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -o $@ $^


clean : 
	rm main higrometer.o main.o parameters.o radiometer.o security_system.o service.o thermometer.o 

