#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Player
{
public:
	
	enum { NoPunch, RightHook, LeftHook,  RightJab, LeftJab, StarPunch};
	Player();
	~Player();
	void updatePlayer(sf::Event&);
	void drawPlayer(sf::RenderWindow&);
	int getHealth();
	int getDamage();
	int getStarCount();
	int getStamina();
	int isPunching();
	int getAction();
	bool isDodging();
	bool isBlocking();
	bool getWinded();
	void punchMac(int, int);
	void setHealth(int);
	int getPunch();
	int getMoveCD();
	bool isKnockedDown();
	bool giveStar();
	
private:

	sf::Sprite sprite;
	sf::Texture texture;
	int moveCoolD, dir, starCount, health, action, punch, aniCoolD, stamina, struggle;
	bool isWinded, keyPressed, blocking, dodging, upper, knockedDown, punched;
	sf::SoundBuffer buffer;
	sf::Sound sound;
};
