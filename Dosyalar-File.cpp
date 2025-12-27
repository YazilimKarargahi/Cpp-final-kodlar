#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	//Write, Append , Read

	//yazma
	ofstream yaz("notlarim.txt");
	yaz << "Mehaba dosya\n";
	yaz.close();

	//append ekleme
	ofstream ekle("notlarim.txt", ios::app);
	ekle << "Yeni ekledigim satir\n";
	ekle.close();

	//read 
	ifstream oku("notlarim.txt");

	string satir;
	while (getline(oku, satir))
	{
		cout << satir << endl;
	}
	oku.close();

	/*stringstream hepsi;
	hepsi << oku.rdbuf();
	cout << hepsi.str();
	oku.close();*/


	

	return 0;
}
