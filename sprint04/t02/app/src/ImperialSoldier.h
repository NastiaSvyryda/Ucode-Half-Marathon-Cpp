#pragma once

class <soldier class> final {
    public:
        <soldierclass>();//конструктор
        ~<soldierclass>();//деструктор
        void setWeapon(<weapon class>* weapon);
        void attack(<enemy soldier class>& enemy);
        void consumeDamage(int amount);
        int getHealth() const;

    private:
        <weapon class>* m_weapon;
        int m_health;
};
