/* zad1
include <iostream>
void najveciNajmanji(int niz[], int n, int &najveci, int &najmanji)
{
	if (n <= 0)
	{
		std::cout << "Prazan niz" << n << std::endl;
		return;
	}

	najveci = niz[0];
	najmanji = niz[0];

	for (int i = 0; i < n; i++)
	{
		if (niz[i] < najmanji)
		{
			najmanji = niz[i];
		}
		if (niz[i] > najveci)
		{
			najveci = niz[i];
		}
	}
}
	
int main()
{
	int niz[] = { 0, 1, 2, 3, 4, 5};
	int n = sizeof(niz) / sizeof(niz[0]);
	int najveci, najmanji;
	najveciNajmanji(niz, n, najveci, najmanji);
	std::cout << "Najveci broj je:" << najveci << std::endl;
	std::cout << "Najmanji broj je:" << najmanji << std::endl;
	return 0;
}*/

/*zad2 
#include <iostream>
int& uv(int niz[], int i)
{

	return niz[i];
}
int main()
{
	int niz[] = { 0, 1, 2, 3, 4, 5 };
	int indeks = 2;
	uv(niz, indeks) += 1;
	int n = sizeof(niz) / sizeof(niz[0]);

	for (int j = 0; j < n; j++)
	{
		std::cout << niz[j] << " ";
	}
	return 0;

}*/

/*zad3
#include <stdio.h>
//hpp  - header
//strukture sluze za stvaranje novih tipova podataka
struct Vector
{
	int* niz;
	int size, capacity;
	
	void vector_new(int init);
	
	void vector_delete();
	void vector_push_back(int n);
	int vector_pop_back(); //element koji je na kraju izbacuje iz niza i vraca njegovu vrij.
	int vector_front();  //na pocetku
	int vector_back();  // samo dohvaca vrijednost na zadnjem mjestu, ne izbacuje ju iz niza
	int vector_size();
}


cpp - implementaciju kako rade funkcije iz hpp-a
void Vector::vector_new()
{
		capacity = init;
		niz = new int[capacity]; //dinamicko alociranje polja
		size = 0;
	}
void Vector::vector_delete()
{
	delete[] niz;
	size = 0;
	capacity = 0;
	}
void Vector::vector_push_back(int n)
{
	if ( size >= capacity) {
		capacity = capacity*2;
		int* duplo = new int[capacity]; //novo alociranje niza integera koje je velicine capacity
		
		//ako ste koristili copy - iskopira sve iz niza u duplo
		copy(niz, niz + size, duplo); //kopira sve elemente niza u duplo
		delete[] niz;
		niz = duplo;
	} 
	niz[size] = n;
	size++;
}
void Vector::vector_pop_back()
{
	int zadnji = niz[size-1]; 
	size--;
	return zadnji;
	}
void Vector::vector_front()
{
	return niz[0];
	}
void Vector::vector_back()
{
	return niz[size-1];
	}
void Vector::vector_size()
{
	return size;
	}
}
	
#include "vector.hpp"
int main()
{
	Vector v; //v je ime varijable, Vector je tip podatka
	v.vector_new(8); //nad objektom v koji je tipa Vector zove funkciju vector_new()
	cout << v.capacity;   //printa 8
	
	//unos elemenata u vektor
	v.vector_push_back(1);
	v.vector_push_back(123);
	v.vector_push_back(456);
	
	cout << v.vector_front(); //1
	cout << v.vector_back(); //456
	
	cout << v.vector_pop_back();  //456
	cout << v.vector_back();		//123
}













*/

zad4
#include <iostream>
struct Matrica
{
	int redak;
	int stupac;
	float** niz;	
	
	void alokacija(int m, int n);
	{
		Matrica mat;
		mat.redak = m;
		mat.stupac = n;
		
		//UVIJEK ovako 2d polje se alocira!!
		niz = new float*[redak];  //tu int* jer je 2d polje, ovo su adrese ostalih nizova/redaka
		for (int i = 0; i < m; i++)
		{
			mat.niz[i] = new float[n];
		}
	}
}
	
	void unos()
	{
		for(int i=0; i<mat.redak; i++){
			for(int j=0; j<mat.stupac; j++){
				cout << "upisi element u retku" << i+1 << " i stupcu: " << j+1;
				cin >> mat.niz[i][j]
				
				}
			}
	}
	void generiranje (float a, float b)
	{
		for(int i=0; i<mat.redak; i++)
		{
			for(int j=0; j<mat.stupac; j++)
			{
				niz[i][j] = a + static_cast(rand()) / static_cast (RAND_MAX/(b-a));
	}
		}
	}
	void zbrajanje (int Matrica& mat1, int Matrica& mat2)
	{
		if (mat1.redak != mat2.redak || mat1.stupac != mat2.stupac)
		{
			std::cout << "Matrice moraju imati iste dimenzije za zbrajanje." << std::endl;
		}
		Matrica rezultat;
		rezultat.redak = mat1.redak;
		rezultat.stupac = mat1.stupac;
		for(int i=0; i<mat1.redak; i++)
		{
			for(int j=0; j<mat1.stupac; j++)
			{
				rezultat.niz[i][j] = mat1.niz[i][j] + mat2.niz[i][j];
			}
	}
	return rezultat;
	}

	void oduzimanje (int Matrica& mat1, int Matrica& mat2)
	{
		if (mat1.redak != mat2.redak || mat1.stupac != mat2.stupac)
		{
			std::cout << "Matrice moraju imati iste dimenzije za oduzimanje." << std::endl;
		}
		for(int i=0; i<mat1.redak; i++)
		{
			for(int j=0; j<mat1.stupac; j++)
			{
				rezultat.niz[i][j] = mat1.niz[i][j] - mat2.niz[i][j];
			}
		}
		return rezultat
	}

	void mnozenje (int Matrica& mat1, int Matrica& mat2)
	{
		if (mat1.stupac != mat2.redak)
		{
			std::cout << "Broj stupaca prve matrice mora biti isti  broju redaka druge matrice za množenje." << std::endl;
		}
		Matrica rezultat;
		rezultat.redak = mat1.redak;
		rezultat.stupac = mat2.stupac;
		for(int i = 0; i<mat1.redak; i++)
		{
			for(int j=0; j<mat2.stupac; j++)
			{
				for (int k = 0; k < mat1.stupac; k++)
				{
					rezultat.niz[i][j] += mat1.niz[i][j] * mat2[k][j];
				}
			}
	}
	return rezultat;
	}

	void transponirana (int Matrica& mat)
	{
		Matrica rezultat;
		rezultat.redak = mat.stupac;
		rezultat.stupac = mat.redak;
		for (int i = 0; i < mat.redak; i++)
		{
			for (int j = 0; j < mat.stupac; j++)
			{
				rezultat.niz[j][i] = mat.niz[i][j];
			}
		}
		return rezultat;
	}

	void ispis(int Matrica& mat)
	{
		for(int i=0; i<mat.redak; i++)
		{
			for(int j=0; j<mat.stupac; j++)
			{
				std::cout << std::setprecision(4) << std::setw(10) << mat.niz[i][j]
			}
			cout << endl;
		}
	}

int main()
{
	int m, n;
	std::cout << "Unesite broj redaka i stupaca matrice: ";
	std::cin >> m >> n;

	Matrica mat1 = unos(m,n);
	Matrica mat2 = generiranje(m,n,1.0,5.0);
	std::cout << "Prva matrica:\n";
	ispis(mat1);
	std::cout << "Druga matrica:\n";
	ispis(mat2);

	Matrica zbroj = zbrajanje (mat1,mat2);
	std::cout << "Zbroj matrica:\n";
	ispis(zbroj);

	Matrica razlika = oduzimanje (mat1,mat2)
	std::cout << "Razlika matrica:\n";
	ispis(razlika);

	Matrica umnozak = mnozenje (mat1, transponirana(mat2));
	std::cout << "Umnozak matrica:\n";
	ispis(umnozak);

	
}

