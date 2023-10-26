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