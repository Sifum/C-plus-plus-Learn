#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <cstddef>
using namespace std;

/*
ָ��ͽṹ�� 
*/
struct EnemySpaceShip
{
	int x_coordinate;
	int y_coordinate;
	int weapon;
	EnemySpaceShip* p_next_enemy;
};
//ע������ֺű���д 
EnemySpaceShip* getNewEnemy()
{
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	p_ship->x_coordinate = 0;
	p_ship->y_coordinate = 0;
	p_ship->weapon = 20;
	p_ship->p_next_enemy = NULL;
	return p_ship;
}
void upgradeWeapons(EnemySpaceShip* p_ship)
{
	p_ship->weapon += 10;
}
int main()
{
   EnemySpaceShip* p_enemy = getNewEnemy();
   upgradeWeapons(p_enemy);
   
   cout << p_enemy->weapon;
   
   return 0;
}
