/**
 * @Title: 			GeoSize.cpp
 * @Package 		Geometry
 * @Description: 	Implement Class Geometry::GeoSize
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#include "GeoSize.h"

namespace Geometry
{

/**
 * @FuncName: GeoSize(int nWidth, int nHeight)
 * @Description: Custom Constructor Function
 * @param nWidth : int : Width of Size
 * @param nHeight : int : Height of Size
 */
GeoSize::GeoSize(int nWidth, int nHeight)
{
	// TODO Auto-generated constructor stub
	m_nWidth = nWidth;
	m_nHeight = nHeight;
}

/**
 * @FuncName: GeoSize(GeoSize& vSize)
 * @Description: Overriding Copy Constructor Function
 * @param vSize : GeoSize& : GeoSize Object
 */
GeoSize::GeoSize(GeoSize& vSize)
{
	// TODO Auto-generated constructor stub
	m_nWidth = vSize.getWidth();
	m_nHeight = vSize.getHeight();
}

/**
 * @FuncName: GeoPoint(void)
 * @Description: Default Constructor Function
 */
GeoSize::GeoSize()
{
	// TODO Auto-generated constructor stub
	m_nWidth = 0;
	m_nHeight = 0;
}

/**
 * @FuncName: ~GeoPoint(void)
 * @Description: Default Destructor Function
 */
GeoSize::~GeoSize()
{
	// TODO Auto-generated destructor stub
}

/**
 * @FuncName: setSize(int nWidth, int nHeight)
 * @Description: Set Size of Rectangle via Width&Height
 * @param nWidth : int : Width of Size
 * @param nHeight : int : Height of Size
 */
void GeoSize::setSize(int nWidth, int nHeight2)
{
	m_nWidth = nWidth;
	m_nHeight = nHeight2;
}

/**
 * @FuncName: getHeight(void)
 * @Description: Get Height of Size
 * @return int
 */
int GeoSize::getHeight() const
{
	return m_nHeight;
}

/**
 * @FuncName: setHeight(int nHeight)
 * @Description: Set Height of Size
 * @param nHeight : int : Height of Size
 */
void GeoSize::setHeight(int nHeight)
{
	m_nHeight = nHeight;
}

/**
 * @FuncName: getWidth(void)
 * @Description: Get Width of Size
 * @return int
 */
int GeoSize::getWidth() const
{
	return m_nWidth;
}

/**
 * @FuncName: setWidth(int nWidth)
 * @Description: Set Width of Size
 * @param nWidth : int : Width of Size
 */
void GeoSize::setWidth(int nWidth)
{
	m_nWidth = nWidth;
}

} /* namespace SuperChart */
