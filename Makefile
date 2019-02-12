executable.exe:main.o butterfly.o drawingFile.o finalCredits.o lissajouxFile.o
	gcc -o executable.exe main.o butterfly.o drawingFile.o finalCredits.o lissajouxFile.o


main.o: main.c butterfly.h drawingFile.h finalCredits.h lissajouxFile.h
	gcc -c -o main.o main.c


butterfly.o: butterfly.c butterfly.h drawingFile.h
	gcc -c -o butterfly.o butterfly.c


drawingFile.o: drawingFile.c drawingFile.h
	gcc -c -o drawingFile.o drawingFile.c


finalCredits.o: finalCredits.c finalCredits.h drawingFile.h
	gcc -c -o finalCredits.o finalCredits.c


lissajouxFile.o: lissajouxFile.c lissajouxFile.h drawingFile.h
	gcc -c -o lissajouxFile.o lissajouxFile.c