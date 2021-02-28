  /// <summary>
/// Vector 3 class
/// your name here or no marks
/// </summary>
#include "MyVector3.h"
#include <string.h>
const float  PI = 3.14159265358979f;

/// <summary>
/// Default constructor set all 3 values to zero
/// </summary>
MyVector3::MyVector3() :
	x{ 0.0f },
	y{ 0.0f },
	z{ 0.0f }
{
}

/// <summary>
/// default destructor
/// nothing to release because we only have
/// primitive type data
/// </summary>
MyVector3::~MyVector3()
{
}



/// <summary>
/// create a vector 3 from an sf::vector3f
/// </summary>
/// <param name="t_sfVector">input vector</param>
MyVector3::MyVector3(sf::Vector3f t_sfVector)
{
	x = t_sfVector.x;
	y = t_sfVector.y;
	z = t_sfVector.z;
}

/// <summary>
/// return a sf::vector2f using x and y as constructor values
/// </summary>
/// <returns></returns>
MyVector3::operator sf::Vector2f()
{
	return sf::Vector2f{ x, y };
}

