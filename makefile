default: rechteck

rechteck.o: rechteck.c
	gcc -c rechteck.c -o rechteck.o

rechteck: rechteck.o
	gcc rechteck.o -o rechteck

clean:
	-rm -f rechteck.o
	-rm -f rechteck
