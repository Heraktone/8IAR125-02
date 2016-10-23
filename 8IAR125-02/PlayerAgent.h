#pragma once
#include "Vehicle.h"
class PlayerAgent :
	public Vehicle
{
public:
	PlayerAgent(GameWorld * world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale);
	void Accelerate();
	void Decelerate();
	void TurnRight();
	void TurnLeft();
	~PlayerAgent();

private:
	double MaxMaxSpeed;
};

