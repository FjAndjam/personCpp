
#include <iostream>
#include <bitset>

void print(){};

template <typename... Types>
void print(const Types &...args)
{
	std::cout << "size of ...(args):" << sizeof...(args) << std::endl;
}

template <typename T, typename... Types>
void print(const T &firstArg, const Types &...args)
{
	std::cout << firstArg << std::endl;
	print(args...);
}

// int main(int argc, char **argv)
int main()
{
	// std::cout << argc << std::endl;
	// for (int i = 0; i < argc; i++)
	// {
	// 	// std::cout << argv[i] << std::endl;
	// 	printf("%s\n", argv[i]);
	// }
	// std::cout << __cplusplus << std::endl;

	print(7.5, "hello", std::bitset<16>(322), 43);

	return 0;
}