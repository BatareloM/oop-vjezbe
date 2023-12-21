#ifndef neprijatelji_h
#define neprijatelji_h 
#include <iostream>
#include <string>

using namespace std;
class Enemy
{
protected:
	string ime;
	int health;
	int damage;

public:
	Enemy(const string ime, int health, int damage);
	virtual void attack() = 0;
	virtual void displayInfo() = 0;

};

class Boss : public Enemy //dodatno oruzje  
{
protected:
	string oruzje;
public:
	Boss(const string& ime, int health, int damage, const string& oruzje);
	// čisto virtualne funkcije se označavaju sa =0 u deklaraciji
	//čisto virtualne funkcije se moraju overridati
	void attack() override;
	void displayInfo() override;

};

class Monster : public Enemy // posebne sposobnosti 
{
protected:
	string posebne_sposobnosti;
public:
	Monster(const string& ime, int health, int damage, const string& posebne_sposobnosti);
	void attack() override;
	void displayInfo() override;
};

#endif // !neprijatelji_h

