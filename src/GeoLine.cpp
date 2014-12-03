/**
 * @Title: 			GeoLine.cpp
 * @Package 		Geometry
 * @Description: 	Implement Class Geometry::GeoLine
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#include "GeoLine.h"

namespace Geometry
{

/**
 * @FuncName: GeoLine(int nX1, int nY1, int nX2, int nY2)
 * @Description: Custom Constructor Function
 * @param nX1 : int : X Coordinate of Start Point in Line
 * @param nY1 : int : Y Coordinate of Start Point in Line
 * @param nX2 : int : X Coordinate of End Point in Line
 * @param nY2 : int : Y Coordinate of End Point in Line
 */
GeoLine::GeoLine(int nX1, int nY1, int nX2, int nY2)
{
	// TODO Auto-generated constructor stub
	m_pStartPt = new GeoPoint(nX1, nY1);
	m_pEndPt = new GeoPoint(nX2, nY2);

}

/**
 * @FuncName: GeoLine(GeoPoint* pStartPt, GeoPoint* pEndPt)
 * @Description: Custom Constructor Function
 * @param pStartPt : GeoPoint* : Start Point in Line
 * @param pEndPt : GeoPoint* : End Point in Line
 */
GeoLine::GeoLine(GeoPoint* pStartPt, GeoPoint* pEndPt)
{
	// TODO Auto-generated constructor stub
	m_pStartPt = pStartPt;
	m_pEndPt = pEndPt;

}

/**
 * @FuncName: GeoSize(GeoSize& vSize)
 * @Description: Overriding Copy Constructor Function
 * @param vLine : GeoLine& : GeoLine Object
 */
GeoLine::GeoLine(GeoLine& vLine)
{
	// TODO Auto-generated constructor stub
	m_pStartPt = vLine.getStartPoint();
	m_pEndPt = vLine.getEndPoint();
}

/**
 * @FuncName: GeoLine(void)
 * @Description: Default Constructor Function
 */
GeoLine::GeoLine()
{
	// TODO Auto-generated constructor stub
	m_pStartPt = new GeoPoint();
	m_pEndPt = new GeoPoint();
}

/**
 * @FuncName: ~GeoLine(void)
 * @Description: Default Destructor Function
 */
GeoLine::~GeoLine()
{
	/** Release Pointer */
	if (m_pStartPt != NULL)
	{
		delete m_pStartPt;
		m_pStartPt = NULL;
	}

	/** Release Pointer */
	if (m_pEndPt != NULL)
	{
		delete m_pEndPt;
		m_pEndPt = NULL;
	}
}

/**
 * @FuncName: setStartPoint(int nX, int nY)
 * @Description: Set Start Point of Line via X&Y corrdinate
 * @param nX : int : X corrdinate of the Start Point in Line
 * @param nY : int : Y corrdinate of the Start Point in Line
 */
void GeoLine::setStartPoint(int nX, int nY)
{
	m_pStartPt->setX(nX);
	m_pStartPt->setY(nY);
}

/**
 * @FuncName: setStartPoint(GeoPoint* pStartPt)
 * @Description: Set Start Point of Line via GeoPoint Object
 * @param pStartPt : GeoPoint* : GeoPoint Object
 */
void GeoLine::setStartPoint(GeoPoint* pStartPt)
{
	m_pStartPt = pStartPt;
}

/**
 * @FuncName: setEndPoint(int nX, int nY)
 * @Description: Set End Point of Line via X&Y corrdinate
 * @param nX : int : X corrdinate of the End Point in Line
 * @param nY : int : Y corrdinate of the End Point in Line
 */
void GeoLine::setEndPoint(int nX, int nY)
{
	m_pEndPt->setX(nX);
	m_pEndPt->setY(nY);
}

/**
 * @FuncName: setEndPoint(GeoPoint* pStartPt)
 * @Description: Set End Point of Line via GeoPoint Object
 * @param pStartPt : GeoPoint* : GeoPoint Object
 */
void GeoLine::setEndPoint(GeoPoint* pEndPt)
{
	m_pEndPt = pEndPt;
}

/**
 * @FuncName: getStartPoint(void)
 * @Description: Get Start Point of Line
 * @return int
 */
GeoPoint* GeoLine::getStartPoint()
{
	return m_pStartPt;
}

/**
 * @FuncName: getEndPoint(void)
 * @Description: Get End Point of Line
 * @return int
 */
GeoPoint* GeoLine::getEndPoint()
{
	return m_pEndPt;
}

} /* namespace Geometry */
