/**
 * @Title: 			GeoLine.h
 * @Package 		Geometry
 * @Description: 	Define Class Geometry::GeoLine
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#ifndef GEOLINE_H_
#define GEOLINE_H_

#include <stdlib.h>
#include "GeoPoint.h"

namespace Geometry
{

/**
 * @ClassName: 		Geometry::GeoLine
 * @NameSpace: 		Geometry
 * @Description: 	Class Described Methods and Attributes of Geometry Line
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */
class GeoLine
{
public:
	/**
	 * @FuncName: GeoLine(int nX1, int nY1, int nX2, int nY2)
	 * @Description: Custom Constructor Function
	 * @param nX1 : int : X Coordinate of Start Point in Line
	 * @param nY1 : int : Y Coordinate of Start Point in Line
	 * @param nX2 : int : X Coordinate of End Point in Line
	 * @param nY2 : int : Y Coordinate of End Point in Line
	 */
	GeoLine(int nX1, int nY1, int nX2, int nY2);

	/**
	 * @FuncName: GeoLine(GeoPoint* pStartPt, GeoPoint* pEndPt)
	 * @Description: Custom Constructor Function
	 * @param pStartPt : GeoPoint* : Start Point in Line
	 * @param pEndPt : GeoPoint* : End Point in Line
	 */
	GeoLine(GeoPoint* pStartPt, GeoPoint* pEndPt);

	/**
	 * @FuncName: GeoSize(GeoSize& vSize)
	 * @Description: Overriding Copy Constructor Function
	 * @param vLine : GeoLine& : GeoLine Object
	 */
	GeoLine(GeoLine& vLine);

	/**
	 * @FuncName: GeoLine(void)
	 * @Description: Default Constructor Function
	 */
	GeoLine();

	/**
	 * @FuncName: ~GeoLine(void)
	 * @Description: Default Destructor Function
	 */
	virtual ~GeoLine();

public:
	/**
	 * @FuncName: setStartPoint(int nX, int nY)
	 * @Description: Set Start Point of Line via X&Y corrdinate
	 * @param nX : int : X corrdinate of the Start Point in Line
	 * @param nY : int : Y corrdinate of the Start Point in Line
	 */
	void setStartPoint(int nX, int nY);

	/**
	 * @FuncName: setStartPoint(GeoPoint* pStartPt)
	 * @Description: Set Start Point of Line via GeoPoint Object
	 * @param pStartPt : GeoPoint* : GeoPoint Object
	 */
	void setStartPoint(GeoPoint* pStartPt);

	/**
	 * @FuncName: setEndPoint(int nX, int nY)
	 * @Description: Set End Point of Line via X&Y corrdinate
	 * @param nX : int : X corrdinate of the End Point in Line
	 * @param nY : int : Y corrdinate of the End Point in Line
	 */
	void setEndPoint(int nX, int nY);

	/**
	 * @FuncName: setEndPoint(GeoPoint* pStartPt)
	 * @Description: Set End Point of Line via GeoPoint Object
	 * @param pStartPt : GeoPoint* : GeoPoint Object
	 */
	void setEndPoint(GeoPoint* pEndPt);

	/**
	 * @FuncName: getStartPoint(void)
	 * @Description: Get Start Point of Line
	 * @return int
	 */
	GeoPoint* getStartPoint();

	/**
	 * @FuncName: getEndPoint(void)
	 * @Description: Get End Point of Line
	 * @return int
	 */
	GeoPoint* getEndPoint();

private:
	/**
	 * @Field : m_pStartPt : GeoPoint* : Start Point of Line
	 */
	GeoPoint* m_pStartPt;
	/**
	 * @Field : m_pEndPt : GeoPoint* : End Point of Line
	 */
	GeoPoint* m_pEndPt;
};

} /* namespace Geometry */

#endif /* GEOLINE_H_ */
