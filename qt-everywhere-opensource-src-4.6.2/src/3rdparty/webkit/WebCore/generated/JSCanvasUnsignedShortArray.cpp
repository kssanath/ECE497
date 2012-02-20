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

#if ENABLE(3D_CANVAS)

#include "JSCanvasUnsignedShortArray.h"

#include "CanvasUnsignedShortArray.h"
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCanvasUnsignedShortArray);

/* Hash table for prototype */

static const HashTableValue JSCanvasUnsignedShortArrayPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCanvasUnsignedShortArrayPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCanvasUnsignedShortArrayPrototypeTableValues, 0 };
#else
    { 1, 0, JSCanvasUnsignedShortArrayPrototypeTableValues, 0 };
#endif

const ClassInfo JSCanvasUnsignedShortArrayPrototype::s_info = { "CanvasUnsignedShortArrayPrototype", 0, &JSCanvasUnsignedShortArrayPrototypeTable, 0 };

JSObject* JSCanvasUnsignedShortArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCanvasUnsignedShortArray>(exec, globalObject);
}

const ClassInfo JSCanvasUnsignedShortArray::s_info = { "CanvasUnsignedShortArray", &JSCanvasArray::s_info, 0, 0 };

JSCanvasUnsignedShortArray::JSCanvasUnsignedShortArray(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<CanvasUnsignedShortArray> impl)
    : JSCanvasArray(structure, globalObject, impl)
{
}

JSObject* JSCanvasUnsignedShortArray::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCanvasUnsignedShortArrayPrototype(JSCanvasUnsignedShortArrayPrototype::createStructure(JSCanvasArrayPrototype::self(exec, globalObject)));
}

bool JSCanvasUnsignedShortArray::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<CanvasUnsignedShortArray*>(impl())->length()) {
        slot.setValue(getByIndex(exec, index));
        return true;
    }
    return Base::getOwnPropertySlot(exec, propertyName, slot);
}

bool JSCanvasUnsignedShortArray::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<CanvasUnsignedShortArray*>(impl())->length()) {
        descriptor.setDescriptor(getByIndex(exec, index), DontDelete);
        return true;
    }
    return Base::getOwnPropertyDescriptor(exec, propertyName, descriptor);
}

bool JSCanvasUnsignedShortArray::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<CanvasUnsignedShortArray*>(impl())->length()) {
        slot.setValue(getByIndex(exec, propertyName));
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

void JSCanvasUnsignedShortArray::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    Base::put(exec, propertyName, value, slot);
}

void JSCanvasUnsignedShortArray::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    indexSetter(exec, propertyName, value);
    return;
}

void JSCanvasUnsignedShortArray::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<CanvasUnsignedShortArray*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames);
}


JSValue JSCanvasUnsignedShortArray::getByIndex(ExecState* exec, unsigned index)
{
    return jsNumber(exec, static_cast<CanvasUnsignedShortArray*>(impl())->item(index));
}
CanvasUnsignedShortArray* toCanvasUnsignedShortArray(JSC::JSValue value)
{
    return value.inherits(&JSCanvasUnsignedShortArray::s_info) ? static_cast<JSCanvasUnsignedShortArray*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(3D_CANVAS)
