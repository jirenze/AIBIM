/*************************************************
*  Copyright(c) 2018-2020 DaBanJia
*  All rights reserved.
*
*  文件名称:二维点位
*  简要描述:二维点位计算
*
*  当前版本:V1.0.0
*  作者:jirenze
*  创建日期:2018-09-05
*  说明:
**************************************************/

#pragma once
struct Point2f
{
	float x;

	float y;

public:
	Point2f() {};

	Point2f(float x, float y)
		:x(x), y(y)
	{
	};

	Point2f(const Point2f &point2f);

	~Point2f() {};

	/*****************************************************************
	 *功能描述:加一个数.
	 *
	 * @param number 加的数字.
	 * @return 加number的结果.
	 *****************************************************************/
	Point2f operator+(float number) const;
	/*****************************************************************
	 *功能描述:减一个数.
	 *
	 * @param number 减的数字.
	 * @return 减number的结果.
	 *****************************************************************/
	Point2f operator-(float number) const;

	/*****************************************************************
	 *功能描述:乘以倍数.
	 *
	 * @param scale 乘多少倍.
	 * @return 乘以scale的结果.
	 *****************************************************************/
	Point2f operator*(float scale) const;

	/*****************************************************************
	 *功能描述:两个点相加.
	 *
	 * @param src_point 加上此点.
	 * @return 两点x,y相加的结果.
	 *****************************************************************/
	Point2f operator+(const Point2f &src_point) const;

	/*****************************************************************
	 * 功能描述:向量赋值.
	 *
	 * @param src_point 将此向量赋值给this.
	 * @return x,y赋值.
	 *****************************************************************/
	Point2f operator=(const Point2f &src_point);
	
	/*****************************************************************
	 *功能描述:两个点相减.
	 *
	 * @param src_point 减点.
	 * @return 两点x,y相减的结果.
	 *****************************************************************/
	Point2f operator-(const Point2f &src_point) const;
	
	/*****************************************************************
	 * 功能描述:两个点相乘
	 *
	 * @param src_point 一个点.
	 * @return 两点x,y相乘的结果.
	 *****************************************************************/
	Point2f operator*(const Point2f &src_point) const;

	/*****************************************************************
	 * 功能描述:判断是否点相等.
	 *
	 * @param src_point 判断此点和this是否相等.
	 * @return 两点x,y是否相等的结果.
	 *****************************************************************/
	bool operator==(const Point2f &src_point) const;

	/*****************************************************************
	 * 功能描述:判断this是否大于src_point.
	 *
	 * @param src_point 一个点.
	 * @return 两点x,y同时成立的结果.
	 *****************************************************************/
	bool operator>(const Point2f &src_point) const;

	/*****************************************************************
	 * 功能描述:判断this是否小于src_point.
	 *
	 * @param src_point 一个点.
	 * @return 两点x,y同时成立的结果.
	 *****************************************************************/
	bool operator<(const Point2f &src_point) const;
};
