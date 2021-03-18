#include <iostream>

int main() {
	uint16_t children, chocs;
	std::cin >> children >> chocs;

	uint16_t total_chocks = chocs;
	while ((total_chocks % children) != 0)
	{
		++total_chocks;
	}
	std::cout << (total_chocks - chocs) << std::endl;
}