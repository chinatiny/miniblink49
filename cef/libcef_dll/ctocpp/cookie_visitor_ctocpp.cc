// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
#if (defined ENABLE_CEF) && (ENABLE_CEF == 1)
#include "libcef_dll/ctocpp/cookie_visitor_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefCookieVisitorCToCpp::Visit(const CefCookie& cookie, int count,
    int total, bool& deleteCookie) {
  cef_cookie_visitor_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, visit))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: deleteCookie; type: bool_byref
  int deleteCookieInt = deleteCookie;

  // Execute
  int _retval = _struct->visit(_struct,
      &cookie,
      count,
      total,
      &deleteCookieInt);

  // Restore param:deleteCookie; type: bool_byref
  deleteCookie = deleteCookieInt?true:false;

  // Return type: bool
  return _retval?true:false;
}


// CONSTRUCTOR - Do not edit by hand.

CefCookieVisitorCToCpp::CefCookieVisitorCToCpp() {
}

template<> cef_cookie_visitor_t* CefCToCpp<CefCookieVisitorCToCpp,
    CefCookieVisitor, cef_cookie_visitor_t>::UnwrapDerived(CefWrapperType type,
    CefCookieVisitor* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefCookieVisitorCToCpp,
    CefCookieVisitor, cef_cookie_visitor_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefCookieVisitorCToCpp, CefCookieVisitor,
    cef_cookie_visitor_t>::kWrapperType = WT_COOKIE_VISITOR;
#endif

