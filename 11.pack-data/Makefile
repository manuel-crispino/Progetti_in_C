CC= gcc 

build: 
	@mkdir -p build 

run:main.c  build
	@${CC}  main.c -o build/main
	@./build/main

clean: 
	@rm -rf build 