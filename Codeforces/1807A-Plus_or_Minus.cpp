    #include <iostream>
     
    int main() {
    	int input;
    	std::cin >> input;
    	char* op = new char[input];
    	for (int i = 0; i < input; i++) {
    		int a, b, c;
    		std::cin >> a >> b >> c;
    		if(a+b == c) {
    			op[i] = '+';
    		}
    		else op[i] = '-';
    	}
     
    	for (int i = 0; i < input; i++) {
    		std::cout << op[i] << std::endl;
    	}
    	return 0;
    }
