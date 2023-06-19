#include <iostream>

int main() {
	int arr[4];
	int ones = 0, zeros = 0;
	for(int i = 0; i <= 3; ++i){
		std::cin >> arr[i];
		if(arr[i] == 0) ++zeros;
		else ++ones;
	}
	if(arr[0] == 1)
		std::cout << "YES" << std::endl;
	else {
		if(ones >= zeros)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}
