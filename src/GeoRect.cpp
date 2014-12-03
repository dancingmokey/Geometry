/**
 * @Title: 			GeoRect.cpp
 * @Package 		Geometry
 * @Description: 	Implement Class Geometry::GeoRect
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0
 */

#include "GeoRect.h"

namespace Geometry
{

/**
 * @FuncName: GeoRect(int nX1, int nY1, int nX2, int nY2, int nWidth, int nHeight)
 * @Description: Custom Constructor Function
 * @param nX1 : int : X coordinate of Top-Left Point in Rectangle
 * @param nY1 : int : Y coordinate of Top-Left Point in Rectangle
	 * @param nWidth : int : Width of Rectangle
	 * @param nHeight : int : Height of Rectangle
 */
GeoRect::GeoRect(int nX1, int nY1, int nWidth, int nHeight)
{
	// TODO
	m_pTopLeftPt = new GeoPoint(nX1, nY1);
	m_pBottomRightPt = new GeoPoint(nX1 + nWidth, nY1 + nHeight);
	m_pSize = new GeoSize(nWidth, nHeight);
}

/**
 * @FuncName: GeoRect(GeoPoint* pTopLeftPt, GeoPoint* pBottomRightPt, GeoSize* pSize)
 * @Description: Custom Constructor Function
 * @param pTopLeftPt : GeoPoint* : Top-Left Point in Rectangle
 * @param pBottomRightPt : GeoPoint* : Bottom-Right Point in Rectangle
 */
GeoRect::GeoRect(GeoPoint* pTopLeftPt, GeoPoint* pBottomRightPt)
{
	// TODO
	m_pTopLeftPt = pTopLeftPt;
	m_pBottomRightPt = pBottomRightPt;
	m_pSize = new GeoSize(
			pBottomRightPt->getX() - pTopLeftPt->getX(),
			pBottomRightPt->getX() - pTopLeftPt->getY());
}

/**
 * @FuncName: GeoRect(GeoPoint* pTopLeftPt, GeoPoint* pBottomRightPt, GeoSize* pSize)
 * @Description: Custom Constructor Function
 * @param pTopLeftPt : GeoPoint* : Top-Left Point in Rectangle
 * @param pSize : GeoSize* : Size of Rectangle
 */
GeoRect::GeoRect(GeoPoint* pTopLeftPt, GeoSize* pSize)
{
	// TODO
	m_pTopLeftPt = pTopLeftPt;
	m_pBottomRightPt = new GeoPoint(
			pTopLeftPt->getX() + pSize->getWidth(),
			pTopLeftPt->getY() + pSize->getHeight());
	m_pSize = pSize;
}

/**
 * @FuncName: GeoRect(GeoRect& vGeoRect)
 * @Description: Overriding Copy Constructor Function
 * @param vGeoRect : GeoRect& : GeoRect Object
 */
GeoRect::GeoRect(GeoRect& vGeoRect)
{
	// TODO
	m_pTopLeftPt = vGeoRect.getTopLeftPoint();
	m_pBottomRightPt = vGeoRect.getBottomRightPoint();
	m_pSize = vGeoRect.getSize();
}

/**
 * @FuncName: GeoRect(void)
 * @Description: Default Constructor Function
 */
GeoRect::GeoRect()
{
	// TODO Auto-generated constructor stub
	m_pTopLeftPt = new GeoPoint();
	m_pBottomRightPt = new GeoPoint();
	m_pSize = new GeoSize();

}

/**
 * @FuncName: ~GeoPoint(void)
 * @Description: Default Destructor Function
 */
GeoRect::~GeoRect()
{
	/** Release Pointer */
	if (m_pTopLeftPt != NULL)
	{
		delete m_pTopLeftPt;
		m_pTopLeftPt = NULL;
	}

	/** Release Pointer */
	if (m_pBottomRightPt != NULL)
	{
		delete m_pBottomRightPt;
		m_pBottomRightPt = NULL;
	}

	/** Release Pointer */
	if (m_pSize != NULL)
	{
		delete m_pSize;
		m_pSize = NULL;
	}
}

/**
 * @FuncName: getSize(void)
 * @Description: Get Geosize Object of Rectangle
 * @return GeoSize*
 */
GeoSize* GeoRect::getSize()
{
	return m_pSize;
}

/**
 * @FuncName: setSize(int nWidth, int nHeight)
 * @Description: Set Size of Rectangle via X&Y coordinates
 * @param nWidth : int : Width of Rectangle
 * @param nHeight : int : Height of Rectangle
 */
void GeoRect::setSize(int nWidth, int nHeight)
{
	/** Set Width&Height of Size */
	m_pSize->setWidth(nWidth);
	m_pSize->setHeight(nHeight);

	/** Re-Calculate Parameters of Rectangle */
	ReCalcRectParam(0x02);
}

/**
 * @FuncName: setSize(GeoSize* pSize)
 * @Description: Set Size of Rectangle via GeoSize object
 * @param pSize : GeoSize* : Size of Rectangle
 */
void GeoRect::setSize(GeoSize* size)
{
	/** Set Width&Height of Size */
	m_pSize = size;

	/** Re-Calculate Parameters of Rectangle */
	ReCalcRectParam(0x02);
}

/**
 * @FuncName: setTopLeftPoint(int nX, int nY)
 * @Description: Set Top-Left Point of Rectangle via X&Y coordinates
 * @param nX : int : X coordinate of Top-Left Point
 * @param nY : int : Y coordinate of Top-Left Point
 */
void GeoRect::setTopLeftPoint(int nX, int nY)
{
	/** Set Top-Left Point Coordinate*/
	m_pTopLeftPt->setX(nX);
	m_pTopLeftPt->setY(nY);

	/** Re-Calculate Parameters of Rectangle */
	ReCalcRectParam(0x01);
}

/**
 * @FuncName: setTopLeftPoint(GeoPoint* pTopLeftPt)
 * @Description: Set Top-Left Point of Rectangle via GeoPoint Object
 * @param pTopLeftPt : GeoPoint* : Top-Left Point Object
 */
void GeoRect::setTopLeftPoint(GeoPoint* pTopLeftPt)
{
	/** Set Top-Left Point Coordinate*/
	m_pTopLeftPt = pTopLeftPt;

	/** Re-Calculate Parameters of Rectangle */
	ReCalcRectParam(0x01);
}

/**
 * @FuncName: setBottomRightPoint(int nX, int nY)
 * @Description: Set Bottom-Right Point of Rectangle via X&Y coordinates
 * @param nX : int : X coordinate of Bottom-Right Point
 * @param nY : int : Y coordinate of Bottom-Right Point
 */
void GeoRect::setBottomRightPoint(int nX, int nY)
{
	/** Set Bottom-Right Point Coordinate*/
	m_pBottomRightPt->setX(nX);
	m_pBottomRightPt->setY(nY);

	/** Re-Calculate Parameters of Rectangle */
	ReCalcRectParam(0x01);
}

/**
 * @FuncName: setBottomRightPoint(GeoPoint* pBottomRighPt)
 * @Description: Set Bottom-Right Point of Rectangle via GeoPoint Object
 * @param pTopLeftPt : GeoPoint* : Bottom-Right Point Object
 */
void GeoRect::setBottomRightPoint(GeoPoint* pBottomRightPt)
{
	/** Set Bottom-Right Point Coordinate*/
	m_pBottomRightPt = pBottomRightPt;

	/** Re-Calculate Parameters of Rectangle */
	ReCalcRectParam(0x01);
}

/**
 * @FuncName: getTopLeftPoint(void)
 * @Description: Get Top-Left Point of Rectangle
 * @return GeoPoint*
 */
GeoPoint* GeoRect::getTopLeftPoint()
{
	return m_pTopLeftPt;
}

/**
 * @FuncName: getBottomRightPoint(void)
 * @Description: Get Bottom-Right Point of Rectangle
 * @return GeoPoint*
 */
GeoPoint* GeoRect::getBottomRightPoint()
{
	return m_pBottomRightPt;
}

/**
 * @FuncName: ReCalcRectParam(void)
 * @Description: Re-Calculate Parameters of Rectangle once something changed
 */
void GeoRect::ReCalcRectParam(unsigned char nBased)
{
	/** Top-Left or Bottom-Right Point Changed */
	if ((nBased == 0x01) ||
		(nBased == 0x02))
	{
		m_pSize = new GeoSize(
				m_pBottomRightPt->getX() - m_pTopLeftPt->getX(),
				m_pBottomRightPt->getX() - m_pTopLeftPt->getY());
		return;
	}

	/** Size Changed */
	if (nBased == 0x03)
	{
		m_pBottomRightPt = new GeoPoint(
				m_pTopLeftPt->getX() + m_pSize->getWidth(),
				m_pTopLeftPt->getY() + m_pSize->getHeight());
		return;
	}
}

} /* namespace Geometry */
