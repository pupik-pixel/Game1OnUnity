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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t87B6D6037EDB3BC424B29D613C23C7D57290C3B3;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t37F12E545D4CEBDBE94AE87E3207C175BCBACC4F;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_tA3B2C478D5F5102CB79A687B2F03ED13BC529461;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t1859711C9A89E294EF4AC6BF8E7B1C6C4EEC6D3E;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t9C730C7B40880A4D7409B129A8D041BD47438E68;
// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD;
// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.ArrayList
struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747;
// System.Collections.Stack
struct Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Globalization.Calendar
struct Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E;
// System.Globalization.CompareInfo
struct CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B;
// System.Globalization.CultureInfo
struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4;
// System.Globalization.TextInfo
struct TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IFormatProvider
struct IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67;
// System.IO.FileStream
struct FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60;
// System.Int32
struct Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.InvalidOperationException
struct InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07;
// System.Net.ICredentials
struct ICredentials_tD0AB83297BDF32EE92C413F575F62DD096386B58;
// System.Net.IWebProxy
struct IWebProxy_t7E44658B5DCD492983886B8614CE96464347062A;
// System.Net.WebRequest
struct WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399;
// System.NotSupportedException
struct NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Text.Encoding
struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.Uri
struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6;
// System.UriParser
struct UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tA1795EB62BAF4B2A85998D2E227BBE15EDF6DFE7;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B;
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t84466353D7B09B95C9D10D856332058F60FD31CD;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_tDD61EB6519D1FF4E9B08ADD6728F9FA9EDCBC747;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07;
// System.Xml.XmlDocument
struct XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763;
// System.Xml.XmlException
struct XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1;
// System.Xml.XmlImplementation
struct XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B;
// System.Xml.XmlNameTable
struct XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86;
// System.Xml.XmlNode
struct XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A;
// System.Xml.XmlParserContext
struct XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14;
// System.Xml.XmlReader
struct XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB;
// System.Xml.XmlResolver
struct XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C;
// System.Xml.XmlTextReader
struct XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3;
// System.Xml.XmlTextWriter/XmlNodeInfo
struct XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C;
// System.Xml.XmlWriter
struct XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var;
extern RuntimeClass* DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4_il2cpp_TypeInfo_var;
extern RuntimeClass* IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var;
extern RuntimeClass* IHasXmlSchemaInfo_tA3B2C478D5F5102CB79A687B2F03ED13BC529461_il2cpp_TypeInfo_var;
extern RuntimeClass* IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C_il2cpp_TypeInfo_var;
extern RuntimeClass* XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194;
extern String_t* _stringLiteral24B0DB681A39D72D91C8DBE3EC9EAB3EF2B86761;
extern String_t* _stringLiteral29D43743C43BDA9873FC7A79C99F2EC4B6B442B1;
extern String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
extern String_t* _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B;
extern String_t* _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792;
extern String_t* _stringLiteral86991C898EF9BD4D4DF2405832AC2BBDE5077766;
extern String_t* _stringLiteral8BCDCE41BEE002F11C8CF51B698D461BE3BD3797;
extern String_t* _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2;
extern String_t* _stringLiteral986F2ED15C79ED805000ECCD85519810B2DB2A93;
extern String_t* _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB;
extern String_t* _stringLiteralAE16CDF368B9DB989F62730137C3B58D112CBF73;
extern String_t* _stringLiteralB4E6A23E7861638AEAA54CAAC4AA3F0C438D15A5;
extern String_t* _stringLiteralB7800DD7F410CCD049697701C24028B425C31C9F;
extern String_t* _stringLiteralB82E1120FAA671E759C3B20F058DB73F0BC2CAC6;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBA860FD430FDBB5379A377B6ABE5473ADE841521;
extern String_t* _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29;
extern String_t* _stringLiteralCB51439F4D8087A7A3BCE2CD95A8898C8A32D028;
extern String_t* _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841;
extern String_t* _stringLiteralD1785CA28C3A4D29A6EDEF1520C544B838A93DB3;
extern String_t* _stringLiteralD2ED73F0826651C4F2B70E48C6DC780CB9CBF93F;
extern String_t* _stringLiteralD8280FE80D9AEB9C128D4DA3FBEC21DF0E4BECE7;
extern String_t* _stringLiteralE5A3B5050E1E09ED135138A9BA2752A6ECC352C0;
extern const RuntimeMethod* XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var;
extern const RuntimeMethod* XmlValidatingReader_MoveToAttribute_mE68C21925EFA1BB4D398D2ACA5C73DF415B231F3_RuntimeMethod_var;
extern const RuntimeMethod* XmlValidatingReader_OnValidationEvent_m1F04A67D889251648B3B629178360382EB89FF99_RuntimeMethod_var;
extern const RuntimeMethod* XmlValidatingReader_Read_m066250721BEA74A16479A769B792CD40C6E46DC0_RuntimeMethod_var;
extern const RuntimeMethod* XmlValidatingReader_set_ValidationType_mBE9B977D4121D6EAE4EE3B1B10ABD3E8E2EFB104_RuntimeMethod_var;
extern const RuntimeMethod* XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_RuntimeMethod_var;
extern const RuntimeMethod* XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_RuntimeMethod_var;
extern const RuntimeType* Stream_tCFD27E43C18381861212C0288CACF467FB602009_0_0_0_var;
extern const uint32_t StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985_MetadataUsageId;
extern const uint32_t StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33_MetadataUsageId;
extern const uint32_t StringUtil__cctor_m6EC96521C681EAC4DE279D333C79885DAE497D5F_MetadataUsageId;
extern const uint32_t XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_MetadataUsageId;
extern const uint32_t XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F_MetadataUsageId;
extern const uint32_t XmlValidatingReader_HasLineInfo_mAD19ABDAD387BAC680A2A476BC4E84B6A6B42085_MetadataUsageId;
extern const uint32_t XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_mC3754A203F1DADF40C8A4F2B9CC641D51D2FBE81_MetadataUsageId;
extern const uint32_t XmlValidatingReader_MoveToAttribute_mE68C21925EFA1BB4D398D2ACA5C73DF415B231F3_MetadataUsageId;
extern const uint32_t XmlValidatingReader_OnValidationEvent_m1F04A67D889251648B3B629178360382EB89FF99_MetadataUsageId;
extern const uint32_t XmlValidatingReader_Read_m066250721BEA74A16479A769B792CD40C6E46DC0_MetadataUsageId;
extern const uint32_t XmlValidatingReader__ctor_mEAE5302B81A618661E2CD90DC039D923D6181170_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LineNumber_m0028C0099A79BDD3243BF65E5564091C4584A4B6_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LinePosition_mAF9C9A07C0D8FBCF5A640A5DF3E4015FBA2417A5_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LocalName_mDF11295E4347D4738E455E5E9EA722DB24C1C871_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Name_mB20A5E6C40D110DC9C33A14912B934A700D728AE_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_NamespaceURI_m1CF7B354BC9D2EFF4EB37F3C6A1E3225719FB87E_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Prefix_mE267E68E2431E427A2DDD04CE3B4FCF3DB833021_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Schemas_m95C27E83C4D6535BDFAC4F957EA52C345C1AD96F_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Value_mDD33F23D8FFB9D4FC9125A52EAD1BA530AF29245_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_XmlLang_mE26870292F33741B1F68CD5AACB58DED4943F95B_MetadataUsageId;
extern const uint32_t XmlValidatingReader_set_ValidationType_mBE9B977D4121D6EAE4EE3B1B10ABD3E8E2EFB104_MetadataUsageId;
extern const uint32_t XmlWhitespace_CloneNode_m8C9825919ED09C8E35FCE1DE7E39F9D5F654986B_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_LocalName_mC40F27FB38BDA761180F878BB046E2D4C1DF0773_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_Name_m78FA8EAFAF179B735374E897696D560F0E026855_MetadataUsageId;
extern const uint32_t XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_MetadataUsageId;
extern const uint32_t XmlWriter_WriteAttributeString_m8F639EDF9DD422BA488995DDEFDF3DEBC67D8693_MetadataUsageId;
extern const uint32_t XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_MetadataUsageId;

struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;


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
#ifndef EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#define EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_StaticFields, ___Empty_0)); }
	inline EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
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
#ifndef COMPAREINFO_T704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_H
#define COMPAREINFO_T704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_3;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D * ___collator_5;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_win32LCID_3() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___win32LCID_3)); }
	inline int32_t get_win32LCID_3() const { return ___win32LCID_3; }
	inline int32_t* get_address_of_win32LCID_3() { return &___win32LCID_3; }
	inline void set_win32LCID_3(int32_t value)
	{
		___win32LCID_3 = value;
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_collator_5() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___collator_5)); }
	inline SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D * get_collator_5() const { return ___collator_5; }
	inline SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D ** get_address_of_collator_5() { return &___collator_5; }
	inline void set_collator_5(SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D * value)
	{
		___collator_5 = value;
		Il2CppCodeGenWriteBarrier((&___collator_5), value);
	}
};

struct CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___collators_6;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_7;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_6() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields, ___collators_6)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_collators_6() const { return ___collators_6; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_collators_6() { return &___collators_6; }
	inline void set_collators_6(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___collators_6 = value;
		Il2CppCodeGenWriteBarrier((&___collators_6), value);
	}

	inline static int32_t get_offset_of_monitor_7() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields, ___monitor_7)); }
	inline RuntimeObject * get_monitor_7() const { return ___monitor_7; }
	inline RuntimeObject ** get_address_of_monitor_7() { return &___monitor_7; }
	inline void set_monitor_7(RuntimeObject * value)
	{
		___monitor_7 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_H
#ifndef CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#define CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___numInfo_14)); }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textInfo_16)); }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___compareInfo_26)); }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_culture_30)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_32)); }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switchU24map19
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switchU24map1A
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1A_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switchU24map1B
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1B_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switchU24map1C
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1C_41;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_40() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map1B_40)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1B_40() const { return ___U3CU3Ef__switchU24map1B_40; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1B_40() { return &___U3CU3Ef__switchU24map1B_40; }
	inline void set_U3CU3Ef__switchU24map1B_40(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1B_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_41() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map1C_41)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1C_41() const { return ___U3CU3Ef__switchU24map1C_41; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1C_41() { return &___U3CU3Ef__switchU24map1C_41; }
	inline void set_U3CU3Ef__switchU24map1C_41(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1C_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifndef MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#define MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4, ____identity_0)); }
	inline ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#define URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___parser_30)); }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * get_parser_30() const { return ___parser_30; }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri_UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map1C
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1C_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map1D
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1D_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map1E
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1E_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map1F
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1F_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map20
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map20_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_31() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map1C_31)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1C_31() const { return ___U3CU3Ef__switchU24map1C_31; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1C_31() { return &___U3CU3Ef__switchU24map1C_31; }
	inline void set_U3CU3Ef__switchU24map1C_31(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1C_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1D_32() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map1D_32)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1D_32() const { return ___U3CU3Ef__switchU24map1D_32; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1D_32() { return &___U3CU3Ef__switchU24map1D_32; }
	inline void set_U3CU3Ef__switchU24map1D_32(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1D_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1D_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1E_33() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map1E_33)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1E_33() const { return ___U3CU3Ef__switchU24map1E_33; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1E_33() { return &___U3CU3Ef__switchU24map1E_33; }
	inline void set_U3CU3Ef__switchU24map1E_33(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1E_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1E_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_34() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map1F_34)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1F_34() const { return ___U3CU3Ef__switchU24map1F_34; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1F_34() { return &___U3CU3Ef__switchU24map1F_34; }
	inline void set_U3CU3Ef__switchU24map1F_34(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1F_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_35() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map20_35)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map20_35() const { return ___U3CU3Ef__switchU24map20_35; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map20_35() { return &___U3CU3Ef__switchU24map20_35; }
	inline void set_U3CU3Ef__switchU24map20_35(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map20_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
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
#ifndef XMLSCHEMACOLLECTION_T532C46B1FC9D97F471412FAC2FFCD7F7A93E3513_H
#define XMLSCHEMACOLLECTION_T532C46B1FC9D97F471412FAC2FFCD7F7A93E3513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollection
struct  XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::schemaSet
	XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * ___schemaSet_0;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaCollection::ValidationEventHandler
	ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * ___ValidationEventHandler_1;

public:
	inline static int32_t get_offset_of_schemaSet_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513, ___schemaSet_0)); }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * get_schemaSet_0() const { return ___schemaSet_0; }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D ** get_address_of_schemaSet_0() { return &___schemaSet_0; }
	inline void set_schemaSet_0(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * value)
	{
		___schemaSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaSet_0), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513, ___ValidationEventHandler_1)); }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * get_ValidationEventHandler_1() const { return ___ValidationEventHandler_1; }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B ** get_address_of_ValidationEventHandler_1() { return &___ValidationEventHandler_1; }
	inline void set_ValidationEventHandler_1(ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * value)
	{
		___ValidationEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOLLECTION_T532C46B1FC9D97F471412FAC2FFCD7F7A93E3513_H
#ifndef XMLNAMETABLE_TAA4F116720DEE4495552DD594D090390F342894B_H
#define XMLNAMETABLE_TAA4F116720DEE4495552DD594D090390F342894B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_TAA4F116720DEE4495552DD594D090390F342894B_H
#ifndef XMLNODE_T2B708D2776777AFF8C95DD2EFB651AA64E57632A_H
#define XMLNODE_T2B708D2776777AFF8C95DD2EFB651AA64E57632A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A, ___ownerDocument_1)); }
	inline XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A, ___parentNode_2)); }
	inline XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A, ___childNodes_3)); }
	inline XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields
{
public:
	// System.Xml.XmlNode_EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switchU24map2B
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map2B_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2B_4() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields, ___U3CU3Ef__switchU24map2B_4)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map2B_4() const { return ___U3CU3Ef__switchU24map2B_4; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map2B_4() { return &___U3CU3Ef__switchU24map2B_4; }
	inline void set_U3CU3Ef__switchU24map2B_4(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map2B_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2B_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T2B708D2776777AFF8C95DD2EFB651AA64E57632A_H
#ifndef XMLREADER_TC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293_H
#define XMLREADER_TC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293  : public RuntimeObject
{
public:
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * ___binary_0;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * ___settings_1;

public:
	inline static int32_t get_offset_of_binary_0() { return static_cast<int32_t>(offsetof(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293, ___binary_0)); }
	inline XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * get_binary_0() const { return ___binary_0; }
	inline XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A ** get_address_of_binary_0() { return &___binary_0; }
	inline void set_binary_0(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * value)
	{
		___binary_0 = value;
		Il2CppCodeGenWriteBarrier((&___binary_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293, ___settings_1)); }
	inline XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * get_settings_1() const { return ___settings_1; }
	inline XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_TC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293_H
#ifndef XMLRESOLVER_TF417EFBE696C3A5E7656C0FA477260AFF8AA252C_H
#define XMLRESOLVER_TF417EFBE696C3A5E7656C0FA477260AFF8AA252C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_TF417EFBE696C3A5E7656C0FA477260AFF8AA252C_H
#ifndef STRINGUTIL_T6B1C7DC3B724BD6FC51242BBACBCC786751CA110_H
#define STRINGUTIL_T6B1C7DC3B724BD6FC51242BBACBCC786751CA110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter_StringUtil
struct  StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110  : public RuntimeObject
{
public:

public:
};

struct StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields
{
public:
	// System.Globalization.CultureInfo System.Xml.XmlTextWriter_StringUtil::cul
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___cul_0;
	// System.Globalization.CompareInfo System.Xml.XmlTextWriter_StringUtil::cmp
	CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * ___cmp_1;

public:
	inline static int32_t get_offset_of_cul_0() { return static_cast<int32_t>(offsetof(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields, ___cul_0)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_cul_0() const { return ___cul_0; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_cul_0() { return &___cul_0; }
	inline void set_cul_0(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___cul_0 = value;
		Il2CppCodeGenWriteBarrier((&___cul_0), value);
	}

	inline static int32_t get_offset_of_cmp_1() { return static_cast<int32_t>(offsetof(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields, ___cmp_1)); }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * get_cmp_1() const { return ___cmp_1; }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B ** get_address_of_cmp_1() { return &___cmp_1; }
	inline void set_cmp_1(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * value)
	{
		___cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&___cmp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTIL_T6B1C7DC3B724BD6FC51242BBACBCC786751CA110_H
#ifndef XMLWRITER_TF67065A3B83E8B7E2B24D172D8223F4328F437B6_H
#define XMLWRITER_TF67065A3B83E8B7E2B24D172D8223F4328F437B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_TF67065A3B83E8B7E2B24D172D8223F4328F437B6_H
#ifndef DTDVALIDATINGREADER_T45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_H
#define DTDVALIDATINGREADER_T45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8  : public XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t37F12E545D4CEBDBE94AE87E3207C175BCBACC4F * ___reader_2;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * ___sourceTextReader_3;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * ___validatingReader_4;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * ___dtd_5;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_6;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_7;
	// Mono.Xml.DTDValidatingReader_AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t87B6D6037EDB3BC424B29D613C23C7D57290C3B3* ___attributes_8;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_10;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_11;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * ___elementStack_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * ___automataStack_13;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_15;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 * ___currentAutomata_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 * ___previousAutomata_17;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___idList_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___missingIDReferences_19;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * ___nsmgr_20;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_21;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_22;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_26;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * ___attributeValueEntityStack_27;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t * ___valueBuilder_28;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___whitespaceChars_29;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___reader_2)); }
	inline EntityResolvingXmlReader_t37F12E545D4CEBDBE94AE87E3207C175BCBACC4F * get_reader_2() const { return ___reader_2; }
	inline EntityResolvingXmlReader_t37F12E545D4CEBDBE94AE87E3207C175BCBACC4F ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(EntityResolvingXmlReader_t37F12E545D4CEBDBE94AE87E3207C175BCBACC4F * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier((&___reader_2), value);
	}

	inline static int32_t get_offset_of_sourceTextReader_3() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___sourceTextReader_3)); }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * get_sourceTextReader_3() const { return ___sourceTextReader_3; }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 ** get_address_of_sourceTextReader_3() { return &___sourceTextReader_3; }
	inline void set_sourceTextReader_3(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * value)
	{
		___sourceTextReader_3 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTextReader_3), value);
	}

	inline static int32_t get_offset_of_validatingReader_4() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___validatingReader_4)); }
	inline XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * get_validatingReader_4() const { return ___validatingReader_4; }
	inline XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 ** get_address_of_validatingReader_4() { return &___validatingReader_4; }
	inline void set_validatingReader_4(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * value)
	{
		___validatingReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_4), value);
	}

	inline static int32_t get_offset_of_dtd_5() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___dtd_5)); }
	inline DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * get_dtd_5() const { return ___dtd_5; }
	inline DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E ** get_address_of_dtd_5() { return &___dtd_5; }
	inline void set_dtd_5(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * value)
	{
		___dtd_5 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_5), value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___resolver_6)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_6), value);
	}

	inline static int32_t get_offset_of_currentElement_7() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___currentElement_7)); }
	inline String_t* get_currentElement_7() const { return ___currentElement_7; }
	inline String_t** get_address_of_currentElement_7() { return &___currentElement_7; }
	inline void set_currentElement_7(String_t* value)
	{
		___currentElement_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_7), value);
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___attributes_8)); }
	inline AttributeSlotU5BU5D_t87B6D6037EDB3BC424B29D613C23C7D57290C3B3* get_attributes_8() const { return ___attributes_8; }
	inline AttributeSlotU5BU5D_t87B6D6037EDB3BC424B29D613C23C7D57290C3B3** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttributeSlotU5BU5D_t87B6D6037EDB3BC424B29D613C23C7D57290C3B3* value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_8), value);
	}

	inline static int32_t get_offset_of_attributeCount_9() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___attributeCount_9)); }
	inline int32_t get_attributeCount_9() const { return ___attributeCount_9; }
	inline int32_t* get_address_of_attributeCount_9() { return &___attributeCount_9; }
	inline void set_attributeCount_9(int32_t value)
	{
		___attributeCount_9 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_10() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___currentAttribute_10)); }
	inline int32_t get_currentAttribute_10() const { return ___currentAttribute_10; }
	inline int32_t* get_address_of_currentAttribute_10() { return &___currentAttribute_10; }
	inline void set_currentAttribute_10(int32_t value)
	{
		___currentAttribute_10 = value;
	}

	inline static int32_t get_offset_of_consumedAttribute_11() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___consumedAttribute_11)); }
	inline bool get_consumedAttribute_11() const { return ___consumedAttribute_11; }
	inline bool* get_address_of_consumedAttribute_11() { return &___consumedAttribute_11; }
	inline void set_consumedAttribute_11(bool value)
	{
		___consumedAttribute_11 = value;
	}

	inline static int32_t get_offset_of_elementStack_12() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___elementStack_12)); }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * get_elementStack_12() const { return ___elementStack_12; }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 ** get_address_of_elementStack_12() { return &___elementStack_12; }
	inline void set_elementStack_12(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * value)
	{
		___elementStack_12 = value;
		Il2CppCodeGenWriteBarrier((&___elementStack_12), value);
	}

	inline static int32_t get_offset_of_automataStack_13() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___automataStack_13)); }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * get_automataStack_13() const { return ___automataStack_13; }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 ** get_address_of_automataStack_13() { return &___automataStack_13; }
	inline void set_automataStack_13(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * value)
	{
		___automataStack_13 = value;
		Il2CppCodeGenWriteBarrier((&___automataStack_13), value);
	}

	inline static int32_t get_offset_of_popScope_14() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___popScope_14)); }
	inline bool get_popScope_14() const { return ___popScope_14; }
	inline bool* get_address_of_popScope_14() { return &___popScope_14; }
	inline void set_popScope_14(bool value)
	{
		___popScope_14 = value;
	}

	inline static int32_t get_offset_of_isStandalone_15() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___isStandalone_15)); }
	inline bool get_isStandalone_15() const { return ___isStandalone_15; }
	inline bool* get_address_of_isStandalone_15() { return &___isStandalone_15; }
	inline void set_isStandalone_15(bool value)
	{
		___isStandalone_15 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_16() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___currentAutomata_16)); }
	inline DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 * get_currentAutomata_16() const { return ___currentAutomata_16; }
	inline DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 ** get_address_of_currentAutomata_16() { return &___currentAutomata_16; }
	inline void set_currentAutomata_16(DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 * value)
	{
		___currentAutomata_16 = value;
		Il2CppCodeGenWriteBarrier((&___currentAutomata_16), value);
	}

	inline static int32_t get_offset_of_previousAutomata_17() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___previousAutomata_17)); }
	inline DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 * get_previousAutomata_17() const { return ___previousAutomata_17; }
	inline DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 ** get_address_of_previousAutomata_17() { return &___previousAutomata_17; }
	inline void set_previousAutomata_17(DTDAutomata_t831152C2924A60A794E81D920F5504585B94BFE7 * value)
	{
		___previousAutomata_17 = value;
		Il2CppCodeGenWriteBarrier((&___previousAutomata_17), value);
	}

	inline static int32_t get_offset_of_idList_18() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___idList_18)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_idList_18() const { return ___idList_18; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_idList_18() { return &___idList_18; }
	inline void set_idList_18(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___idList_18 = value;
		Il2CppCodeGenWriteBarrier((&___idList_18), value);
	}

	inline static int32_t get_offset_of_missingIDReferences_19() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___missingIDReferences_19)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_missingIDReferences_19() const { return ___missingIDReferences_19; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_missingIDReferences_19() { return &___missingIDReferences_19; }
	inline void set_missingIDReferences_19(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___missingIDReferences_19 = value;
		Il2CppCodeGenWriteBarrier((&___missingIDReferences_19), value);
	}

	inline static int32_t get_offset_of_nsmgr_20() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___nsmgr_20)); }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * get_nsmgr_20() const { return ___nsmgr_20; }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 ** get_address_of_nsmgr_20() { return &___nsmgr_20; }
	inline void set_nsmgr_20(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * value)
	{
		___nsmgr_20 = value;
		Il2CppCodeGenWriteBarrier((&___nsmgr_20), value);
	}

	inline static int32_t get_offset_of_currentTextValue_21() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___currentTextValue_21)); }
	inline String_t* get_currentTextValue_21() const { return ___currentTextValue_21; }
	inline String_t** get_address_of_currentTextValue_21() { return &___currentTextValue_21; }
	inline void set_currentTextValue_21(String_t* value)
	{
		___currentTextValue_21 = value;
		Il2CppCodeGenWriteBarrier((&___currentTextValue_21), value);
	}

	inline static int32_t get_offset_of_constructingTextValue_22() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___constructingTextValue_22)); }
	inline String_t* get_constructingTextValue_22() const { return ___constructingTextValue_22; }
	inline String_t** get_address_of_constructingTextValue_22() { return &___constructingTextValue_22; }
	inline void set_constructingTextValue_22(String_t* value)
	{
		___constructingTextValue_22 = value;
		Il2CppCodeGenWriteBarrier((&___constructingTextValue_22), value);
	}

	inline static int32_t get_offset_of_shouldResetCurrentTextValue_23() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___shouldResetCurrentTextValue_23)); }
	inline bool get_shouldResetCurrentTextValue_23() const { return ___shouldResetCurrentTextValue_23; }
	inline bool* get_address_of_shouldResetCurrentTextValue_23() { return &___shouldResetCurrentTextValue_23; }
	inline void set_shouldResetCurrentTextValue_23(bool value)
	{
		___shouldResetCurrentTextValue_23 = value;
	}

	inline static int32_t get_offset_of_isSignificantWhitespace_24() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___isSignificantWhitespace_24)); }
	inline bool get_isSignificantWhitespace_24() const { return ___isSignificantWhitespace_24; }
	inline bool* get_address_of_isSignificantWhitespace_24() { return &___isSignificantWhitespace_24; }
	inline void set_isSignificantWhitespace_24(bool value)
	{
		___isSignificantWhitespace_24 = value;
	}

	inline static int32_t get_offset_of_isWhitespace_25() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___isWhitespace_25)); }
	inline bool get_isWhitespace_25() const { return ___isWhitespace_25; }
	inline bool* get_address_of_isWhitespace_25() { return &___isWhitespace_25; }
	inline void set_isWhitespace_25(bool value)
	{
		___isWhitespace_25 = value;
	}

	inline static int32_t get_offset_of_isText_26() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___isText_26)); }
	inline bool get_isText_26() const { return ___isText_26; }
	inline bool* get_address_of_isText_26() { return &___isText_26; }
	inline void set_isText_26(bool value)
	{
		___isText_26 = value;
	}

	inline static int32_t get_offset_of_attributeValueEntityStack_27() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___attributeValueEntityStack_27)); }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * get_attributeValueEntityStack_27() const { return ___attributeValueEntityStack_27; }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 ** get_address_of_attributeValueEntityStack_27() { return &___attributeValueEntityStack_27; }
	inline void set_attributeValueEntityStack_27(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * value)
	{
		___attributeValueEntityStack_27 = value;
		Il2CppCodeGenWriteBarrier((&___attributeValueEntityStack_27), value);
	}

	inline static int32_t get_offset_of_valueBuilder_28() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___valueBuilder_28)); }
	inline StringBuilder_t * get_valueBuilder_28() const { return ___valueBuilder_28; }
	inline StringBuilder_t ** get_address_of_valueBuilder_28() { return &___valueBuilder_28; }
	inline void set_valueBuilder_28(StringBuilder_t * value)
	{
		___valueBuilder_28 = value;
		Il2CppCodeGenWriteBarrier((&___valueBuilder_28), value);
	}

	inline static int32_t get_offset_of_whitespaceChars_29() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8, ___whitespaceChars_29)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_whitespaceChars_29() const { return ___whitespaceChars_29; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_whitespaceChars_29() { return &___whitespaceChars_29; }
	inline void set_whitespaceChars_29(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___whitespaceChars_29 = value;
		Il2CppCodeGenWriteBarrier((&___whitespaceChars_29), value);
	}
};

struct DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switchU24map2A
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map2A_30;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_30() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_StaticFields, ___U3CU3Ef__switchU24map2A_30)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map2A_30() const { return ___U3CU3Ef__switchU24map2A_30; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map2A_30() { return &___U3CU3Ef__switchU24map2A_30; }
	inline void set_U3CU3Ef__switchU24map2A_30(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map2A_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDVALIDATINGREADER_T45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#define STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tCFD27E43C18381861212C0288CACF467FB602009  : public MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4
{
public:

public:
};

struct Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields, ___Null_1)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_Null_1() const { return ___Null_1; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
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
#ifndef WEBRESPONSE_T5E9F05BAC005D2105A122CD5973E1D70B9B45325_H
#define WEBRESPONSE_T5E9F05BAC005D2105A122CD5973E1D70B9B45325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t5E9F05BAC005D2105A122CD5973E1D70B9B45325  : public MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T5E9F05BAC005D2105A122CD5973E1D70B9B45325_H
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
#ifndef XMLDOCUMENT_T4C411CC65B75933374C140FB5737CF2C261CC763_H
#define XMLDOCUMENT_T4C411CC65B75933374C140FB5737CF2C261CC763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763  : public XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * ___lastLinkedChild_15;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * ___schemas_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeRemoving_24;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___nameTable_8)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___implementation_10)); }
	inline XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___resolver_12)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___idTable_13)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___nameCache_14)); }
	inline XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_schemas_16() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___schemas_16)); }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * get_schemas_16() const { return ___schemas_16; }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D ** get_address_of_schemas_16() { return &___schemas_16; }
	inline void set_schemas_16(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * value)
	{
		___schemas_16 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_16), value);
	}

	inline static int32_t get_offset_of_schemaInfo_17() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___schemaInfo_17)); }
	inline RuntimeObject* get_schemaInfo_17() const { return ___schemaInfo_17; }
	inline RuntimeObject** get_address_of_schemaInfo_17() { return &___schemaInfo_17; }
	inline void set_schemaInfo_17(RuntimeObject* value)
	{
		___schemaInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_17), value);
	}

	inline static int32_t get_offset_of_loadMode_18() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___loadMode_18)); }
	inline bool get_loadMode_18() const { return ___loadMode_18; }
	inline bool* get_address_of_loadMode_18() { return &___loadMode_18; }
	inline void set_loadMode_18(bool value)
	{
		___loadMode_18 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_19() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeChanged_19)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeChanged_19() const { return ___NodeChanged_19; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeChanged_19() { return &___NodeChanged_19; }
	inline void set_NodeChanged_19(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_19), value);
	}

	inline static int32_t get_offset_of_NodeChanging_20() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeChanging_20)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeChanging_20() const { return ___NodeChanging_20; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeChanging_20() { return &___NodeChanging_20; }
	inline void set_NodeChanging_20(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeChanging_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_20), value);
	}

	inline static int32_t get_offset_of_NodeInserted_21() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeInserted_21)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeInserted_21() const { return ___NodeInserted_21; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeInserted_21() { return &___NodeInserted_21; }
	inline void set_NodeInserted_21(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeInserted_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_21), value);
	}

	inline static int32_t get_offset_of_NodeInserting_22() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeInserting_22)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeInserting_22() const { return ___NodeInserting_22; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeInserting_22() { return &___NodeInserting_22; }
	inline void set_NodeInserting_22(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeInserting_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_22), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_23() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeRemoved_23)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeRemoved_23() const { return ___NodeRemoved_23; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeRemoved_23() { return &___NodeRemoved_23; }
	inline void set_NodeRemoved_23(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeRemoved_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_24() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeRemoving_24)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeRemoving_24() const { return ___NodeRemoving_24; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeRemoving_24() { return &___NodeRemoving_24; }
	inline void set_NodeRemoving_24(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeRemoving_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_24), value);
	}
};

struct XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T4C411CC65B75933374C140FB5737CF2C261CC763_H
#ifndef XMLLINKEDNODE_T8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23_H
#define XMLLINKEDNODE_T8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23  : public XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23, ___nextSibling_5)); }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23_H
#ifndef XMLTEXTREADER_T3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_H
#define XMLTEXTREADER_T3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3  : public XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * ___entityNameStack_6;

public:
	inline static int32_t get_offset_of_entity_2() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___entity_2)); }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * get_entity_2() const { return ___entity_2; }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 ** get_address_of_entity_2() { return &___entity_2; }
	inline void set_entity_2(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * value)
	{
		___entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___entity_2), value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___source_3)); }
	inline XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * get_source_3() const { return ___source_3; }
	inline XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___entityInsideAttribute_4)); }
	inline bool get_entityInsideAttribute_4() const { return ___entityInsideAttribute_4; }
	inline bool* get_address_of_entityInsideAttribute_4() { return &___entityInsideAttribute_4; }
	inline void set_entityInsideAttribute_4(bool value)
	{
		___entityInsideAttribute_4 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___insideAttribute_5)); }
	inline bool get_insideAttribute_5() const { return ___insideAttribute_5; }
	inline bool* get_address_of_insideAttribute_5() { return &___insideAttribute_5; }
	inline void set_insideAttribute_5(bool value)
	{
		___insideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___entityNameStack_6)); }
	inline Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * get_entityNameStack_6() const { return ___entityNameStack_6; }
	inline Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 ** get_address_of_entityNameStack_6() { return &___entityNameStack_6; }
	inline void set_entityNameStack_6(Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * value)
	{
		___entityNameStack_6 = value;
		Il2CppCodeGenWriteBarrier((&___entityNameStack_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_H
#ifndef XMLURLRESOLVER_TD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_H
#define XMLURLRESOLVER_TD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83  : public XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_TD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
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
#ifndef FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#define FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t31DF356A13590FED578C50963AE6A7DE1D2AF4A9 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t31DF356A13590FED578C50963AE6A7DE1D2AF4A9, ___value___1)); }
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
#endif // FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#ifndef FILEMODE_T02E675DEBF7B943D7860964036928636E5EB5D3F_H
#define FILEMODE_T02E675DEBF7B943D7860964036928636E5EB5D3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t02E675DEBF7B943D7860964036928636E5EB5D3F 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t02E675DEBF7B943D7860964036928636E5EB5D3F, ___value___1)); }
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
#endif // FILEMODE_T02E675DEBF7B943D7860964036928636E5EB5D3F_H
#ifndef FILESHARE_T62D741153960719BA9D15F0F957072043079FA10_H
#define FILESHARE_T62D741153960719BA9D15F0F957072043079FA10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t62D741153960719BA9D15F0F957072043079FA10 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t62D741153960719BA9D15F0F957072043079FA10, ___value___1)); }
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
#endif // FILESHARE_T62D741153960719BA9D15F0F957072043079FA10_H
#ifndef INDEXOUTOFRANGEEXCEPTION_TB79CEA688CCFB6AE1B0850B5388A02F7AD224C60_H
#define INDEXOUTOFRANGEEXCEPTION_TB79CEA688CCFB6AE1B0850B5388A02F7AD224C60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_TB79CEA688CCFB6AE1B0850B5388A02F7AD224C60_H
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
#ifndef AUTHENTICATIONLEVEL_TDD7C55ABAF179BD6273AA3DC6AC59A265B006E17_H
#define AUTHENTICATIONLEVEL_TDD7C55ABAF179BD6273AA3DC6AC59A265B006E17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_tDD7C55ABAF179BD6273AA3DC6AC59A265B006E17 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tDD7C55ABAF179BD6273AA3DC6AC59A265B006E17, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_TDD7C55ABAF179BD6273AA3DC6AC59A265B006E17_H
#ifndef NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#define NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifndef BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#define BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2, ___value___1)); }
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
#endif // BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef CONFORMANCELEVEL_TBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB_H
#define CONFORMANCELEVEL_TBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_tBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_tBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB, ___value___1)); }
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
#endif // CONFORMANCELEVEL_TBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB_H
#ifndef ENTITYHANDLING_TF590E11CFBDA825293A1964A1234087114F4B98D_H
#define ENTITYHANDLING_TF590E11CFBDA825293A1964A1234087114F4B98D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.EntityHandling
struct  EntityHandling_tF590E11CFBDA825293A1964A1234087114F4B98D 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EntityHandling_tF590E11CFBDA825293A1964A1234087114F4B98D, ___value___1)); }
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
#endif // ENTITYHANDLING_TF590E11CFBDA825293A1964A1234087114F4B98D_H
#ifndef READSTATE_TEB8765F42B4F591ECA14C88336750FF5E198AAF1_H
#define READSTATE_TEB8765F42B4F591ECA14C88336750FF5E198AAF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_tEB8765F42B4F591ECA14C88336750FF5E198AAF1 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReadState_tEB8765F42B4F591ECA14C88336750FF5E198AAF1, ___value___1)); }
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
#endif // READSTATE_TEB8765F42B4F591ECA14C88336750FF5E198AAF1_H
#ifndef XMLSCHEMAEXCEPTION_TCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D_H
#define XMLSCHEMAEXCEPTION_TCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaException::hasLineInfo
	bool ___hasLineInfo_11;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_13;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceObj
	XmlSchemaObject_tDD61EB6519D1FF4E9B08ADD6728F9FA9EDCBC747 * ___sourceObj_14;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_15;

public:
	inline static int32_t get_offset_of_hasLineInfo_11() { return static_cast<int32_t>(offsetof(XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D, ___hasLineInfo_11)); }
	inline bool get_hasLineInfo_11() const { return ___hasLineInfo_11; }
	inline bool* get_address_of_hasLineInfo_11() { return &___hasLineInfo_11; }
	inline void set_hasLineInfo_11(bool value)
	{
		___hasLineInfo_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_linePosition_13() { return static_cast<int32_t>(offsetof(XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D, ___linePosition_13)); }
	inline int32_t get_linePosition_13() const { return ___linePosition_13; }
	inline int32_t* get_address_of_linePosition_13() { return &___linePosition_13; }
	inline void set_linePosition_13(int32_t value)
	{
		___linePosition_13 = value;
	}

	inline static int32_t get_offset_of_sourceObj_14() { return static_cast<int32_t>(offsetof(XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D, ___sourceObj_14)); }
	inline XmlSchemaObject_tDD61EB6519D1FF4E9B08ADD6728F9FA9EDCBC747 * get_sourceObj_14() const { return ___sourceObj_14; }
	inline XmlSchemaObject_tDD61EB6519D1FF4E9B08ADD6728F9FA9EDCBC747 ** get_address_of_sourceObj_14() { return &___sourceObj_14; }
	inline void set_sourceObj_14(XmlSchemaObject_tDD61EB6519D1FF4E9B08ADD6728F9FA9EDCBC747 * value)
	{
		___sourceObj_14 = value;
		Il2CppCodeGenWriteBarrier((&___sourceObj_14), value);
	}

	inline static int32_t get_offset_of_sourceUri_15() { return static_cast<int32_t>(offsetof(XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D, ___sourceUri_15)); }
	inline String_t* get_sourceUri_15() const { return ___sourceUri_15; }
	inline String_t** get_address_of_sourceUri_15() { return &___sourceUri_15; }
	inline void set_sourceUri_15(String_t* value)
	{
		___sourceUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXCEPTION_TCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D_H
#ifndef XMLSCHEMASET_T57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D_H
#define XMLSCHEMASET_T57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___schemas_2;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::attributes
	XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * ___attributes_3;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::elements
	XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * ___elements_4;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::types
	XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * ___types_5;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::idCollection
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___idCollection_6;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::namedIdentities
	XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * ___namedIdentities_7;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t84466353D7B09B95C9D10D856332058F60FD31CD * ___settings_8;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::isCompiled
	bool ___isCompiled_9;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t  ___CompilationId_10;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::ValidationEventHandler
	ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * ___ValidationEventHandler_11;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___nameTable_0)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_0), value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___xmlResolver_1)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_1), value);
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___schemas_2)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_schemas_2() const { return ___schemas_2; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_2), value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___attributes_3)); }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * get_attributes_3() const { return ___attributes_3; }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_3), value);
	}

	inline static int32_t get_offset_of_elements_4() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___elements_4)); }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * get_elements_4() const { return ___elements_4; }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 ** get_address_of_elements_4() { return &___elements_4; }
	inline void set_elements_4(XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * value)
	{
		___elements_4 = value;
		Il2CppCodeGenWriteBarrier((&___elements_4), value);
	}

	inline static int32_t get_offset_of_types_5() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___types_5)); }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * get_types_5() const { return ___types_5; }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 ** get_address_of_types_5() { return &___types_5; }
	inline void set_types_5(XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * value)
	{
		___types_5 = value;
		Il2CppCodeGenWriteBarrier((&___types_5), value);
	}

	inline static int32_t get_offset_of_idCollection_6() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___idCollection_6)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_idCollection_6() const { return ___idCollection_6; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_idCollection_6() { return &___idCollection_6; }
	inline void set_idCollection_6(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___idCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&___idCollection_6), value);
	}

	inline static int32_t get_offset_of_namedIdentities_7() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___namedIdentities_7)); }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * get_namedIdentities_7() const { return ___namedIdentities_7; }
	inline XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 ** get_address_of_namedIdentities_7() { return &___namedIdentities_7; }
	inline void set_namedIdentities_7(XmlSchemaObjectTable_tA53C8BFD98C0E322B437AA48D3C89E01F6540D16 * value)
	{
		___namedIdentities_7 = value;
		Il2CppCodeGenWriteBarrier((&___namedIdentities_7), value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___settings_8)); }
	inline XmlSchemaCompilationSettings_t84466353D7B09B95C9D10D856332058F60FD31CD * get_settings_8() const { return ___settings_8; }
	inline XmlSchemaCompilationSettings_t84466353D7B09B95C9D10D856332058F60FD31CD ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(XmlSchemaCompilationSettings_t84466353D7B09B95C9D10D856332058F60FD31CD * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier((&___settings_8), value);
	}

	inline static int32_t get_offset_of_isCompiled_9() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___isCompiled_9)); }
	inline bool get_isCompiled_9() const { return ___isCompiled_9; }
	inline bool* get_address_of_isCompiled_9() { return &___isCompiled_9; }
	inline void set_isCompiled_9(bool value)
	{
		___isCompiled_9 = value;
	}

	inline static int32_t get_offset_of_CompilationId_10() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___CompilationId_10)); }
	inline Guid_t  get_CompilationId_10() const { return ___CompilationId_10; }
	inline Guid_t * get_address_of_CompilationId_10() { return &___CompilationId_10; }
	inline void set_CompilationId_10(Guid_t  value)
	{
		___CompilationId_10 = value;
	}

	inline static int32_t get_offset_of_ValidationEventHandler_11() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D, ___ValidationEventHandler_11)); }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * get_ValidationEventHandler_11() const { return ___ValidationEventHandler_11; }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B ** get_address_of_ValidationEventHandler_11() { return &___ValidationEventHandler_11; }
	inline void set_ValidationEventHandler_11(ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * value)
	{
		___ValidationEventHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMASET_T57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D_H
#ifndef XMLSCHEMAVALIDATIONFLAGS_TECE1A6138368A7455AC47A24FC5FD4920CDB8ACA_H
#define XMLSCHEMAVALIDATIONFLAGS_TECE1A6138368A7455AC47A24FC5FD4920CDB8ACA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationFlags
struct  XmlSchemaValidationFlags_tECE1A6138368A7455AC47A24FC5FD4920CDB8ACA 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_tECE1A6138368A7455AC47A24FC5FD4920CDB8ACA, ___value___1)); }
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
#endif // XMLSCHEMAVALIDATIONFLAGS_TECE1A6138368A7455AC47A24FC5FD4920CDB8ACA_H
#ifndef XMLSEVERITYTYPE_T128BFAEA33288999198A6D82DF83832E1A2DA060_H
#define XMLSEVERITYTYPE_T128BFAEA33288999198A6D82DF83832E1A2DA060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSeverityType
struct  XmlSeverityType_t128BFAEA33288999198A6D82DF83832E1A2DA060 
{
public:
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSeverityType_t128BFAEA33288999198A6D82DF83832E1A2DA060, ___value___1)); }
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
#endif // XMLSEVERITYTYPE_T128BFAEA33288999198A6D82DF83832E1A2DA060_H
#ifndef VALIDATIONTYPE_T31525A080D050BCFADE54364812432A4C5BDBE63_H
#define VALIDATIONTYPE_T31525A080D050BCFADE54364812432A4C5BDBE63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ValidationType
struct  ValidationType_t31525A080D050BCFADE54364812432A4C5BDBE63 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ValidationType_t31525A080D050BCFADE54364812432A4C5BDBE63, ___value___1)); }
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
#endif // VALIDATIONTYPE_T31525A080D050BCFADE54364812432A4C5BDBE63_H
#ifndef XMLCHARACTERDATA_T1733676F46934DE88DE8DEC9CF47190ABAE32F07_H
#define XMLCHARACTERDATA_T1733676F46934DE88DE8DEC9CF47190ABAE32F07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07  : public XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07, ___data_6)); }
	inline String_t* get_data_6() const { return ___data_6; }
	inline String_t** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(String_t* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((&___data_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1733676F46934DE88DE8DEC9CF47190ABAE32F07_H
#ifndef XMLEXCEPTION_TC3F8843762100626FC686CF0862B5545BCB261A1_H
#define XMLEXCEPTION_TC3F8843762100626FC686CF0862B5545BCB261A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlException
struct  XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.XmlException::res
	String_t* ___res_14;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___messages_15;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_linePosition_12() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___linePosition_12)); }
	inline int32_t get_linePosition_12() const { return ___linePosition_12; }
	inline int32_t* get_address_of_linePosition_12() { return &___linePosition_12; }
	inline void set_linePosition_12(int32_t value)
	{
		___linePosition_12 = value;
	}

	inline static int32_t get_offset_of_sourceUri_13() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___sourceUri_13)); }
	inline String_t* get_sourceUri_13() const { return ___sourceUri_13; }
	inline String_t** get_address_of_sourceUri_13() { return &___sourceUri_13; }
	inline void set_sourceUri_13(String_t* value)
	{
		___sourceUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_13), value);
	}

	inline static int32_t get_offset_of_res_14() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___res_14)); }
	inline String_t* get_res_14() const { return ___res_14; }
	inline String_t** get_address_of_res_14() { return &___res_14; }
	inline void set_res_14(String_t* value)
	{
		___res_14 = value;
		Il2CppCodeGenWriteBarrier((&___res_14), value);
	}

	inline static int32_t get_offset_of_messages_15() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___messages_15)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_messages_15() const { return ___messages_15; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_messages_15() { return &___messages_15; }
	inline void set_messages_15(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___messages_15 = value;
		Il2CppCodeGenWriteBarrier((&___messages_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLEXCEPTION_TC3F8843762100626FC686CF0862B5545BCB261A1_H
#ifndef XMLNODETYPE_TF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_H
#define XMLNODETYPE_TF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA, ___value___1)); }
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
#endif // XMLNODETYPE_TF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_H
#ifndef XMLSPACE_T6A54DEF6D051D3E7B2509C3E101CE153C833F7E0_H
#define XMLSPACE_T6A54DEF6D051D3E7B2509C3E101CE153C833F7E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t6A54DEF6D051D3E7B2509C3E101CE153C833F7E0 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t6A54DEF6D051D3E7B2509C3E101CE153C833F7E0, ___value___1)); }
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
#endif // XMLSPACE_T6A54DEF6D051D3E7B2509C3E101CE153C833F7E0_H
#ifndef XMLDECLSTATE_T1D1721A2F7823A6484A591BC8F6775DFEF3A13E0_H
#define XMLDECLSTATE_T1D1721A2F7823A6484A591BC8F6775DFEF3A13E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter_XmlDeclState
struct  XmlDeclState_t1D1721A2F7823A6484A591BC8F6775DFEF3A13E0 
{
public:
	// System.Int32 System.Xml.XmlTextWriter_XmlDeclState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDeclState_t1D1721A2F7823A6484A591BC8F6775DFEF3A13E0, ___value___1)); }
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
#endif // XMLDECLSTATE_T1D1721A2F7823A6484A591BC8F6775DFEF3A13E0_H
#ifndef XMLTOKENIZEDTYPE_T8CDA56668C31147E44A370167F11C0F6ACE7E338_H
#define XMLTOKENIZEDTYPE_T8CDA56668C31147E44A370167F11C0F6ACE7E338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTokenizedType
struct  XmlTokenizedType_t8CDA56668C31147E44A370167F11C0F6ACE7E338 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t8CDA56668C31147E44A370167F11C0F6ACE7E338, ___value___1)); }
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
#endif // XMLTOKENIZEDTYPE_T8CDA56668C31147E44A370167F11C0F6ACE7E338_H
#ifndef XSDVALIDATINGREADER_T2C211F16BDE384F56FB73B293505DEADE5AFCEB3_H
#define XSDVALIDATINGREADER_T2C211F16BDE384F56FB73B293505DEADE5AFCEB3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3  : public XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293
{
public:
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader_3;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_4;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	RuntimeObject* ___sourceReaderSchemaInfo_5;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	RuntimeObject* ___readerLineInfo_6;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_7;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * ___schemas_8;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_11;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t1859711C9A89E294EF4AC6BF8E7B1C6C4EEC6D3E * ___idManager_12;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_13;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___keyTables_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___currentKeyFieldConsumers_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___tmpKeyrefPool_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___elementQNameStack_17;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t9C730C7B40880A4D7409B129A8D041BD47438E68 * ___state_18;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_20;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_21;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_22;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95* ___defaultAttributes_23;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_24;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___defaultAttributesCache_25;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_26;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	RuntimeObject * ___currentAttrType_27;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * ___ValidationEventHandler_28;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___reader_3)); }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * get_reader_3() const { return ___reader_3; }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_resolver_4() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___resolver_4)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_4() const { return ___resolver_4; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_4() { return &___resolver_4; }
	inline void set_resolver_4(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_4 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_4), value);
	}

	inline static int32_t get_offset_of_sourceReaderSchemaInfo_5() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___sourceReaderSchemaInfo_5)); }
	inline RuntimeObject* get_sourceReaderSchemaInfo_5() const { return ___sourceReaderSchemaInfo_5; }
	inline RuntimeObject** get_address_of_sourceReaderSchemaInfo_5() { return &___sourceReaderSchemaInfo_5; }
	inline void set_sourceReaderSchemaInfo_5(RuntimeObject* value)
	{
		___sourceReaderSchemaInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReaderSchemaInfo_5), value);
	}

	inline static int32_t get_offset_of_readerLineInfo_6() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___readerLineInfo_6)); }
	inline RuntimeObject* get_readerLineInfo_6() const { return ___readerLineInfo_6; }
	inline RuntimeObject** get_address_of_readerLineInfo_6() { return &___readerLineInfo_6; }
	inline void set_readerLineInfo_6(RuntimeObject* value)
	{
		___readerLineInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___readerLineInfo_6), value);
	}

	inline static int32_t get_offset_of_validationType_7() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___validationType_7)); }
	inline int32_t get_validationType_7() const { return ___validationType_7; }
	inline int32_t* get_address_of_validationType_7() { return &___validationType_7; }
	inline void set_validationType_7(int32_t value)
	{
		___validationType_7 = value;
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___schemas_8)); }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_8), value);
	}

	inline static int32_t get_offset_of_namespaces_9() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___namespaces_9)); }
	inline bool get_namespaces_9() const { return ___namespaces_9; }
	inline bool* get_address_of_namespaces_9() { return &___namespaces_9; }
	inline void set_namespaces_9(bool value)
	{
		___namespaces_9 = value;
	}

	inline static int32_t get_offset_of_validationStarted_10() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___validationStarted_10)); }
	inline bool get_validationStarted_10() const { return ___validationStarted_10; }
	inline bool* get_address_of_validationStarted_10() { return &___validationStarted_10; }
	inline void set_validationStarted_10(bool value)
	{
		___validationStarted_10 = value;
	}

	inline static int32_t get_offset_of_checkIdentity_11() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___checkIdentity_11)); }
	inline bool get_checkIdentity_11() const { return ___checkIdentity_11; }
	inline bool* get_address_of_checkIdentity_11() { return &___checkIdentity_11; }
	inline void set_checkIdentity_11(bool value)
	{
		___checkIdentity_11 = value;
	}

	inline static int32_t get_offset_of_idManager_12() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___idManager_12)); }
	inline XsdIDManager_t1859711C9A89E294EF4AC6BF8E7B1C6C4EEC6D3E * get_idManager_12() const { return ___idManager_12; }
	inline XsdIDManager_t1859711C9A89E294EF4AC6BF8E7B1C6C4EEC6D3E ** get_address_of_idManager_12() { return &___idManager_12; }
	inline void set_idManager_12(XsdIDManager_t1859711C9A89E294EF4AC6BF8E7B1C6C4EEC6D3E * value)
	{
		___idManager_12 = value;
		Il2CppCodeGenWriteBarrier((&___idManager_12), value);
	}

	inline static int32_t get_offset_of_checkKeyConstraints_13() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___checkKeyConstraints_13)); }
	inline bool get_checkKeyConstraints_13() const { return ___checkKeyConstraints_13; }
	inline bool* get_address_of_checkKeyConstraints_13() { return &___checkKeyConstraints_13; }
	inline void set_checkKeyConstraints_13(bool value)
	{
		___checkKeyConstraints_13 = value;
	}

	inline static int32_t get_offset_of_keyTables_14() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___keyTables_14)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_keyTables_14() const { return ___keyTables_14; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_keyTables_14() { return &___keyTables_14; }
	inline void set_keyTables_14(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___keyTables_14 = value;
		Il2CppCodeGenWriteBarrier((&___keyTables_14), value);
	}

	inline static int32_t get_offset_of_currentKeyFieldConsumers_15() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___currentKeyFieldConsumers_15)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_currentKeyFieldConsumers_15() const { return ___currentKeyFieldConsumers_15; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_currentKeyFieldConsumers_15() { return &___currentKeyFieldConsumers_15; }
	inline void set_currentKeyFieldConsumers_15(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___currentKeyFieldConsumers_15 = value;
		Il2CppCodeGenWriteBarrier((&___currentKeyFieldConsumers_15), value);
	}

	inline static int32_t get_offset_of_tmpKeyrefPool_16() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___tmpKeyrefPool_16)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_tmpKeyrefPool_16() const { return ___tmpKeyrefPool_16; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_tmpKeyrefPool_16() { return &___tmpKeyrefPool_16; }
	inline void set_tmpKeyrefPool_16(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___tmpKeyrefPool_16 = value;
		Il2CppCodeGenWriteBarrier((&___tmpKeyrefPool_16), value);
	}

	inline static int32_t get_offset_of_elementQNameStack_17() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___elementQNameStack_17)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_elementQNameStack_17() const { return ___elementQNameStack_17; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_elementQNameStack_17() { return &___elementQNameStack_17; }
	inline void set_elementQNameStack_17(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___elementQNameStack_17 = value;
		Il2CppCodeGenWriteBarrier((&___elementQNameStack_17), value);
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___state_18)); }
	inline XsdParticleStateManager_t9C730C7B40880A4D7409B129A8D041BD47438E68 * get_state_18() const { return ___state_18; }
	inline XsdParticleStateManager_t9C730C7B40880A4D7409B129A8D041BD47438E68 ** get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(XsdParticleStateManager_t9C730C7B40880A4D7409B129A8D041BD47438E68 * value)
	{
		___state_18 = value;
		Il2CppCodeGenWriteBarrier((&___state_18), value);
	}

	inline static int32_t get_offset_of_skipValidationDepth_19() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___skipValidationDepth_19)); }
	inline int32_t get_skipValidationDepth_19() const { return ___skipValidationDepth_19; }
	inline int32_t* get_address_of_skipValidationDepth_19() { return &___skipValidationDepth_19; }
	inline void set_skipValidationDepth_19(int32_t value)
	{
		___skipValidationDepth_19 = value;
	}

	inline static int32_t get_offset_of_xsiNilDepth_20() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___xsiNilDepth_20)); }
	inline int32_t get_xsiNilDepth_20() const { return ___xsiNilDepth_20; }
	inline int32_t* get_address_of_xsiNilDepth_20() { return &___xsiNilDepth_20; }
	inline void set_xsiNilDepth_20(int32_t value)
	{
		___xsiNilDepth_20 = value;
	}

	inline static int32_t get_offset_of_storedCharacters_21() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___storedCharacters_21)); }
	inline StringBuilder_t * get_storedCharacters_21() const { return ___storedCharacters_21; }
	inline StringBuilder_t ** get_address_of_storedCharacters_21() { return &___storedCharacters_21; }
	inline void set_storedCharacters_21(StringBuilder_t * value)
	{
		___storedCharacters_21 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_21), value);
	}

	inline static int32_t get_offset_of_shouldValidateCharacters_22() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___shouldValidateCharacters_22)); }
	inline bool get_shouldValidateCharacters_22() const { return ___shouldValidateCharacters_22; }
	inline bool* get_address_of_shouldValidateCharacters_22() { return &___shouldValidateCharacters_22; }
	inline void set_shouldValidateCharacters_22(bool value)
	{
		___shouldValidateCharacters_22 = value;
	}

	inline static int32_t get_offset_of_defaultAttributes_23() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___defaultAttributes_23)); }
	inline XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95* get_defaultAttributes_23() const { return ___defaultAttributes_23; }
	inline XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95** get_address_of_defaultAttributes_23() { return &___defaultAttributes_23; }
	inline void set_defaultAttributes_23(XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95* value)
	{
		___defaultAttributes_23 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttributes_23), value);
	}

	inline static int32_t get_offset_of_currentDefaultAttribute_24() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___currentDefaultAttribute_24)); }
	inline int32_t get_currentDefaultAttribute_24() const { return ___currentDefaultAttribute_24; }
	inline int32_t* get_address_of_currentDefaultAttribute_24() { return &___currentDefaultAttribute_24; }
	inline void set_currentDefaultAttribute_24(int32_t value)
	{
		___currentDefaultAttribute_24 = value;
	}

	inline static int32_t get_offset_of_defaultAttributesCache_25() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___defaultAttributesCache_25)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_defaultAttributesCache_25() const { return ___defaultAttributesCache_25; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_defaultAttributesCache_25() { return &___defaultAttributesCache_25; }
	inline void set_defaultAttributesCache_25(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___defaultAttributesCache_25 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttributesCache_25), value);
	}

	inline static int32_t get_offset_of_defaultAttributeConsumed_26() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___defaultAttributeConsumed_26)); }
	inline bool get_defaultAttributeConsumed_26() const { return ___defaultAttributeConsumed_26; }
	inline bool* get_address_of_defaultAttributeConsumed_26() { return &___defaultAttributeConsumed_26; }
	inline void set_defaultAttributeConsumed_26(bool value)
	{
		___defaultAttributeConsumed_26 = value;
	}

	inline static int32_t get_offset_of_currentAttrType_27() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___currentAttrType_27)); }
	inline RuntimeObject * get_currentAttrType_27() const { return ___currentAttrType_27; }
	inline RuntimeObject ** get_address_of_currentAttrType_27() { return &___currentAttrType_27; }
	inline void set_currentAttrType_27(RuntimeObject * value)
	{
		___currentAttrType_27 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttrType_27), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_28() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3, ___ValidationEventHandler_28)); }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * get_ValidationEventHandler_28() const { return ___ValidationEventHandler_28; }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B ** get_address_of_ValidationEventHandler_28() { return &___ValidationEventHandler_28; }
	inline void set_ValidationEventHandler_28(ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * value)
	{
		___ValidationEventHandler_28 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_28), value);
	}
};

struct XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95* ___emptyAttributeArray_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switchU24map3
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map3_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switchU24map4
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map4_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switchU24map5
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map5_31;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_2() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_StaticFields, ___emptyAttributeArray_2)); }
	inline XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95* get_emptyAttributeArray_2() const { return ___emptyAttributeArray_2; }
	inline XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95** get_address_of_emptyAttributeArray_2() { return &___emptyAttributeArray_2; }
	inline void set_emptyAttributeArray_2(XmlSchemaAttributeU5BU5D_tC4DF4D638E4C3887DC92B7A37937F47F6B99AF95* value)
	{
		___emptyAttributeArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptyAttributeArray_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_29() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_StaticFields, ___U3CU3Ef__switchU24map3_29)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map3_29() const { return ___U3CU3Ef__switchU24map3_29; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map3_29() { return &___U3CU3Ef__switchU24map3_29; }
	inline void set_U3CU3Ef__switchU24map3_29(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map3_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_30() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_StaticFields, ___U3CU3Ef__switchU24map4_30)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map4_30() const { return ___U3CU3Ef__switchU24map4_30; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map4_30() { return &___U3CU3Ef__switchU24map4_30; }
	inline void set_U3CU3Ef__switchU24map4_30(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map4_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_31() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_StaticFields, ___U3CU3Ef__switchU24map5_31)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map5_31() const { return ___U3CU3Ef__switchU24map5_31; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map5_31() { return &___U3CU3Ef__switchU24map5_31; }
	inline void set_U3CU3Ef__switchU24map5_31(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map5_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSDVALIDATINGREADER_T2C211F16BDE384F56FB73B293505DEADE5AFCEB3_H
#ifndef FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#define FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4  : public Stream_tCFD27E43C18381861212C0288CACF467FB602009
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_2;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_3;
	// System.Boolean System.IO.FileStream::async
	bool ___async_4;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_5;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_6;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_7;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___buf_8;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_9;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_10;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_11;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_12;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_13;
	// System.String System.IO.FileStream::name
	String_t* ___name_14;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_15;

public:
	inline static int32_t get_offset_of_access_2() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___access_2)); }
	inline int32_t get_access_2() const { return ___access_2; }
	inline int32_t* get_address_of_access_2() { return &___access_2; }
	inline void set_access_2(int32_t value)
	{
		___access_2 = value;
	}

	inline static int32_t get_offset_of_owner_3() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___owner_3)); }
	inline bool get_owner_3() const { return ___owner_3; }
	inline bool* get_address_of_owner_3() { return &___owner_3; }
	inline void set_owner_3(bool value)
	{
		___owner_3 = value;
	}

	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___async_4)); }
	inline bool get_async_4() const { return ___async_4; }
	inline bool* get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(bool value)
	{
		___async_4 = value;
	}

	inline static int32_t get_offset_of_canseek_5() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___canseek_5)); }
	inline bool get_canseek_5() const { return ___canseek_5; }
	inline bool* get_address_of_canseek_5() { return &___canseek_5; }
	inline void set_canseek_5(bool value)
	{
		___canseek_5 = value;
	}

	inline static int32_t get_offset_of_append_startpos_6() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___append_startpos_6)); }
	inline int64_t get_append_startpos_6() const { return ___append_startpos_6; }
	inline int64_t* get_address_of_append_startpos_6() { return &___append_startpos_6; }
	inline void set_append_startpos_6(int64_t value)
	{
		___append_startpos_6 = value;
	}

	inline static int32_t get_offset_of_anonymous_7() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___anonymous_7)); }
	inline bool get_anonymous_7() const { return ___anonymous_7; }
	inline bool* get_address_of_anonymous_7() { return &___anonymous_7; }
	inline void set_anonymous_7(bool value)
	{
		___anonymous_7 = value;
	}

	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_8)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___buf_8), value);
	}

	inline static int32_t get_offset_of_buf_size_9() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_size_9)); }
	inline int32_t get_buf_size_9() const { return ___buf_size_9; }
	inline int32_t* get_address_of_buf_size_9() { return &___buf_size_9; }
	inline void set_buf_size_9(int32_t value)
	{
		___buf_size_9 = value;
	}

	inline static int32_t get_offset_of_buf_length_10() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_length_10)); }
	inline int32_t get_buf_length_10() const { return ___buf_length_10; }
	inline int32_t* get_address_of_buf_length_10() { return &___buf_length_10; }
	inline void set_buf_length_10(int32_t value)
	{
		___buf_length_10 = value;
	}

	inline static int32_t get_offset_of_buf_offset_11() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_offset_11)); }
	inline int32_t get_buf_offset_11() const { return ___buf_offset_11; }
	inline int32_t* get_address_of_buf_offset_11() { return &___buf_offset_11; }
	inline void set_buf_offset_11(int32_t value)
	{
		___buf_offset_11 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_12() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_dirty_12)); }
	inline bool get_buf_dirty_12() const { return ___buf_dirty_12; }
	inline bool* get_address_of_buf_dirty_12() { return &___buf_dirty_12; }
	inline void set_buf_dirty_12(bool value)
	{
		___buf_dirty_12 = value;
	}

	inline static int32_t get_offset_of_buf_start_13() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_start_13)); }
	inline int64_t get_buf_start_13() const { return ___buf_start_13; }
	inline int64_t* get_address_of_buf_start_13() { return &___buf_start_13; }
	inline void set_buf_start_13(int64_t value)
	{
		___buf_start_13 = value;
	}

	inline static int32_t get_offset_of_name_14() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___name_14)); }
	inline String_t* get_name_14() const { return ___name_14; }
	inline String_t** get_address_of_name_14() { return &___name_14; }
	inline void set_name_14(String_t* value)
	{
		___name_14 = value;
		Il2CppCodeGenWriteBarrier((&___name_14), value);
	}

	inline static int32_t get_offset_of_handle_15() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___handle_15)); }
	inline intptr_t get_handle_15() const { return ___handle_15; }
	inline intptr_t* get_address_of_handle_15() { return &___handle_15; }
	inline void set_handle_15(intptr_t value)
	{
		___handle_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
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
#ifndef WEBREQUEST_T079731BC640578743ADC705570EAC33A9BCFB399_H
#define WEBREQUEST_T079731BC640578743ADC705570EAC33A9BCFB399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399  : public MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T079731BC640578743ADC705570EAC33A9BCFB399_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef VALIDATIONEVENTARGS_T509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D_H
#define VALIDATIONEVENTARGS_T509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D  : public EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17
{
public:
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::exception
	XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D * ___exception_1;
	// System.String System.Xml.Schema.ValidationEventArgs::message
	String_t* ___message_2;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_3;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D, ___exception_1)); }
	inline XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D * get_exception_1() const { return ___exception_1; }
	inline XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_severity_3() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D, ___severity_3)); }
	inline int32_t get_severity_3() const { return ___severity_3; }
	inline int32_t* get_address_of_severity_3() { return &___severity_3; }
	inline void set_severity_3(int32_t value)
	{
		___severity_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTARGS_T509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D_H
#ifndef XMLPARSERCONTEXT_TFCFB3C705A296076573E3517AAD1F1C187DACB14_H
#define XMLPARSERCONTEXT_TFCFB3C705A296076573E3517AAD1F1C187DACB14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext
struct  XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI_0;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName_1;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___encoding_2;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset_3;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * ___namespaceManager_4;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_5;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID_6;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID_7;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang_8;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace_9;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___contextItems_10;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount_11;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * ___dtd_12;

public:
	inline static int32_t get_offset_of_baseURI_0() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___baseURI_0)); }
	inline String_t* get_baseURI_0() const { return ___baseURI_0; }
	inline String_t** get_address_of_baseURI_0() { return &___baseURI_0; }
	inline void set_baseURI_0(String_t* value)
	{
		___baseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_0), value);
	}

	inline static int32_t get_offset_of_docTypeName_1() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___docTypeName_1)); }
	inline String_t* get_docTypeName_1() const { return ___docTypeName_1; }
	inline String_t** get_address_of_docTypeName_1() { return &___docTypeName_1; }
	inline void set_docTypeName_1(String_t* value)
	{
		___docTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeName_1), value);
	}

	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___encoding_2)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}

	inline static int32_t get_offset_of_internalSubset_3() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___internalSubset_3)); }
	inline String_t* get_internalSubset_3() const { return ___internalSubset_3; }
	inline String_t** get_address_of_internalSubset_3() { return &___internalSubset_3; }
	inline void set_internalSubset_3(String_t* value)
	{
		___internalSubset_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSubset_3), value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_4), value);
	}

	inline static int32_t get_offset_of_nameTable_5() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___nameTable_5)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_5() const { return ___nameTable_5; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_5() { return &___nameTable_5; }
	inline void set_nameTable_5(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_5), value);
	}

	inline static int32_t get_offset_of_publicID_6() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___publicID_6)); }
	inline String_t* get_publicID_6() const { return ___publicID_6; }
	inline String_t** get_address_of_publicID_6() { return &___publicID_6; }
	inline void set_publicID_6(String_t* value)
	{
		___publicID_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicID_6), value);
	}

	inline static int32_t get_offset_of_systemID_7() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___systemID_7)); }
	inline String_t* get_systemID_7() const { return ___systemID_7; }
	inline String_t** get_address_of_systemID_7() { return &___systemID_7; }
	inline void set_systemID_7(String_t* value)
	{
		___systemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemID_7), value);
	}

	inline static int32_t get_offset_of_xmlLang_8() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___xmlLang_8)); }
	inline String_t* get_xmlLang_8() const { return ___xmlLang_8; }
	inline String_t** get_address_of_xmlLang_8() { return &___xmlLang_8; }
	inline void set_xmlLang_8(String_t* value)
	{
		___xmlLang_8 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_8), value);
	}

	inline static int32_t get_offset_of_xmlSpace_9() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___xmlSpace_9)); }
	inline int32_t get_xmlSpace_9() const { return ___xmlSpace_9; }
	inline int32_t* get_address_of_xmlSpace_9() { return &___xmlSpace_9; }
	inline void set_xmlSpace_9(int32_t value)
	{
		___xmlSpace_9 = value;
	}

	inline static int32_t get_offset_of_contextItems_10() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___contextItems_10)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_contextItems_10() const { return ___contextItems_10; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_contextItems_10() { return &___contextItems_10; }
	inline void set_contextItems_10(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___contextItems_10 = value;
		Il2CppCodeGenWriteBarrier((&___contextItems_10), value);
	}

	inline static int32_t get_offset_of_contextItemCount_11() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___contextItemCount_11)); }
	inline int32_t get_contextItemCount_11() const { return ___contextItemCount_11; }
	inline int32_t* get_address_of_contextItemCount_11() { return &___contextItemCount_11; }
	inline void set_contextItemCount_11(int32_t value)
	{
		___contextItemCount_11 = value;
	}

	inline static int32_t get_offset_of_dtd_12() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___dtd_12)); }
	inline DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * get_dtd_12() const { return ___dtd_12; }
	inline DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E ** get_address_of_dtd_12() { return &___dtd_12; }
	inline void set_dtd_12(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * value)
	{
		___dtd_12 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERCONTEXT_TFCFB3C705A296076573E3517AAD1F1C187DACB14_H
#ifndef XMLREADERSETTINGS_TCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB_H
#define XMLREADERSETTINGS_TCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * ___schemas_2;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_3;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_4;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_conformance_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___conformance_1)); }
	inline int32_t get_conformance_1() const { return ___conformance_1; }
	inline int32_t* get_address_of_conformance_1() { return &___conformance_1; }
	inline void set_conformance_1(int32_t value)
	{
		___conformance_1 = value;
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___schemas_2)); }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * get_schemas_2() const { return ___schemas_2; }
	inline XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_2), value);
	}

	inline static int32_t get_offset_of_schemasNeedsInitialization_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___schemasNeedsInitialization_3)); }
	inline bool get_schemasNeedsInitialization_3() const { return ___schemasNeedsInitialization_3; }
	inline bool* get_address_of_schemasNeedsInitialization_3() { return &___schemasNeedsInitialization_3; }
	inline void set_schemasNeedsInitialization_3(bool value)
	{
		___schemasNeedsInitialization_3 = value;
	}

	inline static int32_t get_offset_of_validationFlags_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___validationFlags_4)); }
	inline int32_t get_validationFlags_4() const { return ___validationFlags_4; }
	inline int32_t* get_address_of_validationFlags_4() { return &___validationFlags_4; }
	inline void set_validationFlags_4(int32_t value)
	{
		___validationFlags_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERSETTINGS_TCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB_H
#ifndef XMLNODEINFO_TB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_H
#define XMLNODEINFO_TB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter_XmlNodeInfo
struct  XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlTextWriter_XmlNodeInfo::Prefix
	String_t* ___Prefix_0;
	// System.String System.Xml.XmlTextWriter_XmlNodeInfo::LocalName
	String_t* ___LocalName_1;
	// System.String System.Xml.XmlTextWriter_XmlNodeInfo::NS
	String_t* ___NS_2;
	// System.Boolean System.Xml.XmlTextWriter_XmlNodeInfo::HasSimple
	bool ___HasSimple_3;
	// System.Boolean System.Xml.XmlTextWriter_XmlNodeInfo::HasElements
	bool ___HasElements_4;
	// System.String System.Xml.XmlTextWriter_XmlNodeInfo::XmlLang
	String_t* ___XmlLang_5;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter_XmlNodeInfo::XmlSpace
	int32_t ___XmlSpace_6;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prefix_0), value);
	}

	inline static int32_t get_offset_of_LocalName_1() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___LocalName_1)); }
	inline String_t* get_LocalName_1() const { return ___LocalName_1; }
	inline String_t** get_address_of_LocalName_1() { return &___LocalName_1; }
	inline void set_LocalName_1(String_t* value)
	{
		___LocalName_1 = value;
		Il2CppCodeGenWriteBarrier((&___LocalName_1), value);
	}

	inline static int32_t get_offset_of_NS_2() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___NS_2)); }
	inline String_t* get_NS_2() const { return ___NS_2; }
	inline String_t** get_address_of_NS_2() { return &___NS_2; }
	inline void set_NS_2(String_t* value)
	{
		___NS_2 = value;
		Il2CppCodeGenWriteBarrier((&___NS_2), value);
	}

	inline static int32_t get_offset_of_HasSimple_3() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___HasSimple_3)); }
	inline bool get_HasSimple_3() const { return ___HasSimple_3; }
	inline bool* get_address_of_HasSimple_3() { return &___HasSimple_3; }
	inline void set_HasSimple_3(bool value)
	{
		___HasSimple_3 = value;
	}

	inline static int32_t get_offset_of_HasElements_4() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___HasElements_4)); }
	inline bool get_HasElements_4() const { return ___HasElements_4; }
	inline bool* get_address_of_HasElements_4() { return &___HasElements_4; }
	inline void set_HasElements_4(bool value)
	{
		___HasElements_4 = value;
	}

	inline static int32_t get_offset_of_XmlLang_5() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___XmlLang_5)); }
	inline String_t* get_XmlLang_5() const { return ___XmlLang_5; }
	inline String_t** get_address_of_XmlLang_5() { return &___XmlLang_5; }
	inline void set_XmlLang_5(String_t* value)
	{
		___XmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___XmlLang_5), value);
	}

	inline static int32_t get_offset_of_XmlSpace_6() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___XmlSpace_6)); }
	inline int32_t get_XmlSpace_6() const { return ___XmlSpace_6; }
	inline int32_t* get_address_of_XmlSpace_6() { return &___XmlSpace_6; }
	inline void set_XmlSpace_6(int32_t value)
	{
		___XmlSpace_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODEINFO_TB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_H
#ifndef XMLVALIDATINGREADER_T524BE1B3546FA8855DD8C66D124AC456FB68D3E6_H
#define XMLVALIDATINGREADER_T524BE1B3546FA8855DD8C66D124AC456FB68D3E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6  : public XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293
{
public:
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_2;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___sourceReader_3;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * ___xmlTextReader_4;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___validatingReader_5;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_6;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_7;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * ___schemas_9;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * ___dtdReader_10;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	RuntimeObject* ___schemaInfo_11;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_12;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * ___ValidationEventHandler_13;

public:
	inline static int32_t get_offset_of_entityHandling_2() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___entityHandling_2)); }
	inline int32_t get_entityHandling_2() const { return ___entityHandling_2; }
	inline int32_t* get_address_of_entityHandling_2() { return &___entityHandling_2; }
	inline void set_entityHandling_2(int32_t value)
	{
		___entityHandling_2 = value;
	}

	inline static int32_t get_offset_of_sourceReader_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___sourceReader_3)); }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * get_sourceReader_3() const { return ___sourceReader_3; }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 ** get_address_of_sourceReader_3() { return &___sourceReader_3; }
	inline void set_sourceReader_3(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * value)
	{
		___sourceReader_3 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReader_3), value);
	}

	inline static int32_t get_offset_of_xmlTextReader_4() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___xmlTextReader_4)); }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * get_xmlTextReader_4() const { return ___xmlTextReader_4; }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 ** get_address_of_xmlTextReader_4() { return &___xmlTextReader_4; }
	inline void set_xmlTextReader_4(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * value)
	{
		___xmlTextReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlTextReader_4), value);
	}

	inline static int32_t get_offset_of_validatingReader_5() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___validatingReader_5)); }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * get_validatingReader_5() const { return ___validatingReader_5; }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 ** get_address_of_validatingReader_5() { return &___validatingReader_5; }
	inline void set_validatingReader_5(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * value)
	{
		___validatingReader_5 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_5), value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___resolver_6)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_6), value);
	}

	inline static int32_t get_offset_of_resolverSpecified_7() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___resolverSpecified_7)); }
	inline bool get_resolverSpecified_7() const { return ___resolverSpecified_7; }
	inline bool* get_address_of_resolverSpecified_7() { return &___resolverSpecified_7; }
	inline void set_resolverSpecified_7(bool value)
	{
		___resolverSpecified_7 = value;
	}

	inline static int32_t get_offset_of_validationType_8() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___validationType_8)); }
	inline int32_t get_validationType_8() const { return ___validationType_8; }
	inline int32_t* get_address_of_validationType_8() { return &___validationType_8; }
	inline void set_validationType_8(int32_t value)
	{
		___validationType_8 = value;
	}

	inline static int32_t get_offset_of_schemas_9() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___schemas_9)); }
	inline XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * get_schemas_9() const { return ___schemas_9; }
	inline XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 ** get_address_of_schemas_9() { return &___schemas_9; }
	inline void set_schemas_9(XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * value)
	{
		___schemas_9 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_9), value);
	}

	inline static int32_t get_offset_of_dtdReader_10() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___dtdReader_10)); }
	inline DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * get_dtdReader_10() const { return ___dtdReader_10; }
	inline DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 ** get_address_of_dtdReader_10() { return &___dtdReader_10; }
	inline void set_dtdReader_10(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * value)
	{
		___dtdReader_10 = value;
		Il2CppCodeGenWriteBarrier((&___dtdReader_10), value);
	}

	inline static int32_t get_offset_of_schemaInfo_11() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___schemaInfo_11)); }
	inline RuntimeObject* get_schemaInfo_11() const { return ___schemaInfo_11; }
	inline RuntimeObject** get_address_of_schemaInfo_11() { return &___schemaInfo_11; }
	inline void set_schemaInfo_11(RuntimeObject* value)
	{
		___schemaInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_11), value);
	}

	inline static int32_t get_offset_of_storedCharacters_12() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___storedCharacters_12)); }
	inline StringBuilder_t * get_storedCharacters_12() const { return ___storedCharacters_12; }
	inline StringBuilder_t ** get_address_of_storedCharacters_12() { return &___storedCharacters_12; }
	inline void set_storedCharacters_12(StringBuilder_t * value)
	{
		___storedCharacters_12 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_12), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_13() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6, ___ValidationEventHandler_13)); }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * get_ValidationEventHandler_13() const { return ___ValidationEventHandler_13; }
	inline ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B ** get_address_of_ValidationEventHandler_13() { return &___ValidationEventHandler_13; }
	inline void set_ValidationEventHandler_13(ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * value)
	{
		___ValidationEventHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALIDATINGREADER_T524BE1B3546FA8855DD8C66D124AC456FB68D3E6_H
#ifndef XMLWHITESPACE_T94DE163BDCCE5B034799544EE082260E57B4D53C_H
#define XMLWHITESPACE_T94DE163BDCCE5B034799544EE082260E57B4D53C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C  : public XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T94DE163BDCCE5B034799544EE082260E57B4D53C_H
#ifndef VALIDATIONEVENTHANDLER_T4E1A0D7874804802BF369D671E548EE69B97AD6B_H
#define VALIDATIONEVENTHANDLER_T4E1A0D7874804802BF369D671E548EE69B97AD6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventHandler
struct  ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTHANDLER_T4E1A0D7874804802BF369D671E548EE69B97AD6B_H
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE (const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m370C20A66261F43FCDF2E104772F22EE8CC0E3B2 (RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlResolver__ctor_mB32167F90F738DA3CD20C839054391C8F8262254 (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981 (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m21D365CF42848C29CCAA2898DF17B47E7224D346 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_LocalPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_LocalPath_m40FBFECE2E19CBF9DC9565A4008668F35E8F4246 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, String_t* ___src0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" IL2CPP_METHOD_ATTR void FileStream__ctor_mEBDC7830FFEE997544BDA0B10DFCD8D7F28F13B3 (FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * __this, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C" IL2CPP_METHOD_ATTR WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * WebRequest_Create_m443EBD17EC628818C7FAEBFB4BD733F945CD19FF (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, const RuntimeMethod* method);
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_mFBD45959BBD1A0F86D140D21ACB6A6511062F8D4 (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C" IL2CPP_METHOD_ATTR XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * DTDValidatingReader_get_ParserContext_m5703854215640613C89FBCB5C88636FF6D77A247 (DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" IL2CPP_METHOD_ATTR void DTDValidatingReader_set_EntityHandling_m8C1512A414C112C2ED0A369BA28A73C0936C67E6 (DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_Namespaces_m6B4B4A960546654D9859BFFA5D2D308131A6B67F (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_Namespaces_m99CBBEE6F0E9083DDEF1DF354190D13D46D081D0 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * XmlTextReader_get_Resolver_mA42CC375B33F9290A9B07A068142EEB3B5DF32B3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlSchemaCollection__ctor_m5A14040E6F005CE4F4331BBA753C8E60B1CD979A (XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * __this, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9 (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m2AF00D3741C73B3938339589F9DFA4483BB1EC54 (IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60 * __this, String_t* p0, const RuntimeMethod* method);
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_ValidationType_m075F776977116749AA5A388E7F0D86EBC2BAC941 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C" IL2CPP_METHOD_ATTR void DTDValidatingReader__ctor_m559D480B914C2BE42C77BAF3F41B22A68D611C32 (DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * ___validatingReader1, const RuntimeMethod* method);
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * XmlValidatingReader_get_Resolver_mC1FB96B0F83953BA3590445F629D13ABA208193B (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void DTDValidatingReader_set_XmlResolver_mBBA382E23487FFCDCBA31B195861E63F322E6563 (DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * __this, XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XsdValidatingReader__ctor_m48D639C818E9C03AE5CAF2BEED55F8DF8B9666EB (XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ValidationEventHandler__ctor_m177B365379B5A14BC1221F0F2AE5D16D4BA8BA02 (ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m0B97666DC3AE06650FD9F4A4567CF27EE66B71C3 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" IL2CPP_METHOD_ATTR void XsdValidatingReader_set_ValidationType_m829308A27A01C6BAD6CD17CB7871059A720F4ED5 (XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C" IL2CPP_METHOD_ATTR XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * XmlValidatingReader_get_Schemas_m95C27E83C4D6535BDFAC4F957EA52C345C1AD96F (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C" IL2CPP_METHOD_ATTR XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * XmlSchemaCollection_get_SchemaSet_m30D6A501D76B32526374C5D256F538149931D885 (XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C" IL2CPP_METHOD_ATTR void XsdValidatingReader_set_Schemas_m0D9E99B166416B09320C39E60B49F57DEB113FBE (XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * __this, XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XsdValidatingReader_set_XmlResolver_m08407E8239DF4D89D4170512BF2177352109A6A2 (XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * __this, XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" IL2CPP_METHOD_ATTR void ValidationEventHandler_Invoke_m579D34833B476076C624BD52E267E8EAD4E581B1 (ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * __this, RuntimeObject * ___sender0, ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * ___e1, const RuntimeMethod* method);
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C" IL2CPP_METHOD_ATTR int32_t ValidationEventArgs_get_Severity_m35A2CBE9CF82218E532BB74C0B178D8450AC68D3 (ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * __this, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C" IL2CPP_METHOD_ATTR XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D * ValidationEventArgs_get_Exception_m3CE816FE52D56B05298B75DAB3F372834BB296A2 (ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlCharacterData__ctor_m3001E8B020596810D7E107CF5132ACE77AA87717 (XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07 * __this, String_t* ___data0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlChar_IsWhitespace_m87107CE6DCB1495651A27C956F8AE79979E4856E (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlNode_get_ParentNode_m8CB63DB1EDF0980BD5C0AEA25EE3DA6BA38E7E0F (XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m13ABB40D42CE7949E2AE7C40AF106D8081FAC763 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m26CA155F552639BC24D4F60810E588E32129C60A (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_mB07DBF652398180743DA95E1DDA9DAC704B75167 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttribute_mF1F3A889443CA2CB881E0208E9FC63C668C0DA90 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, bool ___defattr1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1 (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter_StringUtil::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StringUtil__cctor_m6EC96521C681EAC4DE279D333C79885DAE497D5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil__cctor_m6EC96521C681EAC4DE279D333C79885DAE497D5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_0 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->set_cul_0(L_0);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_1 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		NullCheck(L_1);
		CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * L_2 = VirtFuncInvoker0< CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * >::Invoke(11 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->set_cmp_1(L_2);
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter_StringUtil::IndexOf(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33 (String_t* ___src0, String_t* ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * L_0 = ((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->get_cmp_1();
		String_t* L_1 = ___src0;
		String_t* L_2 = ___target1;
		NullCheck(L_0);
		int32_t L_3 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter_StringUtil::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985 (String_t* ___format0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_0 = ((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->get_cul_0();
		String_t* L_1 = ___format0;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m370C20A66261F43FCDF2E104772F22EE8CC0E3B2(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void System.Xml.XmlTextWriter_XmlNodeInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlNodeInfo__ctor_mC958324E311A3286C2A0ADD03A656D8DEDBEFFDA (XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_mFBD45959BBD1A0F86D140D21ACB6A6511062F8D4 (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_mB32167F90F738DA3CD20C839054391C8F8262254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * V_0 = NULL;
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_1 = { reinterpret_cast<intptr_t> (Stream_tCFD27E43C18381861212C0288CACF467FB602009_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_1, /*hidden argument*/NULL);
		___ofObjectToReturn2 = L_2;
	}

IL_0012:
	{
		Type_t * L_3 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_4 = { reinterpret_cast<intptr_t> (Stream_tCFD27E43C18381861212C0288CACF467FB602009_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_6 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_6, _stringLiteralD8280FE80D9AEB9C128D4DA3FBEC21DF0E4BECE7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var);
	}

IL_002d:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_7 = ___absoluteUri0;
		NullCheck(L_7);
		bool L_8 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_9 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m21D365CF42848C29CCAA2898DF17B47E7224D346(L_9, _stringLiteralD2ED73F0826651C4F2B70E48C6DC780CB9CBF93F, _stringLiteralB82E1120FAA671E759C3B20F058DB73F0BC2CAC6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var);
	}

IL_0048:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_10 = ___absoluteUri0;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_11, _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_13 = ___absoluteUri0;
		NullCheck(L_13);
		String_t* L_14 = Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_16 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_17 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m21D365CF42848C29CCAA2898DF17B47E7224D346(L_17, _stringLiteralD2ED73F0826651C4F2B70E48C6DC780CB9CBF93F, _stringLiteralB82E1120FAA671E759C3B20F058DB73F0BC2CAC6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var);
	}

IL_0082:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_18 = ___absoluteUri0;
		NullCheck(L_18);
		String_t* L_19 = Uri_get_LocalPath_m40FBFECE2E19CBF9DC9565A4008668F35E8F4246(L_18, /*hidden argument*/NULL);
		String_t* L_20 = XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F(__this, L_19, /*hidden argument*/NULL);
		FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_21 = (FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 *)il2cpp_codegen_object_new(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4_il2cpp_TypeInfo_var);
		FileStream__ctor_mEBDC7830FFEE997544BDA0B10DFCD8D7F28F13B3(L_21, L_20, 3, 1, 1, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_22 = ___absoluteUri0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_il2cpp_TypeInfo_var);
		WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * L_23 = WebRequest_Create_m443EBD17EC628818C7FAEBFB4BD733F945CD19FF(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		RuntimeObject* L_24 = __this->get_credential_0();
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * L_25 = V_0;
		RuntimeObject* L_26 = __this->get_credential_0();
		NullCheck(L_25);
		VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_25, L_26);
	}

IL_00b5:
	{
		WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * L_27 = V_0;
		NullCheck(L_27);
		WebResponse_t5E9F05BAC005D2105A122CD5973E1D70B9B45325 * L_28 = VirtFuncInvoker0< WebResponse_t5E9F05BAC005D2105A122CD5973E1D70B9B45325 * >::Invoke(18 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_27);
		NullCheck(L_28);
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_29 = VirtFuncInvoker0< Stream_tCFD27E43C18381861212C0288CACF467FB602009 * >::Invoke(10 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_28);
		return L_29;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * XmlUrlResolver_ResolveUri_mC14D6C1722711AE218653E04DB0F763D248CF44B (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_2 = XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_0, _stringLiteralB7800DD7F410CCD049697701C24028B425C31C9F, _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_1, _stringLiteralCB51439F4D8087A7A3BCE2CD95A8898C8A32D028, _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_2, _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB, _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_3, _stringLiteral8BCDCE41BEE002F11C8CF51B698D461BE3BD3797, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_4, _stringLiteral986F2ED15C79ED805000ECCD85519810B2DB2A93, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_5, _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, /*hidden argument*/NULL);
		return L_6;
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
// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader__ctor_mEAE5302B81A618661E2CD90DC039D923D6181170 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader__ctor_mEAE5302B81A618661E2CD90DC039D923D6181170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D(__this, /*hidden argument*/NULL);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = ___reader0;
		__this->set_sourceReader_3(L_0);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = ___reader0;
		__this->set_xmlTextReader_4(((XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 *)IsInstClass((RuntimeObject*)L_1, XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_il2cpp_TypeInfo_var)));
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = __this->get_xmlTextReader_4();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * L_3 = (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 *)il2cpp_codegen_object_new(XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_mFBD45959BBD1A0F86D140D21ACB6A6511062F8D4(L_3, /*hidden argument*/NULL);
		__this->set_resolver_6(L_3);
	}

IL_002f:
	{
		__this->set_entityHandling_2(1);
		__this->set_validationType_8(1);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_4, /*hidden argument*/NULL);
		__this->set_storedCharacters_12(L_4);
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" IL2CPP_METHOD_ATTR XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_mC3754A203F1DADF40C8A4F2B9CC641D51D2FBE81 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_mC3754A203F1DADF40C8A4F2B9CC641D51D2FBE81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * G_B5_0 = NULL;
	{
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_0 = __this->get_dtdReader_10();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_1 = __this->get_dtdReader_10();
		NullCheck(L_1);
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_2 = DTDValidatingReader_get_ParserContext_m5703854215640613C89FBCB5C88636FF6D77A247(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_sourceReader_3();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_6 = InterfaceFuncInvoker0< XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = L_6;
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = ((XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 *)(NULL));
	}

IL_0035:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_AttributeCount_mDF35E6EF7314A48F6A63E34AC27D1B68781C467A (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_BaseURI_m871116DDABED5E024D6FF7F6EAA7A1A866C64B21 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_sourceReader_3();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_validatingReader_5();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_CanResolveEntity_mC854014AE8D88F9927DA08861025160E6FE7CADB (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_Depth_mA9F769F095CBCFE4A6BA9878598CAE1FDCE33C1F (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_EntityHandling_m871959D421F71D068DE1D4B458D81CEEC0320A46 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_entityHandling_2();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_set_EntityHandling_mEA10AA40055F093886B01080D91510AEB08E0636 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_entityHandling_2(L_0);
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_1 = __this->get_dtdReader_10();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_2 = __this->get_dtdReader_10();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		DTDValidatingReader_set_EntityHandling_m8C1512A414C112C2ED0A369BA28A73C0936C67E6(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_EOF_mC6CADE455F41E313858E6BE44048FCB57140AD00 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_HasValue_m3B8C01060B1E7D85E6354D64517FA45F7424F784 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_HasValue() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_IsDefault_mED44E00C9135111578410A47379A43BE0A81D7EA (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_IsEmptyElement_m943C0EEB9A72F535B209DF365BD5E7E002B3DCFF (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_LineNumber_m0028C0099A79BDD3243BF65E5564091C4584A4B6 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LineNumber_m0028C0099A79BDD3243BF65E5564091C4584A4B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlValidatingReader::get_IsDefault() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var, L_3);
		G_B5_0 = L_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_LinePosition_mAF9C9A07C0D8FBCF5A640A5DF3E4015FBA2417A5 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LinePosition_mAF9C9A07C0D8FBCF5A640A5DF3E4015FBA2417A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlValidatingReader::get_IsDefault() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var, L_3);
		G_B5_0 = L_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_LocalName_mDF11295E4347D4738E455E5E9EA722DB24C1C871 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LocalName_mDF11295E4347D4738E455E5E9EA722DB24C1C871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		bool L_2 = XmlValidatingReader_get_Namespaces_m6B4B4A960546654D9859BFFA5D2D308131A6B67F(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_validatingReader_5();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		return L_4;
	}

IL_0028:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_5 = __this->get_validatingReader_5();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_5);
		return L_6;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_Name_mB20A5E6C40D110DC9C33A14912B934A700D728AE (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Name_mB20A5E6C40D110DC9C33A14912B934A700D728AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_validatingReader_5();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_Namespaces_m6B4B4A960546654D9859BFFA5D2D308131A6B67F (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_xmlTextReader_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_xmlTextReader_4();
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_Namespaces_m99CBBEE6F0E9083DDEF1DF354190D13D46D081D0(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_NamespaceURI_m1CF7B354BC9D2EFF4EB37F3C6A1E3225719FB87E (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_NamespaceURI_m1CF7B354BC9D2EFF4EB37F3C6A1E3225719FB87E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		bool L_2 = XmlValidatingReader_get_Namespaces_m6B4B4A960546654D9859BFFA5D2D308131A6B67F(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_validatingReader_5();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_3);
		return L_4;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_5;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C" IL2CPP_METHOD_ATTR XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * XmlValidatingReader_get_NameTable_mF71D6373AF9211206F472FC30F59BB13A0EAD599 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_sourceReader_3();
		NullCheck(L_1);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_2 = VirtFuncInvoker0< XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * >::Invoke(19 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_validatingReader_5();
		NullCheck(L_3);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_4 = VirtFuncInvoker0< XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * >::Invoke(19 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_NodeType_m580F25B8FE33FB548B37DB6A786ACB4A4EB0D78A (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_Prefix_mE267E68E2431E427A2DDD04CE3B4FCF3DB833021 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Prefix_mE267E68E2431E427A2DDD04CE3B4FCF3DB833021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_validatingReader_5();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Prefix() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_ReadState_mB76E0034B4641E3404837A09743D47FF970C0B8A (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_1);
		return L_2;
	}
}
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * XmlValidatingReader_get_Resolver_mC1FB96B0F83953BA3590445F629D13ABA208193B (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_xmlTextReader_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_xmlTextReader_4();
		NullCheck(L_1);
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_2 = XmlTextReader_get_Resolver_mA42CC375B33F9290A9B07A068142EEB3B5DF32B3(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		bool L_3 = __this->get_resolverSpecified_7();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_4 = __this->get_resolver_6();
		return L_4;
	}

IL_0029:
	{
		return (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C *)NULL;
	}
}
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C" IL2CPP_METHOD_ATTR XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * XmlValidatingReader_get_Schemas_m95C27E83C4D6535BDFAC4F957EA52C345C1AD96F (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Schemas_m95C27E83C4D6535BDFAC4F957EA52C345C1AD96F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * L_0 = __this->get_schemas_9();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_1 = VirtFuncInvoker0< XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * >::Invoke(19 /* System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable() */, __this);
		XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * L_2 = (XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 *)il2cpp_codegen_object_new(XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513_il2cpp_TypeInfo_var);
		XmlSchemaCollection__ctor_m5A14040E6F005CE4F4331BBA753C8E60B1CD979A(L_2, L_1, /*hidden argument*/NULL);
		__this->set_schemas_9(L_2);
	}

IL_001c:
	{
		XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * L_3 = __this->get_schemas_9();
		return L_3;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * XmlValidatingReader_get_Settings_mD229EB16AE6E5590EFE9AC58DBAEF381D5B4C0E1 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_sourceReader_3();
		NullCheck(L_1);
		XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * L_2 = VirtFuncInvoker0< XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * >::Invoke(24 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_validatingReader_5();
		NullCheck(L_3);
		XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * L_4 = VirtFuncInvoker0< XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * >::Invoke(24 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_ValidationType_m075F776977116749AA5A388E7F0D86EBC2BAC941 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationType_8();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_set_ValidationType_mBE9B977D4121D6EAE4EE3B1B10ABD3E8E2EFB104 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_set_ValidationType_mBE9B977D4121D6EAE4EE3B1B10ABD3E8E2EFB104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteralE5A3B5050E1E09ED135138A9BA2752A6ECC352C0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlValidatingReader_set_ValidationType_mBE9B977D4121D6EAE4EE3B1B10ABD3E8E2EFB104_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_2 = __this->get_validationType_8();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0048;
			}
			case 4:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_004e;
	}

IL_003c:
	{
		int32_t L_4 = ___value0;
		__this->set_validationType_8(L_4);
		goto IL_004e;
	}

IL_0048:
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_5 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, XmlValidatingReader_set_ValidationType_mBE9B977D4121D6EAE4EE3B1B10ABD3E8E2EFB104_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_Value_mDD33F23D8FFB9D4FC9125A52EAD1BA530AF29245 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Value_mDD33F23D8FFB9D4FC9125A52EAD1BA530AF29245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_validatingReader_5();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_XmlLang()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_XmlLang_mE26870292F33741B1F68CD5AACB58DED4943F95B (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_XmlLang_mE26870292F33741B1F68CD5AACB58DED4943F95B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_validatingReader_5();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_XmlLang() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_XmlSpace_mD6D4D0006A501FF847214E322F60D8E1384C7576 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_Close_m4074354C359E3C3BEEB957C71507079545D4EF88 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_sourceReader_3();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(28 /* System.Void System.Xml.XmlReader::Close() */, L_1);
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_validatingReader_5();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(28 /* System.Void System.Xml.XmlReader::Close() */, L_2);
	}

IL_0026:
	{
		return;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_GetAttribute_m3120DEF8BA33DC0F43D1FECF5EC1BD8C0A1C5B52 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001d;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_GetAttribute_m22EFC1E38457C0ED3DDF2E147FEFCDF0519DBEC9 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0011:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___namespaceName1;
		NullCheck(L_1);
		String_t* L_4 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Item(System.String,System.String) */, L_1, L_2, L_3);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_HasLineInfo_mAD19ABDAD387BAC680A2A476BC4E84B6A6B42085 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_HasLineInfo_mAD19ABDAD387BAC680A2A476BC4E84B6A6B42085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_LookupNamespace_m257ABA80A8A7FAD070E9279356912821FE68027E (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_4 = __this->get_sourceReader_3();
		String_t* L_5 = ___prefix0;
		NullCheck(L_4);
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_4, L_5);
		return L_6;
	}
}
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_MoveToAttribute_mE68C21925EFA1BB4D398D2ACA5C73DF415B231F3 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_MoveToAttribute_mE68C21925EFA1BB4D398D2ACA5C73DF415B231F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60 * L_1 = (IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60 *)il2cpp_codegen_object_new(IndexOutOfRangeException_tB79CEA688CCFB6AE1B0850B5388A02F7AD224C60_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2AF00D3741C73B3938339589F9DFA4483BB1EC54(L_1, _stringLiteralB4E6A23E7861638AEAA54CAAC4AA3F0C438D15A5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlValidatingReader_MoveToAttribute_mE68C21925EFA1BB4D398D2ACA5C73DF415B231F3_RuntimeMethod_var);
	}

IL_0016:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_validatingReader_5();
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToAttribute_m9A4E3874AE95307A69E6E8308DF351D6C35391AC (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		bool L_3 = VirtFuncInvoker1< bool, String_t* >::Invoke(34 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToAttribute_m86A4CB96838E9126FA08C9E312A7AB7BAE75D06C (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___namespaceName1;
		NullCheck(L_1);
		bool L_4 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String) */, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToElement_m59603C4A5117CECE68C9357EBCF4D80BBD36803D (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToFirstAttribute_mC4BE170D3268CCC51634EFAA404BA6708906147B (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToNextAttribute_m60564A7A341D2C347279A79A1AEDE48438BE3EFC (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_Read_m066250721BEA74A16479A769B792CD40C6E46DC0 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_Read_m066250721BEA74A16479A769B792CD40C6E46DC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * V_0 = NULL;
	int32_t V_1 = 0;
	DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * V_2 = NULL;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_1 = XmlValidatingReader_get_ValidationType_m075F776977116749AA5A388E7F0D86EBC2BAC941(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_00ed;
			}
			case 4:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_00f3;
	}

IL_0031:
	{
		goto IL_0067;
	}

IL_0036:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = __this->get_sourceReader_3();
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_4 = (DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 *)il2cpp_codegen_object_new(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_il2cpp_TypeInfo_var);
		DTDValidatingReader__ctor_m559D480B914C2BE42C77BAF3F41B22A68D611C32(L_4, L_3, __this, /*hidden argument*/NULL);
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_5 = L_4;
		V_2 = L_5;
		__this->set_dtdReader_10(L_5);
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_6 = V_2;
		__this->set_validatingReader_5(L_6);
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_7 = __this->get_dtdReader_10();
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_8 = XmlValidatingReader_get_Resolver_mC1FB96B0F83953BA3590445F629D13ABA208193B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		DTDValidatingReader_set_XmlResolver_mBBA382E23487FFCDCBA31B195861E63F322E6563(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_0067:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_9 = __this->get_sourceReader_3();
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_10 = (DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 *)il2cpp_codegen_object_new(DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8_il2cpp_TypeInfo_var);
		DTDValidatingReader__ctor_m559D480B914C2BE42C77BAF3F41B22A68D611C32(L_10, L_9, __this, /*hidden argument*/NULL);
		__this->set_dtdReader_10(L_10);
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_11 = __this->get_dtdReader_10();
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_12 = (XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 *)il2cpp_codegen_object_new(XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3_il2cpp_TypeInfo_var);
		XsdValidatingReader__ctor_m48D639C818E9C03AE5CAF2BEED55F8DF8B9666EB(L_12, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_13 = V_0;
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_14 = L_13;
		NullCheck(L_14);
		ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * L_15 = L_14->get_ValidationEventHandler_28();
		ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * L_16 = (ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B *)il2cpp_codegen_object_new(ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B_il2cpp_TypeInfo_var);
		ValidationEventHandler__ctor_m177B365379B5A14BC1221F0F2AE5D16D4BA8BA02(L_16, __this, (intptr_t)((intptr_t)XmlValidatingReader_OnValidationEvent_m1F04A67D889251648B3B629178360382EB89FF99_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_17 = Delegate_Combine_m0B97666DC3AE06650FD9F4A4567CF27EE66B71C3(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_ValidationEventHandler_28(((ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B *)CastclassSealed((RuntimeObject*)L_17, ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B_il2cpp_TypeInfo_var)));
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_18 = V_0;
		int32_t L_19 = XmlValidatingReader_get_ValidationType_m075F776977116749AA5A388E7F0D86EBC2BAC941(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		XsdValidatingReader_set_ValidationType_m829308A27A01C6BAD6CD17CB7871059A720F4ED5(L_18, L_19, /*hidden argument*/NULL);
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_20 = V_0;
		XmlSchemaCollection_t532C46B1FC9D97F471412FAC2FFCD7F7A93E3513 * L_21 = XmlValidatingReader_get_Schemas_m95C27E83C4D6535BDFAC4F957EA52C345C1AD96F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		XmlSchemaSet_t57B9F8C94E8255E9EB78EB1F55CD69BB7EBFEC8D * L_22 = XmlSchemaCollection_get_SchemaSet_m30D6A501D76B32526374C5D256F538149931D885(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		XsdValidatingReader_set_Schemas_m0D9E99B166416B09320C39E60B49F57DEB113FBE(L_20, L_22, /*hidden argument*/NULL);
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_23 = V_0;
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_24 = XmlValidatingReader_get_Resolver_mC1FB96B0F83953BA3590445F629D13ABA208193B(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		XsdValidatingReader_set_XmlResolver_m08407E8239DF4D89D4170512BF2177352109A6A2(L_23, L_24, /*hidden argument*/NULL);
		XsdValidatingReader_t2C211F16BDE384F56FB73B293505DEADE5AFCEB3 * L_25 = V_0;
		__this->set_validatingReader_5(L_25);
		DTDValidatingReader_t45B1D9125A5B1CF4DF112F19FC82C354D63B3DC8 * L_26 = __this->get_dtdReader_10();
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_27 = XmlValidatingReader_get_Resolver_mC1FB96B0F83953BA3590445F629D13ABA208193B(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		DTDValidatingReader_set_XmlResolver_mBBA382E23487FFCDCBA31B195861E63F322E6563(L_26, L_27, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_00ed:
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_28 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, XmlValidatingReader_Read_m066250721BEA74A16479A769B792CD40C6E46DC0_RuntimeMethod_var);
	}

IL_00f3:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_29 = __this->get_validatingReader_5();
		__this->set_schemaInfo_11(((RuntimeObject*)IsInst((RuntimeObject*)L_29, IHasXmlSchemaInfo_tA3B2C478D5F5102CB79A687B2F03ED13BC529461_il2cpp_TypeInfo_var)));
	}

IL_0104:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_30 = __this->get_validatingReader_5();
		NullCheck(L_30);
		bool L_31 = VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_30);
		return L_31;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_ReadAttributeValue_m0B1FEAFBFAB5316C6233BD79946C899C9EBD221D (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = __this->get_validatingReader_5();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_ResolveEntity_mCF9F1A9C8897ED9A0B39B688B23983C75A614501 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = __this->get_validatingReader_5();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(46 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_OnValidationEvent_m1F04A67D889251648B3B629178360382EB89FF99 (XmlValidatingReader_t524BE1B3546FA8855DD8C66D124AC456FB68D3E6 * __this, RuntimeObject * ___o0, ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_OnValidationEvent_m1F04A67D889251648B3B629178360382EB89FF99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * L_0 = __this->get_ValidationEventHandler_13();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ValidationEventHandler_t4E1A0D7874804802BF369D671E548EE69B97AD6B * L_1 = __this->get_ValidationEventHandler_13();
		RuntimeObject * L_2 = ___o0;
		ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * L_3 = ___e1;
		NullCheck(L_1);
		ValidationEventHandler_Invoke_m579D34833B476076C624BD52E267E8EAD4E581B1(L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_001d:
	{
		int32_t L_4 = XmlValidatingReader_get_ValidationType_m075F776977116749AA5A388E7F0D86EBC2BAC941(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * L_5 = ___e1;
		NullCheck(L_5);
		int32_t L_6 = ValidationEventArgs_get_Severity_m35A2CBE9CF82218E532BB74C0B178D8450AC68D3(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ValidationEventArgs_t509D590153253EAD1DC5DCEB4CDD56BE30AF3B1D * L_7 = ___e1;
		NullCheck(L_7);
		XmlSchemaException_tCFA4C17B08E999ED8DF6B0AC8B6A9FE872401D7D * L_8 = ValidationEventArgs_get_Exception_m3CE816FE52D56B05298B75DAB3F372834BB296A2(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, XmlValidatingReader_OnValidationEvent_m1F04A67D889251648B3B629178360382EB89FF99_RuntimeMethod_var);
	}

IL_003a:
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
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m13ABB40D42CE7949E2AE7C40AF106D8081FAC763 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3001E8B020596810D7E107CF5132ACE77AA87717(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_LocalName_mC40F27FB38BDA761180F878BB046E2D4C1DF0773 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_LocalName_mC40F27FB38BDA761180F878BB046E2D4C1DF0773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral86991C898EF9BD4D4DF2405832AC2BBDE5077766;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Name_m78FA8EAFAF179B735374E897696D560F0E026855 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_Name_m78FA8EAFAF179B735374E897696D560F0E026855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral86991C898EF9BD4D4DF2405832AC2BBDE5077766;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_NodeType_m3D12D40D82F0C4743DF91B0B1ABB18F4C7CB12CB (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Value_m6A2E608DC3CF29A4280C8943038B4DCDAA40870B (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m87107CE6DCB1495651A27C956F8AE79979E4856E(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_2 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_2, _stringLiteralBA860FD430FDBB5379A377B6ABE5473ADE841521, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(38 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlWhitespace_get_ParentNode_m5B7247E790BE6D2913FC95E944B16A80DB5C73A2 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * L_0 = XmlNode_get_ParentNode_m8CB63DB1EDF0980BD5C0AEA25EE3DA6BA38E7E0F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlWhitespace_CloneNode_m8C9825919ED09C8E35FCE1DE7E39F9D5F654986B (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_CloneNode_m8C9825919ED09C8E35FCE1DE7E39F9D5F654986B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = VirtFuncInvoker0< XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * L_2 = (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C *)il2cpp_codegen_object_new(XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m13ABB40D42CE7949E2AE7C40AF106D8081FAC763(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void System.Xml.XmlWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter__ctor_m6421000552F7848BBF449952D217BCD58295399D (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_System_IDisposable_Dispose_m6FBD04A1E5A4AF776264E27EE30AACFB911547A4 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWriter_get_XmlLang_mB6E1472D1D95701B41592548B4B882E5DF4DEB9F (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriter_get_XmlSpace_mD8BB6572F71BB3E211E822EA8F8FA3FA2FCDC7C3 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_Dispose_mE1745DF9681AAFD21BE997950764817627F39664 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttribute_mF1F3A889443CA2CB881E0208E9FC63C668C0DA90 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___defattr1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = ___reader0;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = ___reader0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_5 = ___reader0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)3)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m8F639EDF9DD422BA488995DDEFDF3DEBC67D8693 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributeString_m8F639EDF9DD422BA488995DDEFDF3DEBC67D8693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___value1;
		XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5(__this, L_0, L_1, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___ns2;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value3;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___value3;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___value3;
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_6);
	}

IL_0025:
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteElementString_mDED825BDEF24C57D69E1EF0F5D7F4D5F9F1A516B (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		XmlWriter_WriteStartElement_m26CA155F552639BC24D4F60810E588E32129C60A(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___value1;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___value1;
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_4);
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_1 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_mB07DBF652398180743DA95E1DDA9DAC704B75167(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_4 = ___reader0;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_5 = ___reader0;
		bool L_6 = ___defattr1;
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_7 = ___reader0;
		NullCheck(L_7);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_01db;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_012c;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_013e;
			}
			case 5:
			{
				goto IL_014f;
			}
			case 6:
			{
				goto IL_01e0;
			}
			case 7:
			{
				goto IL_0160;
			}
			case 8:
			{
				goto IL_0177;
			}
			case 9:
			{
				goto IL_01e0;
			}
			case 10:
			{
				goto IL_0188;
			}
			case 11:
			{
				goto IL_01e0;
			}
			case 12:
			{
				goto IL_01e0;
			}
			case 13:
			{
				goto IL_01ba;
			}
			case 14:
			{
				goto IL_01b5;
			}
			case 15:
			{
				goto IL_01cb;
			}
			case 16:
			{
				goto IL_01d6;
			}
			case 17:
			{
				goto IL_0160;
			}
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_16 = ___reader0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_18 = ___reader0;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_20 = ___reader0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_22 = ___reader0;
		bool L_23 = ___defattr1;
		XmlWriter_WriteAttribute_mF1F3A889443CA2CB881E0208E9FC63C668C0DA90(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_26 = ___reader0;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_28 = ___reader0;
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_29 = ___reader0;
		NullCheck(L_29);
		bool L_30 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_33 = ___reader0;
		NullCheck(L_33);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_34 = ___reader0;
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_36 = ___reader0;
		bool L_37 = ___defattr1;
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_39 = ___reader0;
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_41 = ___reader0;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_43 = ___reader0;
		NullCheck(L_43);
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_45 = ___reader0;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_49 = ___reader0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_51 = ___reader0;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteralD1785CA28C3A4D29A6EDEF1520C544B838A93DB3);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral29D43743C43BDA9873FC7A79C99F2EC4B6B442B1);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_59 = ___reader0;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_63 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteralAE16CDF368B9DB989F62730137C3B58D112CBF73);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralAE16CDF368B9DB989F62730137C3B58D112CBF73);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_65 = L_64;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_66 = ___reader0;
		NullCheck(L_66);
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_66);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_67);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_68 = L_65;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral24B0DB681A39D72D91C8DBE3EC9EAB3EF2B86761);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral24B0DB681A39D72D91C8DBE3EC9EAB3EF2B86761);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_69 = L_68;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_70 = ___reader0;
		NullCheck(L_70);
		int32_t L_71 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_70);
		int32_t L_72 = L_71;
		RuntimeObject * L_73 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_73);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1(L_69, /*hidden argument*/NULL);
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_75 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_75, L_74, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, NULL, XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_RuntimeMethod_var);
	}

IL_0218:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_76 = ___reader0;
		NullCheck(L_76);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_76);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m26CA155F552639BC24D4F60810E588E32129C60A (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
