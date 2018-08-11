#pragma once
#include <string>
#include <GLFW/glfw3.h>

namespace azor
{
  struct Keyboard
  {
	  int key_code;
	  int key_state;
	  std::string key_name;
	  Keyboard();
  };

  struct Mouse
  {
	  double x;
	  double y;
	  int btn_code;
	  int btn_state;
    Mouse();
  };

  class Input
  {
  public:
	  Input() = delete;
	  ~Input() = delete;

  public:
	  static Mouse mouse;
	  static Keyboard keyboard;
  public:
	  static void initialize(GLFWwindow* owner_window);
	  static bool key_up(int keycode);
	  static bool key_down(int keycode);
  };
}
