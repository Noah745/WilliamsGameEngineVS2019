#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject
{
public:
	// Creates the ship
	Ship();

	// Funtions overridden from GameObject:
	void draw();
private:
	sf::Sprite sprite_;
};
typedef std::shared_ptr<Ship> ShipPtr;