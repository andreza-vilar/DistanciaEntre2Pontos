#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct ponto{
	int x,y;
	
};


int main() {
	setlocale(LC_ALL,"portuguese");
	
	ponto p1,p2;
	
	int distancia = 0;

	
	cout << "Digite x1 e y1: " << endl;
	cin  >> p1.x >> p1.y;

	cout << "Digite x2 e y2: " << endl;
	cin  >> p2.x >> p2.y;
	
	
	
	distancia   = pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2);
	cout << fixed << setprecision(2);
	cout << "A distância entre os 2 pontos é " << sqrt(distancia);
	
	
	return 0;
}
