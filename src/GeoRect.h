/**
 * @Title: 			GeoRect.h
 * @Package 		Geometry
 * @Description: 	Define Class Geometry::GeoRect
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#ifndef GEORECT_H_
#define GEORECT_H_


#include <stdlib.h>
#include "GeoPoint.h"
#include "GeoSize.h"

namespace Geometry
{

/**
 * @ClassName: 		Geometry::GeoRect
 * @NameSpace: 		Geometry
 * @Description: 	Class Described Methods and Attributes of Geometry Rectangle
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */
class GeoRect
{
public:
	/**
	 * @FuncName: GeoRect(int nX1, int nY1, int nX2, int nY2, int nWidth, int nHeight)
	 * @Description: Custom Constructor Function
	 * @param nX1 : int : X coordinate of Top-Left Point in Rectangle
	 * @param nY1 : int : Y coordinate of Top-Left Point in Rectangle
	 * @param nWidth : int : Width of Rectangle
	 * @param nHeight : int : Height of Rectangle
	 */
	GeoRect(int nX1, int nY1, int nWidth, int nHeight);

	/**
	 * @FuncName: GeoRect(GeoPoint* pTopLeftPt, GeoPoint* pBottomRightPt, GeoSize* pSize)
	 * @Description: Custom Constructor Function
	 * @param pTopLeftPt : GeoPoint* : Top-Left Point in Rectangle
	 * @param pBottomRightPt : GeoPoint* : Bottom-Right Point in Rectangle
	 */
	GeoRect(GeoPoint* pTopLeftPt, GeoPoint* pBottomRightPt);

	/**
	 * @FuncName: GeoRect(GeoPoint* pTopLeftPt, GeoPoint* pBottomRightPt, GeoSize* pSize)
	 * @Description: Custom Constructor Function
	 * @param pTopLeftPt : GeoPoint* : Top-Left Point in Rectangle
	 * @param pSize : GeoSize* : Size of Rectangle
	 */
	GeoRect(GeoPoint* pTopLeftPt, GeoSize* pSize);

	/**
	 * @FuncName: GeoRect(GeoRect& vGeoRect)
	 * @Description: Overriding Copy Constructor Function
	 * @param vGeoRect : GeoRect& : GeoRect Object
	 */
	GeoRect(GeoRect& vGeoRect);

	/**
	 * @FuncName: GeoRect(void)
	 * @Description: Default Constructor Function
	 */
	GeoRect();

	/**
	 * @FuncName: ~GeoPoint(void)
	 * @Description: Default Destructor Function
	 */
	virtual ~GeoRect();

public:
	/**
	 * @FuncName: getSize(void)
	 * @Description: Get Geosize Object of Rectangle
	 * @return GeoSize*
	 */
	GeoSize* getSize(void);

	/**
	 * @FuncName: setSize(int nWidth, int nHeight)
	 * @Description: Set Size of Rectangle via Width&Height
	 * @param nWidth : int : Width of Rectangle
	 * @param nHeight : int : Height of Rectangle
	 */
	void setSize(int nWidth, int nHeight);

	/**
	 * @FuncName: setSize(GeoSize* pSize)
	 * @Description: Set Size of Rectangle via GeoSize object
	 * @param pSize : GeoSize* : Size of Rectangle
	 */
	void setSize(GeoSize* pSize);

	/**
	 * @FuncName: setTopLeftPoint(int nX, int nY)
	 * @Description: Set Top-Left Point of Rectangle via X&Y coordinates
	 * @param nX : int : X coordinate of Top-Left Point
	 * @param nY : int : Y coordinate of Top-Left Point
	 */
	void setTopLeftPoint(int nX, int nY);

	/**
	 * @FuncName: setTopLeftPoint(GeoPoint* pTopLeftPt)
	 * @Description: Set Top-Left Point of Rectangle via GeoPoint Object
	 * @param pTopLeftPt : GeoPoint* : Top-Left Point Object
	 */
	void setTopLeftPoint(GeoPoint* pTopLeftPt);

	/**
	 * @FuncName: setBottomRightPoint(int nX, int nY)
	 * @Description: Set Bottom-Right Point of Rectangle via X&Y coordinates
	 * @param nX : int : X coordinate of Bottom-Right Point
	 * @param nY : int : Y coordinate of Bottom-Right Point
	 */
	void setBottomRightPoint(int nX, int nY);

	/**
	 * @FuncName: setBottomRightPoint(GeoPoint* pBottomRighPt)
	 * @Description: Set Bottom-Right Point of Rectangle via GeoPoint Object
	 * @param pTopLeftPt : GeoPoint* : Bottom-Right Point Object
	 */
	void setBottomRightPoint(GeoPoint* pBottomRighPt);

	/**
	 * @FuncName: getTopLeftPoint(void)
	 * @Description: Get Top-Left Point of Rectangle
	 * @return GeoPoint*
	 */
	GeoPoint* getTopLeftPoint(void);

	/**
	 * @FuncName: getBottomRightPoint(void)
	 * @Description: Get Bottom-Right Point of Rectangle
	 * @return GeoPoint*
	 */
	GeoPoint* getBottomRightPoint(void);

public:
	/**
	 * @FuncName: ReCalcRectParam(void)
	 * @Description: Re-Calculate Parameters of Rectangle once something changed
	 * @param nBased : unsigned char : Sign of the value which has been Changed
	 * 								   Value : 0x01 : Top-Left or Bottom-Right Point
	 * 								           0x02 : Size
	 */
	void ReCalcRectParam(unsigned char nBased);

private:
	/**
	 * @Field : m_pTopLeftPt : GeoPoint* : Top-Left Point of Rectangle
	 */
	GeoPoint* m_pTopLeftPt;
	/**
	 * @Field : m_pBottomRightPt : GeoPoint* : Bottom-Right Point of Rectangle
	 */
	GeoPoint* m_pBottomRightPt;
	/**
	 * @Field : m_pSize : GeoSize* : Size of Rectangle
	 */
	GeoSize* m_pSize;
};

} /* namespace Geometry */

#endif /* GEORECT_H_ */
