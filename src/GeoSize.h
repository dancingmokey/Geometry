/**
 * @Title: 			GeoSize.h
 * @Package 		Geometry
 * @Description: 	Define Class Geometry::GeoSize
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */

#ifndef GEOSIZE_H_
#define GEOSIZE_H_

namespace Geometry
{

/**
 * @ClassName: 		SuperChart::GeoSize
 * @NameSpace: 		Geometry
 * @Description: 	Class Described Methods and Attributes of Geometry Size
 * @Author: 		LiuLei
 * @Created on: 	2014/12/02
 * @Version:		V1.0.0	
 */
class GeoSize
{
public:
	/**
	 * @FuncName: GeoSize(int nWidth, int nHeight)
	 * @Description: Custom Constructor Function
	 * @param nWidth : int : Width of Size
	 * @param nHeight : int : Height of Size
	 */
	GeoSize(int nWidth, int nHeight);

	/**
	 * @FuncName: GeoSize(GeoSize& vSize)
	 * @Description: Overriding Copy Constructor Function
	 * @param vSize : GeoSize& : GeoSize Object
	 */
	GeoSize(GeoSize& vSize);

	/**
	 * @FuncName: GeoPoint(void)
	 * @Description: Default Constructor Function
	 */
	GeoSize(void);

	/**
	 * @FuncName: ~GeoPoint(void)
	 * @Description: Default Destructor Function
	 */
	virtual ~GeoSize(void);

public:
	/**
	 * @FuncName: setSize(int nWidth, int nHeight)
	 * @Description: Set Size of Rectangle via Width&Height
	 * @param nWidth : int : Width of Size
	 * @param nHeight : int : Height of Size
	 */
	void setSize(int nWidth, int nHeight);

	/**
	 * @FuncName: setHeight(int nHeight)
	 * @Description: Set Height of Size
	 * @param nHeight : int : Height of Size
	 */
	void setHeight(int nHeight);

	/**
	 * @FuncName: setWidth(int nWidth)
	 * @Description: Set Width of Size
	 * @param nWidth : int : Width of Size
	 */
	void setWidth(int nWidth);

	/**
	 * @FuncName: getHeight(void)
	 * @Description: Get Height of Size
	 * @return int
	 */
	int getHeight(void) const;

	/**
	 * @FuncName: getWidth(void)
	 * @Description: Get Width of Size
	 * @return int
	 */
	int getWidth() const;

private:
	/**
	 * @Field : m_nWidth : int : Width of Size
	 */
	int m_nWidth;
	/**
	 * @Field : m_nHeight : int : Height of Size
	 */
	int m_nHeight;
};

} /* namespace SuperChart */

#endif /* GEOSIZE_H_ */
