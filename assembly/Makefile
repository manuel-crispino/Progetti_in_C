build : 
	@nasm -f macho64 hello.asm -o hello.o
	@clang hello.o -o hello -Wl,-e,_start -Wl,-arch,x86_64
	@echo "✅ build completed"
	
run:  build
	@./hello
	@echo "✅ starting..."


clean: 
	@rm -rf hello.o hello
	@echo "✅ Cleaned successfully !"