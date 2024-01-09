// Libraries
#pragma once

/// External Libraries
#include <cmath>

/// Internal Libraries
//// There are none right now.

// This namespace denotes being part of the mathematical functions of 'Carnival Engine'.
namespace Math {
	/// A class for any Vector 2, using templates, which I probably don't understand well enough to properly use.
	template <typename Number> class Vector2 {
		//// This is the first value of a `Vector2`.
		public Number x;
		//// This is the second value of a `Vector2`.
		public Number y;

		//// This is the constructor function for the `Vector2` class.
		public Vector2(Number p_x, Number p_y) : x(p_x), y(p_y) {}

		//// This is the function to get the magnitude of this vector.
		public Number CalcMagnitude()
		{
			return sqrt(x^2 + y^2);
		}

		//// This is the function to get the normalized version of this vector.
		public Vector2 Normalized()
		{
			Number magnitude = CalcMagnitude();
			return Vector2(x/magnitude, y/magnitude);
		}

		//// This is a function that will normalize this vector, NOT return this-vector-normalized.
		public void Normalize()
		{
			Vector2 normalizedVec = Noramlized();
			x = normalizedVec.x;
			y = normalizedVec.y;
		}
	}

	/// A class for any Vector 3, using templates, which I probably don't understand well enough to properly use.
	template <typename Number> class Vector3 {
		//// This is the first value of a `Vector3`.
		public Number x;
		//// This is the second value of a `Vector3`.
		public Number y;
		//// This is the third value of a `Vector3`.
		public Number z;

		//// This is the constructor function for the `Vector3` class.
		public Vector3(Number p_x, Number p_y, Number p_z) : x(p_x), y(p_y), z(p_z) {}

		//// This is the function to get the magnitude of this vector.
		public Number CalcMagnitude()
		{
			return sqrt(x^2 + y^2 + z^2);
		}

		//// This is the function to get the normalized version of this vector.
		public Vector3 Normalized()
		{
			Number magnitude = CalcMagnitude();
			return Vector3(x/magnitude, y/magnitude, z/magnitude);
		}

		//// This is a function that will normalize this vector, NOT return this-vector-normalized.
		public void Normalize()
		{
			Vector3 normalizedVec = Noramlized();
			x = normalizedVec.x;
			y = normalizedVec.y;
			z = normalizedVec.z;
		}
	}
}
