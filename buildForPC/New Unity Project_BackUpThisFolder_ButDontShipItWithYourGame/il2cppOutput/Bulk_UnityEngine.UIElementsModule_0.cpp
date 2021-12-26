#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2CA4740F428E9BDA59F6C411A1FA0D38AAC6FA4D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>
struct IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode>
struct IEnumerator_1_t5C673F5BFEEA9B2A7D54AE29ECD1AE154E210361;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.Collections.IEnumerator
struct IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.InvalidOperationException
struct InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;
// UnityEngine.Yoga.YogaNode[]
struct YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333;

extern RuntimeClass* IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var;
extern RuntimeClass* YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3;
extern String_t* _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202;
extern const RuntimeMethod* Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA_RuntimeMethod_var;
extern const RuntimeMethod* YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var;
extern const RuntimeMethod* YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var;
extern const uint32_t BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_MetadataUsageId;
extern const uint32_t MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_MetadataUsageId;
extern const uint32_t Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321_MetadataUsageId;
extern const uint32_t YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_MetadataUsageId;
extern const uint32_t YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D_MetadataUsageId;
extern const uint32_t YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_MetadataUsageId;
extern const uint32_t YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE_MetadataUsageId;



#ifndef U3CMODULEU3E_T091C966E943CA3E1F5D551C43C6FE64881C5BB24_H
#define U3CMODULEU3E_T091C966E943CA3E1F5D551C43C6FE64881C5BB24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t091C966E943CA3E1F5D551C43C6FE64881C5BB24 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T091C966E943CA3E1F5D551C43C6FE64881C5BB24_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_TC208E7A364FF0C3FDC57107BD002A16939F7EE92_H
#define LIST_1_TC208E7A364FF0C3FDC57107BD002A16939F7EE92_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct  List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____items_1)); }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* get__items_1() const { return ____items_1; }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92_StaticFields, ___EmptyArray_4)); }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TC208E7A364FF0C3FDC57107BD002A16939F7EE92_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef NATIVE_TAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A_H
#define NATIVE_TAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.Native
struct  Native_tAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_TAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef YOGASIZE_T0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23_H
#define YOGASIZE_T0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.YogaSize
struct  YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOGASIZE_T0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#define INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifndef YOGAMEASUREMODE_T29AF57E74BCD4C16019B8BE88A317D54DA70C29F_H
#define YOGAMEASUREMODE_T29AF57E74BCD4C16019B8BE88A317D54DA70C29F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.YogaMeasureMode
struct  YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOGAMEASUREMODE_T29AF57E74BCD4C16019B8BE88A317D54DA70C29F_H
#ifndef YOGANODE_TFCB801A447DAC7A335C686ABC5941A4357102A2C_H
#define YOGANODE_TFCB801A447DAC7A335C686ABC5941A4357102A2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.YogaNode
struct  YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * ____children_1;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * ____measureFunction_2;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * ____baselineFunction_3;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__children_1() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____children_1)); }
	inline List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * get__children_1() const { return ____children_1; }
	inline List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 ** get_address_of__children_1() { return &____children_1; }
	inline void set__children_1(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * value)
	{
		____children_1 = value;
		Il2CppCodeGenWriteBarrier((&____children_1), value);
	}

	inline static int32_t get_offset_of__measureFunction_2() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____measureFunction_2)); }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * get__measureFunction_2() const { return ____measureFunction_2; }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB ** get_address_of__measureFunction_2() { return &____measureFunction_2; }
	inline void set__measureFunction_2(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * value)
	{
		____measureFunction_2 = value;
		Il2CppCodeGenWriteBarrier((&____measureFunction_2), value);
	}

	inline static int32_t get_offset_of__baselineFunction_3() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____baselineFunction_3)); }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * get__baselineFunction_3() const { return ____baselineFunction_3; }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF ** get_address_of__baselineFunction_3() { return &____baselineFunction_3; }
	inline void set__baselineFunction_3(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * value)
	{
		____baselineFunction_3 = value;
		Il2CppCodeGenWriteBarrier((&____baselineFunction_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOGANODE_TFCB801A447DAC7A335C686ABC5941A4357102A2C_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef BASELINEFUNCTION_T0A87479762FB382A84709009E9B6DCC597C6C9DF_H
#define BASELINEFUNCTION_T0A87479762FB382A84709009E9B6DCC597C6C9DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.BaselineFunction
struct  BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASELINEFUNCTION_T0A87479762FB382A84709009E9B6DCC597C6C9DF_H
#ifndef MEASUREFUNCTION_TC5585E81380F4017044CE57AE21E178BAE2607AB_H
#define MEASUREFUNCTION_TC5585E81380F4017044CE57AE21E178BAE2607AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.MeasureFunction
struct  MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEASUREFUNCTION_TC5585E81380F4017044CE57AE21E178BAE2607AB_H


// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mAE5AF50F634B031906FA8775A7B8BBBEB7EF0172_gshared (const RuntimeMethod* method);

// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
extern "C" IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m597597AB56CFEA5D883209A9BAAAC16A9BDEB5CE (intptr_t p0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
extern "C" IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321 (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9 (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * __this, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<UnityEngine.Yoga.YogaNode>()
inline RuntimeObject* Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mAE5AF50F634B031906FA8775A7B8BBBEB7EF0172_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	float result = 0.0f;
	if(__this->get_prev_9() != NULL)
	{
		BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558((BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF *)__this->get_prev_9(), ___node0, ___width1, ___height2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 3)
		{
			// open
			typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
		}
		else
		{
			// closed
			typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
		}
	}
	else if (___parameterCount != 3)
	{
		// open
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___height2);
				}
			}
		}
		else
		{
			typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___height2);
				}
			}
		}
		else
		{
			typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.BaselineFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single UnityEngine.Yoga.BaselineFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR float BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
extern "C" IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  result;
	memset(&result, 0, sizeof(result));
	if(__this->get_prev_9() != NULL)
	{
		MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B((MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB *)__this->get_prev_9(), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 5)
		{
			// open
			typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
		else
		{
			// closed
			typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
	}
	else if (___parameterCount != 5)
	{
		// open
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
		}
		else
		{
			typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
		}
		else
		{
			typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.MeasureFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909 (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321 (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ygNode0;
		bool L_1 = IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_001c;
	}

IL_0016:
	{
		intptr_t L_2 = ___ygNode0;
		Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_ftn) (intptr_t);
	static Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___ygNode0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1 = IntPtr_op_Explicit_m597597AB56CFEA5D883209A9BAAAC16A9BDEB5CE((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_7 = YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		*(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1 = IntPtr_op_Explicit_m597597AB56CFEA5D883209A9BAAAC16A9BDEB5CE((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5 = YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26(L_2, L_3, L_4, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaNode::Finalize()
extern "C" IL2CPP_METHOD_ATTR void YogaNode_Finalize_m9922E8660343E79D7C22741BD568EFBD4FF10F9E (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get__ygNode_0();
		Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0011);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0011;
	}

FINALLY_0011:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x18);
		IL2CPP_END_FINALLY(17)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(17)
	{
		IL2CPP_JUMP_TBL(0x18, IL_0018)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
extern "C" IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_2 = L_1->get__measureFunction_2();
		if (L_2)
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_3 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_3, _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var);
	}

IL_001e:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_4 = ___node0;
		NullCheck(L_4);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_5 = L_4->get__measureFunction_2();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_6 = ___node0;
		float L_7 = ___width1;
		int32_t L_8 = ___widthMode2;
		float L_9 = ___height3;
		int32_t L_10 = ___heightMode4;
		NullCheck(L_5);
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_11 = MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B(L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_12 = V_0;
		return L_12;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_2 = L_1->get__baselineFunction_3();
		if (L_2)
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_3 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_3, _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var);
	}

IL_001e:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_4 = ___node0;
		NullCheck(L_4);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_5 = L_4->get__baselineFunction_3();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_6 = ___node0;
		float L_7 = ___width1;
		float L_8 = ___height2;
		NullCheck(L_5);
		float L_9 = BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		float L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_0 = __this->get__children_1();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_1 = __this->get__children_1();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001c:
	{
		RuntimeObject* L_3 = Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA(/*hidden argument*/Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityEngine.Yoga.YogaNode::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_0 = __this->get__children_1();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_1 = __this->get__children_1();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001c:
	{
		RuntimeObject* L_3 = Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA(/*hidden argument*/Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
