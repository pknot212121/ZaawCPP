module player;

int Player::getHealth() const {
    return health;
}

void Player::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) {
        health = 0;
    }
}

