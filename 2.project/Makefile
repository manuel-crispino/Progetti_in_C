CC = gcc 

build: 
	@mkdir -p build

run : main.c another.c build
	@${CC} main.c another.c -o build/main 
	@./build/main 


clean: 
	@rm  -rf build