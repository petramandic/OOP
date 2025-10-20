/*#include <iostream>
using namespace std;

struct Vector {
	int* podaci;
	int velicina;
	int kapacitet;
};

Vector napraviVektor(int kap) {
	Vector v;
	v.podaci = new int[kap];
	v.velicina = 0;
	v.kapacitet = kap;
	return v;
}

void obrisi(Vector& v) {
	delete[] v.podaci;
}



void dodaj(Vector& v, int x) {
	if (v.velicina == v.kapacitet) {
		int* novi = new int[v.kapacitet * 2];
		for (int i = 0; i < v.velicina; i++)
			novi[i] = v.podaci[i];
		delete[] v.podaci;
		v.podaci = novi;
		v.kapacitet *= 2;
	}
	v.podaci[v.velicina++] = x;
}

void ukloniZadnji(Vector& v) {
	if (v.velicina > 0)
		v.velicina--;
}

int prvi(Vector& v) { return v.podaci[0]; }
int zadnji(Vector& v) { return v.podaci[v.velicina - 1]; }
int velicina(Vector& v) { return v.velicina; }

int main() {
	Vector v = napraviVektor(2);

	dodaj(v, 2);
	dodaj(v, 7);
	dodaj(v, 20);

	cout << "prvi: " << prvi(v) << endl;
	cout << "zadnji: " << zadnji(v) << endl;
	cout << "velicina: " << velicina(v) << endl;

	ukloniZadnji(v);
	cout << "velicina nakoin uklanjanja: " << velicina(v) << endl;

	obrisi(v);
	return 0;
}*/