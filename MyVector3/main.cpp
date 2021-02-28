#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

/// <summary>
/// Your name here
/// estimate
/// time spent
/// issues
/// 
/// </summary>

#include "MyVector3.h"
#include <SFML\Graphics.hpp>




// you need more comments for Pete's sake

int main()
{
	// null default constructor
	MyVector3 vectorOne{};
	// expecting {0.0,0.0,0.0}
	
	// constructor from sf::vector3f
	sf::Vector3f sfV3f{ 1.2f, -2.2f,1.9f };
	vectorOne = sfV3f;
	// expecting {1.2,-2.2,1.9}
	
	
	//----------------------------------------------------
	// cast to sf::vector2 line should be written as 
	sf::Vector2f sfV2fa = static_cast<sf::Vector2f>(vectorOne);
	// alternate line of code to invoke our casting code
	//sf::Vector2f sfV2fb = (sf::Vector2f)vectorOne; //c++ cast
	//sf::Vector2f sfV2fc = vectorOne; // lazy programming
	// check this with debugger
	// sfV2f should be {1.2~,-2.2~}
	
	std::system("pause");
	return EXIT_SUCCESS;
}


