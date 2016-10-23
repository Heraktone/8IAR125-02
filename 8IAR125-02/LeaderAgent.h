#pragma once
#include "Vehicle.h"
class LeaderAgent :
	public Vehicle
{
public:
	LeaderAgent(GameWorld * world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale);
	~LeaderAgent();
};

