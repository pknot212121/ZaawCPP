export module player;

export class Player {
public:
    void takeDamage(int dmg);
    int getHealth() const;
private:
    int health = 100;
};