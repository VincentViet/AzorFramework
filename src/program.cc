#include "azor_game.h"

int main(int argc, char* argv[])
{
  azor::Game* new_game = new AzorGame(800, 600, "Azor Framework");

	return new_game->run();
}
