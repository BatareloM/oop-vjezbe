#include "neprijatelji.hpp"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

Enemy::Enemy(const string ime, int helath, int damage) : ime(ime),health(health),damage(damage)
{
    if (health < 0 || damage < 0)
    {
        throw invalid_argument("Tesko stanje");
    }
}

Boss::Boss(const string& ime, int health, int damage, const string& oruzje) : Enemy(ime, health, damage), oruzje(oruzje)
{
    if (oruzje.empty())
    {
        throw invalid_argument("Prazno");
    }
}

void Boss::attack()
{
    cout << "Napada s" << oruzje << "Nanosi mu" << damage << "stetu";
}

void Boss::displayInfo()
{
    cout << "Napadac:" << ime << "Health" << health << "Damage" << damage << "Oruzje" << oruzje;
}


Monster::Monster(const string& ime, int health, int damage, const string& posebne_sposobnosti) : Enemy(ime,health,damage), posebne_sposobnosti(posebne_sposobnosti)
{
    if (posebne_sposobnosti.empty())
    {
        throw invalid_argument("Prazno");
    }
}

void Monster::attack()
{
    cout << "Posebna sposobnost mu je" << posebne_sposobnosti << "Nanosi mu" << damage << "stetu";
}

void Monster::displayInfo()
{
    cout << "Napadac:" << ime << "Health" << health << "Damage" << damage << "Posebne sposobnosti" << posebne_sposobnosti;
}
