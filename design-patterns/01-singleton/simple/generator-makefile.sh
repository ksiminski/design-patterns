#!/bin/bash

# Jezeli istnieje juz plik makefile, to go skopiuj do makefile-old
if [ -e makefile ] ; then mv makefile makefile-old ; fi 

shopt -s extglob 
find . -type f -name "*.cpp" -or -name "*.c" | awk '
  BEGIN  {
             printf("\n");
             printf("#############################\n");
             printf("# Generator plikow makefile #\n");
             printf("# Krzysztof Siminski, 2022  #\n");
             printf("#############################\n");
             printf("\n");
             printf("# STALE:");
             printf("\n");
             printf("kompilator=g++\n");
             printf("standard=-std=c++20\n");
             printf("\n");
             printf("optRelease=-O3\n");
             printf("optDebug=\n");
             printf("\n");
             printf("errors=-pedantic-errors\n");
             printf("\n");
             printf("release=\n");
             printf("debug=-g\n");
             printf("\n");
             printf("#rownoleglosc=-fopenmp\n");
             printf("rownoleglosc=\n");
             printf("\n");
             printf("release_folder=_release\n");
             printf("debug_folder=_debug\n");
             printf("\n");
             printf("#############################\n");
             printf("\n");
             printf(".PHONY : clean $(debug_folder) $(release_folder)\n");
             printf("\n");
             printf("# opcje uruchomienia projektu:\n");
             printf("\n");
             
             kompilacja_debug = "$(kompilator) $(standard) $(debug) $(optyDebug) $(rownoleglosc) $(errors) -c -o $@ $^";
             kompilacja_release = "$(kompilator) $(standard) $(release) $(optRelease) $(rownoleglosc) $(errors) -c -o $@ $^";
            
             linkowanie_debug = "$(kompilator) $(standard) $(debug) $(optDebug) $(rownoleglosc) $(errors) -o $@ $^";
             i = 0;
             
             linkowanie_release = "$(kompilator) $(standard) $(release) $(optRelease) $(rownoleglosc) $(errors) -o $@ $^";
             
             i = 0;
                         
             printf("release : $(release_folder) $(release_folder)/main\n");
             printf("\t./$(release_folder)/main\n");
             printf("\n");
             printf("debug : $(debug_folder) $(debug_folder)/main\n");
             printf("\tvalgrind --leak-check=yes ./$(debug_folder)/main\n");
             printf("\n");
             printf("# utworzenie folderow:\n");
             printf("\n");
             printf("$(release_folder) : \n");
             printf("\tmkdir -p $(release_folder)\n");
             printf("$(debug_folder) : \n");
             printf("\tmkdir -p $(debug_folder)\n");
             printf("\n");
             printf("# kompilacja zrodel:\n");
             printf("\n");
             
         }

 
         {  
             zrodlo = $1;
             sub(/\.\//, "", zrodlo);
             obiekt = zrodlo;
             sub(/\//, "-", obiekt);
             split(zrodlo, nazwa_zrodlo, ".");
             split(obiekt, nazwa_obiekt, ".");
             printf("$(release_folder)/%s.o : %s.%s\n", nazwa_obiekt[1], nazwa_zrodlo[1], nazwa_zrodlo[2]); 
             printf("\t%s\n", kompilacja_release);
             printf("$(debug_folder)/%s.o : %s.%s\n", nazwa_obiekt[1], nazwa_zrodlo[1], nazwa_zrodlo[2]); 
             printf("\t%s\n", kompilacja_debug);
             
             pliki[i++] = nazwa_obiekt[1];
         } 
     
 END     {
             printf("\n");
             printf("# linkowanie:\n");
             printf("\n");
             
             printf ("$(release_folder)/main : ");
             for (i in pliki)
                printf ("$(release_folder)/%s.o ", pliki[i]);
             printf("\n");
             printf("\t%s\n", linkowanie_release);
             printf("\n");
             printf ("$(debug_folder)/main : ");
             for (i in pliki)
                printf ("$(debug_folder)/%s.o ", pliki[i]);
             printf("\n");
             printf("\t%s\n", linkowanie_debug);
             printf("\n");
          
             printf("# usuniecie plikow skompilowanych:\n");

             printf("\n");
             printf("clean : \n");
             printf("\tif [ -d $(debug_folder)      ] ; then rm -r $(debug_folder)   ; fi\n");
	     printf("\tif [ -d $(release_folder)    ] ; then rm -r $(release_folder) ; fi;\n");
             printf("\n");
             printf("\n");
                    
         }     
     
'  > makefile


