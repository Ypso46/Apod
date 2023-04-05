default: build

build: clean
	c++ *.cpp -lcurl -std=c++11 -I./ -o apod

clean:
	rm -f apod *.o *.ii *.bc *.s

clearcache:
	rm -f apod*.txt

test: build
	./apod