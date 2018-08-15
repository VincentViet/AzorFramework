#ifndef GAME_H
#define GAME_H

#include <GLFW/glfw3.h>
#include <string>
namespace azor
{
  class Game
  {	  
	  int client_width_;
	  int client_height_;
  private:
	  bool initialize_app();
  protected:
	  GLFWwindow * window_{};
	  std::string client_title_;

  protected:
	  virtual void initialize();
	  virtual void load_content();
	  virtual void update(float);
	  virtual void draw(float);
	  virtual void clean_up();

  public:
	  static int window_width;
	  static int window_height;
	  explicit Game(int width, int height, std::string title);
    virtual ~Game() = default;

  public:
	  int run();
  };
}

#endif // GAME_H