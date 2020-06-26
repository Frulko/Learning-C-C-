#include <iostream>
#include <stdio.h>

extern "C" {
  #include "hello.h"
  #include "test/test.h"
}

int main(int argc, char **argv) {
	includeCaller();
	sayHello();
	printf("Hello from c function in c++\n");
	std::cout << "Hello from c++" << '\n';
	return 0;
};