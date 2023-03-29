default: build

build: clean
	c++ *.cpp -lcurl -o apod

clean:
	rm -f apod

test: build
	./apod