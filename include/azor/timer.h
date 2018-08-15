#ifndef TIMER_H
#define TIMER_H

namespace azor
{
	class Timer
	{
	public:
		static float delta_time;
		static float total_time;

	public:
		Timer() = delete;
		~Timer() = delete;

	public:
		static void tick();
		static void pause();
		static void resume();
	};
}

#endif // TIMER_H
