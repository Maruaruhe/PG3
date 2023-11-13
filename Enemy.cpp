#include "Enemy.h"
#include <stdio.h>

void (Enemy::*Enemy::pFunc[])() {
	&Enemy::approach,
	&Enemy::shoot,
	&Enemy::leave
};

void Enemy::Updata() {
	(this->*pFunc[Approach])();
	(this->*pFunc[Shoot])();
	(this->*pFunc[Leave])();
}

void Enemy::approach() {
	printf("接近中...\n");
}

void Enemy::shoot() {
	printf("発射!\n");
}

void Enemy::leave() {
	printf("撤退\n");
}