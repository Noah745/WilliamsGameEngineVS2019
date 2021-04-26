#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject
{
public:
	// Creates the ship
	Ship();

	// Funtions overridden from GameObject:
	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;
	int fireTimer_ = 0;
};
typedef std::shared_ptr<Ship> ShipPtr;