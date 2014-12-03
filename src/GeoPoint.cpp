/**
 * @Title: 			GeoPoint.cpp
 * @Package 		Geometry
 * @Description: 	Implement Class Geometry::GeoPoint
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#include "GeoPoint.h"

namespace Geometry
{
/**
 * @FuncName: GeoPoint(int nX, int nY)
 * @Description: Custom Constructor Function
 * @param nX : int : X coordinate of Point
 * @param nY : int : Y coordinate of Point
 */
GeoPoint::GeoPoint(int nX, int nY)
{
	// TODO
	m_nX = nX;
	m_nY = nY;
}

/**
 * @FuncName: GeoPoint(GeoPoint& vGeoPoint)
 * @Description: Overriding Copy Constructor Function
 * @param vGeoPoint : GeoPoint& :  GeoPoint Object
 */
GeoPoint::GeoPoint(GeoPoint& vGeoPoint)
{
	// TODO Auto-generated constructor stub
	m_nX = vGeoPoint.getX();
	m_nY = vGeoPoint.getY();
}

/**
 * @FuncName: GeoPoint()
 * @Description: Default Constructor Function
 */
GeoPoint::GeoPoint()
{
	// TODO Auto-generated constructor stub
	m_nX = 0;
	m_nY = 0;
}

/**
 * @FuncName: ~GeoPoint()
 * @Description: Default Destructor Function
 */
GeoPoint::~GeoPoint()
{
	// TODO Auto-generated destructor stub
}

/**
 * @FuncName: setPoint(int nX, int nY)
 * @Description: Set Point Value via X&Y coordinates
 * @param nX : int : X coordinate of Point
 * @param nY : int : Y coordinate of Point
 * @return void:
 */
void GeoPoint::setPoint(int nX, int nY)
{
	m_nX = nX;
	m_nY = nY;
}

/**
 * @FuncName: setX(int nX)
 * @Description: Set X coordinates of Point
 * @param nX : int : X coordinate of Point
 * @return void:
 */
void GeoPoint::setX(int nX)
{
	m_nX = nX;
}

/**
 * @FuncName: setY(int nY)
 * @Description: Set Y coordinates of Point
 * @param nY : int : Y coordinate of Point
 * @return void:
 */
void GeoPoint::setY(int nY)
{
	m_nY = nY;
}

/**
 * @FuncName: getX()
 * @Description: Get X coordinates of Point
 * @param
 * @return int
 */
int GeoPoint::getX() const
{
	return m_nX;
}

/**
 * @FuncName: getY()
 * @Description: Get Y coordinates of Point
 * @param
 * @return int
 */
int GeoPoint::getY() const
{
	return m_nY;
}

} /* namespace Geometry */
