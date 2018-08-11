#pragma once
#include "core/game.h"

class AzorGame :public azor::Game
{
public:
	explicit AzorGame(int width = 800, int height = 600, const std::string& title = "Azor Game");
	~AzorGame() = default;

private:
  void initialize() override;
  void load_content() override;
  void update(float) override;
  void draw(float) override;
  void clean_up() override;
};