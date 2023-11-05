//ONLY THE ADT OF CLASES FOR A GAME
#include <iostream>
using namespace std;

class Player
{
private:
    Gun gun;
    int health;
public:
    Player();
    void movement();
    void death();
    void Display();
};


class Gun
{
private:
    Bullet B[30];
    int firerate;
    int RecoilRate;
public:
    Gun();
    void Fire();
    void Reload();
    void manageRecoil();
};



class Bullet
{
private:
    int damage;
    int range;
    int speed;
public:
    Bullet();
    bool isCollision();
    Bullet operator--(int);
};


class Enemy
{
private:
    int health;
    int damage;
    int speed;
public:
    Enemy();
    void Attack(int speed);
    void Death();
    Enemy operator++(int);
    Enemy operator--(int);
};


class Level
{
private:
    Enemy E[2];
    Player P1;
    int difficulty();
public:
    Level();
    void gameStart();
    void gameQuit();
    void levelUpdate();
};

int main(){
    Level L1;
    L1.gameStart();
    int a;
    if(cin >>a; a == 1 ){
        L1.gameQuit();
    }
}