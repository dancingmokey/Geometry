/**
 * @Title: 			GeoPoint.h
 * @Package 		Geometry
 * @Description: 	Define Class Geometry::GeoPoint
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#ifndef GEOPOINT_H_
#define GEOPOINT_H_

namespace Geometry
{

/**
 * @ClassName: 		Geometry::GeoPoint
 * @NameSpace: 		Geometry
 * @Description: 	Class Described Methods and Attributes of Geometry Point
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */
class GeoPoint
{
public:
	/**
	 * @FuncName: GeoPoint(int nX, int nY)
	 * @Description: Custom Constructor Function
	 * @param nX : int : X coordinate of Point
	 * @param nY : int : Y coordinate of Point
	 */
	GeoPoint(int nX, int nY);

	/**
	 * @FuncName: GeoPoint(GeoPoint& vGeoPoint)
	 * @Description: Overriding Copy Constructor Function
	 * @param vGeoPoint : GeoPoint& : GeoPoint Object
	 */
	GeoPoint(GeoPoint& vGeoPoint);

	/**
	 * @FuncName: GeoPoint(void)
	 * @Description: Default Constructor Function
	 */
	GeoPoint(void);

	/**
	 * @FuncName: ~GeoPoint(void)
	 * @Description: Default Destructor Function
	 */
	virtual ~GeoPoint(void);

public:
	/**
	 * @FuncName: setPoint(int nX, int nY)
	 * @Description: Set Point Value via X&Y coordinates
	 * @param nX : int : X coordinate of Point
	 * @param nY : int : Y coordinate of Point
	 */
	void setPoint(int nX, int nY);

	/**
	 * @FuncName: setX(int nX)
	 * @Description: Set X coordinates of Point
	 * @param nX : int : X coordinate of Point
	 */
	void setX(int nX);

	/**
	 * @FuncName: setY(int nY)
	 * @Description: Set Y coordinates of Point
	 * @param nY : int : Y coordinate of Point
	 */
	void setY(int nY);

	/**
	 * @FuncName: getX(void)
	 * @Description: Get X coordinates of Point
	 * @return int
	 */
	int getX(void) const;

	/**
	 * @FuncName: getY(void)
	 * @Description: Get Y coordinates of Point
	 * @return int
	 */
	int getY(void) const;

private:
	/**
	 * @Field : m_nX : int : X Coordinate of Point
	 */
	int m_nX;

	/**
	 * @Field : m_nY : int : Y Coordinate of Point
	 */
	int m_nY;
};

} /* namespace Geometry */

#endif /* GEOPOINT_H_ */
