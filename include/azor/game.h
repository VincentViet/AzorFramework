#pragma once
#include <GLFW/glfw3.h>
#include <string>
namespace azor
{
  class Game
  {	  
  private:
	  bool initialize_app();
  protected:
	  GLFWwindow * window_{};
	  int client_width_;
	  int client_height_;
	  std::string client_title_;

  protected:
	  virtual void initialize();
	  virtual void load_content();
	  virtual void update(float);
	  virtual void draw(float);
	  virtual void clean_up();

  public:
	  explicit Game(int width, int height, std::string title);
    virtual ~Game() = default;

  public:
	  int run();
  };
}
