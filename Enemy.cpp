#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() {
	//pFunc = &Enemy::approach;
}

void (Enemy::Enemy::* pFunc[])() {
	&Enemy::approach,
	&Enemy::Shoot,
	&Enemy::run
};

void Enemy::Updata() {

}

void Enemy::approach() {
	printf("接近中...\n");
}