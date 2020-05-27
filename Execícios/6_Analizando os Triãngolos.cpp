#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float l1, l2,l3;
	int res = 0;

	while(res == 0)
	{
		cout<< "ANALIZANDO OS TRIANGOLOS!!!\n";
		cout<< "Qual a medida do 1� lado em cm:";
		cin >> l1;
		cout<< "Qual a medida do 2� lado em cm:";
		cin >> l2;
		cout << "Qual a medida do 3� lado em cm:";
		cin >> l3;

		if(l1 + l2 >= l3 &&  l2 + l3 >= l1 && l3 + l1 >= l2)
		{

			if(l1 == l2 && l2 == l3)
			{
				cout << "Esse triangolo e EQUILATERO.!!!\n";
			}

			if(l1 != l2 && l2 != l3 && l3 != l1)
			{
				cout << "Esse triangolo e ISOSERES.!!!\n";
			}

			if( (l1 == l2 && l2 != l3) || (l2 == l3 && l3 != l1) || (l3 == l1 && l1 != l2) )
			{
				cout << " Esse tringolo e ESCALENO.!!!\n";
			}

	 	}

		else
 		{
 			cout << " Esses lodos NAO forma um triangolo.\n";
		}

	 	while(res != 0 && res != 1)
	 	{
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
			cout << "Desaja repetir?\nDIGITE [0] para SIM\nDIGITE [1] para NAO: : ";
			cin >> res;
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		}

	}
system("pause");
}
