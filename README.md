battle-engine
=============

Project implementing the core of a jrpg battle engine.

**NOTE: Requires my [dice](https://github.com/cdr255/dice) library!**

Currently exists of a Class "Combatant," which has the following stats:

* A Name
* Strength
* Defense
* Accuracy
* Evasion
* Constitution
* Health

Also implements attacking in the following way:

**To Hit:**

    Attacker's Accuracy + 1d20 is compared to Defender's Evasion.
	If greater, move on to damage.
	If less, no damage is scored.

**Damage:**

    Damage is currently flat at 1d6 + Attacker's Strength - Defender's Defense.


