default: build

build: clean
	c++ *.cpp -lcurl -std=c++11 -I./ -o apod

clean:
	rm -f apod

test: build
	./apod