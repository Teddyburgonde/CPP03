**EX00**

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	...
}

**EX01**

- Cree une nouvelle class ScavTrap qui herite de ClapTrap.
- Cette classe aura ses propres constructeurs, destructeur et méthodes, tout en utilisant les attributs hérités de ClapTrap mais avec des valeurs initiales différentes. 
- Cree la methode guardGate().

N'oublie pas de bien gérer l'héritage des constructeurs et du destructeur pour montrer la construction et la destruction appropriées dans tes tests.


**Difference entre private et protected**

```c
private : Accessible uniquement dans la classe où il est déclaré. 
Non accessible dans les classes dérivées.

protected : Accessible dans la classe où il est déclaré et dans les classes dérivées. 
Cela permet aux classes dérivées d'hériter et de modifier les attributs protected.
```

**EX02**

- implémentez une classe FragTrap qui hérite de ClapTrap. 
- Lorsqu'un FragTrap est créé, le programme doit d'abord construire un ClapTrap. 
- La destruction se fait dans l'ordre inverse. Les mêmes principes s'appliquent pour les attributs, mais avec des valeurs différentes cette fois-ci :

    Nom, qui est passé en paramètre au constructeur.
    Points de vie (100), représentant la santé du ClapTrap.
    Points d'énergie (100).
    Dégâts d'attaque (30).
- FragTrap a aussi une capacité spéciale :
void highFivesGuys(void);


Vendredi : 
 CPP03 ex00 ✅
 CPP03 ex01 ✅
 CPP03 ex02 ✅

Samedi :
 Correction CPP03 ❌
 CPP04 ex00 ❌
 CPP04 ex01 ❌
 CPP04 ex02 ❌

dimanche : 
 Correction CPP04 ❌


✅ ❌
