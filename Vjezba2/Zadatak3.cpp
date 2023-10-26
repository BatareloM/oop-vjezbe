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
	if (size >= capacity) {
		capacity = capacity * 2;
		int* duplo = new int[capacity]; //novo alociranje niza integera koje je velicine capacity

		for (int i = 0; i < niz.size; i++)
		{
			duplo[i] =  niz[i];
		}   
		                         // 123 moram kopirat u drugi niz bez copy funkcije (pitanje na obrani)
		delete[] niz;
		niz = duplo;
	}
	niz[size] = n;
	size++;
}
void Vector::vector_pop_back()
{
	int zadnji = niz[size - 1];
	size--;
	return zadnji;
}
void Vector::vector_front()
{
	return niz[0];
}
void Vector::vector_back()
{
	return niz[size - 1];
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
	v.vector_push_back(1);
	v.vector_push_back(123);
	v.vector_push_back(456);

	cout << v.vector_front(); //1
	cout << v.vector_back(); //456

	cout << v.vector_pop_back();  //456
	cout << v.vector_back();		//123
}
