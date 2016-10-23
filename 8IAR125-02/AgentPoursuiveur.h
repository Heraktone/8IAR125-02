#pragma once
#include "Vehicle.h"
class AgentPoursuiveur :
	public Vehicle
{
private:
	Vehicle* v_agent_leader;

public:
	AgentPoursuiveur(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale,
		Vehicle*   v_agent_leader);

	void        Go();

	~AgentPoursuiveur();

};

