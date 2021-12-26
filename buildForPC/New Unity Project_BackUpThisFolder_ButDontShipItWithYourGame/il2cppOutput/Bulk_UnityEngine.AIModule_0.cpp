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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353;

extern RuntimeClass* NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_il2cpp_TypeInfo_var;
extern const uint32_t NavMesh_Internal_CallOnNavMeshPreUpdate_mED6CAB94A6CB61A5FD547B7026DB4C96F2AF5B60_MetadataUsageId;



#ifndef U3CMODULEU3E_T0D6B4C74FDBD279171DC0A75C631E11FDAA32C13_H
#define U3CMODULEU3E_T0D6B4C74FDBD279171DC0A75C631E11FDAA32C13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t0D6B4C74FDBD279171DC0A75C631E11FDAA32C13 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T0D6B4C74FDBD279171DC0A75C631E11FDAA32C13_H
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
#ifndef NAVMESH_TA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_H
#define NAVMESH_TA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh
struct  NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A  : public RuntimeObject
{
public:

public:
};

struct NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields
{
public:
	// UnityEngine.AI.NavMesh_OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * ___onPreUpdate_0;

public:
	inline static int32_t get_offset_of_onPreUpdate_0() { return static_cast<int32_t>(offsetof(NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields, ___onPreUpdate_0)); }
	inline OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * get_onPreUpdate_0() const { return ___onPreUpdate_0; }
	inline OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 ** get_address_of_onPreUpdate_0() { return &___onPreUpdate_0; }
	inline void set_onPreUpdate_0(OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * value)
	{
		___onPreUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onPreUpdate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESH_TA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_H
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
#ifndef ONNAVMESHPREUPDATE_TA3A16B3CAFF83530076BF839EA5699AAAD6C6353_H
#define ONNAVMESHPREUPDATE_TA3A16B3CAFF83530076BF839EA5699AAAD6C6353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh_OnNavMeshPreUpdate
struct  OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONNAVMESHPREUPDATE_TA3A16B3CAFF83530076BF839EA5699AAAD6C6353_H



// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern "C" IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_mED6CAB94A6CB61A5FD547B7026DB4C96F2AF5B60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMesh_Internal_CallOnNavMeshPreUpdate_mED6CAB94A6CB61A5FD547B7026DB4C96F2AF5B60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * L_0 = ((NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * L_1 = ((NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		NullCheck(L_1);
		OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
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
extern "C"  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_mD019C429BD8D299B85C320A6EFB2FFEDC3F85F42 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0((OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 *)__this->get_prev_9(), method);
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
		if (___parameterCount == 0)
		{
			// open
			typedef void (*FunctionPointerType) (const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnNavMeshPreUpdate_BeginInvoke_m67FA7767274E77169A57ADFE041EA9B914E752C6 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_EndInvoke_mB55765702AA123A6D7C3DF8DDC597E3DEBC79836 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
