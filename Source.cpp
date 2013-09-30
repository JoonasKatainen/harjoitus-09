#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int laskutoimitus;
	float tulos;
	cout << "Anna luku 1"<<endl;
	cin >> luku1;
	cout << "Anna luku 2"<<endl;
	cin >> luku2;
	cout << "VALIKKO"<<endl<<"1. Summa"<<endl<<"2. Erotus"<<endl<<"3. Tulo"<<endl<<"4. Osamaara"<<endl<<"5. Jakojaannos"<<endl;
	cin >> laskutoimitus;
	if (laskutoimitus == 1)
		tulos = (luku1 + luku2);
	if (laskutoimitus == 2)
		tulos = (luku1 - luku2);
	if (laskutoimitus == 3)
		tulos = ((float)luku1 * (float)luku2);
	if (laskutoimitus == 4)
		tulos = ((float)luku1 / (float)luku2);
	if (laskutoimitus == 5)
		tulos = (luku1 % luku2);
	cout << "Tulos on "<<tulos<<endl;
return 0;
}