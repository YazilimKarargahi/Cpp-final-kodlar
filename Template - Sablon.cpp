#include <iostream>
using namespace std;



template <typename T1, typename T2>
class Notlarim
{
public:
	T1 notum;
	T2 kucuknotum;

	Notlarim()
	{
		notum = "";
		kucuknotum = 5;
	}

	Notlarim(T1 yeninot, T2 yenikucuknot)
	{
		notum = yeninot;
		kucuknotum = yenikucuknot;
	}
	void goruntule()
	{
		cout << "Notum: " << notum << "\n";
		cout << "Kucuk Notum: " << kucuknotum << "\n";
	}

};







//template <typename T>
//T topla(T a, T b)
//{
//	return a + b;
//}




int main() {

	Notlarim<int,string> a;
	Notlarim<double,int> DoubleNotum(3.3,5);

	//intNotum.goruntule();
	DoubleNotum.goruntule();



	/*string string1 = "adem";
	string string2 = "mehmet";

	cout << topla(1.7, 3.3);*/

	return 0;
}
