#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("broken Martini glass");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("disco ball");
		bob.attack();
	}
	{
		Weapon	random = Weapon("shark teeth necklace");
		HumanB jim("Jim");
		jim.setWeapon(random);
		jim.attack();
		random.setType("children-size golf club");
		jim.attack();
	}
	{
		HumanB	joe("joe");
		joe.attack();
		Weapon	blade = Weapon("rusty pink axe");
		joe.setWeapon(blade);
		joe.attack();
		blade.setType("blunt butter knife");
		joe.attack();
	}

	return (0);
}
