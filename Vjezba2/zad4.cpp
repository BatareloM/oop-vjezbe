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
	for (int i = 0; i < mat.redak; i++) {
		for (int j = 0; j < mat.stupac; j++) {
			cout << "upisi element u retku" << i + 1 << " i stupcu: " << j + 1;
			cin >> mat.niz[i][j]

		}
	}
}
void generiranje(float a, float b)
{
	for (int i = 0; i < mat.redak; i++)
	{
		for (int j = 0; j < mat.stupac; j++)
		{
			niz[i][j] = a + static_cast(rand()) / static_cast (RAND_MAX / (b - a));
		}
	}
}
void zbrajanje(int Matrica& mat1, int Matrica& mat2)
{
	if (mat1.redak != mat2.redak || mat1.stupac != mat2.stupac)
	{
		std::cout << "Matrice moraju imati iste dimenzije za zbrajanje." << std::endl;
	}
	Matrica rezultat;
	rezultat.redak = mat1.redak;
	rezultat.stupac = mat1.stupac;
	for (int i = 0; i < mat1.redak; i++)
	{
		for (int j = 0; j < mat1.stupac; j++)
		{
			rezultat.niz[i][j] = mat1.niz[i][j] + mat2.niz[i][j];
		}
	}
	return rezultat;
}

void oduzimanje(int Matrica& mat1, int Matrica& mat2)
{
	if (mat1.redak != mat2.redak || mat1.stupac != mat2.stupac)
	{
		std::cout << "Matrice moraju imati iste dimenzije za oduzimanje." << std::endl;
	}
	for (int i = 0; i < mat1.redak; i++)
	{
		for (int j = 0; j < mat1.stupac; j++)
		{
			rezultat.niz[i][j] = mat1.niz[i][j] - mat2.niz[i][j];
		}
	}
	return rezultat
}

void mnozenje(int Matrica& mat1, int Matrica& mat2)
{
	if (mat1.stupac != mat2.redak)
	{
		std::cout << "Broj stupaca prve matrice mora biti isti  broju redaka druge matrice za množenje." << std::endl;
	}
	Matrica rezultat;
	rezultat.redak = mat1.redak;
	rezultat.stupac = mat2.stupac;
	for (int i = 0; i < mat1.redak; i++)
	{
		for (int j = 0; j < mat2.stupac; j++)
		{
			for (int k = 0; k < mat1.stupac; k++)
			{
				rezultat.niz[i][j] += mat1.niz[i][j] * mat2[k][j];
			}
		}
	}
	return rezultat;
}

void transponirana(int Matrica& mat)
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
	for (int i = 0; i < mat.redak; i++)
	{
		for (int j = 0; j < mat.stupac; j++)
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

	Matrica mat1 = unos(m, n);
	Matrica mat2 = generiranje(m, n, 1.0, 5.0);
	std::cout << "Prva matrica:\n";
	ispis(mat1);
	std::cout << "Druga matrica:\n";
	ispis(mat2);

	Matrica zbroj = zbrajanje(mat1, mat2);
	std::cout << "Zbroj matrica:\n";
	ispis(zbroj);

	Matrica razlika = oduzimanje(mat1, mat2)
		std::cout << "Razlika matrica:\n";
	ispis(razlika);

	Matrica umnozak = mnozenje(mat1, transponirana(mat2));
	std::cout << "Umnozak matrica:\n";
	ispis(umnozak);


}