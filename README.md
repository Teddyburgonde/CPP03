**EX00**

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	...
}

**EX01**

Tu dois créer une nouvelle classe ScavTrap qui hérite de ClapTrap. Cette classe aura ses propres constructeurs, destructeur et méthodes, tout en utilisant les attributs hérités de ClapTrap mais avec des valeurs initiales différentes. Elle aura également une méthode spéciale, guardGate().

N'oublie pas de bien gérer l'héritage des constructeurs et du destructeur pour montrer la construction et la destruction appropriées dans tes tests.



Parce que vous ne pouvez jamais avoir assez de ClapTraps, vous allez maintenant créer un robot dérivé. Il sera nommé ScavTrap et héritera des constructeurs et du destructeur de ClapTrap. Cependant, ses constructeurs, son destructeur et sa fonction attack() afficheront des messages différents. Après tout, les ClapTraps sont conscients de leur individualité.

Notez que la construction et la destruction appropriées doivent être démontrées dans vos tests. Lorsqu'un ScavTrap est créé, le programme commence par construire un ClapTrap. La destruction se fait dans l'ordre inverse. Pourquoi ?

ScavTrap utilisera les attributs de ClapTrap (mettez à jour ClapTrap en conséquence) et devra les initialiser comme suit :

    Nom, qui est passé en paramètre au constructeur
    Points de vie (100), représentant la santé du ClapTrap
    Points d'énergie (50)
    Dégâts d'attaque (20)

ScavTrap aura également sa propre capacité spéciale :

void guardGate();

Cette fonction membre affichera un message informant que le ScavTrap est maintenant en mode Gardien de la Porte.

N'oubliez pas d'ajouter davantage de tests à votre programme.


Vendredi : 
 CPP03 ex00 ✅
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
