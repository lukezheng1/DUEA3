#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<HedgehogTeam.EasyTouch.ECamera>
struct List_1_t2C1D227C351429E8279D73AE9B0CE4F52D02388A;
// System.Collections.Generic.List`1<HedgehogTeam.EasyTouch.Gesture>
struct List_1_t57783969E007342D666F100BE94FAD9BB172A213;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Predicate`1<HedgehogTeam.EasyTouch.ECamera>
struct Predicate_1_t9A23A97E628BC61C870BA7DE2A91F4AF5EEB1566;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// HedgehogTeam.EasyTouch.Finger[]
struct FingerU5BU5D_t55149A22163A61F6ADC0F4D94647D80DFA4AAC9D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap[]
struct DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// HedgehogTeam.EasyTouch.BaseFinger
struct BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// HedgehogTeam.EasyTouch.ECamera
struct ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0;
// HedgehogTeam.EasyTouch.EasyTouch
struct EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B;
// HedgehogTeam.EasyTouch.EasyTouchInput
struct EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// HedgehogTeam.EasyTouch.Finger
struct Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HedgehogTeam.EasyTouch.Gesture
struct Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// HedgehogTeam.EasyTouch.TwoFingerGesture
struct TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// HedgehogTeam.EasyTouch.EasyTouch/<>c
struct U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0;
// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0
struct U3CU3Ec__DisplayClass241_0_t354D5D6EFBB73624EE2C98FEF14F5CCA69C7D2A0;
// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0
struct U3CU3Ec__DisplayClass274_0_t12CE84C9169BE454B29B9C6E3E76235FE03A7281;
// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236
struct U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4;
// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230
struct U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F;
// HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler
struct Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0;
// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap
struct DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7;
// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler
struct DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F;
// HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler
struct DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658;
// HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler
struct Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC;
// HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler
struct DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30;
// HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler
struct DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72;
// HedgehogTeam.EasyTouch.EasyTouch/DragHandler
struct DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16;
// HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler
struct DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08;
// HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler
struct DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F;
// HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler
struct EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5;
// HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler
struct LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2;
// HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler
struct LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636;
// HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler
struct LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534;
// HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler
struct LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0;
// HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler
struct LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699;
// HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler
struct LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037;
// HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler
struct OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439;
// HedgehogTeam.EasyTouch.EasyTouch/PickedObject
struct PickedObject_tC8ACFE85D7D202AD0EF37C7253FFBBC624E4F700;
// HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler
struct PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD;
// HedgehogTeam.EasyTouch.EasyTouch/PinchHandler
struct PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9;
// HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler
struct PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9;
// HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler
struct PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3;
// HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler
struct SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC;
// HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler
struct SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6;
// HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler
struct Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB;
// HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler
struct SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A;
// HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler
struct SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA;
// HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler
struct SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5;
// HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler
struct SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C;
// HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler
struct SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914;
// HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler
struct TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4;
// HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler
struct TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE;
// HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler
struct TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955;
// HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler
struct TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7;
// HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler
struct TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E;
// HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler
struct TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8;
// HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler
struct TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21;
// HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler
struct TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5;
// HedgehogTeam.EasyTouch.EasyTouch/TwistHandler
struct TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B;
// HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler
struct UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8C3539240E206C2C3DD4E7348F230C41FD51F0;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC5F8457D690224C0D17291EB3F27D9FC67E5C9;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSingleOrDouble2FingersU3Ed__236_System_Collections_IEnumerator_Reset_mAA18B54C68C4D62E6CA5D3FCEC9208AC17D622C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSingleOrDoubleU3Ed__230_System_Collections_IEnumerator_Reset_m2E8FD4A9445673920B815D966A5A93AC7618CB4D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HedgehogTeam.EasyTouch.ECamera
struct ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0  : public RuntimeObject
{
	// UnityEngine.Camera HedgehogTeam.EasyTouch.ECamera::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_0;
	// System.Boolean HedgehogTeam.EasyTouch.ECamera::guiCamera
	bool ___guiCamera_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// HedgehogTeam.EasyTouch.EasyTouch/<>c
struct U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0  : public RuntimeObject
{
};

// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0
struct U3CU3Ec__DisplayClass241_0_t354D5D6EFBB73624EE2C98FEF14F5CCA69C7D2A0  : public RuntimeObject
{
	// HedgehogTeam.EasyTouch.Gesture HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0::gesture
	Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___gesture_0;
};

// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0
struct U3CU3Ec__DisplayClass274_0_t12CE84C9169BE454B29B9C6E3E76235FE03A7281  : public RuntimeObject
{
	// UnityEngine.Camera HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_0;
};

// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236
struct U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4  : public RuntimeObject
{
	// System.Int32 HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HedgehogTeam.EasyTouch.EasyTouch HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::<>4__this
	EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* ___U3CU3E4__this_2;
};

// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230
struct U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F  : public RuntimeObject
{
	// System.Int32 HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HedgehogTeam.EasyTouch.EasyTouch HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::<>4__this
	EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* ___U3CU3E4__this_2;
	// System.Int32 HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::fingerIndex
	int32_t ___fingerIndex_3;
};

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap
struct DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7  : public RuntimeObject
{
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::inDoubleTap
	bool ___inDoubleTap_0;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::inWait
	bool ___inWait_1;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::time
	float ___time_2;
	// System.Int32 HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::count
	int32_t ___count_3;
	// HedgehogTeam.EasyTouch.Finger HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::finger
	Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* ___finger_4;
};

// HedgehogTeam.EasyTouch.EasyTouch/PickedObject
struct PickedObject_tC8ACFE85D7D202AD0EF37C7253FFBBC624E4F700  : public RuntimeObject
{
	// UnityEngine.GameObject HedgehogTeam.EasyTouch.EasyTouch/PickedObject::pickedObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickedObj_0;
	// UnityEngine.Camera HedgehogTeam.EasyTouch.EasyTouch/PickedObject::pickedCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___pickedCamera_1;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/PickedObject::isGUI
	bool ___isGUI_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// HedgehogTeam.EasyTouch.BaseFinger
struct BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2  : public RuntimeObject
{
	// System.Int32 HedgehogTeam.EasyTouch.BaseFinger::fingerIndex
	int32_t ___fingerIndex_0;
	// System.Int32 HedgehogTeam.EasyTouch.BaseFinger::touchCount
	int32_t ___touchCount_1;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.BaseFinger::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_2;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.BaseFinger::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_3;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.BaseFinger::deltaPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition_4;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::actionTime
	float ___actionTime_5;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::deltaTime
	float ___deltaTime_6;
	// UnityEngine.Camera HedgehogTeam.EasyTouch.BaseFinger::pickedCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___pickedCamera_7;
	// UnityEngine.GameObject HedgehogTeam.EasyTouch.BaseFinger::pickedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickedObject_8;
	// System.Boolean HedgehogTeam.EasyTouch.BaseFinger::isGuiCamera
	bool ___isGuiCamera_9;
	// System.Boolean HedgehogTeam.EasyTouch.BaseFinger::isOverGui
	bool ___isOverGui_10;
	// UnityEngine.GameObject HedgehogTeam.EasyTouch.BaseFinger::pickedUIElement
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickedUIElement_11;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::altitudeAngle
	float ___altitudeAngle_12;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::azimuthAngle
	float ___azimuthAngle_13;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::maximumPossiblePressure
	float ___maximumPossiblePressure_14;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::pressure
	float ___pressure_15;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::radius
	float ___radius_16;
	// System.Single HedgehogTeam.EasyTouch.BaseFinger::radiusVariance
	float ___radiusVariance_17;
	// UnityEngine.TouchType HedgehogTeam.EasyTouch.BaseFinger::touchType
	int32_t ___touchType_18;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// HedgehogTeam.EasyTouch.EasyTouchInput
struct EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2  : public RuntimeObject
{
	// UnityEngine.Vector2[] HedgehogTeam.EasyTouch.EasyTouchInput::oldMousePosition
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___oldMousePosition_0;
	// System.Int32[] HedgehogTeam.EasyTouch.EasyTouchInput::tapCount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tapCount_1;
	// System.Single[] HedgehogTeam.EasyTouch.EasyTouchInput::startActionTime
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startActionTime_2;
	// System.Single[] HedgehogTeam.EasyTouch.EasyTouchInput::deltaTime
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___deltaTime_3;
	// System.Single[] HedgehogTeam.EasyTouch.EasyTouchInput::tapeTime
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___tapeTime_4;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouchInput::bComplex
	bool ___bComplex_5;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::deltaFingerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaFingerPosition_6;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::oldFinger2Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oldFinger2Position_7;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::complexCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___complexCenter_8;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// HedgehogTeam.EasyTouch.TwoFingerGesture
struct TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4  : public RuntimeObject
{
	// HedgehogTeam.EasyTouch.EasyTouch/GestureType HedgehogTeam.EasyTouch.TwoFingerGesture::currentGesture
	int32_t ___currentGesture_0;
	// HedgehogTeam.EasyTouch.EasyTouch/GestureType HedgehogTeam.EasyTouch.TwoFingerGesture::oldGesture
	int32_t ___oldGesture_1;
	// System.Int32 HedgehogTeam.EasyTouch.TwoFingerGesture::finger0
	int32_t ___finger0_2;
	// System.Int32 HedgehogTeam.EasyTouch.TwoFingerGesture::finger1
	int32_t ___finger1_3;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::startTimeAction
	float ___startTimeAction_4;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::timeSinceStartAction
	float ___timeSinceStartAction_5;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.TwoFingerGesture::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_6;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.TwoFingerGesture::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_7;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.TwoFingerGesture::deltaPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition_8;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.TwoFingerGesture::oldStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oldStartPosition_9;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::startDistance
	float ___startDistance_10;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::fingerDistance
	float ___fingerDistance_11;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::oldFingerDistance
	float ___oldFingerDistance_12;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::lockPinch
	bool ___lockPinch_13;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::lockTwist
	bool ___lockTwist_14;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::lastPinch
	float ___lastPinch_15;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::lastTwistAngle
	float ___lastTwistAngle_16;
	// UnityEngine.GameObject HedgehogTeam.EasyTouch.TwoFingerGesture::pickedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickedObject_17;
	// UnityEngine.GameObject HedgehogTeam.EasyTouch.TwoFingerGesture::oldPickedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___oldPickedObject_18;
	// UnityEngine.Camera HedgehogTeam.EasyTouch.TwoFingerGesture::pickedCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___pickedCamera_19;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::isGuiCamera
	bool ___isGuiCamera_20;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::isOverGui
	bool ___isOverGui_21;
	// UnityEngine.GameObject HedgehogTeam.EasyTouch.TwoFingerGesture::pickedUIElement
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickedUIElement_22;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::dragStart
	bool ___dragStart_23;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::swipeStart
	bool ___swipeStart_24;
	// System.Boolean HedgehogTeam.EasyTouch.TwoFingerGesture::inSingleDoubleTaps
	bool ___inSingleDoubleTaps_25;
	// System.Single HedgehogTeam.EasyTouch.TwoFingerGesture::tapCurentTime
	float ___tapCurentTime_26;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// HedgehogTeam.EasyTouch.Finger
struct Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1  : public BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2
{
	// System.Single HedgehogTeam.EasyTouch.Finger::startTimeAction
	float ___startTimeAction_19;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.Finger::oldPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oldPosition_20;
	// System.Int32 HedgehogTeam.EasyTouch.Finger::tapCount
	int32_t ___tapCount_21;
	// UnityEngine.TouchPhase HedgehogTeam.EasyTouch.Finger::phase
	int32_t ___phase_22;
	// HedgehogTeam.EasyTouch.EasyTouch/GestureType HedgehogTeam.EasyTouch.Finger::gesture
	int32_t ___gesture_23;
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeDirection HedgehogTeam.EasyTouch.Finger::oldSwipeType
	int32_t ___oldSwipeType_24;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// HedgehogTeam.EasyTouch.Gesture
struct Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7  : public BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2
{
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeDirection HedgehogTeam.EasyTouch.Gesture::swipe
	int32_t ___swipe_19;
	// System.Single HedgehogTeam.EasyTouch.Gesture::swipeLength
	float ___swipeLength_20;
	// UnityEngine.Vector2 HedgehogTeam.EasyTouch.Gesture::swipeVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___swipeVector_21;
	// System.Single HedgehogTeam.EasyTouch.Gesture::deltaPinch
	float ___deltaPinch_22;
	// System.Single HedgehogTeam.EasyTouch.Gesture::twistAngle
	float ___twistAngle_23;
	// System.Single HedgehogTeam.EasyTouch.Gesture::twoFingerDistance
	float ___twoFingerDistance_24;
	// HedgehogTeam.EasyTouch.EasyTouch/EvtType HedgehogTeam.EasyTouch.Gesture::type
	int32_t ___type_25;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler
struct Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler
struct DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler
struct DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler
struct Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler
struct DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler
struct DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DragHandler
struct DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler
struct DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler
struct DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler
struct EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler
struct LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler
struct LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler
struct LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler
struct LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler
struct LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler
struct LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler
struct OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler
struct PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/PinchHandler
struct PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler
struct PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler
struct PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler
struct SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler
struct SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler
struct Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler
struct SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler
struct SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler
struct SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler
struct SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler
struct SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler
struct TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler
struct TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler
struct TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler
struct TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler
struct TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler
struct TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler
struct TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler
struct TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/TwistHandler
struct TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B  : public MulticastDelegate_t
{
};

// HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler
struct UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// HedgehogTeam.EasyTouch.EasyTouch
struct EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HedgehogTeam.EasyTouch.Gesture HedgehogTeam.EasyTouch.EasyTouch::_currentGesture
	Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ____currentGesture_44;
	// System.Collections.Generic.List`1<HedgehogTeam.EasyTouch.Gesture> HedgehogTeam.EasyTouch.EasyTouch::_currentGestures
	List_1_t57783969E007342D666F100BE94FAD9BB172A213* ____currentGestures_45;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enable
	bool ___enable_46;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enableRemote
	bool ___enableRemote_47;
	// HedgehogTeam.EasyTouch.EasyTouch/GesturePriority HedgehogTeam.EasyTouch.EasyTouch::gesturePriority
	int32_t ___gesturePriority_48;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch::StationaryTolerance
	float ___StationaryTolerance_49;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch::longTapTime
	float ___longTapTime_50;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch::swipeTolerance
	float ___swipeTolerance_51;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch::minPinchLength
	float ___minPinchLength_52;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch::minTwistAngle
	float ___minTwistAngle_53;
	// HedgehogTeam.EasyTouch.EasyTouch/DoubleTapDetection HedgehogTeam.EasyTouch.EasyTouch::doubleTapDetection
	int32_t ___doubleTapDetection_54;
	// System.Single HedgehogTeam.EasyTouch.EasyTouch::doubleTapTime
	float ___doubleTapTime_55;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::alwaysSendSwipe
	bool ___alwaysSendSwipe_56;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enable2FingersGesture
	bool ___enable2FingersGesture_57;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enableTwist
	bool ___enableTwist_58;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enablePinch
	bool ___enablePinch_59;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enable2FingersSwipe
	bool ___enable2FingersSwipe_60;
	// HedgehogTeam.EasyTouch.EasyTouch/TwoFingerPickMethod HedgehogTeam.EasyTouch.EasyTouch::twoFingerPickMethod
	int32_t ___twoFingerPickMethod_61;
	// System.Collections.Generic.List`1<HedgehogTeam.EasyTouch.ECamera> HedgehogTeam.EasyTouch.EasyTouch::touchCameras
	List_1_t2C1D227C351429E8279D73AE9B0CE4F52D02388A* ___touchCameras_62;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::autoSelect
	bool ___autoSelect_63;
	// UnityEngine.LayerMask HedgehogTeam.EasyTouch.EasyTouch::pickableLayers3D
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pickableLayers3D_64;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enable2D
	bool ___enable2D_65;
	// UnityEngine.LayerMask HedgehogTeam.EasyTouch.EasyTouch::pickableLayers2D
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pickableLayers2D_66;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::autoUpdatePickedObject
	bool ___autoUpdatePickedObject_67;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::allowUIDetection
	bool ___allowUIDetection_68;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enableUIMode
	bool ___enableUIMode_69;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::autoUpdatePickedUI
	bool ___autoUpdatePickedUI_70;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enabledNGuiMode
	bool ___enabledNGuiMode_71;
	// UnityEngine.LayerMask HedgehogTeam.EasyTouch.EasyTouch::nGUILayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___nGUILayers_72;
	// System.Collections.Generic.List`1<UnityEngine.Camera> HedgehogTeam.EasyTouch.EasyTouch::nGUICameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___nGUICameras_73;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::enableSimulation
	bool ___enableSimulation_74;
	// UnityEngine.KeyCode HedgehogTeam.EasyTouch.EasyTouch::twistKey
	int32_t ___twistKey_75;
	// UnityEngine.KeyCode HedgehogTeam.EasyTouch.EasyTouch::swipeKey
	int32_t ___swipeKey_76;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::showGuiInspector
	bool ___showGuiInspector_77;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::showSelectInspector
	bool ___showSelectInspector_78;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::showGestureInspector
	bool ___showGestureInspector_79;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::showTwoFingerInspector
	bool ___showTwoFingerInspector_80;
	// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::showSecondFingerInspector
	bool ___showSecondFingerInspector_81;
	// HedgehogTeam.EasyTouch.EasyTouchInput HedgehogTeam.EasyTouch.EasyTouch::input
	EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* ___input_82;
	// HedgehogTeam.EasyTouch.Finger[] HedgehogTeam.EasyTouch.EasyTouch::fingers
	FingerU5BU5D_t55149A22163A61F6ADC0F4D94647D80DFA4AAC9D* ___fingers_83;
	// UnityEngine.Texture HedgehogTeam.EasyTouch.EasyTouch::secondFingerTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___secondFingerTexture_84;
	// HedgehogTeam.EasyTouch.TwoFingerGesture HedgehogTeam.EasyTouch.EasyTouch::twoFinger
	TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* ___twoFinger_85;
	// System.Int32 HedgehogTeam.EasyTouch.EasyTouch::oldTouchCount
	int32_t ___oldTouchCount_86;
	// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap[] HedgehogTeam.EasyTouch.EasyTouch::singleDoubleTap
	DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* ___singleDoubleTap_87;
	// HedgehogTeam.EasyTouch.Finger[] HedgehogTeam.EasyTouch.EasyTouch::tmpArray
	FingerU5BU5D_t55149A22163A61F6ADC0F4D94647D80DFA4AAC9D* ___tmpArray_88;
	// HedgehogTeam.EasyTouch.EasyTouch/PickedObject HedgehogTeam.EasyTouch.EasyTouch::pickedObject
	PickedObject_tC8ACFE85D7D202AD0EF37C7253FFBBC624E4F700* ___pickedObject_89;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> HedgehogTeam.EasyTouch.EasyTouch::uiRaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___uiRaycastResultCache_90;
	// UnityEngine.EventSystems.PointerEventData HedgehogTeam.EasyTouch.EasyTouch::uiPointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___uiPointerEventData_91;
	// UnityEngine.EventSystems.EventSystem HedgehogTeam.EasyTouch.EasyTouch::uiEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___uiEventSystem_92;
};

// HedgehogTeam.EasyTouch.ECamera

// HedgehogTeam.EasyTouch.ECamera

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// HedgehogTeam.EasyTouch.EasyTouch/<>c
struct U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_StaticFields
{
	// HedgehogTeam.EasyTouch.EasyTouch/<>c HedgehogTeam.EasyTouch.EasyTouch/<>c::<>9
	U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0* ___U3CU3E9_0;
	// System.Predicate`1<HedgehogTeam.EasyTouch.ECamera> HedgehogTeam.EasyTouch.EasyTouch/<>c::<>9__221_0
	Predicate_1_t9A23A97E628BC61C870BA7DE2A91F4AF5EEB1566* ___U3CU3E9__221_0_1;
};

// HedgehogTeam.EasyTouch.EasyTouch/<>c

// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0

// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0

// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0

// HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0

// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236

// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236

// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230

// HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap

// HedgehogTeam.EasyTouch.EasyTouch/PickedObject

// HedgehogTeam.EasyTouch.EasyTouch/PickedObject

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// HedgehogTeam.EasyTouch.BaseFinger

// HedgehogTeam.EasyTouch.BaseFinger

// System.Delegate

// System.Delegate

// HedgehogTeam.EasyTouch.EasyTouchInput

// HedgehogTeam.EasyTouch.EasyTouchInput

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// HedgehogTeam.EasyTouch.TwoFingerGesture

// HedgehogTeam.EasyTouch.TwoFingerGesture

// UnityEngine.Component

// UnityEngine.Component

// HedgehogTeam.EasyTouch.Finger

// HedgehogTeam.EasyTouch.Finger

// UnityEngine.GameObject

// UnityEngine.GameObject

// HedgehogTeam.EasyTouch.Gesture

// HedgehogTeam.EasyTouch.Gesture

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler

// HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler

// HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler

// HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler

// HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler

// HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler

// HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler

// HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler

// HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler

// HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler

// HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler

// HedgehogTeam.EasyTouch.EasyTouch/TwistHandler

// HedgehogTeam.EasyTouch.EasyTouch/TwistHandler

// HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler

// HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// HedgehogTeam.EasyTouch.EasyTouch
struct EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B_StaticFields
{
	// HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler HedgehogTeam.EasyTouch.EasyTouch::On_Cancel
	TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* ___On_Cancel_4;
	// HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_Cancel2Fingers
	Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* ___On_Cancel2Fingers_5;
	// HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler HedgehogTeam.EasyTouch.EasyTouch::On_TouchStart
	TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* ___On_TouchStart_6;
	// HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler HedgehogTeam.EasyTouch.EasyTouch::On_TouchDown
	TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* ___On_TouchDown_7;
	// HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler HedgehogTeam.EasyTouch.EasyTouch::On_TouchUp
	TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* ___On_TouchUp_8;
	// HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler HedgehogTeam.EasyTouch.EasyTouch::On_SimpleTap
	SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* ___On_SimpleTap_9;
	// HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler HedgehogTeam.EasyTouch.EasyTouch::On_DoubleTap
	DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* ___On_DoubleTap_10;
	// HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler HedgehogTeam.EasyTouch.EasyTouch::On_LongTapStart
	LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* ___On_LongTapStart_11;
	// HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler HedgehogTeam.EasyTouch.EasyTouch::On_LongTap
	LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* ___On_LongTap_12;
	// HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler HedgehogTeam.EasyTouch.EasyTouch::On_LongTapEnd
	LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* ___On_LongTapEnd_13;
	// HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler HedgehogTeam.EasyTouch.EasyTouch::On_DragStart
	DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* ___On_DragStart_14;
	// HedgehogTeam.EasyTouch.EasyTouch/DragHandler HedgehogTeam.EasyTouch.EasyTouch::On_Drag
	DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* ___On_Drag_15;
	// HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler HedgehogTeam.EasyTouch.EasyTouch::On_DragEnd
	DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* ___On_DragEnd_16;
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler HedgehogTeam.EasyTouch.EasyTouch::On_SwipeStart
	SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* ___On_SwipeStart_17;
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler HedgehogTeam.EasyTouch.EasyTouch::On_Swipe
	SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* ___On_Swipe_18;
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler HedgehogTeam.EasyTouch.EasyTouch::On_SwipeEnd
	SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* ___On_SwipeEnd_19;
	// HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_TouchStart2Fingers
	TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* ___On_TouchStart2Fingers_20;
	// HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_TouchDown2Fingers
	TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* ___On_TouchDown2Fingers_21;
	// HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_TouchUp2Fingers
	TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* ___On_TouchUp2Fingers_22;
	// HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_SimpleTap2Fingers
	SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* ___On_SimpleTap2Fingers_23;
	// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_DoubleTap2Fingers
	DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* ___On_DoubleTap2Fingers_24;
	// HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_LongTapStart2Fingers
	LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* ___On_LongTapStart2Fingers_25;
	// HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_LongTap2Fingers
	LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* ___On_LongTap2Fingers_26;
	// HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_LongTapEnd2Fingers
	LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* ___On_LongTapEnd2Fingers_27;
	// HedgehogTeam.EasyTouch.EasyTouch/TwistHandler HedgehogTeam.EasyTouch.EasyTouch::On_Twist
	TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* ___On_Twist_28;
	// HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler HedgehogTeam.EasyTouch.EasyTouch::On_TwistEnd
	TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* ___On_TwistEnd_29;
	// HedgehogTeam.EasyTouch.EasyTouch/PinchHandler HedgehogTeam.EasyTouch.EasyTouch::On_Pinch
	PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* ___On_Pinch_30;
	// HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler HedgehogTeam.EasyTouch.EasyTouch::On_PinchIn
	PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* ___On_PinchIn_31;
	// HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler HedgehogTeam.EasyTouch.EasyTouch::On_PinchOut
	PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* ___On_PinchOut_32;
	// HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler HedgehogTeam.EasyTouch.EasyTouch::On_PinchEnd
	PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* ___On_PinchEnd_33;
	// HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_DragStart2Fingers
	DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* ___On_DragStart2Fingers_34;
	// HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_Drag2Fingers
	Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* ___On_Drag2Fingers_35;
	// HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_DragEnd2Fingers
	DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* ___On_DragEnd2Fingers_36;
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_SwipeStart2Fingers
	SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* ___On_SwipeStart2Fingers_37;
	// HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_Swipe2Fingers
	Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* ___On_Swipe2Fingers_38;
	// HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler HedgehogTeam.EasyTouch.EasyTouch::On_SwipeEnd2Fingers
	SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* ___On_SwipeEnd2Fingers_39;
	// HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler HedgehogTeam.EasyTouch.EasyTouch::On_EasyTouchIsReady
	EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* ___On_EasyTouchIsReady_40;
	// HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler HedgehogTeam.EasyTouch.EasyTouch::On_OverUIElement
	OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* ___On_OverUIElement_41;
	// HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler HedgehogTeam.EasyTouch.EasyTouch::On_UIElementTouchUp
	UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* ___On_UIElementTouchUp_42;
	// HedgehogTeam.EasyTouch.EasyTouch HedgehogTeam.EasyTouch.EasyTouch::_instance
	EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* ____instance_43;
};

// HedgehogTeam.EasyTouch.EasyTouch
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HedgehogTeam.EasyTouch.EasyTouch/DoubleTap[]
struct DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC  : public RuntimeArray
{
	ALIGN_FIELD (8) DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* m_Items[1];

	inline DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD8C1FCEBCE0DE14C835A375E87709E2D0A0D0B4 (U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void HedgehogTeam.EasyTouch.EasyTouch::CreateGesture(System.Int32,HedgehogTeam.EasyTouch.EasyTouch/EvtType,HedgehogTeam.EasyTouch.Finger,HedgehogTeam.EasyTouch.EasyTouch/SwipeDirection,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyTouch_CreateGesture_m05A6DF064C3EAE1936CA110A121C35F5FA87B9DB (EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* __this, int32_t ___0_touchIndex, int32_t ___1_message, Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* ___2_finger, int32_t ___3_swipe, float ___4_swipeLength, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___5_swipeVector, const RuntimeMethod* method) ;
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTap_Stop_m8E63688EEA2DFC691A0E813DBA7395BACA589E6D (DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void HedgehogTeam.EasyTouch.EasyTouch::CreateGesture2Finger(HedgehogTeam.EasyTouch.EasyTouch/EvtType,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,HedgehogTeam.EasyTouch.EasyTouch/SwipeDirection,System.Single,UnityEngine.Vector2,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyTouch_CreateGesture2Finger_m946611F6A625E60803D3E4E6B52DAC12248F4EC4 (EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* __this, int32_t ___0_message, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_startPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_position, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_deltaPosition, float ___4_actionTime, int32_t ___5_swipe, float ___6_swipeLength, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___7_swipeVector, float ___8_twist, float ___9_pinch, float ___10_twoDistance, const RuntimeMethod* method) ;
// System.Int32 HedgehogTeam.EasyTouch.EasyTouchInput::getTouchCount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EasyTouchInput_getTouchCount_mFB4BF52273BCA8E92DECDD94E476795C4C53ED8C (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, bool ___0_realTouch, const RuntimeMethod* method) ;
// HedgehogTeam.EasyTouch.EasyTouch HedgehogTeam.EasyTouch.EasyTouch::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::GetSecondeFingerSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EasyTouch_GetSecondeFingerSimulation_m17BED560FF3A484336B254525290FB0AB66B3DD3 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void HedgehogTeam.EasyTouch.Finger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finger__ctor_m56FFDAF7B9665E06BA66F8CD182D583886D95795 (Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetPointerPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetPointerPosition_m093461C05D432895FCB33D47C8B226A3EC3387A3 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetComplex2finger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetComplex2finger_mD40D94DD6471D3DA57B3A46FC5D623ACDE766B51 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetPinchTwist2Finger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetPinchTwist2Finger_mA78F5C8BCBA237CB8950DCB7AE2F4851E10842D1 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, bool ___0_newSim, const RuntimeMethod* method) ;
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetSecondFingerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetSecondFingerPosition_m8AC953EEB8A2B4EFC6C6A572F2DDFB7992000D75 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void HedgehogTeam.EasyTouch.BaseFinger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFinger__ctor_m8AFEAD5FAFBD1C50D12082E55CC13EA798990D4B (BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch::IsFingerOverUIElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EasyTouch_IsFingerOverUIElement_mC2974C85024EC026B5B3BEE8F1EC26B0EE7AD632 (int32_t ___0_fingerIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_RectangleContainsScreenPoint_mBA6600E46C416EF032491AED969AA00BE2249630 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, const RuntimeMethod* method) ;
// UnityEngine.GameObject HedgehogTeam.EasyTouch.EasyTouch::GetCurrentPickedUIElement(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EasyTouch_GetCurrentPickedUIElement_mEF70E2C0F4920313737D2004110D157EA91FC3C8 (int32_t ___0_fingerIndex, bool ___1_isTwoFinger, const RuntimeMethod* method) ;
// UnityEngine.GameObject HedgehogTeam.EasyTouch.EasyTouch::GetCurrentPickedObject(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EasyTouch_GetCurrentPickedObject_m17E82056A0D1FBBF6B898CBDEB18CB6D25BA7F45 (int32_t ___0_fingerIndex, bool ___1_isTwoFinger, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTap_Stop_m8E63688EEA2DFC691A0E813DBA7395BACA589E6D (DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* __this, const RuntimeMethod* method) 
{
	{
		// inDoubleTap = false;
		__this->___inDoubleTap_0 = (bool)0;
		// inWait = false;
		__this->___inWait_1 = (bool)0;
		// time=0;
		__this->___time_2 = (0.0f);
		// count=0;
		__this->___count_3 = 0;
		// }
		return;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTap__ctor_mB345C5BA633643A6ED7567CB6A1384C59DCE27DD (DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PickedObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickedObject__ctor_m8DDB6236F787BC12F507A9BEF25AC957665B854E (PickedObject_tC8ACFE85D7D202AD0EF37C7253FFBBC624E4F700* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_Multicast(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* currentDelegate = reinterpret_cast<TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenInst(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenStatic(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenStaticInvoker(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_ClosedStaticInvoker(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenVirtual(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenInterface(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenGenericVirtual(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenGenericInterface(TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCancelHandler__ctor_mA4ECFBC63ADE970A6DDF32AD987D1A20DA874186 (TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCancelHandler_Invoke_mFE105D36A7AC3669FF3540CA2B60BD7E611B293F (TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchCancelHandler_BeginInvoke_m31298F88CEE0BBFA78ED95812A674F0C8148AF6D (TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchCancelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCancelHandler_EndInvoke_mA1E555E172954A02DEF340B4D38292175AB6D4D0 (TouchCancelHandler_tCD3DD9016A3331F4D264EE5EAFDDECD3F52C20A4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_Multicast(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* currentDelegate = reinterpret_cast<Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenInst(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenStatic(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenStaticInvoker(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_ClosedStaticInvoker(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenVirtual(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenInterface(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenGenericVirtual(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenGenericInterface(Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cancel2FingersHandler__ctor_m4A065ED25C024318C926B8EA527267164135ECC7 (Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cancel2FingersHandler_Invoke_mB98BA68A73065432E36EA63FDD4754EDF7A11B23 (Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Cancel2FingersHandler_BeginInvoke_m7C0C21CE5AADEF2C0C794385C92CFFFE12C25FEB (Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Cancel2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cancel2FingersHandler_EndInvoke_m81526933204C0B88B9D8A2DE9144764E4B8F6826 (Cancel2FingersHandler_tAFD654BE2E10EFF349B58BFE888DBE3FFF89FEA0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_Multicast(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* currentDelegate = reinterpret_cast<TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenInst(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenStatic(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenStaticInvoker(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_ClosedStaticInvoker(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenVirtual(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenInterface(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenGenericVirtual(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenGenericInterface(TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchStartHandler__ctor_m9EA2D4EBAED14023B65118B65F80BEE68DE189EF (TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchStartHandler_Invoke_mDB208001CB94611B9B449811CEA4C72064E96505 (TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchStartHandler_BeginInvoke_m703C73FD7A556B29119900E09ADF8B14FCA31B0F (TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchStartHandler_EndInvoke_mB142D8989582F668A22D9AE3A1ECA2BFD30D8192 (TouchStartHandler_t142EDFA60D8F20F923DA96896BCF995634C82E8E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_Multicast(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* currentDelegate = reinterpret_cast<TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenInst(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenStatic(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenStaticInvoker(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_ClosedStaticInvoker(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenVirtual(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenInterface(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenGenericVirtual(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenGenericInterface(TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDownHandler__ctor_mE10E091325BBAEF093AE92B025E07664CD921B7A (TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDownHandler_Invoke_m31E35C6E25AF8211AC9D437381AAAFE50BD96D59 (TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDownHandler_BeginInvoke_m7CECEC243DD548F28184BD6630D44A2913FCDCFE (TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchDownHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDownHandler_EndInvoke_m2DD171AA7DE690D9B14FCAFA349C86EAFD0AFE1C (TouchDownHandler_tAA95C4C49EADEEE7A764C1D2B9A4A8EA2CFA9955* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_Multicast(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* currentDelegate = reinterpret_cast<TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenInst(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenStatic(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenStaticInvoker(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_ClosedStaticInvoker(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenVirtual(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenInterface(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenGenericVirtual(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenGenericInterface(TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchUpHandler__ctor_m352581EB4D739693EE65342EA760ADB05E76442E (TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchUpHandler_Invoke_m8DBC7077650F217485AE378357CDEBCE79ABB713 (TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchUpHandler_BeginInvoke_m804B18B5A77C2B36226BFC99CB9B4F4AEC651E0C (TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchUpHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchUpHandler_EndInvoke_m70E2081371471DE36CB91C3EAFE4C4FB47754FCE (TouchUpHandler_tF855A59D0F5FF0959FC2961C227025DAB7211E21* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_Multicast(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* currentDelegate = reinterpret_cast<SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenInst(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenStatic(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenStaticInvoker(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_ClosedStaticInvoker(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenVirtual(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenInterface(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenGenericVirtual(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenGenericInterface(SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTapHandler__ctor_mF4F588BCBB865C5D51D15CCF8B285012DAB5578B (SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTapHandler_Invoke_mC43670CECE239B9AE2E1A7A3C76FC2943903871E (SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleTapHandler_BeginInvoke_mE76D967EC428DA0EC7E58B69B67C7BF1EFBF0519 (SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SimpleTapHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTapHandler_EndInvoke_m5BF5047DA172994F2DC4842870797253D1FC5780 (SimpleTapHandler_t1F4BCA338976C3B2D31D3C928FBE2FDB18F382D6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_Multicast(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* currentDelegate = reinterpret_cast<DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenInst(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenStatic(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenStaticInvoker(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_ClosedStaticInvoker(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenVirtual(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenInterface(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenGenericVirtual(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenGenericInterface(DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTapHandler__ctor_m8A8E4B37D2BC40531ADF3F5E39BC0BBDDC440BCF (DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTapHandler_Invoke_m20E6A7C580D9A0D9B03644C73B8701D8ADBEE8E2 (DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoubleTapHandler_BeginInvoke_mC1E3B496CC9FF8520E09FF6C57265C51841D376C (DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTapHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTapHandler_EndInvoke_mA02DD6A08221AC55D973ED1FFB279532DBC34BDA (DoubleTapHandler_t83F5D59B1CE472E79E54B16E27BA2EDB8555F658* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_Multicast(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* currentDelegate = reinterpret_cast<LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenInst(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenStatic(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenStaticInvoker(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_ClosedStaticInvoker(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenVirtual(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenInterface(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenGenericVirtual(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenGenericInterface(LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapStartHandler__ctor_mF52B05CAC2258C8139B2149454FFF19E92227161 (LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapStartHandler_Invoke_mF31CE8C9338D4E21B1B64BAEBD65E1E490B88E7E (LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LongTapStartHandler_BeginInvoke_m2A86C9A76FFFDFE56CBE94B42829E91ADCDE752A (LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapStartHandler_EndInvoke_mF98557DF458DC87D768D4FC908CCBA535A2C5472 (LongTapStartHandler_t62BA1732E8DC7A493E53F27190747F3DAE7BE037* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_Multicast(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* currentDelegate = reinterpret_cast<LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenInst(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenStatic(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenStaticInvoker(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_ClosedStaticInvoker(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenVirtual(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenInterface(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenGenericVirtual(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenGenericInterface(LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapHandler__ctor_m02FED30124C03539E6C1362151255D0C1CF0535C (LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapHandler_Invoke_mB179BFC3ECEFF2CF3164CE6449C92672AF1BF4A1 (LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LongTapHandler_BeginInvoke_m6349CAE6780607DFAA7D7E35132BBE1B3D8E1B55 (LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapHandler_EndInvoke_m1C67DC076E6D240645BA1109EE8157D153A2A0AD (LongTapHandler_tD2B5244F6CF4A694F44337D4E24442DBABDBFFA0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_Multicast(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* currentDelegate = reinterpret_cast<LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenInst(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenStatic(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenStaticInvoker(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_ClosedStaticInvoker(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenVirtual(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenInterface(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenGenericVirtual(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenGenericInterface(LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapEndHandler__ctor_m7C3AF460EEFEB7AF8DCB08184CF8DAEBED662FF3 (LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapEndHandler_Invoke_m8D10770E3863864983B0E3A225D00BA61571955F (LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LongTapEndHandler_BeginInvoke_m1376F4BB107279227A2709FDC6DF8820300387B2 (LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapEndHandler_EndInvoke_m51F4B342A6EBE40DA8BCA39866B3747C44D955D0 (LongTapEndHandler_t9DC18FC89240E92FFA72BD146F8028A18F054534* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_Multicast(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* currentDelegate = reinterpret_cast<DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenInst(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenStatic(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenStaticInvoker(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_ClosedStaticInvoker(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenVirtual(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenInterface(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenGenericVirtual(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenGenericInterface(DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragStartHandler__ctor_mEFF48515F5A4055DD0086EEDA416CDD65F85E282 (DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragStartHandler_Invoke_mBBDB7B3204DCF861033BBFB5E171730F7DA0112F (DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DragStartHandler_BeginInvoke_m203BAB59F24ACB2B8460A4A0C70E32683D3E03F2 (DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragStartHandler_EndInvoke_m8C7208CE51B09621AF57D538E18CA896953B06AA (DragStartHandler_t7AF49C67CCF206CCBD38F8F6458BF8969F4D930F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_Multicast(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* currentDelegate = reinterpret_cast<DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenInst(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenStatic(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenStaticInvoker(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_ClosedStaticInvoker(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenVirtual(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenInterface(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenGenericVirtual(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenGenericInterface(DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragHandler__ctor_mD738C679003DE8B110D83713FCAFA6383B81FFE2 (DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragHandler_Invoke_mEA2B7BE195C12BD37A6B28B9B29AFE44AA5135F2 (DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DragHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DragHandler_BeginInvoke_m8442B4DC19B3254DA0DC0E29BC4F422761B89803 (DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragHandler_EndInvoke_mB964B065937FC6D4DE904D6F7554B9E514A71A55 (DragHandler_tBBD3102C9010EA0A1570D5DD69DF6E27EA174B16* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_Multicast(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* currentDelegate = reinterpret_cast<DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenInst(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenStatic(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenStaticInvoker(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_ClosedStaticInvoker(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenVirtual(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenInterface(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenGenericVirtual(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenGenericInterface(DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragEndHandler__ctor_mFA0DB07A9A5698DA62CFFC93B7A0F9FAA37040FA (DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragEndHandler_Invoke_m4CE9297E6F5803B67CFC37A56B4148D67859DB7D (DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DragEndHandler_BeginInvoke_mA4FFD134B3BFB13CF28C0E51274D6A68932A3DE3 (DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragEndHandler_EndInvoke_m8AA6DD23635F992DC5624482EA683A75F46B8070 (DragEndHandler_t99139EA0A6F700C274255B451789A8FFBD1EEF72* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_Multicast(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* currentDelegate = reinterpret_cast<SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenInst(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenStatic(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenStaticInvoker(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_ClosedStaticInvoker(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenVirtual(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenInterface(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenGenericVirtual(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenGenericInterface(SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeStartHandler__ctor_m2C7D3D0E455F640F44501C0A645A9A91E145AB9E (SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeStartHandler_Invoke_mD3BDB1CF13BC70C7E4F87E1ED55895BD0C25292F (SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SwipeStartHandler_BeginInvoke_mDB2395084750B9A91C259D8493E5571527130D77 (SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeStartHandler_EndInvoke_m20952F967FFA222174E3A68EB4B86BBB45CDE1AA (SwipeStartHandler_tC35BD088CD9A62EBF2DD6833B85413A0EAF86914* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_Multicast(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* currentDelegate = reinterpret_cast<SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenInst(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenStatic(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenStaticInvoker(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_ClosedStaticInvoker(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenVirtual(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenInterface(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenGenericVirtual(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenGenericInterface(SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeHandler__ctor_mA2A921593FA53412B1526116DBB8ED76748651D6 (SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeHandler_Invoke_m4BC1F9B263347EEBFCE65C76CEFD930A38137315 (SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SwipeHandler_BeginInvoke_mE832E9CF57C039227900696F3A722E05A3F37897 (SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeHandler_EndInvoke_m8CA2AA695E8BFC355FA47FE24A281A80C1D131AA (SwipeHandler_t635F40E20D3D50FC68D1DF83D05FDB382F18A9D5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_Multicast(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* currentDelegate = reinterpret_cast<SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenInst(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenStatic(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenStaticInvoker(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_ClosedStaticInvoker(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenVirtual(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenInterface(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenGenericVirtual(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenGenericInterface(SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeEndHandler__ctor_m4AF87CAB0B2B589C63C17C997B94FF7AA5A8092C (SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeEndHandler_Invoke_mC8CE560861A947E661FA2A5433E8D4CBEF6A7CFD (SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SwipeEndHandler_BeginInvoke_m117E340BA748150F58BE3CC0707ACEA32789073B (SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeEndHandler_EndInvoke_mA12D93CCD76DB38124AEB11821E4A93F8D4BF240 (SwipeEndHandler_t03E7011476870094A98980EC154DBF5BF6A989BA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_Multicast(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* currentDelegate = reinterpret_cast<TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenInst(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenStatic(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenStaticInvoker(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_ClosedStaticInvoker(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenVirtual(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenInterface(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenGenericVirtual(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenGenericInterface(TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchStart2FingersHandler__ctor_mE53D4ED618738DEF8EACCFE99B4C73AF1919301D (TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchStart2FingersHandler_Invoke_mD4D5BF6A54C6A2A0E2E3EC93645B09B087B1A6F9 (TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchStart2FingersHandler_BeginInvoke_m5A30DFD25385B12753C56E5B103A03AC1BC752DF (TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchStart2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchStart2FingersHandler_EndInvoke_m2E4C732CFAF8CB305FE5C58E5CC9F26A52772B47 (TouchStart2FingersHandler_t93CC1AC1616166077966B8B530EEDDA9922123D7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_Multicast(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* currentDelegate = reinterpret_cast<TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenInst(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenStatic(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenStaticInvoker(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_ClosedStaticInvoker(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenVirtual(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenInterface(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenGenericVirtual(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenGenericInterface(TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDown2FingersHandler__ctor_mA6C0A7B09E224AC14385790034DCA250FFE9717B (TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDown2FingersHandler_Invoke_m83DED65ADBE16F013F7CB3C1FDCDABF0B69EF728 (TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDown2FingersHandler_BeginInvoke_m914A06A9227AD6DD9EA3661760292A1800373930 (TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchDown2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDown2FingersHandler_EndInvoke_mDEE02CABC8DCCE65937522E800531BCAAC3B7905 (TouchDown2FingersHandler_tED54C3601A04FCBA70ECAFD73E4D8185F960B1DE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_Multicast(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* currentDelegate = reinterpret_cast<TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenInst(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenStatic(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenStaticInvoker(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_ClosedStaticInvoker(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenVirtual(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenInterface(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenGenericVirtual(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenGenericInterface(TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchUp2FingersHandler__ctor_m36F0D3E4407813D7EC00EF18BEC1F5B22A99E7AB (TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchUp2FingersHandler_Invoke_mDF33D3AE40EA1C947B1EFD4796B06F368BB3EA79 (TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchUp2FingersHandler_BeginInvoke_mCAF1E2E985839E3ED1F320FF40D452B820DC265C (TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TouchUp2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchUp2FingersHandler_EndInvoke_m63FF790CFFAD870F4E39472833DF6EF2C7A8B1E6 (TouchUp2FingersHandler_t3A00B6A711E24D0DEA2550186BF5B3BE239858E8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_Multicast(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* currentDelegate = reinterpret_cast<SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenInst(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenStatic(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenStaticInvoker(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_ClosedStaticInvoker(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenVirtual(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenInterface(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenGenericVirtual(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenGenericInterface(SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTap2FingersHandler__ctor_mBD80808EC4A0D61107C1BEEFDA4A7A9C851A9475 (SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTap2FingersHandler_Invoke_m84BE8B67CC0896A9EB89CE1E7240D8E37BE5D713 (SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleTap2FingersHandler_BeginInvoke_m8C80751B3F62C2F79E6634B685E391670A280A0F (SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SimpleTap2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTap2FingersHandler_EndInvoke_m2A52F30FC3A043B28D3EA08B464A89617DB47BA9 (SimpleTap2FingersHandler_tEB8D4F8AFC8AD16821E3F72AFE1EBEC3AB5072FC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_Multicast(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* currentDelegate = reinterpret_cast<DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenInst(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenStatic(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenStaticInvoker(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_ClosedStaticInvoker(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenVirtual(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenInterface(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenGenericVirtual(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenGenericInterface(DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTap2FingersHandler__ctor_mE6CEC5B36730BCB71B47E43D626EA33E2C8D8978 (DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTap2FingersHandler_Invoke_m555215F1435B2AA982CD480B90E9B723D92FD00F (DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoubleTap2FingersHandler_BeginInvoke_mE47EE9E9CA726A76496C8F6F5F97734CC53EDD7D (DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DoubleTap2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleTap2FingersHandler_EndInvoke_m128A2A6A164581081CFDF79CBFB652200B389FC4 (DoubleTap2FingersHandler_t8FDBD70AF48EC4A9045203E7B35A2BE310AA045F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_Multicast(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* currentDelegate = reinterpret_cast<LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenInst(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenStatic(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenStaticInvoker(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_ClosedStaticInvoker(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenVirtual(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenInterface(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenGenericVirtual(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenGenericInterface(LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapStart2FingersHandler__ctor_m36D120DFC9ABE3C5CF6D08048A3EB6D07F793EE6 (LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapStart2FingersHandler_Invoke_m93741F27A203BF9DE2B7086646F0BB996CB829B0 (LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LongTapStart2FingersHandler_BeginInvoke_m4634390309D1CEB9BD81993B08A4FF4250CE1C83 (LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapStart2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapStart2FingersHandler_EndInvoke_m0429FE5F741B89BF21C98CE7FF7E5CF8D987A529 (LongTapStart2FingersHandler_tAF3EC647D96BD7A2E8D47934026D09AAE546A699* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_Multicast(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* currentDelegate = reinterpret_cast<LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenInst(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenStatic(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenStaticInvoker(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_ClosedStaticInvoker(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenVirtual(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenInterface(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenGenericVirtual(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenGenericInterface(LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTap2FingersHandler__ctor_m51C5F4DF99B80713A0F7E4C97498AA152731776B (LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTap2FingersHandler_Invoke_m5B45EE4F7987490AAE52FA1B2CF68634A706661E (LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LongTap2FingersHandler_BeginInvoke_mF27E3837A33C7BBAAE48FD456250A37E9556A76E (LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTap2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTap2FingersHandler_EndInvoke_m9E395CDBAAE4CEEC41E7A29890FDDFD8E30647D0 (LongTap2FingersHandler_tB442350D2E0863F7F2DE9F7664C1B806B302BBD2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_Multicast(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* currentDelegate = reinterpret_cast<LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenInst(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenStatic(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenStaticInvoker(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_ClosedStaticInvoker(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenVirtual(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenInterface(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenGenericVirtual(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenGenericInterface(LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapEnd2FingersHandler__ctor_m3086AD6A43308CD678833CD3E14B89880CF35FAB (LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapEnd2FingersHandler_Invoke_mD41FC0B0FCC4C0BDAB52D903ABF68539A76005C7 (LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LongTapEnd2FingersHandler_BeginInvoke_mED8C2FACF545AC5F24D07194F45E7ACF6C75EF29 (LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/LongTapEnd2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongTapEnd2FingersHandler_EndInvoke_m94FE5DAD0DB7B3C3ECE68BB0155F339550B9B1A6 (LongTapEnd2FingersHandler_tDDFFD568D61A6511A09495A35DC1314D44FDB636* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_Multicast(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* currentDelegate = reinterpret_cast<TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenInst(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenStatic(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenStaticInvoker(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_ClosedStaticInvoker(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenVirtual(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenInterface(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenGenericVirtual(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenGenericInterface(TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TwistHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistHandler__ctor_m0E11273EDD83CD9E256B3A098C13CA36B987EA2D (TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TwistHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistHandler_Invoke_mEF440ABA2CBDAF5D164B0060AA0A3FCB713C165A (TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TwistHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwistHandler_BeginInvoke_m764B9C9BD3BEE64EEDE656252C77D0E88DBC6DFC (TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TwistHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistHandler_EndInvoke_mCE44F7F0E60422454D02D0D84D9F635FCE5D32C3 (TwistHandler_t3A3D9D50B602DFF1068E9E41D1D77D1EAB503D5B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_Multicast(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* currentDelegate = reinterpret_cast<TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenInst(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenStatic(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenStaticInvoker(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_ClosedStaticInvoker(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenVirtual(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenInterface(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenGenericVirtual(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenGenericInterface(TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistEndHandler__ctor_mFD6229B24D7BD2A7E07B7CEE55D23E790F4A75AB (TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistEndHandler_Invoke_mE3EE29297F98EC35E6CCBADA67CA74EEE03561F2 (TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwistEndHandler_BeginInvoke_m808F23D653388198F3E89744CEF169C6DF9310F6 (TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/TwistEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistEndHandler_EndInvoke_m6BCBC487024D4937263D383F51E504275B3AA813 (TwistEndHandler_tFDA2333E6D8E618D01F4BA71C547049206E0A3E5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_Multicast(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* currentDelegate = reinterpret_cast<PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenInst(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenStatic(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenStaticInvoker(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_ClosedStaticInvoker(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenVirtual(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenInterface(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenGenericVirtual(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenGenericInterface(PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchInHandler__ctor_mA1B495F07AEC5CBE0AF4DBC3B1BF5D1E5124E768 (PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchInHandler_Invoke_mFC424FFE08138F0EE713D02630E6A2C2DA295A6B (PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PinchInHandler_BeginInvoke_mCD17D75848B3614EA753D751D52A380EA7040531 (PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchInHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchInHandler_EndInvoke_mA317A70957E438B4463A4F211C1D79FB60D6493C (PinchInHandler_t7B68BFD1C48FA11836E1CB3BB5A3AE0E4B8356E9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_Multicast(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* currentDelegate = reinterpret_cast<PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenInst(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenStatic(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenStaticInvoker(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_ClosedStaticInvoker(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenVirtual(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenInterface(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenGenericVirtual(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenGenericInterface(PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchOutHandler__ctor_m7BF768A3F4757B3AEF9CEF3F03170D62888DE100 (PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchOutHandler_Invoke_m15F70ABAA9C831FCB4987C21614359873D5FB8A9 (PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PinchOutHandler_BeginInvoke_m8EFAA3868D42DA189085BD1B66F02D7F007BD394 (PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchOutHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchOutHandler_EndInvoke_mF942ECC1BE1C59F5C03B11E709B6AD3D27B61232 (PinchOutHandler_t8EADC9701A23072B17C0E0D725733DBCAFA0FBA3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_Multicast(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* currentDelegate = reinterpret_cast<PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenInst(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenStatic(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenStaticInvoker(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_ClosedStaticInvoker(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenVirtual(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenInterface(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenGenericVirtual(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenGenericInterface(PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchEndHandler__ctor_mBB844928D719771FE108DCCFD0EDD5F5B7E0DED6 (PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchEndHandler_Invoke_mE30F0C8FA3D793CAE4CFE34865263B2FCEF89866 (PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PinchEndHandler_BeginInvoke_m49AE5E6B108BC17D8FDD37503C362CD566EC5A50 (PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchEndHandler_EndInvoke_m44BA335356818A7E03476B2F80A1BCD3E88DFA99 (PinchEndHandler_t527BCD134FC083D8F2F7018DE2A92C90D5FC61DD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_Multicast(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* currentDelegate = reinterpret_cast<PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenInst(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenStatic(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenStaticInvoker(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_ClosedStaticInvoker(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenVirtual(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenInterface(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenGenericVirtual(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenGenericInterface(PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchHandler__ctor_mD65B397B8EA5353D519A1325D3FAB5C1ABC32EE8 (PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchHandler_Invoke_mACCA6DDFDCB3775B23B556CBBA7EDCCA73DB3B6D (PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/PinchHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PinchHandler_BeginInvoke_mF23FD5419D4C7AEDFA79A98BA982581856BEEFB7 (PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/PinchHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchHandler_EndInvoke_m47F0700B4B1DDEBBCDBF9D7D0586361BD37641E1 (PinchHandler_t2A9B1061E578E459712A4D205A36C2FA1D057CE9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_Multicast(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* currentDelegate = reinterpret_cast<DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenInst(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenStatic(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenStaticInvoker(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_ClosedStaticInvoker(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenVirtual(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenInterface(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenGenericVirtual(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenGenericInterface(DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragStart2FingersHandler__ctor_mAE5135E2BBB2A1F81083F5F5C6425E23870A476B (DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragStart2FingersHandler_Invoke_mDC474F82582B261E2F96122A538798DD83E72118 (DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DragStart2FingersHandler_BeginInvoke_m404879CA2AC348CE9633F8966FCDA8AC8F9854FC (DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragStart2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragStart2FingersHandler_EndInvoke_mF80D6920CDD1A1736F7133CA75C4C8C78B95A6F0 (DragStart2FingersHandler_tA805BA5EB45A2974C7D1B228420E24AC2C546A08* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_Multicast(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* currentDelegate = reinterpret_cast<Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenInst(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenStatic(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenStaticInvoker(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_ClosedStaticInvoker(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenVirtual(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenInterface(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenGenericVirtual(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenGenericInterface(Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drag2FingersHandler__ctor_m9BA0A31C4BEC04FF1BCA91E7FF00CF5DE06DF8F1 (Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drag2FingersHandler_Invoke_mBD9DE51163A232F196D4CF51F58D7F0B85D6E3AE (Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drag2FingersHandler_BeginInvoke_m55C17D9EDC7A1B679053D5D00925CB81B1F7ABAD (Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Drag2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drag2FingersHandler_EndInvoke_mF73A32B318AF3EAE28183B1BD2FE67C292DA0EC4 (Drag2FingersHandler_tC81D15B07247D63FB81F77F115D802E859796EDC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_Multicast(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* currentDelegate = reinterpret_cast<DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenInst(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenStatic(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenStaticInvoker(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_ClosedStaticInvoker(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenVirtual(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenInterface(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenGenericVirtual(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenGenericInterface(DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragEnd2FingersHandler__ctor_m09831B4DD8C9743885D735CFAA3E27E46DF4384B (DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragEnd2FingersHandler_Invoke_mA846CF054AF7FB5029A8718C721D1516D0FB34BB (DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DragEnd2FingersHandler_BeginInvoke_m88864015B31CF0CFC4A41C0D5E2849CCB29EA315 (DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/DragEnd2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragEnd2FingersHandler_EndInvoke_m33247D41A27C91364CE0D740317EFF87758CB042 (DragEnd2FingersHandler_t59CD520EA375FF47F00877632780BBAA92FC5D30* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_Multicast(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* currentDelegate = reinterpret_cast<SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenInst(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenStatic(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenStaticInvoker(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_ClosedStaticInvoker(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenVirtual(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenInterface(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenGenericVirtual(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenGenericInterface(SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeStart2FingersHandler__ctor_m2CA82350A9FB8B212B21945A304C0AC9A671D3DB (SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeStart2FingersHandler_Invoke_m069C951B410C5903E94DA7F344ABD5900E10B93C (SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SwipeStart2FingersHandler_BeginInvoke_m9385892C732A9442976D87D656DBC22F5BD8F396 (SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeStart2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeStart2FingersHandler_EndInvoke_m03D5D613D8CA3DB847ADD707B80940179222F2AE (SwipeStart2FingersHandler_t727707CEAE3AF251BF6356855F4B47B1789E6F9C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_Multicast(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* currentDelegate = reinterpret_cast<Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenInst(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenStatic(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenStaticInvoker(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_ClosedStaticInvoker(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenVirtual(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenInterface(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenGenericVirtual(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenGenericInterface(Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe2FingersHandler__ctor_mA9ED772C171E785D9CEC8CAF65B1F5351C062B69 (Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe2FingersHandler_Invoke_m0D380F0C033313E338C8CE07D121075BE55D07A8 (Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Swipe2FingersHandler_BeginInvoke_mFB86E310E996F69F5ACD41D62178119651E3DDDE (Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/Swipe2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe2FingersHandler_EndInvoke_mDEBEFBF17F70BEE801D26EB9C449DD7192BB2919 (Swipe2FingersHandler_t2FC3991D3DEB8233FD307435CE935095123DB9FB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_Multicast(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* currentDelegate = reinterpret_cast<SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenInst(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenStatic(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenStaticInvoker(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_ClosedStaticInvoker(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenVirtual(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenInterface(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenGenericVirtual(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenGenericInterface(SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeEnd2FingersHandler__ctor_m2F66FEF58E7536719E9B10899230625F5C3026F6 (SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeEnd2FingersHandler_Invoke_m8EECF0FB7BF5977F514EA9D630307362777284ED (SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SwipeEnd2FingersHandler_BeginInvoke_m0993C8BD63067F00975AA7AC7304E4AECED38F96 (SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/SwipeEnd2FingersHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeEnd2FingersHandler_EndInvoke_mAC819A0C991BDBD904353628A58957317A040936 (SwipeEnd2FingersHandler_tF67917ED0FD2B56D28061630F917579F99AE0F4A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_Multicast(EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* currentDelegate = reinterpret_cast<EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_OpenInst(EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_OpenStatic(EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_OpenStaticInvoker(EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_ClosedStaticInvoker(EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5 (EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyTouchIsReadyHandler__ctor_m08DC2090B141968A649F128540A5FDD16E0C4976 (EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyTouchIsReadyHandler_Invoke_mA76C1354528A39C8A876C7619FEF380A9192DAE9 (EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasyTouchIsReadyHandler_BeginInvoke_mDBEC0346E9403C22A3A3D684C641E950F9B66EA8 (EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/EasyTouchIsReadyHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyTouchIsReadyHandler_EndInvoke_m542487AB668741019E91789BAE7CB1AC6A5EEC99 (EasyTouchIsReadyHandler_t91D2B4746E65A4D260AEA624765249E925FB5AB5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_Multicast(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* currentDelegate = reinterpret_cast<OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenInst(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenStatic(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenStaticInvoker(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_ClosedStaticInvoker(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenVirtual(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenInterface(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenGenericVirtual(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenGenericInterface(OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverUIElementHandler__ctor_m56C64B786E576C802DBF4E0ABC6CC9D2E3167B79 (OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverUIElementHandler_Invoke_m44B9968C5C80780419831E5D101A6211034B7E59 (OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OverUIElementHandler_BeginInvoke_m99649BE131901C723C3D44729EA83486F6545D4C (OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/OverUIElementHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverUIElementHandler_EndInvoke_m1400E306A60FCFB5BE4525FD538E79B7B6DF893D (OverUIElementHandler_tEF9F4D6E05FDA06DC8AC261BC83C4FED5DDF2439* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_Multicast(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* currentDelegate = reinterpret_cast<UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenInst(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenStatic(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_gesture, method);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenStaticInvoker(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_gesture);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_ClosedStaticInvoker(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_gesture);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenVirtual(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_gesture);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenInterface(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_gesture);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenGenericVirtual(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_gesture);
}
void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenGenericInterface(UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_gesture);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementTouchUpHandler__ctor_m6A4C31451B9102612CD854F931BF3F71DD45A652 (UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343_Multicast;
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler::Invoke(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementTouchUpHandler_Invoke_mF9355F659723476F6959C1E4AD439BCA3D832343 (UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_gesture, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler::BeginInvoke(HedgehogTeam.EasyTouch.Gesture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIElementTouchUpHandler_BeginInvoke_mACDA997D80F802E27ED0E30FAFA27FE06876402F (UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_gesture, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_gesture;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/UIElementTouchUpHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementTouchUpHandler_EndInvoke_mC7F1DEE557B44D8BD8DF34A5EC65F42FFCBD5325 (UIElementTouchUpHandler_t555AF10FC0561A6620803055067C4D4D1096EA60* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m969A5DCB3A8D3710DD33D57ED0CAF0CFE377A131 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0* L_0 = (U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0*)il2cpp_codegen_object_new(U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCD8C1FCEBCE0DE14C835A375E87709E2D0A0D0B4(L_0, NULL);
		((U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD8C1FCEBCE0DE14C835A375E87709E2D0A0D0B4 (U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/<>c::<Start>b__221_0(HedgehogTeam.EasyTouch.ECamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__221_0_mE49D3A90292D1C4D57FFC091F5C11104FA7C828F (U3CU3Ec_t9F1161C6135F2B3535F5E21AEC42E7E36E8BEAF0* __this, ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return c.camera == Camera.main;
		ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0* L_0 = ___0_c;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0->___camera_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
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
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleOrDoubleU3Ed__230__ctor_m4035AB70D7CE5225C48AD3C77EE58C8A760EA66E (U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleOrDoubleU3Ed__230_System_IDisposable_Dispose_m38E141852C21B3CDC2A8BE0F22206532091E6D5C (U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSingleOrDoubleU3Ed__230_MoveNext_m5942B361F0C9A8114E5816D44683145B16D313AA (U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E8C3539240E206C2C3DD4E7348F230C41FD51F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// singleDoubleTap[fingerIndex].inWait = true;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_4 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_5 = L_4->___singleDoubleTap_87;
		int32_t L_6 = __this->___fingerIndex_3;
		int32_t L_7 = L_6;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		L_8->___inWait_1 = (bool)1;
		// float time2Wait = doubleTapTime-singleDoubleTap[fingerIndex].finger.actionTime;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_9 = V_1;
		float L_10 = L_9->___doubleTapTime_55;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_11 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_12 = L_11->___singleDoubleTap_87;
		int32_t L_13 = __this->___fingerIndex_3;
		int32_t L_14 = L_13;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_16 = L_15->___finger_4;
		float L_17 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_16)->___actionTime_5;
		V_2 = ((float)il2cpp_codegen_subtract(L_10, L_17));
		// if (time2Wait<0) time2Wait =0;
		float L_18 = V_2;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		// if (time2Wait<0) time2Wait =0;
		V_2 = (0.0f);
	}

IL_005e:
	{
		// yield return new WaitForSeconds(time2Wait);
		float L_19 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0073:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (singleDoubleTap[fingerIndex].count <2){
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_21 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_22 = L_21->___singleDoubleTap_87;
		int32_t L_23 = __this->___fingerIndex_3;
		int32_t L_24 = L_23;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = L_25->___count_3;
		if ((((int32_t)L_26) >= ((int32_t)2)))
		{
			goto IL_00cd;
		}
	}
	{
		// CreateGesture( fingerIndex, EvtType.On_SimpleTap,singleDoubleTap[fingerIndex].finger, SwipeDirection.None,0,singleDoubleTap[fingerIndex].finger.deltaPosition);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_27 = V_1;
		int32_t L_28 = __this->___fingerIndex_3;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_29 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_30 = L_29->___singleDoubleTap_87;
		int32_t L_31 = __this->___fingerIndex_3;
		int32_t L_32 = L_31;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_34 = L_33->___finger_4;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_35 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_36 = L_35->___singleDoubleTap_87;
		int32_t L_37 = __this->___fingerIndex_3;
		int32_t L_38 = L_37;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_40 = L_39->___finger_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_40)->___deltaPosition_4;
		EasyTouch_CreateGesture_m05A6DF064C3EAE1936CA110A121C35F5FA87B9DB(L_27, L_28, 4, L_34, 0, (0.0f), L_41, NULL);
		goto IL_0109;
	}

IL_00cd:
	{
		// CreateGesture( fingerIndex, EvtType.On_DoubleTap,singleDoubleTap[fingerIndex].finger, SwipeDirection.None,0,singleDoubleTap[fingerIndex].finger.deltaPosition);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_42 = V_1;
		int32_t L_43 = __this->___fingerIndex_3;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_44 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_45 = L_44->___singleDoubleTap_87;
		int32_t L_46 = __this->___fingerIndex_3;
		int32_t L_47 = L_46;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_49 = L_48->___finger_4;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_50 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_51 = L_50->___singleDoubleTap_87;
		int32_t L_52 = __this->___fingerIndex_3;
		int32_t L_53 = L_52;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_55 = L_54->___finger_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_55)->___deltaPosition_4;
		EasyTouch_CreateGesture_m05A6DF064C3EAE1936CA110A121C35F5FA87B9DB(L_42, L_43, 5, L_49, 0, (0.0f), L_56, NULL);
	}

IL_0109:
	{
		// singleDoubleTap[fingerIndex].Stop();
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_57 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_58 = L_57->___singleDoubleTap_87;
		int32_t L_59 = __this->___fingerIndex_3;
		int32_t L_60 = L_59;
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		DoubleTap_Stop_m8E63688EEA2DFC691A0E813DBA7395BACA589E6D(L_61, NULL);
		// StopCoroutine( "SingleOrDouble");
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_62 = V_1;
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(L_62, _stringLiteral5E8C3539240E206C2C3DD4E7348F230C41FD51F0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSingleOrDoubleU3Ed__230_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24BC253C2C164C91607B188EC5FC83551F62F9E0 (U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleOrDoubleU3Ed__230_System_Collections_IEnumerator_Reset_m2E8FD4A9445673920B815D966A5A93AC7618CB4D (U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSingleOrDoubleU3Ed__230_System_Collections_IEnumerator_Reset_m2E8FD4A9445673920B815D966A5A93AC7618CB4D_RuntimeMethod_var)));
	}
}
// System.Object HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble>d__230::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSingleOrDoubleU3Ed__230_System_Collections_IEnumerator_get_Current_m3DB6C7B4E9B8F15E42DEE3B0EEC96A98EDB4860B (U3CSingleOrDoubleU3Ed__230_tA6FDA71540FD4CEF9EAEEF5CE6E45AAF0FC9940F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleOrDouble2FingersU3Ed__236__ctor_mF8AA156612972EEAA12BD2B09A4F7B101EB8139C (U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleOrDouble2FingersU3Ed__236_System_IDisposable_Dispose_m8C2A99757620CD3248A9825526E66DA1DABB93B5 (U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSingleOrDouble2FingersU3Ed__236_MoveNext_m8CD787B162A7E992F0E287221F31333B4EB98BA2 (U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DC5F8457D690224C0D17291EB3F27D9FC67E5C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// singleDoubleTap[99].inWait = true;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_4 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_5 = L_4->___singleDoubleTap_87;
		int32_t L_6 = ((int32_t)99);
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		L_7->___inWait_1 = (bool)1;
		// yield return new WaitForSeconds(doubleTapTime);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_8 = V_1;
		float L_9 = L_8->___doubleTapTime_55;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0047:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (singleDoubleTap[99].count <2){
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_11 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_12 = L_11->___singleDoubleTap_87;
		int32_t L_13 = ((int32_t)99);
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = L_14->___count_3;
		if ((((int32_t)L_15) >= ((int32_t)2)))
		{
			goto IL_00b5;
		}
	}
	{
		// CreateGesture2Finger(EvtType.On_SimpleTap2Fingers,twoFinger.startPosition,twoFinger.position,twoFinger.deltaPosition,
		//                      twoFinger.timeSinceStartAction, SwipeDirection.None,0,Vector2.zero,0,0,twoFinger.fingerDistance);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_16 = V_1;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_17 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_18 = L_17->___twoFinger_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = L_18->___startPosition_6;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_20 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_21 = L_20->___twoFinger_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21->___position_7;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_23 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_24 = L_23->___twoFinger_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = L_24->___deltaPosition_8;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_26 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_27 = L_26->___twoFinger_85;
		float L_28 = L_27->___timeSinceStartAction_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_30 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_31 = L_30->___twoFinger_85;
		float L_32 = L_31->___fingerDistance_11;
		EasyTouch_CreateGesture2Finger_m946611F6A625E60803D3E4E6B52DAC12248F4EC4(L_16, ((int32_t)18), L_19, L_22, L_25, L_28, 0, (0.0f), L_29, (0.0f), (0.0f), L_32, NULL);
		goto IL_0109;
	}

IL_00b5:
	{
		// CreateGesture2Finger(EvtType.On_DoubleTap2Fingers,twoFinger.startPosition,twoFinger.position,twoFinger.deltaPosition,
		//                      twoFinger.timeSinceStartAction, SwipeDirection.None,0,Vector2.zero,0,0,twoFinger.fingerDistance);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_33 = V_1;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_34 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_35 = L_34->___twoFinger_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = L_35->___startPosition_6;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_37 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_38 = L_37->___twoFinger_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = L_38->___position_7;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_40 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_41 = L_40->___twoFinger_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = L_41->___deltaPosition_8;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_43 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_44 = L_43->___twoFinger_85;
		float L_45 = L_44->___timeSinceStartAction_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_47 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_48 = L_47->___twoFinger_85;
		float L_49 = L_48->___fingerDistance_11;
		EasyTouch_CreateGesture2Finger_m946611F6A625E60803D3E4E6B52DAC12248F4EC4(L_33, ((int32_t)19), L_36, L_39, L_42, L_45, 0, (0.0f), L_46, (0.0f), (0.0f), L_49, NULL);
	}

IL_0109:
	{
		// twoFinger.currentGesture = GestureType.None;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_50 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_51 = L_50->___twoFinger_85;
		L_51->___currentGesture_0 = 3;
		// twoFinger.pickedObject=null;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_52 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_53 = L_52->___twoFinger_85;
		L_53->___pickedObject_17 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_53->___pickedObject_17), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// twoFinger.swipeStart = false;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_54 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_55 = L_54->___twoFinger_85;
		L_55->___swipeStart_24 = (bool)0;
		// twoFinger.dragStart = false;
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_56 = V_1;
		TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* L_57 = L_56->___twoFinger_85;
		L_57->___dragStart_23 = (bool)0;
		// singleDoubleTap[99].Stop();
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_58 = V_1;
		DoubleTapU5BU5D_t493DC0312DE4EA89B62C39D3F810E18883345BBC* L_59 = L_58->___singleDoubleTap_87;
		int32_t L_60 = ((int32_t)99);
		DoubleTap_t88F04AA4DAFCDDA0D9A3BA9BE390117B218B82A7* L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		DoubleTap_Stop_m8E63688EEA2DFC691A0E813DBA7395BACA589E6D(L_61, NULL);
		// StopCoroutine( "SingleOrDouble2Fingers");
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_62 = V_1;
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(L_62, _stringLiteral6DC5F8457D690224C0D17291EB3F27D9FC67E5C9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSingleOrDouble2FingersU3Ed__236_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37B5869B5601921B9DB65AC3622A7B5C58A4F73B (U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleOrDouble2FingersU3Ed__236_System_Collections_IEnumerator_Reset_mAA18B54C68C4D62E6CA5D3FCEC9208AC17D622C1 (U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSingleOrDouble2FingersU3Ed__236_System_Collections_IEnumerator_Reset_mAA18B54C68C4D62E6CA5D3FCEC9208AC17D622C1_RuntimeMethod_var)));
	}
}
// System.Object HedgehogTeam.EasyTouch.EasyTouch/<SingleOrDouble2Fingers>d__236::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSingleOrDouble2FingersU3Ed__236_System_Collections_IEnumerator_get_Current_mF2D37B76CCB3CE4C85074EFDC37EBDE387068CF7 (U3CSingleOrDouble2FingersU3Ed__236_t513B28ABFC59325C08DA4094F5CFD5380736A5B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass241_0__ctor_mBC72CF0905007B124AA473D08A5B2D97BDF22415 (U3CU3Ec__DisplayClass241_0_t354D5D6EFBB73624EE2C98FEF14F5CCA69C7D2A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass241_0::<RaiseEvent>b__0(HedgehogTeam.EasyTouch.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass241_0_U3CRaiseEventU3Eb__0_mE36B9C2F5DB14A47AF8C416E79D54BEC8A4F3F6B (U3CU3Ec__DisplayClass241_0_t354D5D6EFBB73624EE2C98FEF14F5CCA69C7D2A0* __this, Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj!=null && obj.type == gesture.type && obj.fingerIndex == gesture.fingerIndex;
		Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* L_1 = ___0_obj;
		int32_t L_2 = L_1->___type_25;
		Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* L_3 = __this->___gesture_0;
		int32_t L_4 = L_3->___type_25;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* L_5 = ___0_obj;
		int32_t L_6 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_5)->___fingerIndex_0;
		Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* L_7 = __this->___gesture_0;
		int32_t L_8 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_7)->___fingerIndex_0;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002a:
	{
		return (bool)0;
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
// System.Void HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass274_0__ctor_m6D4EF6CE082161AED51663AA63031D864357F42C (U3CU3Ec__DisplayClass274_0_t12CE84C9169BE454B29B9C6E3E76235FE03A7281* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.EasyTouch/<>c__DisplayClass274_0::<RemoveCamera>b__0(HedgehogTeam.EasyTouch.ECamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass274_0_U3CRemoveCameraU3Eb__0_mDA3EC7D9ACA403143B4368784B1ECACA97252FFC (U3CU3Ec__DisplayClass274_0_t12CE84C9169BE454B29B9C6E3E76235FE03A7281* __this, ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return c.camera == cam;
		ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0* L_0 = ___0_c;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0->___camera_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cam_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
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
// System.Int32 HedgehogTeam.EasyTouch.EasyTouchInput::TouchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EasyTouchInput_TouchCount_m71CDBE66E807F79CF713EC84A77842DFB09D6947 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, const RuntimeMethod* method) 
{
	{
		// return getTouchCount(false);
		int32_t L_0;
		L_0 = EasyTouchInput_getTouchCount_mFB4BF52273BCA8E92DECDD94E476795C4C53ED8C(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.Int32 HedgehogTeam.EasyTouch.EasyTouchInput::getTouchCount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EasyTouchInput_getTouchCount_mFB4BF52273BCA8E92DECDD94E476795C4C53ED8C (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, bool ___0_realTouch, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int count=0;
		V_0 = 0;
		// if (realTouch || EasyTouch.instance.enableRemote ){
		bool L_0 = ___0_realTouch;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_1;
		L_1 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		bool L_2 = L_1->___enableRemote_47;
		if (!L_2)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// count = Input.touchCount;
		int32_t L_3;
		L_3 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		V_0 = L_3;
		goto IL_00f4;
	}

IL_001c:
	{
		// if (Input.GetMouseButton(0) || Input.GetMouseButtonUp(0)){
		bool L_4;
		L_4 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_5)
		{
			goto IL_00f4;
		}
	}

IL_002f:
	{
		// count=1;
		V_0 = 1;
		// if (EasyTouch.GetSecondeFingerSimulation()){
		bool L_6;
		L_6 = EasyTouch_GetSecondeFingerSimulation_m17BED560FF3A484336B254525290FB0AB66B3DD3(NULL);
		if (!L_6)
		{
			goto IL_00b0;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftAlt) || Input.GetKey(EasyTouch.instance.twistKey)|| Input.GetKey(KeyCode.LeftControl) ||Input.GetKey(EasyTouch.instance.swipeKey ))
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (L_7)
		{
			goto IL_0072;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_8;
		L_8 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_9 = L_8->___twistKey_75;
		bool L_10;
		L_10 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_9, NULL);
		if (L_10)
		{
			goto IL_0072;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_11)
		{
			goto IL_0072;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_12;
		L_12 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_13 = L_12->___swipeKey_76;
		bool L_14;
		L_14 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_13, NULL);
		if (!L_14)
		{
			goto IL_0074;
		}
	}

IL_0072:
	{
		// count=2;
		V_0 = 2;
	}

IL_0074:
	{
		// if (Input.GetKeyUp(KeyCode.LeftAlt)|| Input.GetKeyUp(EasyTouch.instance.twistKey)|| Input.GetKeyUp(KeyCode.LeftControl)|| Input.GetKeyUp(EasyTouch.instance.swipeKey))
		bool L_15;
		L_15 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)308), NULL);
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_16;
		L_16 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_17 = L_16->___twistKey_75;
		bool L_18;
		L_18 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_17, NULL);
		if (L_18)
		{
			goto IL_00ae;
		}
	}
	{
		bool L_19;
		L_19 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)306), NULL);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_20;
		L_20 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_21 = L_20->___swipeKey_76;
		bool L_22;
		L_22 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_21, NULL);
		if (!L_22)
		{
			goto IL_00b0;
		}
	}

IL_00ae:
	{
		// count=2;
		V_0 = 2;
	}

IL_00b0:
	{
		// if (count ==0){
		int32_t L_23 = V_0;
		if (L_23)
		{
			goto IL_00f4;
		}
	}
	{
		// complexCenter = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___complexCenter_8 = L_24;
		// oldMousePosition[0] = new Vector2(-1,-1);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = __this->___oldMousePosition_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_26);
		// oldMousePosition[1] = new Vector2(-1,-1);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = __this->___oldMousePosition_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_28);
	}

IL_00f4:
	{
		// return count;
		int32_t L_29 = V_0;
		return L_29;
	}
}
// HedgehogTeam.EasyTouch.Finger HedgehogTeam.EasyTouch.EasyTouchInput::GetMouseTouch(System.Int32,HedgehogTeam.EasyTouch.Finger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* EasyTouchInput_GetMouseTouch_mECF32E4C0EBA73A7D58722D04B65647276672566 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, int32_t ___0_fingerIndex, Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* ___1_myFinger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* V_0 = NULL;
	{
		// if (myFinger!=null){
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_0 = ___1_myFinger;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		// finger = myFinger;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_1 = ___1_myFinger;
		V_0 = L_1;
		goto IL_0014;
	}

IL_0007:
	{
		// finger = new Finger();
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_2 = (Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1*)il2cpp_codegen_object_new(Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1_il2cpp_TypeInfo_var);
		Finger__ctor_m56FFDAF7B9665E06BA66F8CD182D583886D95795(L_2, NULL);
		V_0 = L_2;
		// finger.gesture = EasyTouch.GestureType.None;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_3 = V_0;
		L_3->___gesture_23 = 3;
	}

IL_0014:
	{
		// if (fingerIndex==1 && (Input.GetKeyUp(KeyCode.LeftAlt)|| Input.GetKeyUp(EasyTouch.instance.twistKey)|| Input.GetKeyUp(KeyCode.LeftControl)|| Input.GetKeyUp(EasyTouch.instance.swipeKey))){
		int32_t L_4 = ___0_fingerIndex;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)308), NULL);
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_6;
		L_6 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_7 = L_6->___twistKey_75;
		bool L_8;
		L_8 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_7, NULL);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		bool L_9;
		L_9 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)306), NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_10;
		L_10 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_11 = L_10->___swipeKey_76;
		bool L_12;
		L_12 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_11, NULL);
		if (!L_12)
		{
			goto IL_00aa;
		}
	}

IL_0055:
	{
		// finger.fingerIndex = fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_13 = V_0;
		int32_t L_14 = ___0_fingerIndex;
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_13)->___fingerIndex_0 = L_14;
		// finger.position = oldFinger2Position;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___oldFinger2Position_7;
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_15)->___position_3 = L_16;
		// finger.deltaPosition = finger.position - oldFinger2Position;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_17 = V_0;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_18 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_18)->___position_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___oldFinger2Position_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_19, L_20, NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_17)->___deltaPosition_4 = L_21;
		// finger.tapCount = tapCount[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___tapCount_1;
		int32_t L_24 = ___0_fingerIndex;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		L_22->___tapCount_21 = L_26;
		// finger.deltaTime = Time.realtimeSinceStartup-deltaTime[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_27 = V_0;
		float L_28;
		L_28 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___deltaTime_3;
		int32_t L_30 = ___0_fingerIndex;
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_27)->___deltaTime_6 = ((float)il2cpp_codegen_subtract(L_28, L_32));
		// finger.phase = TouchPhase.Ended;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_33 = V_0;
		L_33->___phase_22 = 3;
		// return finger;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_34 = V_0;
		return L_34;
	}

IL_00aa:
	{
		// if (Input.GetMouseButton(0)){
		bool L_35;
		L_35 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_35)
		{
			goto IL_0271;
		}
	}
	{
		// finger.fingerIndex = fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_36 = V_0;
		int32_t L_37 = ___0_fingerIndex;
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_36)->___fingerIndex_0 = L_37;
		// finger.position = GetPointerPosition(fingerIndex);
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_38 = V_0;
		int32_t L_39 = ___0_fingerIndex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = EasyTouchInput_GetPointerPosition_m093461C05D432895FCB33D47C8B226A3EC3387A3(__this, L_39, NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_38)->___position_3 = L_40;
		// if (Time.realtimeSinceStartup-tapeTime[fingerIndex]>0.5){
		float L_41;
		L_41 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___tapeTime_4;
		int32_t L_43 = ___0_fingerIndex;
		int32_t L_44 = L_43;
		float L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((double)((double)((float)il2cpp_codegen_subtract(L_41, L_45)))) > ((double)(0.5)))))
		{
			goto IL_00ec;
		}
	}
	{
		// tapCount[fingerIndex]=0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___tapCount_1;
		int32_t L_47 = ___0_fingerIndex;
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47), (int32_t)0);
	}

IL_00ec:
	{
		// if (Input.GetMouseButtonDown(0) || (fingerIndex==1 && (Input.GetKeyDown(KeyCode.LeftAlt)|| Input.GetKeyDown(EasyTouch.instance.twistKey)|| Input.GetKeyDown(KeyCode.LeftControl)|| Input.GetKeyDown(EasyTouch.instance.swipeKey)))){
		bool L_48;
		L_48 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_48)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_49 = ___0_fingerIndex;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_01ef;
		}
	}
	{
		bool L_50;
		L_50 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)308), NULL);
		if (L_50)
		{
			goto IL_0138;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_51;
		L_51 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_52 = L_51->___twistKey_75;
		bool L_53;
		L_53 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_52, NULL);
		if (L_53)
		{
			goto IL_0138;
		}
	}
	{
		bool L_54;
		L_54 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)306), NULL);
		if (L_54)
		{
			goto IL_0138;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_55;
		L_55 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_56 = L_55->___swipeKey_76;
		bool L_57;
		L_57 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_56, NULL);
		if (!L_57)
		{
			goto IL_01ef;
		}
	}

IL_0138:
	{
		// finger.position = GetPointerPosition(fingerIndex);
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_58 = V_0;
		int32_t L_59 = ___0_fingerIndex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = EasyTouchInput_GetPointerPosition_m093461C05D432895FCB33D47C8B226A3EC3387A3(__this, L_59, NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_58)->___position_3 = L_60;
		// finger.deltaPosition = Vector2.zero;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_61 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_61)->___deltaPosition_4 = L_62;
		// tapCount[fingerIndex]=tapCount[fingerIndex]+1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___tapCount_1;
		int32_t L_64 = ___0_fingerIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___tapCount_1;
		int32_t L_66 = ___0_fingerIndex;
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64), (int32_t)((int32_t)il2cpp_codegen_add(L_68, 1)));
		// finger.tapCount = tapCount[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___tapCount_1;
		int32_t L_71 = ___0_fingerIndex;
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		L_69->___tapCount_21 = L_73;
		// startActionTime[fingerIndex] = Time.realtimeSinceStartup;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = __this->___startActionTime_2;
		int32_t L_75 = ___0_fingerIndex;
		float L_76;
		L_76 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75), (float)L_76);
		// deltaTime[fingerIndex] = startActionTime[fingerIndex];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = __this->___deltaTime_3;
		int32_t L_78 = ___0_fingerIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = __this->___startActionTime_2;
		int32_t L_80 = ___0_fingerIndex;
		int32_t L_81 = L_80;
		float L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78), (float)L_82);
		// finger.deltaTime = 0;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_83 = V_0;
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_83)->___deltaTime_6 = (0.0f);
		// finger.phase = TouchPhase.Began;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_84 = V_0;
		L_84->___phase_22 = 0;
		// if (fingerIndex==1){
		int32_t L_85 = ___0_fingerIndex;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c3;
		}
	}
	{
		// oldFinger2Position = finger.position;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_86 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_86)->___position_3;
		__this->___oldFinger2Position_7 = L_87;
		// oldMousePosition[fingerIndex] = finger.position;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_88 = __this->___oldMousePosition_0;
		int32_t L_89 = ___0_fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_90 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_90)->___position_3;
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_91);
		goto IL_01d5;
	}

IL_01c3:
	{
		// oldMousePosition[fingerIndex] = finger.position;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_92 = __this->___oldMousePosition_0;
		int32_t L_93 = ___0_fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_94 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_94)->___position_3;
		(L_92)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_95);
	}

IL_01d5:
	{
		// if (tapCount[fingerIndex]==1){
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = __this->___tapCount_1;
		int32_t L_97 = ___0_fingerIndex;
		int32_t L_98 = L_97;
		int32_t L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		if ((!(((uint32_t)L_99) == ((uint32_t)1))))
		{
			goto IL_01ed;
		}
	}
	{
		// tapeTime[fingerIndex] = Time.realtimeSinceStartup;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_100 = __this->___tapeTime_4;
		int32_t L_101 = ___0_fingerIndex;
		float L_102;
		L_102 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		(L_100)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101), (float)L_102);
	}

IL_01ed:
	{
		// return finger;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_103 = V_0;
		return L_103;
	}

IL_01ef:
	{
		// finger.deltaPosition = finger.position - oldMousePosition[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_104 = V_0;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_105 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_105)->___position_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_107 = __this->___oldMousePosition_0;
		int32_t L_108 = ___0_fingerIndex;
		int32_t L_109 = L_108;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111;
		L_111 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_106, L_110, NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_104)->___deltaPosition_4 = L_111;
		// finger.tapCount = tapCount[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_112 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___tapCount_1;
		int32_t L_114 = ___0_fingerIndex;
		int32_t L_115 = L_114;
		int32_t L_116 = (L_113)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_115));
		L_112->___tapCount_21 = L_116;
		// finger.deltaTime = Time.realtimeSinceStartup-deltaTime[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_117 = V_0;
		float L_118;
		L_118 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_119 = __this->___deltaTime_3;
		int32_t L_120 = ___0_fingerIndex;
		int32_t L_121 = L_120;
		float L_122 = (L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_117)->___deltaTime_6 = ((float)il2cpp_codegen_subtract(L_118, L_122));
		// if (finger.deltaPosition.sqrMagnitude <1){
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_123 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_124 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_123)->___deltaPosition_4);
		float L_125;
		L_125 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_124, NULL);
		if ((!(((float)L_125) < ((float)(1.0f)))))
		{
			goto IL_0249;
		}
	}
	{
		// finger.phase = TouchPhase.Stationary;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_126 = V_0;
		L_126->___phase_22 = 2;
		goto IL_0250;
	}

IL_0249:
	{
		// finger.phase = TouchPhase.Moved;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_127 = V_0;
		L_127->___phase_22 = 1;
	}

IL_0250:
	{
		// oldMousePosition[fingerIndex] = finger.position;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_128 = __this->___oldMousePosition_0;
		int32_t L_129 = ___0_fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_130 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_131 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_130)->___position_3;
		(L_128)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_129), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_131);
		// deltaTime[fingerIndex] = Time.realtimeSinceStartup;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = __this->___deltaTime_3;
		int32_t L_133 = ___0_fingerIndex;
		float L_134;
		L_134 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133), (float)L_134);
		// return finger;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_135 = V_0;
		return L_135;
	}

IL_0271:
	{
		// else if (Input.GetMouseButtonUp(0)){
		bool L_136;
		L_136 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_136)
		{
			goto IL_02e7;
		}
	}
	{
		// finger.fingerIndex = fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_137 = V_0;
		int32_t L_138 = ___0_fingerIndex;
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_137)->___fingerIndex_0 = L_138;
		// finger.position = GetPointerPosition(fingerIndex);
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_139 = V_0;
		int32_t L_140 = ___0_fingerIndex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141;
		L_141 = EasyTouchInput_GetPointerPosition_m093461C05D432895FCB33D47C8B226A3EC3387A3(__this, L_140, NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_139)->___position_3 = L_141;
		// finger.deltaPosition = finger.position - oldMousePosition[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_142 = V_0;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_143 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_143)->___position_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_145 = __this->___oldMousePosition_0;
		int32_t L_146 = ___0_fingerIndex;
		int32_t L_147 = L_146;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_148 = (L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149;
		L_149 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_144, L_148, NULL);
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_142)->___deltaPosition_4 = L_149;
		// finger.tapCount = tapCount[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_150 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___tapCount_1;
		int32_t L_152 = ___0_fingerIndex;
		int32_t L_153 = L_152;
		int32_t L_154 = (L_151)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		L_150->___tapCount_21 = L_154;
		// finger.deltaTime = Time.realtimeSinceStartup-deltaTime[fingerIndex];
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_155 = V_0;
		float L_156;
		L_156 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_157 = __this->___deltaTime_3;
		int32_t L_158 = ___0_fingerIndex;
		int32_t L_159 = L_158;
		float L_160 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
		((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_155)->___deltaTime_6 = ((float)il2cpp_codegen_subtract(L_156, L_160));
		// finger.phase = TouchPhase.Ended;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_161 = V_0;
		L_161->___phase_22 = 3;
		// oldMousePosition[fingerIndex] = finger.position;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_162 = __this->___oldMousePosition_0;
		int32_t L_163 = ___0_fingerIndex;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_164 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)L_164)->___position_3;
		(L_162)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_165);
		// return finger;
		Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* L_166 = V_0;
		return L_166;
	}

IL_02e7:
	{
		// return null;
		return (Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1*)NULL;
	}
}
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetSecondFingerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetSecondFingerPosition_m8AC953EEB8A2B4EFC6C6A572F2DDFB7992000D75 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 pos = new Vector2(-1,-1);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (-1.0f), (-1.0f), NULL);
		// if ((Input.GetKey(KeyCode.LeftAlt)|| Input.GetKey(EasyTouch.instance.twistKey)) && (Input.GetKey(KeyCode.LeftControl)|| Input.GetKey(EasyTouch.instance.swipeKey))){
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_1;
		L_1 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_2 = L_1->___twistKey_75;
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_2, NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}

IL_002e:
	{
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_4)
		{
			goto IL_004b;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_5;
		L_5 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_6 = L_5->___swipeKey_76;
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_6, NULL);
		if (!L_7)
		{
			goto IL_007e;
		}
	}

IL_004b:
	{
		// if (!bComplex){
		bool L_8 = __this->___bComplex_5;
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		// bComplex=true;
		__this->___bComplex_5 = (bool)1;
		// deltaFingerPosition = (Vector2)Input.mousePosition - oldFinger2Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___oldFinger2Position_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		__this->___deltaFingerPosition_6 = L_12;
	}

IL_0075:
	{
		// pos = GetComplex2finger();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = EasyTouchInput_GetComplex2finger_mD40D94DD6471D3DA57B3A46FC5D623ACDE766B51(__this, NULL);
		V_0 = L_13;
		// return pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		return L_14;
	}

IL_007e:
	{
		// else if (Input.GetKey(KeyCode.LeftAlt)|| Input.GetKey(EasyTouch.instance.twistKey) ){
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (L_15)
		{
			goto IL_009b;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_16;
		L_16 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_17 = L_16->___twistKey_75;
		bool L_18;
		L_18 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_17, NULL);
		if (!L_18)
		{
			goto IL_00ac;
		}
	}

IL_009b:
	{
		// pos =  GetPinchTwist2Finger();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = EasyTouchInput_GetPinchTwist2Finger_mA78F5C8BCBA237CB8950DCB7AE2F4851E10842D1(__this, (bool)0, NULL);
		V_0 = L_19;
		// bComplex = false;
		__this->___bComplex_5 = (bool)0;
		// return pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		return L_20;
	}

IL_00ac:
	{
		// }else if (Input.GetKey(KeyCode.LeftControl)|| Input.GetKey(EasyTouch.instance.swipeKey) ){
		bool L_21;
		L_21 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_21)
		{
			goto IL_00c9;
		}
	}
	{
		EasyTouch_t2A553A7AC5D6E8C64A4324A18DA39AF644FC671B* L_22;
		L_22 = EasyTouch_get_instance_m6D9DC5AF5A9C14E1AD774C3767A7F5BF4A897915(NULL);
		int32_t L_23 = L_22->___swipeKey_76;
		bool L_24;
		L_24 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_23, NULL);
		if (!L_24)
		{
			goto IL_00d9;
		}
	}

IL_00c9:
	{
		// pos =GetComplex2finger();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = EasyTouchInput_GetComplex2finger_mD40D94DD6471D3DA57B3A46FC5D623ACDE766B51(__this, NULL);
		V_0 = L_25;
		// bComplex = false;
		__this->___bComplex_5 = (bool)0;
		// return pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		return L_26;
	}

IL_00d9:
	{
		// return pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		return L_27;
	}
}
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetPointerPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetPointerPosition_m093461C05D432895FCB33D47C8B226A3EC3387A3 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// if (index==0){
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// pos= Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		// return pos;
		return L_2;
	}

IL_000e:
	{
		// return GetSecondFingerPosition();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = EasyTouchInput_GetSecondFingerPosition_m8AC953EEB8A2B4EFC6C6A572F2DDFB7992000D75(__this, NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetPinchTwist2Finger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetPinchTwist2Finger_mA78F5C8BCBA237CB8950DCB7AE2F4851E10842D1 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, bool ___0_newSim, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (complexCenter==Vector2.zero){
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___complexCenter_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_006a;
		}
	}
	{
		// position.x = (Screen.width/2.0f) - (Input.mousePosition.x - (Screen.width/2.0f)) ;
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_5 = L_4.___x_2;
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(((float)(((float)L_3)/(2.0f))), ((float)il2cpp_codegen_subtract(L_5, ((float)(((float)L_6)/(2.0f)))))));
		// position.y = (Screen.height/2.0f) - (Input.mousePosition.y - (Screen.height/2.0f));
		int32_t L_7;
		L_7 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_9 = L_8.___y_3;
		int32_t L_10;
		L_10 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(((float)(((float)L_7)/(2.0f))), ((float)il2cpp_codegen_subtract(L_9, ((float)(((float)L_10)/(2.0f)))))));
		goto IL_00bc;
	}

IL_006a:
	{
		// position.x = (complexCenter.x) - (Input.mousePosition.x - (complexCenter.x)) ;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___complexCenter_8);
		float L_12 = L_11->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_14 = L_13.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___complexCenter_8);
		float L_16 = L_15->___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(L_12, ((float)il2cpp_codegen_subtract(L_14, L_16))));
		// position.y = (complexCenter.y) - (Input.mousePosition.y - (complexCenter.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___complexCenter_8);
		float L_18 = L_17->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_20 = L_19.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___complexCenter_8);
		float L_22 = L_21->___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_subtract(L_20, L_22))));
	}

IL_00bc:
	{
		// oldFinger2Position = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		__this->___oldFinger2Position_7 = L_23;
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		return L_24;
	}
}
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.EasyTouchInput::GetComplex2finger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EasyTouchInput_GetComplex2finger_mD40D94DD6471D3DA57B3A46FC5D623ACDE766B51 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// position.x = Input.mousePosition.x - deltaFingerPosition.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_1 = L_0.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___deltaFingerPosition_6);
		float L_3 = L_2->___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// position.y = Input.mousePosition.y - deltaFingerPosition.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_5 = L_4.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___deltaFingerPosition_6);
		float L_7 = L_6->___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// complexCenter = new Vector2((Input.mousePosition.x+position.x)/2f, (Input.mousePosition.y+position.y)/2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_9 = L_8.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_13 = L_12.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)(((float)il2cpp_codegen_add(L_9, L_11))/(2.0f))), ((float)(((float)il2cpp_codegen_add(L_13, L_15))/(2.0f))), /*hidden argument*/NULL);
		__this->___complexCenter_8 = L_16;
		// oldFinger2Position = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		__this->___oldFinger2Position_7 = L_17;
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		return L_18;
	}
}
// System.Void HedgehogTeam.EasyTouch.EasyTouchInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyTouchInput__ctor_mED5C703ED345A4D8716082AA111986217339AD13 (EasyTouchInput_tDCAAECD8192EF5D856D5B5B419E9D9B122DBD1E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector2[] oldMousePosition = new Vector2[2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___oldMousePosition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldMousePosition_0), (void*)L_0);
		// private int[] tapCount = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___tapCount_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tapCount_1), (void*)L_1);
		// private float[] startActionTime = new float[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___startActionTime_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startActionTime_2), (void*)L_2);
		// private float[] deltaTime = new float[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___deltaTime_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deltaTime_3), (void*)L_3);
		// private float[] tapeTime = new float[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___tapeTime_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tapeTime_4), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void HedgehogTeam.EasyTouch.ECamera::.ctor(UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECamera__ctor_mC247FA644B76AB03A6D64B01537B3A21CC6253CD (ECamera_t32787C44B79503408F5CD2065556B0D373E07CC0* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_cam, bool ___1_gui, const RuntimeMethod* method) 
{
	{
		// public ECamera( Camera cam,bool gui){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.camera = cam;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_cam;
		__this->___camera_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camera_0), (void*)L_0);
		// this.guiCamera = gui;
		bool L_1 = ___1_gui;
		__this->___guiCamera_1 = L_1;
		// }
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
// System.Void HedgehogTeam.EasyTouch.Finger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finger__ctor_m56FFDAF7B9665E06BA66F8CD182D583886D95795 (Finger_t1DB7C4CFE9A52CEC4A41166CED0DD8A0371364E1* __this, const RuntimeMethod* method) 
{
	{
		BaseFinger__ctor_m8AFEAD5FAFBD1C50D12082E55CC13EA798990D4B(__this, NULL);
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
// System.Object HedgehogTeam.EasyTouch.Gesture::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gesture_Clone_m68826ECD465D6F3316344064B8E68D391D378A38 (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, const RuntimeMethod* method) 
{
	{
		// return this.MemberwiseClone();
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 HedgehogTeam.EasyTouch.Gesture::GetTouchToWorldPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Gesture_GetTouchToWorldPoint_m743CDFDE0AC14BDE04649650ADF4C2426DA34B6D (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, float ___0_z, const RuntimeMethod* method) 
{
	{
		// return  Camera.main.ScreenToWorldPoint( new Vector3( position.x, position.y,z));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3);
		float L_4 = L_3->___y_1;
		float L_5 = ___0_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_2, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 HedgehogTeam.EasyTouch.Gesture::GetTouchToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Gesture_GetTouchToWorldPoint_m05F2548738BDD8F3DD81026C50243045508CCC42 (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position3D, const RuntimeMethod* method) 
{
	{
		// return  Camera.main.ScreenToWorldPoint( new Vector3( position.x, position.y,Camera.main.transform.InverseTransformPoint(position3D).z));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3);
		float L_4 = L_3->___y_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position3D;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_6, L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_2, L_4, L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_10, NULL);
		return L_11;
	}
}
// System.Single HedgehogTeam.EasyTouch.Gesture::GetSwipeOrDragAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Gesture_GetSwipeOrDragAngle_m9A597E8DE37FF487FB0A108A8AB0FF6436D0FD9D (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, const RuntimeMethod* method) 
{
	{
		// return Mathf.Atan2( swipeVector.normalized.y,swipeVector.normalized.x) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___swipeVector_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_0, NULL);
		float L_2 = L_1.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___swipeVector_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_3, NULL);
		float L_5 = L_4.___x_0;
		float L_6;
		L_6 = atan2f(L_2, L_5);
		return ((float)il2cpp_codegen_multiply(L_6, (57.2957802f)));
	}
}
// UnityEngine.Vector2 HedgehogTeam.EasyTouch.Gesture::NormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Gesture_NormalizedPosition_mDDB8FEF8E84C5294DC878DE7FE425BCF2D7107A9 (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(100f/Screen.width*position.x/100f,100f/Screen.height*position.y/100f);
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3);
		float L_2 = L_1->___x_0;
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3);
		float L_5 = L_4->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(((float)il2cpp_codegen_multiply(((float)((100.0f)/((float)L_0))), L_2))/(100.0f))), ((float)(((float)il2cpp_codegen_multiply(((float)((100.0f)/((float)L_3))), L_5))/(100.0f))), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.Gesture::IsOverUIElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gesture_IsOverUIElement_m3939B213CB1DA80AD0EA94ECB9129413A8377FEB (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, const RuntimeMethod* method) 
{
	{
		// return EasyTouch.IsFingerOverUIElement( fingerIndex);
		int32_t L_0 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___fingerIndex_0;
		bool L_1;
		L_1 = EasyTouch_IsFingerOverUIElement_mC2974C85024EC026B5B3BEE8F1EC26B0EE7AD632(L_0, NULL);
		return L_1;
	}
}
// System.Boolean HedgehogTeam.EasyTouch.Gesture::IsOverRectTransform(UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gesture_IsOverRectTransform_mBEB2F590165D747B6558D9AAA346670CE30091AB (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_tr, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera == null){
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___1_camera;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return RectTransformUtility.RectangleContainsScreenPoint( tr,position,null);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___0_tr;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_RectangleContainsScreenPoint_mBA6600E46C416EF032491AED969AA00BE2249630(L_2, L_3, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, NULL);
		return L_4;
	}

IL_0017:
	{
		// return RectTransformUtility.RectangleContainsScreenPoint( tr,position,camera);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___0_tr;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___position_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = ___1_camera;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_RectangleContainsScreenPoint_mBA6600E46C416EF032491AED969AA00BE2249630(L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.GameObject HedgehogTeam.EasyTouch.Gesture::GetCurrentFirstPickedUIElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_GetCurrentFirstPickedUIElement_m71D1424F34570E95D5843808179787074DA1D3CA (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, bool ___0_isTwoFinger, const RuntimeMethod* method) 
{
	{
		// return EasyTouch.GetCurrentPickedUIElement( fingerIndex,isTwoFinger);
		int32_t L_0 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___fingerIndex_0;
		bool L_1 = ___0_isTwoFinger;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = EasyTouch_GetCurrentPickedUIElement_mEF70E2C0F4920313737D2004110D157EA91FC3C8(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.GameObject HedgehogTeam.EasyTouch.Gesture::GetCurrentPickedObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Gesture_GetCurrentPickedObject_m6569D22BAAFCDB65E11E9C433DC3CD7B10DEBCC1 (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, bool ___0_isTwoFinger, const RuntimeMethod* method) 
{
	{
		// return EasyTouch.GetCurrentPickedObject( fingerIndex,isTwoFinger);
		int32_t L_0 = ((BaseFinger_t1F5628ED7DD0B498875487DF5DF4E4871E5951B2*)__this)->___fingerIndex_0;
		bool L_1 = ___0_isTwoFinger;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = EasyTouch_GetCurrentPickedObject_m17E82056A0D1FBBF6B898CBDEB18CB6D25BA7F45(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void HedgehogTeam.EasyTouch.Gesture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture__ctor_mA6A78646330E81583CC403D2A41563C29A8878DC (Gesture_tB50C6D2283868DDE70D425E35DA3DD9B82F8FAF7* __this, const RuntimeMethod* method) 
{
	{
		BaseFinger__ctor_m8AFEAD5FAFBD1C50D12082E55CC13EA798990D4B(__this, NULL);
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
// System.Void HedgehogTeam.EasyTouch.TwoFingerGesture::ClearPickedObjectData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoFingerGesture_ClearPickedObjectData_m15BECC815B620674DDD325192ECD1EC25453A344 (TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* __this, const RuntimeMethod* method) 
{
	{
		// pickedObject = null;
		__this->___pickedObject_17 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickedObject_17), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// oldPickedObject = null;
		__this->___oldPickedObject_18 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldPickedObject_18), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// pickedCamera = null;
		__this->___pickedCamera_19 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickedCamera_19), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// isGuiCamera = false;
		__this->___isGuiCamera_20 = (bool)0;
		// }
		return;
	}
}
// System.Void HedgehogTeam.EasyTouch.TwoFingerGesture::ClearPickedUIData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoFingerGesture_ClearPickedUIData_mA5C13EE327613CA5C554022FBC304B2AE05DF811 (TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* __this, const RuntimeMethod* method) 
{
	{
		// isOverGui = false;
		__this->___isOverGui_21 = (bool)0;
		// pickedUIElement = null;
		__this->___pickedUIElement_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickedUIElement_22), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void HedgehogTeam.EasyTouch.TwoFingerGesture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoFingerGesture__ctor_mDBFD5305F3DB7785A1B49700E2CC959CB53E263A (TwoFingerGesture_t8BCE06935CFDA4E23F6AF14424246A81B6416EA4* __this, const RuntimeMethod* method) 
{
	{
		// public EasyTouch.GestureType currentGesture = EasyTouch.GestureType.None;
		__this->___currentGesture_0 = 3;
		// public EasyTouch.GestureType oldGesture= EasyTouch.GestureType.None;
		__this->___oldGesture_1 = 3;
		// public bool lockTwist=true;
		__this->___lockTwist_14 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
