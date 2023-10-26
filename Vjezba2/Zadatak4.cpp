#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

struct Matrica {
    int redak;
    int stupac;
    float** niz;
};

Matrica alokacija(int m, int n) {
    Matrica mat;
    mat.redak = m;
    mat.stupac = n;

    mat.niz = new float* [m];
    for (int i = 0; i < m; i++) {
        mat.niz[i] = new float[n];
    }
    return mat;
}

void unos(Matrica& mat) {
    for (int i = 0; i < mat.redak; i++) {
        for (int j = 0; j < mat.stupac; j++) {
            std::cout << "Unesite element u retku " << i + 1 << " i stupcu " << j + 1 << ": ";
            std::cin >> mat.niz[i][j];
        }
    }
}

Matrica generiranje(int m, int n, float a, float b) {
    Matrica mat = alokacija(m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat.niz[i][j] = a + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (b - a)));
        }
    }
    return mat;
}

Matrica zbrajanje(int Matrica& mat1, int Matrica& mat2) {
    if (mat1.redak != mat2.redak || mat1.stupac != mat2.stupac) {
        std::cout << "Matrice moraju imati iste dimenzije za zbrajanje!" << std::endl;
        exit(1);
    }

    Matrica rezultat = alokacija(mat1.redak, mat1.stupac);
    for (int i = 0; i < mat1.redak; i++) {
        for (int j = 0; j < mat1.stupac; j++) {
            rezultat.niz[i][j] = mat1.niz[i][j] + mat2.niz[i][j];
        }
    }
    return rezultat;
}

Matrica oduzimanje(int Matrica& mat1, int Matrica& mat2) {
    if (mat1.redak != mat2.redak || mat1.stupac != mat2.stupac) {
        std::cout << "Matrice moraju imati iste dimenzije za oduzimanje!" << std::endl;
        exit(1);
    }

    Matrica rezultat = alokacija(mat1.redak, mat1.stupac);
    for (int i = 0; i < mat1.redak; i++) {
        for (int j = 0; j < mat1.stupac; j++) {
            rezultat.niz[i][j] = mat1.niz[i][j] - mat2.niz[i][j];
        }
    }
    return rezultat;
}

Matrica mnozenje(int Matrica& mat1, int Matrica& mat2) {
    if (mat1.stupac != mat2.redak) {
        std::cout << "Broj stupaca prve matrice mora odgovarati broju redaka druge matrice!" << std::endl;
        exit(1);
    }

    Matrica rezultat = alokacija(mat1.redak, mat2.stupac);
    for (int i = 0; i < mat1.redak; i++) {
        for (int j = 0; j < mat2.stupac; j++) {
            rezultat.niz[i][j] = 0.0;
            for (int k = 0; k < mat1.stupac; k++) {
                rezultat.niz[i][j] += mat1.niz[i][k] * mat2.niz[k][j];
            }
        }
    }
    return rezultat;
}

Matrica transponirana(int Matrica& mat) {
    Matrica rezultat = alokacija(mat.stupac, mat.redak);
    for (int i = 0; i < mat.redak; i++) {
        for (int j = 0; j < mat.stupac; j++) {
            rezultat.niz[j][i] = mat.niz[i][j];
        }
    }
    return rezultat;
}

void ispis(int Matrica& mat) {
    for (int i = 0; i < mat.redak; i++) {
        for (int j = 0; j < mat.stupac; j++) {
            std::cout << std::fixed << std::setprecision(4) << std::setw(10) << mat.niz[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    int m, n;
    std::cout << "Unesite broj redaka i stupaca matrice: ";
    std::cin >> m >> n;

    Matrica mat1 = alokacija(m, n);
    unos(mat1);
    Matrica mat2 = generiranje(m, n, 1.0, 5.0);

    std::cout << "Prva matrica:" << std::endl;
    ispis(mat1);

    std::cout << "Druga matrica:" << std::endl;
    ispis(mat2);

    Matrica zbroj = zbrajanje(mat1, mat2);
    std::cout << "Zbroj matrica:" << std::endl;
    ispis(zbroj);

    Matrica razlika = oduzimanje(mat1, mat2);
    std::cout << "Razlika matrica:" << std::endl;
    ispis(razlika);

    Matrica umnozak = mnozenje(mat1, transponirana(mat2));
    std::cout << "Umnožak matrica:" << std::endl;
}