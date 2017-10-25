DateClient: DateClient.o DateType.o
	g++ -g -Wall $^ -o $@

DateType.o: DateType.cpp DateType.h
	g++ -g -c -Wall $< -o $@

DateClient.o: DateClient.cpp DateType.h
	g++ -g -c -Wall $< -o $@

.PHONY: clean

clean:
	-rm DateType.o DateClient.o DateClient
