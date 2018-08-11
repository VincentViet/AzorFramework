#define _CRT_SECURE_NO_WARNINGS
#include "azor_game.h"

using namespace azor;

float vol = 0.5f;
std::string test;

AzorGame::AzorGame(const int width, const int height, const std::string& title)
	: Game(width, height, title)
{}

void AzorGame::initialize()
{}

void AzorGame::load_content()
{}

void AzorGame::update(float)
{}

void AzorGame::draw(float)
{}

void AzorGame::clean_up()
{
	//write your clean up code here

	//this is framework clean up code. Don't delete following line
	Game::clean_up();
}
