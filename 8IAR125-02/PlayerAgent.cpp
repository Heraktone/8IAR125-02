#include "PlayerAgent.h"
#include "SteeringBehaviors.h"

PlayerAgent::PlayerAgent(GameWorld*	world,
	Vector2D	position,
	double		rotation,
	Vector2D	velocity,
	double		mass,
	double		max_force,
	double		max_speed,
	double		max_turn_rate,
	double		scale) :
	Vehicle(world,
		position,
		rotation,
		velocity,
		mass,
		max_force,
		max_speed,
		max_turn_rate,
		scale,
		RenderColor::Player), MaxMaxSpeed(max_speed)
{
	Steering()->AlwaysForwardOn();
}

void PlayerAgent::Accelerate()
{
	double wantedSpeed(MaxSpeed()+ MaxMaxSpeed*0.1);
	SetMaxSpeed(wantedSpeed < MaxMaxSpeed ? wantedSpeed : MaxMaxSpeed);
	//SetVelocity(SmoothedHeading()*Speed());
}

void PlayerAgent::Decelerate()
{
	double wantedSpeed(MaxSpeed()-MaxMaxSpeed*0.1);
	SetMaxSpeed(wantedSpeed >= MaxMaxSpeed*0.1 ? wantedSpeed : MaxMaxSpeed*0.1);
}

void PlayerAgent::TurnRight()
{

	RotateHeadingToFacePosition(Pos() + Side());
}

void PlayerAgent::TurnLeft()
{
	RotateHeadingToFacePosition(Pos() - Side());
}


PlayerAgent::~PlayerAgent()
{
}
