// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Subface_HeaderFile
#define _StepShape_Subface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_Subface_HeaderFile
#include <Handle_StepShape_Subface.hxx>
#endif

#ifndef _Handle_StepShape_Face_HeaderFile
#include <Handle_StepShape_Face.hxx>
#endif
#ifndef _StepShape_Face_HeaderFile
#include <StepShape_Face.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepShape_HArray1OfFaceBound_HeaderFile
#include <Handle_StepShape_HArray1OfFaceBound.hxx>
#endif
class StepShape_Face;
class TCollection_HAsciiString;
class StepShape_HArray1OfFaceBound;


//! Representation of STEP entity Subface <br>
class StepShape_Subface : public StepShape_Face {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_Subface();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(StepShape_HArray1OfFaceBound)& aFace_Bounds,const Handle(StepShape_Face)& aParentFace) ;
  //! Returns field ParentFace <br>
  Standard_EXPORT     Handle_StepShape_Face ParentFace() const;
  //! Set field ParentFace <br>
  Standard_EXPORT     void SetParentFace(const Handle(StepShape_Face)& ParentFace) ;




  DEFINE_STANDARD_RTTI(StepShape_Subface)

protected:




private: 


Handle_StepShape_Face theParentFace;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif