/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2002-01-10 16:40:01         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#include <vcl.h>
#pragma hdrstop

#include "ModelEvClasses.hpp"

// interface uses

// interface dependancies

// attribute dependancies
#pragma link "BoldAttributes"

#pragma link "BoldDefs"
#pragma link "BoldSubscription"
#pragma link "BoldDeriver"
#pragma link "BoldElements"
#pragma link "BoldDomainElement"
#pragma link "BoldSystemRT"
#pragma link "BoldSystem"
#pragma link "BoldGeneratedCodeDictionary"

// implementation uses

// implementation dependancies

#include "BoldGeneratedCodeDictionary.hpp"

// Includefiles for methodimplementations

#include "ModelEvClasses_impl.cpp"

#define BoldMemberAssertInvalidObjectType = "Object of singlelink (%s.%s) is of wrong type (is %s, should be %s)";

// TBusinessClassesRoot

void __fastcall TBusinessClassesRootList::Add(TBusinessClassesRoot *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TBusinessClassesRootList::IndexOf(TBusinessClassesRoot *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TBusinessClassesRootList::Includes(TBusinessClassesRoot *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TBusinessClassesRoot* __fastcall TBusinessClassesRootList::AddNew()
{
  TBusinessClassesRoot *result = dynamic_cast<TBusinessClassesRoot*>(InternalAddNew());
  return result;
}

void __fastcall TBusinessClassesRootList::Insert(int index, TBusinessClassesRoot *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TBusinessClassesRoot* __fastcall TBusinessClassesRootList::GetBoldObject(int index)
{
  TBusinessClassesRoot *result = dynamic_cast<TBusinessClassesRoot*>(GetElement(index));
  return result;
}

void __fastcall TBusinessClassesRootList::SetBoldObject(int index, TBusinessClassesRoot *NewObject)
{
  SetElement(index, NewObject);
}

// TDiscount

TBAInteger* __fastcall TDiscount::_Get_M_Percent()
{
  // assert(ValidateMember("TDiscount", "Percent", 0, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[0]);
  return result;
};

Integer __fastcall TDiscount::_GetPercent()
{
  Integer result = M_Percent->AsInteger;
  return result;
}

void __fastcall TDiscount::_SetPercent(Integer NewValue)
{
  M_Percent->AsInteger = NewValue;
}

TOrderList* __fastcall TDiscount::_GetOrder()
{
  // assert(ValidateMember("TDiscount", "Order", 1, __classid(TOrderList)));
  TOrderList *result = dynamic_cast<TOrderList*>(BoldMembers[1]);
  return result;
}

void __fastcall TDiscountList::Add(TDiscount *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TDiscountList::IndexOf(TDiscount *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TDiscountList::Includes(TDiscount *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TDiscount* __fastcall TDiscountList::AddNew()
{
  TDiscount *result = dynamic_cast<TDiscount*>(InternalAddNew());
  return result;
}

void __fastcall TDiscountList::Insert(int index, TDiscount *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TDiscount* __fastcall TDiscountList::GetBoldObject(int index)
{
  TDiscount *result = dynamic_cast<TDiscount*>(GetElement(index));
  return result;
}

void __fastcall TDiscountList::SetBoldObject(int index, TDiscount *NewObject)
{
  SetElement(index, NewObject);
}

// TOrder

TBADate* __fastcall TOrder::_Get_M_OrderDate()
{
  // assert(ValidateMember("TOrder", "OrderDate", 0, __classid(TBADate)));
  TBADate *result = dynamic_cast<TBADate*>(BoldMembers[0]);
  return result;
};

TDate __fastcall TOrder::_GetOrderDate()
{
  TDate result = M_OrderDate->AsDate;
  return result;
}

void __fastcall TOrder::_SetOrderDate(TDate NewValue)
{
  M_OrderDate->AsDate = NewValue;
}

TBACurrency* __fastcall TOrder::_Get_M_TotalCost()
{
  // assert(ValidateMember("TOrder", "TotalCost", 1, __classid(TBACurrency)));
  TBACurrency *result = dynamic_cast<TBACurrency*>(BoldMembers[1]);
  return result;
};

Currency __fastcall TOrder::_GetTotalCost()
{
  Currency result = M_TotalCost->AsCurrency;
  return result;
}

TBAInteger* __fastcall TOrder::_Get_M_Discount()
{
  // assert(ValidateMember("TOrder", "Discount", 2, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[2]);
  return result;
};

Integer __fastcall TOrder::_GetDiscount()
{
  Integer result = M_Discount->AsInteger;
  return result;
}

void __fastcall TOrder::_SetDiscount(Integer NewValue)
{
  M_Discount->AsInteger = NewValue;
}

TBoldObjectReference* __fastcall TOrder::_Get_M_Person()
{
  // assert(ValidateMember("TOrder", "Person", 3, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[3]);
  return result;
}

TPerson* _fastcall TOrder::_GetPerson()
{
  // assert(not assigned(M_Person->BoldObject) or (M_Person->BoldObject is TPerson), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, Person, M_Person->BoldObject->ClassName, __classid(TPerson)]));
  TPerson *result = dynamic_cast<TPerson*>(M_Person->BoldObject);
  return result;
}

void __fastcall TOrder::_SetPerson(TPerson *value)
{
  M_Person->BoldObject = value;
}

TOrderItemList* __fastcall TOrder::_GetOrderItem()
{
  // assert(ValidateMember("TOrder", "OrderItem", 4, __classid(TOrderItemList)));
  TOrderItemList *result = dynamic_cast<TOrderItemList*>(BoldMembers[4]);
  return result;
}

TBoldObjectReference* __fastcall TOrder::_Get_M_theDiscount()
{
  // assert(ValidateMember("TOrder", "theDiscount", 5, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[5]);
  return result;
}

TDiscount* _fastcall TOrder::_GettheDiscount()
{
  // assert(not assigned(M_theDiscount->BoldObject) or (M_theDiscount->BoldObject is TDiscount), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, theDiscount, M_theDiscount->BoldObject->ClassName, __classid(TDiscount)]));
  TDiscount *result = dynamic_cast<TDiscount*>(M_theDiscount->BoldObject);
  return result;
}

void __fastcall TOrder::_SettheDiscount(TDiscount *value)
{
  M_theDiscount->BoldObject = value;
}

void __fastcall TOrderList::Add(TOrder *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TOrderList::IndexOf(TOrder *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TOrderList::Includes(TOrder *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TOrder* __fastcall TOrderList::AddNew()
{
  TOrder *result = dynamic_cast<TOrder*>(InternalAddNew());
  return result;
}

void __fastcall TOrderList::Insert(int index, TOrder *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TOrder* __fastcall TOrderList::GetBoldObject(int index)
{
  TOrder *result = dynamic_cast<TOrder*>(GetElement(index));
  return result;
}

void __fastcall TOrderList::SetBoldObject(int index, TOrder *NewObject)
{
  SetElement(index, NewObject);
}

// TOrderItem

TBAInteger* __fastcall TOrderItem::_Get_M_Qty()
{
  // assert(ValidateMember("TOrderItem", "Qty", 0, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[0]);
  return result;
};

Integer __fastcall TOrderItem::_GetQty()
{
  Integer result = M_Qty->AsInteger;
  return result;
}

void __fastcall TOrderItem::_SetQty(Integer NewValue)
{
  M_Qty->AsInteger = NewValue;
}

TBoldObjectReference* __fastcall TOrderItem::_Get_M_Order()
{
  // assert(ValidateMember("TOrderItem", "Order", 1, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[1]);
  return result;
}

TOrder* _fastcall TOrderItem::_GetOrder()
{
  // assert(not assigned(M_Order->BoldObject) or (M_Order->BoldObject is TOrder), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, Order, M_Order->BoldObject->ClassName, __classid(TOrder)]));
  TOrder *result = dynamic_cast<TOrder*>(M_Order->BoldObject);
  return result;
}

void __fastcall TOrderItem::_SetOrder(TOrder *value)
{
  M_Order->BoldObject = value;
}

TBoldObjectReference* __fastcall TOrderItem::_Get_M_Product()
{
  // assert(ValidateMember("TOrderItem", "Product", 2, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[2]);
  return result;
}

TProduct* _fastcall TOrderItem::_GetProduct()
{
  // assert(not assigned(M_Product->BoldObject) or (M_Product->BoldObject is TProduct), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, Product, M_Product->BoldObject->ClassName, __classid(TProduct)]));
  TProduct *result = dynamic_cast<TProduct*>(M_Product->BoldObject);
  return result;
}

void __fastcall TOrderItem::_SetProduct(TProduct *value)
{
  M_Product->BoldObject = value;
}

void __fastcall TOrderItemList::Add(TOrderItem *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TOrderItemList::IndexOf(TOrderItem *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TOrderItemList::Includes(TOrderItem *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TOrderItem* __fastcall TOrderItemList::AddNew()
{
  TOrderItem *result = dynamic_cast<TOrderItem*>(InternalAddNew());
  return result;
}

void __fastcall TOrderItemList::Insert(int index, TOrderItem *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TOrderItem* __fastcall TOrderItemList::GetBoldObject(int index)
{
  TOrderItem *result = dynamic_cast<TOrderItem*>(GetElement(index));
  return result;
}

void __fastcall TOrderItemList::SetBoldObject(int index, TOrderItem *NewObject)
{
  SetElement(index, NewObject);
}

// TPerson

TBAString* __fastcall TPerson::_Get_M_FullName()
{
  // assert(ValidateMember("TPerson", "FullName", 0, __classid(TBAString)));
  TBAString *result = dynamic_cast<TBAString*>(BoldMembers[0]);
  return result;
};

String __fastcall TPerson::_GetFullName()
{
  String result = M_FullName->AsString;
  return result;
}

void __fastcall TPerson::_SetFullName(String NewValue)
{
  M_FullName->AsString = NewValue;
}

TBAString* __fastcall TPerson::_Get_M_Firstname()
{
  // assert(ValidateMember("TPerson", "Firstname", 1, __classid(TBAString)));
  TBAString *result = dynamic_cast<TBAString*>(BoldMembers[1]);
  return result;
};

String __fastcall TPerson::_GetFirstname()
{
  String result = M_Firstname->AsString;
  return result;
}

void __fastcall TPerson::_SetFirstname(String NewValue)
{
  M_Firstname->AsString = NewValue;
}

TBAString* __fastcall TPerson::_Get_M_LastName()
{
  // assert(ValidateMember("TPerson", "LastName", 2, __classid(TBAString)));
  TBAString *result = dynamic_cast<TBAString*>(BoldMembers[2]);
  return result;
};

String __fastcall TPerson::_GetLastName()
{
  String result = M_LastName->AsString;
  return result;
}

void __fastcall TPerson::_SetLastName(String NewValue)
{
  M_LastName->AsString = NewValue;
}

TOrderList* __fastcall TPerson::_GetOrder()
{
  // assert(ValidateMember("TPerson", "Order", 3, __classid(TOrderList)));
  TOrderList *result = dynamic_cast<TOrderList*>(BoldMembers[3]);
  return result;
}

void __fastcall TPersonList::Add(TPerson *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TPersonList::IndexOf(TPerson *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TPersonList::Includes(TPerson *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TPerson* __fastcall TPersonList::AddNew()
{
  TPerson *result = dynamic_cast<TPerson*>(InternalAddNew());
  return result;
}

void __fastcall TPersonList::Insert(int index, TPerson *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TPerson* __fastcall TPersonList::GetBoldObject(int index)
{
  TPerson *result = dynamic_cast<TPerson*>(GetElement(index));
  return result;
}

void __fastcall TPersonList::SetBoldObject(int index, TPerson *NewObject)
{
  SetElement(index, NewObject);
}

// TProduct

TBACurrency* __fastcall TProduct::_Get_M_Cost()
{
  // assert(ValidateMember("TProduct", "Cost", 0, __classid(TBACurrency)));
  TBACurrency *result = dynamic_cast<TBACurrency*>(BoldMembers[0]);
  return result;
};

Currency __fastcall TProduct::_GetCost()
{
  Currency result = M_Cost->AsCurrency;
  return result;
}

void __fastcall TProduct::_SetCost(Currency NewValue)
{
  M_Cost->AsCurrency = NewValue;
}

TBACurrency* __fastcall TProduct::_Get_M_CostEuro()
{
  // assert(ValidateMember("TProduct", "CostEuro", 1, __classid(TBACurrency)));
  TBACurrency *result = dynamic_cast<TBACurrency*>(BoldMembers[1]);
  return result;
};

Currency __fastcall TProduct::_GetCostEuro()
{
  Currency result = M_CostEuro->AsCurrency;
  return result;
}

void __fastcall TProduct::_SetCostEuro(Currency NewValue)
{
  M_CostEuro->AsCurrency = NewValue;
}

TBAString* __fastcall TProduct::_Get_M_Description()
{
  // assert(ValidateMember("TProduct", "Description", 2, __classid(TBAString)));
  TBAString *result = dynamic_cast<TBAString*>(BoldMembers[2]);
  return result;
};

String __fastcall TProduct::_GetDescription()
{
  String result = M_Description->AsString;
  return result;
}

void __fastcall TProduct::_SetDescription(String NewValue)
{
  M_Description->AsString = NewValue;
}

TOrderItemList* __fastcall TProduct::_GetOrderItem()
{
  // assert(ValidateMember("TProduct", "OrderItem", 3, __classid(TOrderItemList)));
  TOrderItemList *result = dynamic_cast<TOrderItemList*>(BoldMembers[3]);
  return result;
}

void __fastcall TProductList::Add(TProduct *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TProductList::IndexOf(TProduct *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TProductList::Includes(TProduct *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TProduct* __fastcall TProductList::AddNew()
{
  TProduct *result = dynamic_cast<TProduct*>(InternalAddNew());
  return result;
}

void __fastcall TProductList::Insert(int index, TProduct *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TProduct* __fastcall TProductList::GetBoldObject(int index)
{
  TProduct *result = dynamic_cast<TProduct*>(GetElement(index));
  return result;
}

void __fastcall TProductList::SetBoldObject(int index, TProduct *NewObject)
{
  SetElement(index, NewObject);
}

char *GeneratedCodeCRC()
{
  return "839567244";
}

void __fastcall InstallObjectListClasses(TBoldGeneratedClassList *BoldObjectListClasses)
{
  BoldObjectListClasses->AddObjectEntry("BusinessClassesRoot", __classid(TBusinessClassesRootList));
  BoldObjectListClasses->AddObjectEntry("Discount", __classid(TDiscountList));
  BoldObjectListClasses->AddObjectEntry("Order", __classid(TOrderList));
  BoldObjectListClasses->AddObjectEntry("OrderItem", __classid(TOrderItemList));
  BoldObjectListClasses->AddObjectEntry("Person", __classid(TPersonList));
  BoldObjectListClasses->AddObjectEntry("Product", __classid(TProductList));
}

void __fastcall InstallBusinessClasses(TBoldGeneratedClassList *BoldObjectClasses)
{
  BoldObjectClasses->AddObjectEntry("BusinessClassesRoot", __classid(TBusinessClassesRoot));
  BoldObjectClasses->AddObjectEntry("Discount", __classid(TDiscount));
  BoldObjectClasses->AddObjectEntry("Order", __classid(TOrder));
  BoldObjectClasses->AddObjectEntry("OrderItem", __classid(TOrderItem));
  BoldObjectClasses->AddObjectEntry("Person", __classid(TPerson));
  BoldObjectClasses->AddObjectEntry("Product", __classid(TProduct));
}

// the codedestricptor is initialized automatically

TBoldGeneratedCodeDescriptor *CodeDescriptor = GeneratedCodes()->AddGeneratedCodeDescriptorWithFunc("ModelEvDemo", &InstallBusinessClasses, &InstallObjectListClasses, GeneratedCodeCRC());

// but should be unloaded manually when it is not needed anymore

void unregisterCode()
{
  if (CodeDescriptor != NULL)
  {
    GeneratedCodes()->Remove(CodeDescriptor);
  }
}

