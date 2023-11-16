#ifndef Vjezba6_hpp
#define Vjezba6_hpp

class VirtualPet
{
private:
	string ime;
	string vrsta;
	int bodovi_za_glad;
	int bodovi_za_srecu;
	int status_budnosti;
public:
	void igranje();
	void spavanje();
	void hranjenje();
};

class Owner
{
private:
	string ime;

};

#endif // !Vjezba6
