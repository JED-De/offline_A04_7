#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe, eingabe_2;
	char vergleich;
	unsigned int pos = 0;
	bool vorkommen = false;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	cout << "Bitte Buchstaben eingeben: ? ";
	getline(cin, eingabe_2);
	vergleich = eingabe_2.at(0);
	for (int i = 0; i < eingabe.size(); i++)
	{
		if (eingabe.at(i) == vergleich)
		{
			vorkommen = true;
			pos = i;
		}
	}
	if (vorkommen == true)
	{
		cout << "Der Buchstabe " << vergleich << " kommt im Text vor, an Position " << pos << "." << endl;
	}

	if (vorkommen == false)
	{
		cout << "Der Buchstabe " << vergleich << " kommt nicht im Text vor." << endl;
	}
	system("PAUSE");
	return 0;
}