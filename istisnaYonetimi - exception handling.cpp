#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int x = 10;
	int	y = 1;

	int sonuc = 0;

	try {

		if (y == 0)
		{
			throw runtime_error("0'a bolme yapilamaz!");
		}

		if (y == 1)
		{
			throw logic_error("y 1 olamaz bu bir is kurali!");
		}

		sonuc = x / y;

		}
		catch (const exception& ex)
		{
			cout << "Hata olustu: " << ex.what() << endl;
		}
	

	


	
		// devam ediyor.

		cout << sonuc;

	return 0;
}
