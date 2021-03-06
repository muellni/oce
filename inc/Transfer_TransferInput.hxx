// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferInput_HeaderFile
#define _Transfer_TransferInput_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Transfer_TransientProcess.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <Handle_Interface_Protocol.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Transfer_FinderProcess.hxx>
class Transfer_TransferFailure;
class Interface_EntityIterator;
class Transfer_TransferIterator;
class Transfer_TransientProcess;
class Interface_InterfaceModel;
class Interface_Protocol;
class Transfer_FinderProcess;


//! A TransferInput is a Tool which fills an InterfaceModel with
//! the result of the Transfer of CasCade Objects, once determined
//! The Result comes from a TransferProcess, either from
//! Transient (the Complete Result is considered, it must contain
//! only Transient Objects)
class Transfer_TransferInput 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a TransferInput ready to use
  Standard_EXPORT Transfer_TransferInput();
  
  //! Takes the transient items stored in a TransferIterator
  Standard_EXPORT   Interface_EntityIterator Entities (Transfer_TransferIterator& list)  const;
  
  //! Fills an InterfaceModel with the Complete Result of a Transfer
  //! stored in a TransientProcess (Starting Objects are Transient)
  //! The complete result is exactly added to the model
  Standard_EXPORT   void FillModel (const Handle(Transfer_TransientProcess)& proc, const Handle(Interface_InterfaceModel)& amodel)  const;
  
  //! Fills an InterfaceModel with results of the Transfer recorded
  //! in a TransientProcess (Starting Objects are Transient) :
  //! Root Result if <roots> is True (Default), Complete Result else
  //! The entities added to the model are determined from the result
  //! by by adding the referenced entities
  Standard_EXPORT   void FillModel (const Handle(Transfer_TransientProcess)& proc, const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_Protocol)& proto, const Standard_Boolean roots = Standard_True)  const;
  
  //! Fills an InterfaceModel with the Complete Result of a Transfer
  //! stored in a TransientProcess (Starting Objects are Transient)
  //! The complete result is exactly added to the model
  Standard_EXPORT   void FillModel (const Handle(Transfer_FinderProcess)& proc, const Handle(Interface_InterfaceModel)& amodel)  const;
  
  //! Fills an InterfaceModel with results of the Transfer recorded
  //! in a TransientProcess (Starting Objects are Transient) :
  //! Root Result if <roots> is True (Default), Complete Result else
  //! The entities added to the model are determined from the result
  //! by by adding the referenced entities
  Standard_EXPORT   void FillModel (const Handle(Transfer_FinderProcess)& proc, const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_Protocol)& proto, const Standard_Boolean roots = Standard_True)  const;




protected:





private:





};







#endif // _Transfer_TransferInput_HeaderFile
