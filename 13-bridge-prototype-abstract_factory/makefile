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

device.o : device.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
device_factory.o : device_factory.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
main.o : main.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
muting_remote.o : muting_remote.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
radio.o : radio.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
radio_factory.o : radio_factory.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
remote_control.o : remote_control.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
simple_remote.o : simple_remote.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
tv_set.o : tv_set.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
tv_set_factory.o : tv_set_factory.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^

main : device.o device_factory.o main.o muting_remote.o radio.o radio_factory.o remote_control.o simple_remote.o tv_set.o tv_set_factory.o 
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -o $@ $^


clean : 
	rm main device.o device_factory.o main.o muting_remote.o radio.o radio_factory.o remote_control.o simple_remote.o tv_set.o tv_set_factory.o 

