// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPoly_IndexedMapOfPnt_HeaderFile
#define _IntPoly_IndexedMapOfPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt_HeaderFile
#include <Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class gp_Pnt;
class IntPoly_PntHasher;
class IntPoly_IndexedMapNodeOfIndexedMapOfPnt;



class IntPoly_IndexedMapOfPnt  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   IntPoly_IndexedMapOfPnt(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     IntPoly_IndexedMapOfPnt& Assign(const IntPoly_IndexedMapOfPnt& Other) ;
    IntPoly_IndexedMapOfPnt& operator =(const IntPoly_IndexedMapOfPnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~IntPoly_IndexedMapOfPnt()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const gp_Pnt& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const gp_Pnt& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const gp_Pnt& K) const;
  
  Standard_EXPORT    const gp_Pnt& FindKey(const Standard_Integer I) const;
   const gp_Pnt& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const gp_Pnt& K) const;





protected:





private:

  
  Standard_EXPORT   IntPoly_IndexedMapOfPnt(const IntPoly_IndexedMapOfPnt& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif