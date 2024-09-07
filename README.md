Tout d'abord, vous devez implémenter une classe ! Quelle originalité !

Elle sera appelée ClapTrap et aura les attributs privés suivants initialisés aux valeurs spécifiées entre parenthèses :

    Nom, qui est passé en paramètre dans le constructeur
    Points de vie (10), qui représentent la santé du ClapTrap
    Points d'énergie (10)
    Dégâts d'attaque (0)

Ajoutez les fonctions membres publiques suivantes pour que le ClapTrap soit plus réaliste :

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

Lorsque le ClapTrap attaque, il fait perdre à sa cible un nombre de points de vie égal à ses dégâts d'attaque.
Lorsque le ClapTrap se répare, il récupère un nombre de points de vie égal à <amount>.
Attaquer et se réparer coûte 1 point d'énergie chacun.
Bien sûr, le ClapTrap ne peut rien faire s'il n'a plus de points de vie ou de points d'énergie.




ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	...
}


/* public:
		getter and setter ????? 
        void    setName(std::string name);
        std::string getName(void);
        void    setHitPoints(int hitPoints);
        int     getHitPoints(void);
        void    setEnergyPoints(int energyPoints);
        int     getEnergyPoints(void);
        void    setAttackDamage(int attackDamage);
        int     getAttackDamage(void);
*/




rhs coter droit de legal 
Fixed& Fixed::operator=(const Fixed& rhs)

a = b;
La valeur du coter droit du = va aller dans a






Vendredi : 
 CPP03 ex00 ❌
 CPP03 ex01 ❌
 CPP03 ex02 ❌

Samedi :
 Correction CPP03 ❌
 CPP04 ex00 ❌
 CPP04 ex01 ❌
 CPP04 ex02 ❌

dimanche : 
 Correction CPP04 ❌


✅ ❌
