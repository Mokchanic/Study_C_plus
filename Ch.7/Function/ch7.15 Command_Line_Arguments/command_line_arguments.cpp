#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) // (계수, 실제 내용들)
{
	for (int count = 0; count < argc; ++count)
	{
		std::string argv_single = argv[count];

		if (count == 1)
		{
			int input_number = std::stoi(argv_single);
			cout << input_number + 1 << endl;
		}
		else
			cout << argv[count] << endl;
	}
	return 0;
}