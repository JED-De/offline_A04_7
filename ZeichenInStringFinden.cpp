#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe, eingabe_2;
	unsigned int pos = 0;
	bool vorkommen = false;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	cout << "Bitte Buchstaben eingeben: ? ";
	getline(cin, eingabe_2);
	for (int i = 0; i < eingabe.size(); i++)
	{
		if (eingabe.at(i) == eingabe_2.at(0))
		{
			vorkommen = true;
			pos = i;
		}
	}
	if (vorkommen == true)
	{
		cout << "Der Buchstabe " << eingabe_2.at(0) << " kommt im Text vor, an Position " << pos << "." << endl;
	}

	if (vorkommen == false)
	{
		cout << "Der Buchstabe " << eingabe_2.at(0) << " kommt nicht im Text vor." << endl;
	}
	system("PAUSE");
	return 0;
}