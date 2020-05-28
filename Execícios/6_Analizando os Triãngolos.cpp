#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	double l1, l2,l3;
	int res = 1 ; 
	while(res == 1)
	{
		cout<< "ANALIZANDO OS TRIANGOLOS!!!\n";
		cout<< "Qual a medida do 1º lado em cm:"; cin >> l1;
		cout<< "Qual a medida do 2º lado em cm:"; cin >> l2;
		cout<< "Qual a medida do 3º lado em cm:"; cin >> l3;

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
 			cout << "Esses lados NÃO forma um triangolo.\n";
		}
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
			cout << "Desaja repetir?\nDIGITE  SIM ou NAO: "; cin >> res;
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		
		if (res != 1)
		{
			cout <<"FIM \n";
		}
		
	}

}
