#pragma once
class Enemy
{
public:
	void Updata();

	void approach();
	void shoot();
	void leave();
private:
	static void (Enemy::*pFunc[])();

	enum EnemyState{
		Approach,
		Shoot,
		Leave
	};
};

