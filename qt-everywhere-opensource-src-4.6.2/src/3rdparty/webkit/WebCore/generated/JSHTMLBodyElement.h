/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLBodyElement_h
#define JSHTMLBodyElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLBodyElement;

class JSHTMLBodyElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLBodyElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLBodyElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLBodyElementPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }
    JSHTMLBodyElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsHTMLBodyElementALink(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementALink(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementBackground(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementBackground(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementBgColor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementLink(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementLink(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementText(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementVLink(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementVLink(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnbeforeunload(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnbeforeunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnhashchange(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnhashchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnmessage(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnoffline(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnoffline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnonline(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnonline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnresize(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnresize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnstorage(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnstorage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementOnunload(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLBodyElementOnunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLBodyElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
