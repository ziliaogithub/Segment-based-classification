// This file is part of the robovision library, (c) Jens Behley, 2015.
//
// The code is provided for educational purposes in the lecture
//        "Knowledge-based Image Understanding", summer term 2015,
// and shall not be redistributed or used in commercial products.

#ifndef OPENGL_UTILS_H_
#define OPENGL_UTILS_H_

#include "geometry.h"

/**
 * \brief some utility functions to draw different geometric primitives.
 *
 * \author behley.
 ***/

namespace rv
{

/** \brief draws a set of n triangles given by a list of Point3fs and a list of indices. */
void drawTriangles(uint32_t n, Point3f* vertices, int* indices);

/** \brief draws a cube with given side_length **/
void drawCube(float side_length);

/** \brief draws a cylinder with given radius and height. n is the number of samples for the base
 *  The base of the cylinder is at (0,0,0) and the cylinder is oriented such that
 *  the rotational axis of the cylinder is the z-axis.
 **/
void drawCylinder(float radius, float height,  int n = 16);
/** \brief draws a cone with given radius and height **/
void drawCone(float radius, float height,  int n = 16);
/** \brief draws a sphere with given radius **/
void drawSphere(float radius, int n = 16);

/** \brief draws an arrow starting at start and of length |dir| and direction of dir **/
void drawArrow(const Point3f& start, const Vector3f& dir, float lineWidth = 0.1f);
/** \brief draws an arrow starting at start and ending at end **/
void drawArrow(const Point3f& start, const Point3f& end, float lineWidth = 0.1f);

}
#endif /* OPENGL_UTILS_H_ */
