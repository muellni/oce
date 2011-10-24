// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_Ellipse_HeaderFile
#define _Geom_Ellipse_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_Ellipse_HeaderFile
#include <Handle_Geom_Ellipse.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom_Conic_HeaderFile
#include <Geom_Conic.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
class Standard_ConstructionError;
class Standard_RangeError;
class gp_Elips;
class gp_Ax2;
class gp_Ax1;
class gp_Pnt;
class gp_Vec;
class gp_Trsf;
class Geom_Geometry;


//!  Describes an ellipse in 3D space. <br>
//! An ellipse is defined by its major and minor radii and, <br>
//! as with any conic curve, is positioned in space with a <br>
//! right-handed coordinate system (gp_Ax2 object) where: <br>
//! - the origin is the center of the ellipse, <br>
//! - the "X Direction" defines the major axis, and <br>
//! - the "Y Direction" defines the minor axis. <br>
//! The origin, "X Direction" and "Y Direction" of this <br>
//! coordinate system define the plane of the ellipse. The <br>
//! coordinate system is the local coordinate system of the ellipse. <br>
//! The "main Direction" of this coordinate system is the <br>
//! vector normal to the plane of the ellipse. The axis, of <br>
//! which the origin and unit vector are respectively the <br>
//! origin and "main Direction" of the local coordinate <br>
//! system, is termed the "Axis" or "main Axis" of the ellipse. <br>
//! The "main Direction" of the local coordinate system <br>
//! gives an explicit orientation to the ellipse (definition of <br>
//! the trigonometric sense), determining the direction in <br>
//! which the parameter increases along the ellipse. <br>
//! The Geom_Ellipse ellipse is parameterized by an angle: <br>
//! P(U) = O + MajorRad*Cos(U)*XDir + MinorRad*Sin(U)*YDir <br>
//! where: <br>
//! - P is the point of parameter U, <br>
//! - O, XDir and YDir are respectively the origin, "X <br>
//!   Direction" and "Y Direction" of its local coordinate system, <br>
//! - MajorRad and MinorRad are the major and minor radii of the ellipse. <br>
//! The "X Axis" of the local coordinate system therefore <br>
//! defines the origin of the parameter of the ellipse. <br>
//! An ellipse is a closed and periodic curve. The period <br>
//! is 2.*Pi and the parameter range is [ 0, 2.*Pi [. <br>
class Geom_Ellipse : public Geom_Conic {

public:

  //! Constructs an ellipse by conversion of the gp_Elips ellipse E. <br>
  Standard_EXPORT   Geom_Ellipse(const gp_Elips& E);
  //! Constructs an ellipse <br>
//!	defined by its major and minor radii, MajorRadius <br>
//!   and MinorRadius, where A2 locates the ellipse <br>
//!   and defines its orientation in 3D space such that: <br>
//!   - the center of the ellipse is the origin of A2, <br>
//!   - the "X Direction" of A2 defines the major axis <br>
//!    of the ellipse, i.e. the major radius <br>
//!    MajorRadius is measured along this axis, <br>
//!   - the "Y Direction" of A2 defines the minor axis <br>
//!    of the ellipse, i.e. the minor radius <br>
//!    MinorRadius is measured along this axis, <br>
//!   - A2 is the local coordinate system of the ellipse. <br>
//!        Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MajorRadius is less than MinorRadius, or <br>
//! - MinorRadius is less than 0. <br>
//!  Warning The Geom package does not prevent the <br>
//! construction of an ellipse where MajorRadius and <br>
//! MinorRadius are equal. <br>
  Standard_EXPORT   Geom_Ellipse(const gp_Ax2& A2,const Standard_Real MajorRadius,const Standard_Real MinorRadius);
  //! Converts the gp_Elips ellipse E into this ellipse. <br>
  Standard_EXPORT     void SetElips(const gp_Elips& E) ;
  //! Assigns a value to the major radius of this ellipse. <br>
//!       ConstructionError raised if MajorRadius < MinorRadius. <br>
  Standard_EXPORT     void SetMajorRadius(const Standard_Real MajorRadius) ;
  //! Assigns a value to the minor radius of this ellipse. <br>
//!  ConstructionError raised if MajorRadius < MinorRadius or if MinorRadius < 0. <br>
  Standard_EXPORT     void SetMinorRadius(const Standard_Real MinorRadius) ;
  
//!  returns the non transient ellipse from gp with the same <br>
  Standard_EXPORT     gp_Elips Elips() const;
  //! Computes the parameter on the reversed ellipse for <br>
//!  the point of parameter U on this ellipse. <br>
//!  For an ellipse, the returned value is: 2.*Pi - U. <br>
  Standard_EXPORT     Standard_Real ReversedParameter(const Standard_Real U) const;
  
//!  This directrix is the line normal to the XAxis of the ellipse <br>
//!  in the local plane (Z = 0) at a distance d = MajorRadius / e <br>
//!  from the center of the ellipse, where e is the eccentricity of <br>
//!  the ellipse. <br>
//!  This line is parallel to the "YAxis". The intersection point <br>
//!  between directrix1 and the "XAxis" is the "Location" point <br>
//!  of the directrix1. This point is on the positive side of <br>
//!  the "XAxis". <br>//! Raised if Eccentricity = 0.0. (The ellipse degenerates <br>
//!  into a circle) <br>
  Standard_EXPORT     gp_Ax1 Directrix1() const;
  
//!  This line is obtained by the symmetrical transformation <br>
//!  of "Directrix1" with respect to the "YAxis" of the ellipse. <br>
//!  Raised if Eccentricity = 0.0. (The ellipse degenerates into a <br>
//!  circle). <br>
  Standard_EXPORT     gp_Ax1 Directrix2() const;
  
//!  Returns the eccentricity of the ellipse  between 0.0 and 1.0 <br>
//!  If f is the distance between the center of the ellipse and <br>
//!  the Focus1 then the eccentricity e = f / MajorRadius. <br>
//!  Returns 0 if MajorRadius = 0 <br>
  Standard_EXPORT     Standard_Real Eccentricity() const;
  
//!  Computes the focal distance. It is the distance between the <br>
//!  the two focus of the ellipse. <br>
  Standard_EXPORT     Standard_Real Focal() const;
  
//!  Returns the first focus of the ellipse. This focus is on the <br>
//!  positive side of the "XAxis" of the ellipse. <br>
  Standard_EXPORT     gp_Pnt Focus1() const;
  
//!  Returns the second focus of the ellipse. This focus is on <br>
//!  the negative side of the "XAxis" of the ellipse. <br>
  Standard_EXPORT     gp_Pnt Focus2() const;
  //! Returns the major  radius of this ellipse. <br>
  Standard_EXPORT     Standard_Real MajorRadius() const;
  //! Returns the minor radius of this ellipse. <br>
  Standard_EXPORT     Standard_Real MinorRadius() const;
  
//!  Returns p = (1 - e * e) * MajorRadius where e is the eccentricity <br>
//!  of the ellipse. <br>
//!  Returns 0 if MajorRadius = 0 <br>
  Standard_EXPORT     Standard_Real Parameter() const;
  //! Returns the value of the first parameter of this <br>
//! ellipse. This is respectively: <br>
//! - 0.0, which gives the start point of this ellipse, or <br>
//!  The start point and end point of an ellipse are coincident. <br>
  Standard_EXPORT     Standard_Real FirstParameter() const;
  //! Returns the value of the  last parameter of this <br>
//! ellipse. This is respectively: <br>
//! - 2.*Pi, which gives the end point of this ellipse. <br>
//!  The start point and end point of an ellipse are coincident. <br>
  Standard_EXPORT     Standard_Real LastParameter() const;
  //! return True. <br>
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  //! return True. <br>
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  //! Returns in P the point of parameter U. <br>
//!  P = C + MajorRadius * Cos (U) * XDir + MinorRadius * Sin (U) * YDir <br>
//!  where C is the center of the ellipse , XDir the direction of <br>
//!  the "XAxis" and "YDir" the "YAxis" of the ellipse. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V1) const;
  
//!  Returns the point P of parameter U. The vectors V1 and V2 <br>
//!  are the first and second derivatives at this point. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
//!  Returns the point P of parameter U, the first second and <br>
//!  third derivatives V1 V2 and V3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  //! For the point of parameter U of this ellipse, computes <br>
//! the vector corresponding to the Nth derivative. <br>
//! Exceptions Standard_RangeError if N is less than 1. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //! Applies the transformation T to this ellipse. <br>
  Standard_EXPORT     void Transform(const gp_Trsf& T) ;
  //! Creates a new object which is a copy of this ellipse. <br>
  Standard_EXPORT     Handle_Geom_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom_Ellipse)

protected:




private: 


Standard_Real majorRadius;
Standard_Real minorRadius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif