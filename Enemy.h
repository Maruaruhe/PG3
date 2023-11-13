#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Updata();

	void approach();
	void Shoot();
	void run();
private:
	static void (Enemy::* pFunc[])();

	//static_cast<size_t>(phase_)
};

