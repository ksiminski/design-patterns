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

analog_receiver.o : analog_receiver.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
main.o : main.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
newspaper.o : newspaper.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
radio.o : radio.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
receiver.o : receiver.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
rss_reader.o : rss_reader.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
sender.o : sender.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^

main : analog_receiver.o main.o newspaper.o radio.o receiver.o rss_reader.o sender.o 
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -o $@ $^


clean : 
	rm main analog_receiver.o main.o newspaper.o radio.o receiver.o rss_reader.o sender.o 

