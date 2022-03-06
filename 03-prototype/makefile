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

amphibian.o : amphibian.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
animal.o : animal.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
bird.o : bird.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
cat.o : cat.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
dog.o : dog.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
frog.o : frog.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
main.o : main.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
mammal.o : mammal.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
reptile.o : reptile.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
snake.o : snake.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
sparrow.o : sparrow.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
zoo.o : zoo.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^

main : amphibian.o animal.o bird.o cat.o dog.o frog.o main.o mammal.o reptile.o snake.o sparrow.o zoo.o 
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -o $@ $^


clean : 
	rm main amphibian.o animal.o bird.o cat.o dog.o frog.o main.o mammal.o reptile.o snake.o sparrow.o zoo.o 

