#pragma once

#include <Common/Base/hkBase.h>
#include <Common/Base/Object/hkReferencedObject.h>

class hkbSequenceStringData : public hkReferencedObject
{
public:
   HK_DECLARE_CLASS_ALLOCATOR( HK_MEMORY_CLASS_BEHAVIOR_RUNTIME );
   HK_DECLARE_REFLECTION();

public:
   HK_FORCE_INLINE hkbSequenceStringData(void) {}
   HK_FORCE_INLINE hkbSequenceStringData( hkFinishLoadedObjectFlag flag ) : hkReferencedObject(flag) 
   , m_eventNames(flag)
   , m_variableNames(flag)
      {}
   // Properties
   hkArray<hkStringPtr> m_eventNames;
   hkArray<hkStringPtr> m_variableNames;
};
extern const hkClass hkbSequenceStringDataClass;

