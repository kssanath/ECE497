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

#include "config.h"
#include "JSBeforeLoadEvent.h"

#include "BeforeLoadEvent.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSBeforeLoadEvent);

/* Hash table */

static const HashTableValue JSBeforeLoadEventTableValues[3] =
{
    { "url", DontDelete|ReadOnly, (intptr_t)jsBeforeLoadEventUrl, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsBeforeLoadEventConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSBeforeLoadEventTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSBeforeLoadEventTableValues, 0 };
#else
    { 4, 3, JSBeforeLoadEventTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSBeforeLoadEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSBeforeLoadEventConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSBeforeLoadEventConstructorTableValues, 0 };
#else
    { 1, 0, JSBeforeLoadEventConstructorTableValues, 0 };
#endif

class JSBeforeLoadEventConstructor : public DOMConstructorObject {
public:
    JSBeforeLoadEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSBeforeLoadEventConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSBeforeLoadEventPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSBeforeLoadEventConstructor::s_info = { "BeforeLoadEventConstructor", 0, &JSBeforeLoadEventConstructorTable, 0 };

bool JSBeforeLoadEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBeforeLoadEventConstructor, DOMObject>(exec, &JSBeforeLoadEventConstructorTable, this, propertyName, slot);
}

bool JSBeforeLoadEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSBeforeLoadEventConstructor, DOMObject>(exec, &JSBeforeLoadEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSBeforeLoadEventPrototypeTableValues[2] =
{
    { "initBeforeLoadEvent", DontDelete|Function, (intptr_t)jsBeforeLoadEventPrototypeFunctionInitBeforeLoadEvent, (intptr_t)4 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSBeforeLoadEventPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSBeforeLoadEventPrototypeTableValues, 0 };
#else
    { 2, 1, JSBeforeLoadEventPrototypeTableValues, 0 };
#endif

const ClassInfo JSBeforeLoadEventPrototype::s_info = { "BeforeLoadEventPrototype", 0, &JSBeforeLoadEventPrototypeTable, 0 };

JSObject* JSBeforeLoadEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBeforeLoadEvent>(exec, globalObject);
}

bool JSBeforeLoadEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSBeforeLoadEventPrototypeTable, this, propertyName, slot);
}

bool JSBeforeLoadEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSBeforeLoadEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSBeforeLoadEvent::s_info = { "BeforeLoadEvent", &JSEvent::s_info, &JSBeforeLoadEventTable, 0 };

JSBeforeLoadEvent::JSBeforeLoadEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<BeforeLoadEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

JSObject* JSBeforeLoadEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSBeforeLoadEventPrototype(JSBeforeLoadEventPrototype::createStructure(JSEventPrototype::self(exec, globalObject)));
}

bool JSBeforeLoadEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBeforeLoadEvent, Base>(exec, &JSBeforeLoadEventTable, this, propertyName, slot);
}

bool JSBeforeLoadEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSBeforeLoadEvent, Base>(exec, &JSBeforeLoadEventTable, this, propertyName, descriptor);
}

JSValue jsBeforeLoadEventUrl(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSBeforeLoadEvent* castedThis = static_cast<JSBeforeLoadEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    BeforeLoadEvent* imp = static_cast<BeforeLoadEvent*>(castedThis->impl());
    return jsString(exec, imp->url());
}

JSValue jsBeforeLoadEventConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSBeforeLoadEvent* domObject = static_cast<JSBeforeLoadEvent*>(asObject(slot.slotBase()));
    return JSBeforeLoadEvent::getConstructor(exec, domObject->globalObject());
}
JSValue JSBeforeLoadEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBeforeLoadEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsBeforeLoadEventPrototypeFunctionInitBeforeLoadEvent(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSBeforeLoadEvent::s_info))
        return throwError(exec, TypeError);
    JSBeforeLoadEvent* castedThisObj = static_cast<JSBeforeLoadEvent*>(asObject(thisValue));
    BeforeLoadEvent* imp = static_cast<BeforeLoadEvent*>(castedThisObj->impl());
    const UString& type = args.at(0).toString(exec);
    bool canBubble = args.at(1).toBoolean(exec);
    bool cancelable = args.at(2).toBoolean(exec);
    const UString& url = args.at(3).toString(exec);

    imp->initBeforeLoadEvent(type, canBubble, cancelable, url);
    return jsUndefined();
}


}
