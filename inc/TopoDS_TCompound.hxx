// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_TCompound_HeaderFile
#define _TopoDS_TCompound_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopoDS_TCompound.hxx>

#include <TopoDS_TShape.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Handle_TopoDS_TShape.hxx>
class TopoDS_TShape;


//! A TCompound is an all-purpose set of Shapes.
class TopoDS_TCompound : public TopoDS_TShape
{

public:

  
  //! Creates an empty TCompound.
    TopoDS_TCompound();
  
  //! Returns COMPOUND.
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;
  
  //! Returns an empty TCompound.
  Standard_EXPORT   Handle(TopoDS_TShape) EmptyCopy()  const;




  DEFINE_STANDARD_RTTI(TopoDS_TCompound)

protected:




private: 




};


#include <TopoDS_TCompound.lxx>





#endif // _TopoDS_TCompound_HeaderFile
