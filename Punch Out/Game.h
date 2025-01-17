#pragma once
#include "Player.h"
#include "UIManager.h"
#include "Opponent.h"
#include "GlassJoe.h"

class Game
{ 
public:
	Game(sf::RenderWindow&, sf::View&);
	~Game();
	void play(sf::RenderWindow&, sf::Event&, sf::View&);
	//Mario counts up to 10, at 10 he says KO
	void marioCount();
private:
	int time, points, round, playerKO, oppoKO, state, placeHolderInt, timer;
	sf::View view;
	sf::Texture marioTex, roundTex;
	sf::Sprite marioSprite, roundSprite;
	Player littleMac;
	Opponent *opponent;
	UIManager UI;
	sf::RectangleShape fadeout;
	sf::Music mainTheme;
	sf::SoundBuffer gameSoundBuffer;
	sf::Sound gameSound;
	bool isKeyPressed;
	GlassJoe joe;
};
