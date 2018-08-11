#pragma once

namespace azor
{
	struct Rectangle
	{
		float bottom_left_x{}, bottom_left_y{};
		float top_right_x, top_right_y;
		Rectangle();
		Rectangle(
			const float top_left_x,
			const float top_left_y,
			const float bottom_right_x,
			const float bottom_right_y);
	};

}
