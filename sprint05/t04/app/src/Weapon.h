#pragma once

class Weapon {
    public:
        explicit Weapon(int damage) : m_damage(damage) {};
        virtual~Weapon() = default;
        int getDamage() const {
            return m_damage;
        };
    private:
        const int m_damage;
};

