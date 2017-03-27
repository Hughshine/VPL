/*******************************************************************************
 * Copyright (c) 2016 Dec. Verimag. All rights reserved.
 * @author Hang YU
 * Point class contains the coordinate of a point, and the boolean value marks
 * if the point is empty.
*******************************************************************************/

#ifndef _EIGEN
#define _EIGEN
#include <eigen3/Eigen/Dense>
#endif

#include <ostream>

typedef Eigen::VectorXd Vector ;

class Point {
public:
  Point () ;
  Point (const Vector& coordinates) ;
  void set_coordinates (const Vector& coordinates) ;
  Vector get_coordinates (void) const ;
  // void SetCoord (int idx, double val) ;
  bool IsEmpty () const ;
  void Clear () ;
  friend std::ostream& operator<< (std::ostream& out, const Point& point) ;
  Point& operator= (const Point& point) ;
private:
  Vector _coordinates ;
  bool _is_empty ;
} ;
