// Libraries
#pragma once

/// External Libraries
//// There are none right now.

/// Internal Libraries
#include <carnival-math.hpp>
#include <carnival-graphics.hpp>

// This namespace denotes being part of 'Carnival Engine'.
namespace Carnival {
	/// This is the class a 'Carnival Engine' instance runs in.
	class CarnivalEngine {
		//// The label for the window.
		public std::string windowLabel;
		public Graphics::Icon windowIcon;
		public Math::Vector2 windowSize;
		public bool fullscreen;

		//// This is the constructor method for the `CarnivalEngine` class.
		CarnivalEngine(
			///// This parameter describes the label for the window that will be created for this `CarnivalEngine` instance.
			std::string p_windowLabel,
			Graphics::Icon p_windowIcon = Graphics::Icon(),
			Math::Vector2 p_windowSize = Math::Vector2(1280, 720),
			bool p_fullscreen = false
		) : windowLabel(p_windowLabel), windowIcon(p_windowIcon), windowSize(p_windowSize), fullscreen(p_fullscreen)
		{
			///// TODO: Write the code for making a window, given the parameters of this constructor.
		}

		//// This is the destructor method for the `CarnivalEngine` class.
		~CarnivalEngine()
		{
			///// TODO: Fill this in.
		}
	};
}
