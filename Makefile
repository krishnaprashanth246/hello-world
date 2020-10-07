%: build

build:
	gcc src/new.c -o new

check:
	./new

clean:
	rm -rf new
