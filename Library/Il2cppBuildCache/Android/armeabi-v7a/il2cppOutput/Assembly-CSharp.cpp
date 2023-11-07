#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Games[]
struct GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Transform[0...,0...]
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14;
// ActiveControlResources
struct ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008;
// AnimButton
struct AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ControlBlock
struct ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameRound
struct GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C;
// Games
struct Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084;
// Ghost
struct Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// ID_Control
struct ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ITimer
struct ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0;
// IVolume
struct IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Level
struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93;
// LoadResources
struct LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Pause
struct Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28;
// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02;
// PurchaseSource
struct PurchaseSource_t620AC8CE6AE17C233A7A8D2297E78678850A0605;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// ScoresManager
struct ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SliderScore
struct SliderScore_t4AF102FE28942884FB814210209A5920332E04EF;
// SpawnBlock
struct SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Translator
struct Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A;
// TranslatorGame
struct TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297;
// TranslatorMenu
struct TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Volume
struct Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07AAA2F6693845965A3972D205AE126F69AE2EFC;
IL2CPP_EXTERN_C String_t* _stringLiteral099B84B5681B725FB87045EAA488F40C703946DE;
IL2CPP_EXTERN_C String_t* _stringLiteral09E9BE5F28B244CB9EDD8EB3EF0E0D3493E58CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral0C050651E95E5AB75B6E6A40216A792B180E1C6C;
IL2CPP_EXTERN_C String_t* _stringLiteral107ADEBE5850FC36C6B2E726F9E49525A0892E8C;
IL2CPP_EXTERN_C String_t* _stringLiteral10A0F5DFA3E846ECABECD683BEA957DE1CF520AE;
IL2CPP_EXTERN_C String_t* _stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D;
IL2CPP_EXTERN_C String_t* _stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65;
IL2CPP_EXTERN_C String_t* _stringLiteral1938F3EB07E076D0B65A5CDAA69417F00E0246D0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral1D10D78F544F04360AD45A797648E1FAFB47FE4A;
IL2CPP_EXTERN_C String_t* _stringLiteral1F799EC17A43BC611A1590C5CC2DF1C5701BEE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral251BCA1EDD19CD243189D1A5017D8FF8AA64B737;
IL2CPP_EXTERN_C String_t* _stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C;
IL2CPP_EXTERN_C String_t* _stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8;
IL2CPP_EXTERN_C String_t* _stringLiteral27D4319F808180E869823965BDED30E6800D5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral2CDF3B7236EBD95E8D60AA7B01A12A0192090675;
IL2CPP_EXTERN_C String_t* _stringLiteral2D189F33BC75731D52B3B0FEE15F38DDA0D3705F;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E;
IL2CPP_EXTERN_C String_t* _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD4AE4EE84B9710E7DC704A83C93BB16C5B2541;
IL2CPP_EXTERN_C String_t* _stringLiteral33DB4FC9B4154F1ECA0324CA1E4F333B2BF25482;
IL2CPP_EXTERN_C String_t* _stringLiteral36F960BE1B662A036736C7174C9EB1612774F590;
IL2CPP_EXTERN_C String_t* _stringLiteral3713A6C0E6FE7A22B3D060787C3487463FC6B527;
IL2CPP_EXTERN_C String_t* _stringLiteral3981E6B6943EA68025F9B1CC02C110525624F3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4E6F844F2FF4C1817994462A6C616C155F4183;
IL2CPP_EXTERN_C String_t* _stringLiteral402F9FE34538B052F7FF980F7359F6484BD9057E;
IL2CPP_EXTERN_C String_t* _stringLiteral44111E3A38A61B08B1B74434710C1600C4442E26;
IL2CPP_EXTERN_C String_t* _stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7;
IL2CPP_EXTERN_C String_t* _stringLiteral4838482BD214DAEBB1EAD908042E90CA521D2D1F;
IL2CPP_EXTERN_C String_t* _stringLiteral493E4638F122AAD392B50B1C1CDAD00D82AB3C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4AF3FBCEC7B2197911FC588EBC4BD712C3713E75;
IL2CPP_EXTERN_C String_t* _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4;
IL2CPP_EXTERN_C String_t* _stringLiteral51C6279E31F7483126B79E3000116001A915B690;
IL2CPP_EXTERN_C String_t* _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A;
IL2CPP_EXTERN_C String_t* _stringLiteral59F577079E23738A9679EA7BF50804A66A34D879;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1BBD3BE7FBDDEF7ED15E4128E066DB589D523D;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD112923E6C1CA79E0851DAF889C2EFCF69FCA2;
IL2CPP_EXTERN_C String_t* _stringLiteral5BF20946961A657274841C0E4AB4981274B2191B;
IL2CPP_EXTERN_C String_t* _stringLiteral60540227E3432813D31B05AF989991E259E41FB6;
IL2CPP_EXTERN_C String_t* _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF;
IL2CPP_EXTERN_C String_t* _stringLiteral6581286B6AF1F520E6E2B73B996223C3A99E385F;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6B784DFD1CCBBDAB63F92C64AA5B8AC5912D6D42;
IL2CPP_EXTERN_C String_t* _stringLiteral74320554DAA67666E41924B66814392C088ED8AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C;
IL2CPP_EXTERN_C String_t* _stringLiteral78F3395E015095F89CCB9B11C0AB1A6708004241;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA67EA36C52FC49763DB862CF1B9C38A9A57885;
IL2CPP_EXTERN_C String_t* _stringLiteral80D0D6F7209CC328B99BAF89E55B660347FAB66E;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral84A4B7999BF2AC8B755C574D138EA8604FF920DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8631D1D7AA6C1EFE480CF0DD4CB1CB642636F083;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A099545C0446267BF9F207652D47B366BF3FBCD;
IL2CPP_EXTERN_C String_t* _stringLiteral8CADE3F56AC3B36A82073A81153A6EC63EA7852B;
IL2CPP_EXTERN_C String_t* _stringLiteral9227A6BC7A203E819F5C51FCD9C46C746796E00D;
IL2CPP_EXTERN_C String_t* _stringLiteral927B8FA775E6D9BECC20D93CD62ABF45AA3B9ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral93ADFC213A427399629E9CBF8769B349656C397F;
IL2CPP_EXTERN_C String_t* _stringLiteral9441CE41F9555DA2968E5D0ED40E271B3FCEE69A;
IL2CPP_EXTERN_C String_t* _stringLiteral963CF07F1DE1EE3CBED3D2FAFA46AF09B727E778;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9C76C3D56C712D734E4DCAA3F341B529745B1EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F7716105008679A47EE25B5C46BDD9BBFD28301;
IL2CPP_EXTERN_C String_t* _stringLiteralA2897FA8FDFED0C42A6117BB52B4214C5D143F5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E27D1624FDB59200E6DEB029F7FD509C197289;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD69E7EB9402DA943DD9C8992BC7B75C200AB85F;
IL2CPP_EXTERN_C String_t* _stringLiteralB1065D06F317F557E6457D2B703675A090B18AC8;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB78648AD81B975D5F611ACD999BCD22F5C4F8E4C;
IL2CPP_EXTERN_C String_t* _stringLiteralBABFA76E6CBEDEBA6269A21A858923B3ACDF5741;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44F175F4785896B5CE83A5590E18F6D1153ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC263BA5BFDCA69ACF302FFB95D7B44B3A00B14D8;
IL2CPP_EXTERN_C String_t* _stringLiteralC33DFF80AE5B61379F9C1707321BBBEE2CC87DA5;
IL2CPP_EXTERN_C String_t* _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB;
IL2CPP_EXTERN_C String_t* _stringLiteralD640D88E420626876E2BC6AA18E32337B5AB7491;
IL2CPP_EXTERN_C String_t* _stringLiteralD75F9DE07BE041A2FA2EF3826716AA14F239569C;
IL2CPP_EXTERN_C String_t* _stringLiteralD97C6AAFDD69585E94AC421DE87B1FC60F0350EF;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127;
IL2CPP_EXTERN_C String_t* _stringLiteralE10745B62D29E1561BC659C281C8E74343886210;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7E7CEFFFFFF5FE882320B133C1BB32741BF58E8;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6824F2EB39490F36A74EA8E64F69543D1778A5;
IL2CPP_EXTERN_C String_t* _stringLiteralFFA72A02677C3987BBC09EED5B238FD2D0990032;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGhost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7_mAF1DFBC6266BA82B6281813C805C68334AD3C3C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_mF3C32B80A47A07022DA6AB900DB7DBCAEA4A2C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_mD27D3C5E5AF2FEFFB5A31FE21F2A242B05352469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var;

struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Games
struct  Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084  : public RuntimeObject
{
public:
	// System.Single Games::minut
	float ___minut_0;
	// System.Int32 Games::goal_score
	int32_t ___goal_score_1;

public:
	inline static int32_t get_offset_of_minut_0() { return static_cast<int32_t>(offsetof(Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084, ___minut_0)); }
	inline float get_minut_0() const { return ___minut_0; }
	inline float* get_address_of_minut_0() { return &___minut_0; }
	inline void set_minut_0(float value)
	{
		___minut_0 = value;
	}

	inline static int32_t get_offset_of_goal_score_1() { return static_cast<int32_t>(offsetof(Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084, ___goal_score_1)); }
	inline int32_t get_goal_score_1() const { return ___goal_score_1; }
	inline int32_t* get_address_of_goal_score_1() { return &___goal_score_1; }
	inline void set_goal_score_1(int32_t value)
	{
		___goal_score_1 = value;
	}
};


// IVolume
struct  IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529  : public RuntimeObject
{
public:
	// LoadResources IVolume::flagVolume
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___flagVolume_0;
	// System.String IVolume::keysVolume
	String_t* ___keysVolume_1;
	// System.String IVolume::keysMixer
	String_t* ___keysMixer_2;
	// UnityEngine.GameObject IVolume::btnVolumeOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnVolumeOn_3;
	// UnityEngine.GameObject IVolume::btnVolumeOff
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnVolumeOff_4;
	// UnityEngine.Audio.AudioMixerGroup IVolume::mixer
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixer_5;

public:
	inline static int32_t get_offset_of_flagVolume_0() { return static_cast<int32_t>(offsetof(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529, ___flagVolume_0)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_flagVolume_0() const { return ___flagVolume_0; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_flagVolume_0() { return &___flagVolume_0; }
	inline void set_flagVolume_0(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___flagVolume_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flagVolume_0), (void*)value);
	}

	inline static int32_t get_offset_of_keysVolume_1() { return static_cast<int32_t>(offsetof(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529, ___keysVolume_1)); }
	inline String_t* get_keysVolume_1() const { return ___keysVolume_1; }
	inline String_t** get_address_of_keysVolume_1() { return &___keysVolume_1; }
	inline void set_keysVolume_1(String_t* value)
	{
		___keysVolume_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keysVolume_1), (void*)value);
	}

	inline static int32_t get_offset_of_keysMixer_2() { return static_cast<int32_t>(offsetof(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529, ___keysMixer_2)); }
	inline String_t* get_keysMixer_2() const { return ___keysMixer_2; }
	inline String_t** get_address_of_keysMixer_2() { return &___keysMixer_2; }
	inline void set_keysMixer_2(String_t* value)
	{
		___keysMixer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keysMixer_2), (void*)value);
	}

	inline static int32_t get_offset_of_btnVolumeOn_3() { return static_cast<int32_t>(offsetof(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529, ___btnVolumeOn_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnVolumeOn_3() const { return ___btnVolumeOn_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnVolumeOn_3() { return &___btnVolumeOn_3; }
	inline void set_btnVolumeOn_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnVolumeOn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnVolumeOn_3), (void*)value);
	}

	inline static int32_t get_offset_of_btnVolumeOff_4() { return static_cast<int32_t>(offsetof(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529, ___btnVolumeOff_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnVolumeOff_4() const { return ___btnVolumeOff_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnVolumeOff_4() { return &___btnVolumeOff_4; }
	inline void set_btnVolumeOff_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnVolumeOff_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnVolumeOff_4), (void*)value);
	}

	inline static int32_t get_offset_of_mixer_5() { return static_cast<int32_t>(offsetof(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529, ___mixer_5)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_mixer_5() const { return ___mixer_5; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_mixer_5() { return &___mixer_5; }
	inline void set_mixer_5(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___mixer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixer_5), (void*)value);
	}
};


// LoadResources
struct  LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4  : public RuntimeObject
{
public:
	// System.Int32 LoadResources::<resources>k__BackingField
	int32_t ___U3CresourcesU3Ek__BackingField_0;
	// System.String LoadResources::key
	String_t* ___key_1;

public:
	inline static int32_t get_offset_of_U3CresourcesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4, ___U3CresourcesU3Ek__BackingField_0)); }
	inline int32_t get_U3CresourcesU3Ek__BackingField_0() const { return ___U3CresourcesU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresourcesU3Ek__BackingField_0() { return &___U3CresourcesU3Ek__BackingField_0; }
	inline void set_U3CresourcesU3Ek__BackingField_0(int32_t value)
	{
		___U3CresourcesU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4, ___key_1)); }
	inline String_t* get_key_1() const { return ___key_1; }
	inline String_t** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(String_t* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.Product
struct  Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_4), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.ProductType
struct  ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct  Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Audio.AudioMixer
struct  AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Audio.AudioMixerGroup
struct  AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___m_Payouts_4)); }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// ActiveControlResources
struct  ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ActiveControlResources::pauseTimerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pauseTimerText_4;
	// UnityEngine.UI.Text ActiveControlResources::x2Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___x2Text_5;
	// UnityEngine.UI.Text ActiveControlResources::destroyLineText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___destroyLineText_6;
	// UnityEngine.UI.Text ActiveControlResources::destroyAllLineText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___destroyAllLineText_7;
	// UnityEngine.AudioSource ActiveControlResources::audBtn
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audBtn_12;

public:
	inline static int32_t get_offset_of_pauseTimerText_4() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008, ___pauseTimerText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pauseTimerText_4() const { return ___pauseTimerText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pauseTimerText_4() { return &___pauseTimerText_4; }
	inline void set_pauseTimerText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pauseTimerText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseTimerText_4), (void*)value);
	}

	inline static int32_t get_offset_of_x2Text_5() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008, ___x2Text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_x2Text_5() const { return ___x2Text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_x2Text_5() { return &___x2Text_5; }
	inline void set_x2Text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___x2Text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x2Text_5), (void*)value);
	}

	inline static int32_t get_offset_of_destroyLineText_6() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008, ___destroyLineText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_destroyLineText_6() const { return ___destroyLineText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_destroyLineText_6() { return &___destroyLineText_6; }
	inline void set_destroyLineText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___destroyLineText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyLineText_6), (void*)value);
	}

	inline static int32_t get_offset_of_destroyAllLineText_7() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008, ___destroyAllLineText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_destroyAllLineText_7() const { return ___destroyAllLineText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_destroyAllLineText_7() { return &___destroyAllLineText_7; }
	inline void set_destroyAllLineText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___destroyAllLineText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyAllLineText_7), (void*)value);
	}

	inline static int32_t get_offset_of_audBtn_12() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008, ___audBtn_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audBtn_12() const { return ___audBtn_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audBtn_12() { return &___audBtn_12; }
	inline void set_audBtn_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audBtn_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audBtn_12), (void*)value);
	}
};

struct ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields
{
public:
	// LoadResources ActiveControlResources::pauseTimer
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___pauseTimer_8;
	// LoadResources ActiveControlResources::x2
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x2_9;
	// LoadResources ActiveControlResources::destroyLine
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___destroyLine_10;
	// LoadResources ActiveControlResources::destroyAllLine
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___destroyAllLine_11;

public:
	inline static int32_t get_offset_of_pauseTimer_8() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields, ___pauseTimer_8)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_pauseTimer_8() const { return ___pauseTimer_8; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_pauseTimer_8() { return &___pauseTimer_8; }
	inline void set_pauseTimer_8(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___pauseTimer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseTimer_8), (void*)value);
	}

	inline static int32_t get_offset_of_x2_9() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields, ___x2_9)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_x2_9() const { return ___x2_9; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_x2_9() { return &___x2_9; }
	inline void set_x2_9(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___x2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x2_9), (void*)value);
	}

	inline static int32_t get_offset_of_destroyLine_10() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields, ___destroyLine_10)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_destroyLine_10() const { return ___destroyLine_10; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_destroyLine_10() { return &___destroyLine_10; }
	inline void set_destroyLine_10(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___destroyLine_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyLine_10), (void*)value);
	}

	inline static int32_t get_offset_of_destroyAllLine_11() { return static_cast<int32_t>(offsetof(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields, ___destroyAllLine_11)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_destroyAllLine_11() const { return ___destroyAllLine_11; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_destroyAllLine_11() { return &___destroyAllLine_11; }
	inline void set_destroyAllLine_11(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___destroyAllLine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyAllLine_11), (void*)value);
	}
};


// AnimButton
struct  AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 AnimButton::k
	int32_t ___k_4;

public:
	inline static int32_t get_offset_of_k_4() { return static_cast<int32_t>(offsetof(AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45, ___k_4)); }
	inline int32_t get_k_4() const { return ___k_4; }
	inline int32_t* get_address_of_k_4() { return &___k_4; }
	inline void set_k_4(int32_t value)
	{
		___k_4 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ControlBlock
struct  ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 ControlBlock::rotationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationPoint_4;
	// System.Single ControlBlock::previousTime
	float ___previousTime_5;
	// System.Single ControlBlock::fallTime
	float ___fallTime_6;

public:
	inline static int32_t get_offset_of_rotationPoint_4() { return static_cast<int32_t>(offsetof(ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163, ___rotationPoint_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationPoint_4() const { return ___rotationPoint_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationPoint_4() { return &___rotationPoint_4; }
	inline void set_rotationPoint_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationPoint_4 = value;
	}

	inline static int32_t get_offset_of_previousTime_5() { return static_cast<int32_t>(offsetof(ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163, ___previousTime_5)); }
	inline float get_previousTime_5() const { return ___previousTime_5; }
	inline float* get_address_of_previousTime_5() { return &___previousTime_5; }
	inline void set_previousTime_5(float value)
	{
		___previousTime_5 = value;
	}

	inline static int32_t get_offset_of_fallTime_6() { return static_cast<int32_t>(offsetof(ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163, ___fallTime_6)); }
	inline float get_fallTime_6() const { return ___fallTime_6; }
	inline float* get_address_of_fallTime_6() { return &___fallTime_6; }
	inline void set_fallTime_6(float value)
	{
		___fallTime_6 = value;
	}
};


// GameRound
struct  GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameRound::k
	int32_t ___k_4;
	// UnityEngine.GameObject GameRound::panel_win
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_win_5;
	// UnityEngine.GameObject GameRound::panel_gameover
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_gameover_6;
	// UnityEngine.UI.Text GameRound::number_level_win
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___number_level_win_7;
	// UnityEngine.UI.Text GameRound::number_level_gameover
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___number_level_gameover_8;
	// UnityEngine.UI.Text GameRound::text_score_win
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_score_win_9;
	// UnityEngine.UI.Text GameRound::text_score_gameover
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_score_gameover_10;
	// UnityEngine.UI.Text GameRound::text_gameover_message
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_gameover_message_11;
	// UnityEngine.UI.Text GameRound::text_gameover_restart
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_gameover_restart_12;
	// UnityEngine.UI.Text GameRound::text_gameover_resume
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_gameover_resume_13;
	// UnityEngine.UI.Text GameRound::text_gamewin_resume
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_gamewin_resume_14;
	// UnityEngine.UI.Text GameRound::text_scores
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_scores_15;
	// UnityEngine.UI.Text GameRound::text_line
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_line_16;
	// UnityEngine.UI.Text GameRound::text_goal_achieved
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_goal_achieved_17;
	// UnityEngine.UI.Text GameRound::text_pause
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_pause_18;
	// UnityEngine.UI.Text GameRound::text_pause_resume
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_pause_resume_19;
	// UnityEngine.UI.Text GameRound::text_pause_restart
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_pause_restart_20;
	// UnityEngine.UI.Text GameRound::text_pause_out
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_pause_out_21;
	// UnityEngine.UI.Text GameRound::text_level
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_level_22;
	// UnityEngine.UI.Image[] GameRound::star
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___star_23;
	// System.String GameRound::n_level
	String_t* ___n_level_24;
	// System.String GameRound::text_score
	String_t* ___text_score_25;
	// LoadResources GameRound::maxScore
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___maxScore_27;
	// TranslatorGame GameRound::translatorGame
	TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * ___translatorGame_28;

public:
	inline static int32_t get_offset_of_k_4() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___k_4)); }
	inline int32_t get_k_4() const { return ___k_4; }
	inline int32_t* get_address_of_k_4() { return &___k_4; }
	inline void set_k_4(int32_t value)
	{
		___k_4 = value;
	}

	inline static int32_t get_offset_of_panel_win_5() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___panel_win_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_win_5() const { return ___panel_win_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_win_5() { return &___panel_win_5; }
	inline void set_panel_win_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_win_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_win_5), (void*)value);
	}

	inline static int32_t get_offset_of_panel_gameover_6() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___panel_gameover_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_gameover_6() const { return ___panel_gameover_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_gameover_6() { return &___panel_gameover_6; }
	inline void set_panel_gameover_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_gameover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_gameover_6), (void*)value);
	}

	inline static int32_t get_offset_of_number_level_win_7() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___number_level_win_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_number_level_win_7() const { return ___number_level_win_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_number_level_win_7() { return &___number_level_win_7; }
	inline void set_number_level_win_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___number_level_win_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_level_win_7), (void*)value);
	}

	inline static int32_t get_offset_of_number_level_gameover_8() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___number_level_gameover_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_number_level_gameover_8() const { return ___number_level_gameover_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_number_level_gameover_8() { return &___number_level_gameover_8; }
	inline void set_number_level_gameover_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___number_level_gameover_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_level_gameover_8), (void*)value);
	}

	inline static int32_t get_offset_of_text_score_win_9() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_score_win_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_score_win_9() const { return ___text_score_win_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_score_win_9() { return &___text_score_win_9; }
	inline void set_text_score_win_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_score_win_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_score_win_9), (void*)value);
	}

	inline static int32_t get_offset_of_text_score_gameover_10() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_score_gameover_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_score_gameover_10() const { return ___text_score_gameover_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_score_gameover_10() { return &___text_score_gameover_10; }
	inline void set_text_score_gameover_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_score_gameover_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_score_gameover_10), (void*)value);
	}

	inline static int32_t get_offset_of_text_gameover_message_11() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_gameover_message_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_gameover_message_11() const { return ___text_gameover_message_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_gameover_message_11() { return &___text_gameover_message_11; }
	inline void set_text_gameover_message_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_gameover_message_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_gameover_message_11), (void*)value);
	}

	inline static int32_t get_offset_of_text_gameover_restart_12() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_gameover_restart_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_gameover_restart_12() const { return ___text_gameover_restart_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_gameover_restart_12() { return &___text_gameover_restart_12; }
	inline void set_text_gameover_restart_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_gameover_restart_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_gameover_restart_12), (void*)value);
	}

	inline static int32_t get_offset_of_text_gameover_resume_13() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_gameover_resume_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_gameover_resume_13() const { return ___text_gameover_resume_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_gameover_resume_13() { return &___text_gameover_resume_13; }
	inline void set_text_gameover_resume_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_gameover_resume_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_gameover_resume_13), (void*)value);
	}

	inline static int32_t get_offset_of_text_gamewin_resume_14() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_gamewin_resume_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_gamewin_resume_14() const { return ___text_gamewin_resume_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_gamewin_resume_14() { return &___text_gamewin_resume_14; }
	inline void set_text_gamewin_resume_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_gamewin_resume_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_gamewin_resume_14), (void*)value);
	}

	inline static int32_t get_offset_of_text_scores_15() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_scores_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_scores_15() const { return ___text_scores_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_scores_15() { return &___text_scores_15; }
	inline void set_text_scores_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_scores_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_scores_15), (void*)value);
	}

	inline static int32_t get_offset_of_text_line_16() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_line_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_line_16() const { return ___text_line_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_line_16() { return &___text_line_16; }
	inline void set_text_line_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_line_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_line_16), (void*)value);
	}

	inline static int32_t get_offset_of_text_goal_achieved_17() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_goal_achieved_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_goal_achieved_17() const { return ___text_goal_achieved_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_goal_achieved_17() { return &___text_goal_achieved_17; }
	inline void set_text_goal_achieved_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_goal_achieved_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_goal_achieved_17), (void*)value);
	}

	inline static int32_t get_offset_of_text_pause_18() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_pause_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_pause_18() const { return ___text_pause_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_pause_18() { return &___text_pause_18; }
	inline void set_text_pause_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_pause_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_pause_18), (void*)value);
	}

	inline static int32_t get_offset_of_text_pause_resume_19() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_pause_resume_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_pause_resume_19() const { return ___text_pause_resume_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_pause_resume_19() { return &___text_pause_resume_19; }
	inline void set_text_pause_resume_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_pause_resume_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_pause_resume_19), (void*)value);
	}

	inline static int32_t get_offset_of_text_pause_restart_20() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_pause_restart_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_pause_restart_20() const { return ___text_pause_restart_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_pause_restart_20() { return &___text_pause_restart_20; }
	inline void set_text_pause_restart_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_pause_restart_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_pause_restart_20), (void*)value);
	}

	inline static int32_t get_offset_of_text_pause_out_21() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_pause_out_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_pause_out_21() const { return ___text_pause_out_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_pause_out_21() { return &___text_pause_out_21; }
	inline void set_text_pause_out_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_pause_out_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_pause_out_21), (void*)value);
	}

	inline static int32_t get_offset_of_text_level_22() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_level_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_level_22() const { return ___text_level_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_level_22() { return &___text_level_22; }
	inline void set_text_level_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_level_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_level_22), (void*)value);
	}

	inline static int32_t get_offset_of_star_23() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___star_23)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_star_23() const { return ___star_23; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_star_23() { return &___star_23; }
	inline void set_star_23(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___star_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___star_23), (void*)value);
	}

	inline static int32_t get_offset_of_n_level_24() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___n_level_24)); }
	inline String_t* get_n_level_24() const { return ___n_level_24; }
	inline String_t** get_address_of_n_level_24() { return &___n_level_24; }
	inline void set_n_level_24(String_t* value)
	{
		___n_level_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___n_level_24), (void*)value);
	}

	inline static int32_t get_offset_of_text_score_25() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___text_score_25)); }
	inline String_t* get_text_score_25() const { return ___text_score_25; }
	inline String_t** get_address_of_text_score_25() { return &___text_score_25; }
	inline void set_text_score_25(String_t* value)
	{
		___text_score_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_score_25), (void*)value);
	}

	inline static int32_t get_offset_of_maxScore_27() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___maxScore_27)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_maxScore_27() const { return ___maxScore_27; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_maxScore_27() { return &___maxScore_27; }
	inline void set_maxScore_27(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___maxScore_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxScore_27), (void*)value);
	}

	inline static int32_t get_offset_of_translatorGame_28() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C, ___translatorGame_28)); }
	inline TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * get_translatorGame_28() const { return ___translatorGame_28; }
	inline TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 ** get_address_of_translatorGame_28() { return &___translatorGame_28; }
	inline void set_translatorGame_28(TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * value)
	{
		___translatorGame_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translatorGame_28), (void*)value);
	}
};

struct GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields
{
public:
	// System.Int32 GameRound::goal_score_level
	int32_t ___goal_score_level_26;

public:
	inline static int32_t get_offset_of_goal_score_level_26() { return static_cast<int32_t>(offsetof(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields, ___goal_score_level_26)); }
	inline int32_t get_goal_score_level_26() const { return ___goal_score_level_26; }
	inline int32_t* get_address_of_goal_score_level_26() { return &___goal_score_level_26; }
	inline void set_goal_score_level_26(int32_t value)
	{
		___goal_score_level_26 = value;
	}
};


// Ghost
struct  Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ID_Control
struct  ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource ID_Control::audRotate
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audRotate_5;
	// UnityEngine.AudioSource ID_Control::audDownFast
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audDownFast_6;

public:
	inline static int32_t get_offset_of_audRotate_5() { return static_cast<int32_t>(offsetof(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE, ___audRotate_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audRotate_5() const { return ___audRotate_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audRotate_5() { return &___audRotate_5; }
	inline void set_audRotate_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audRotate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audRotate_5), (void*)value);
	}

	inline static int32_t get_offset_of_audDownFast_6() { return static_cast<int32_t>(offsetof(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE, ___audDownFast_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audDownFast_6() const { return ___audDownFast_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audDownFast_6() { return &___audDownFast_6; }
	inline void set_audDownFast_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audDownFast_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audDownFast_6), (void*)value);
	}
};

struct ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields
{
public:
	// System.Int32 ID_Control::id_control
	int32_t ___id_control_4;

public:
	inline static int32_t get_offset_of_id_control_4() { return static_cast<int32_t>(offsetof(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields, ___id_control_4)); }
	inline int32_t get_id_control_4() const { return ___id_control_4; }
	inline int32_t* get_address_of_id_control_4() { return &___id_control_4; }
	inline void set_id_control_4(int32_t value)
	{
		___id_control_4 = value;
	}
};


// ITimer
struct  ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ITimer::minuts
	float ___minuts_4;
	// System.Boolean ITimer::stateTimer
	bool ___stateTimer_5;

public:
	inline static int32_t get_offset_of_minuts_4() { return static_cast<int32_t>(offsetof(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0, ___minuts_4)); }
	inline float get_minuts_4() const { return ___minuts_4; }
	inline float* get_address_of_minuts_4() { return &___minuts_4; }
	inline void set_minuts_4(float value)
	{
		___minuts_4 = value;
	}

	inline static int32_t get_offset_of_stateTimer_5() { return static_cast<int32_t>(offsetof(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0, ___stateTimer_5)); }
	inline bool get_stateTimer_5() const { return ___stateTimer_5; }
	inline bool* get_address_of_stateTimer_5() { return &___stateTimer_5; }
	inline void set_stateTimer_5(bool value)
	{
		___stateTimer_5 = value;
	}
};


// Level
struct  Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Games[] Level::levels
	GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* ___levels_4;

public:
	inline static int32_t get_offset_of_levels_4() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___levels_4)); }
	inline GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* get_levels_4() const { return ___levels_4; }
	inline GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066** get_address_of_levels_4() { return &___levels_4; }
	inline void set_levels_4(GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* value)
	{
		___levels_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_4), (void*)value);
	}
};


// Menu
struct  Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button[] Menu::btn_level
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___btn_level_4;
	// UnityEngine.UI.Text Menu::Star_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Star_text_5;
	// UnityEngine.UI.Text Menu::Coins_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Coins_text_6;
	// UnityEngine.UI.Text Menu::Buy_Coins_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Buy_Coins_text_7;
	// UnityEngine.UI.Text Menu::Shop_Coins_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Shop_Coins_text_8;
	// UnityEngine.UI.Text Menu::pauseTimerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pauseTimerText_9;
	// UnityEngine.UI.Text Menu::x2Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___x2Text_10;
	// UnityEngine.UI.Text Menu::destroyLineText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___destroyLineText_11;
	// UnityEngine.UI.Text Menu::destroyAllLineText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___destroyAllLineText_12;
	// System.Int32[] Menu::count_star
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___count_star_13;
	// System.Int32 Menu::sum_star
	int32_t ___sum_star_14;
	// System.Int32 Menu::sum_maxScore
	int32_t ___sum_maxScore_15;
	// System.Int32 Menu::sum_Score
	int32_t ___sum_Score_16;
	// UnityEngine.Animator Menu::anim1
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim1_17;
	// UnityEngine.Animator Menu::anim2
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim2_18;
	// UnityEngine.Animator Menu::anim3
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim3_19;
	// UnityEngine.Animator Menu::anim4
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim4_20;
	// UnityEngine.Animator Menu::anim5
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim5_21;
	// UnityEngine.Animator Menu::anim6
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim6_22;
	// UnityEngine.GameObject Menu::panel_shop
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_shop_23;
	// UnityEngine.GameObject Menu::panel_coins
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_coins_24;
	// UnityEngine.GameObject Menu::panel_setting
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_setting_25;
	// UnityEngine.GameObject Menu::panel_levels
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_levels_26;
	// UnityEngine.GameObject Menu::panel_record
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_record_27;
	// UnityEngine.GameObject Menu::panel_gamewin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_gamewin_28;
	// UnityEngine.UI.Text Menu::text_nomer_levels
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_nomer_levels_29;
	// UnityEngine.UI.Text Menu::text_time
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_time_30;
	// UnityEngine.UI.Text Menu::text_goal
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_goal_31;
	// UnityEngine.UI.Text Menu::text_goal_achieved
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_goal_achieved_32;
	// UnityEngine.UI.Text Menu::text_btn_play
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_btn_play_33;
	// UnityEngine.UI.Text Menu::text_setting
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_setting_34;
	// UnityEngine.UI.Text Menu::text_sound
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_sound_35;
	// UnityEngine.UI.Text Menu::text_music
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_music_36;
	// UnityEngine.UI.Text Menu::text_btn_review
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_btn_review_37;
	// UnityEngine.UI.Text Menu::text_shop
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_shop_38;
	// UnityEngine.UI.Text Menu::text_coins
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_coins_39;
	// UnityEngine.UI.Text Menu::text_record
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_record_40;
	// UnityEngine.UI.Text Menu::text_record_max_star
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_record_max_star_41;
	// UnityEngine.UI.Text Menu::text_record_max_score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_record_max_score_42;
	// UnityEngine.UI.Text Menu::text_record_count_star
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_record_count_star_43;
	// UnityEngine.UI.Text Menu::text_record_count_score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_record_count_score_44;
	// UnityEngine.UI.Text Menu::text_message_gamewin
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_message_gamewin_45;
	// UnityEngine.UI.Text[] Menu::text_resources
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___text_resources_46;
	// UnityEngine.UI.Text[] Menu::text_buy_btn_resources
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___text_buy_btn_resources_47;
	// UnityEngine.UI.Text[] Menu::text_buy_btn_coins
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___text_buy_btn_coins_48;
	// UnityEngine.UI.Image[] Menu::stars_level
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___stars_level_54;
	// UnityEngine.UI.Button[] Menu::btn_buy
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___btn_buy_55;
	// UnityEngine.AudioSource Menu::audBtn
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audBtn_62;
	// UnityEngine.AudioSource Menu::audBuy
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audBuy_63;
	// System.Int32 Menu::all_levels
	int32_t ___all_levels_64;
	// ITimer Menu::time
	ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * ___time_65;
	// UnityEngine.GameObject Menu::scrollVertical
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scrollVertical_66;
	// UnityEngine.UI.Scrollbar Menu::scroll
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___scroll_67;

public:
	inline static int32_t get_offset_of_btn_level_4() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___btn_level_4)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_btn_level_4() const { return ___btn_level_4; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_btn_level_4() { return &___btn_level_4; }
	inline void set_btn_level_4(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___btn_level_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_level_4), (void*)value);
	}

	inline static int32_t get_offset_of_Star_text_5() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___Star_text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Star_text_5() const { return ___Star_text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Star_text_5() { return &___Star_text_5; }
	inline void set_Star_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Star_text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Star_text_5), (void*)value);
	}

	inline static int32_t get_offset_of_Coins_text_6() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___Coins_text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Coins_text_6() const { return ___Coins_text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Coins_text_6() { return &___Coins_text_6; }
	inline void set_Coins_text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Coins_text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Coins_text_6), (void*)value);
	}

	inline static int32_t get_offset_of_Buy_Coins_text_7() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___Buy_Coins_text_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Buy_Coins_text_7() const { return ___Buy_Coins_text_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Buy_Coins_text_7() { return &___Buy_Coins_text_7; }
	inline void set_Buy_Coins_text_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Buy_Coins_text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buy_Coins_text_7), (void*)value);
	}

	inline static int32_t get_offset_of_Shop_Coins_text_8() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___Shop_Coins_text_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Shop_Coins_text_8() const { return ___Shop_Coins_text_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Shop_Coins_text_8() { return &___Shop_Coins_text_8; }
	inline void set_Shop_Coins_text_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Shop_Coins_text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shop_Coins_text_8), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimerText_9() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___pauseTimerText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pauseTimerText_9() const { return ___pauseTimerText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pauseTimerText_9() { return &___pauseTimerText_9; }
	inline void set_pauseTimerText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pauseTimerText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseTimerText_9), (void*)value);
	}

	inline static int32_t get_offset_of_x2Text_10() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___x2Text_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_x2Text_10() const { return ___x2Text_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_x2Text_10() { return &___x2Text_10; }
	inline void set_x2Text_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___x2Text_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x2Text_10), (void*)value);
	}

	inline static int32_t get_offset_of_destroyLineText_11() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___destroyLineText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_destroyLineText_11() const { return ___destroyLineText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_destroyLineText_11() { return &___destroyLineText_11; }
	inline void set_destroyLineText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___destroyLineText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyLineText_11), (void*)value);
	}

	inline static int32_t get_offset_of_destroyAllLineText_12() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___destroyAllLineText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_destroyAllLineText_12() const { return ___destroyAllLineText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_destroyAllLineText_12() { return &___destroyAllLineText_12; }
	inline void set_destroyAllLineText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___destroyAllLineText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyAllLineText_12), (void*)value);
	}

	inline static int32_t get_offset_of_count_star_13() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___count_star_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_count_star_13() const { return ___count_star_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_count_star_13() { return &___count_star_13; }
	inline void set_count_star_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___count_star_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_star_13), (void*)value);
	}

	inline static int32_t get_offset_of_sum_star_14() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___sum_star_14)); }
	inline int32_t get_sum_star_14() const { return ___sum_star_14; }
	inline int32_t* get_address_of_sum_star_14() { return &___sum_star_14; }
	inline void set_sum_star_14(int32_t value)
	{
		___sum_star_14 = value;
	}

	inline static int32_t get_offset_of_sum_maxScore_15() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___sum_maxScore_15)); }
	inline int32_t get_sum_maxScore_15() const { return ___sum_maxScore_15; }
	inline int32_t* get_address_of_sum_maxScore_15() { return &___sum_maxScore_15; }
	inline void set_sum_maxScore_15(int32_t value)
	{
		___sum_maxScore_15 = value;
	}

	inline static int32_t get_offset_of_sum_Score_16() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___sum_Score_16)); }
	inline int32_t get_sum_Score_16() const { return ___sum_Score_16; }
	inline int32_t* get_address_of_sum_Score_16() { return &___sum_Score_16; }
	inline void set_sum_Score_16(int32_t value)
	{
		___sum_Score_16 = value;
	}

	inline static int32_t get_offset_of_anim1_17() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___anim1_17)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim1_17() const { return ___anim1_17; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim1_17() { return &___anim1_17; }
	inline void set_anim1_17(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim1_17), (void*)value);
	}

	inline static int32_t get_offset_of_anim2_18() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___anim2_18)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim2_18() const { return ___anim2_18; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim2_18() { return &___anim2_18; }
	inline void set_anim2_18(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim2_18), (void*)value);
	}

	inline static int32_t get_offset_of_anim3_19() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___anim3_19)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim3_19() const { return ___anim3_19; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim3_19() { return &___anim3_19; }
	inline void set_anim3_19(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim3_19), (void*)value);
	}

	inline static int32_t get_offset_of_anim4_20() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___anim4_20)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim4_20() const { return ___anim4_20; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim4_20() { return &___anim4_20; }
	inline void set_anim4_20(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim4_20), (void*)value);
	}

	inline static int32_t get_offset_of_anim5_21() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___anim5_21)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim5_21() const { return ___anim5_21; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim5_21() { return &___anim5_21; }
	inline void set_anim5_21(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim5_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim5_21), (void*)value);
	}

	inline static int32_t get_offset_of_anim6_22() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___anim6_22)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim6_22() const { return ___anim6_22; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim6_22() { return &___anim6_22; }
	inline void set_anim6_22(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim6_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim6_22), (void*)value);
	}

	inline static int32_t get_offset_of_panel_shop_23() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___panel_shop_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_shop_23() const { return ___panel_shop_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_shop_23() { return &___panel_shop_23; }
	inline void set_panel_shop_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_shop_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_shop_23), (void*)value);
	}

	inline static int32_t get_offset_of_panel_coins_24() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___panel_coins_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_coins_24() const { return ___panel_coins_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_coins_24() { return &___panel_coins_24; }
	inline void set_panel_coins_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_coins_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_coins_24), (void*)value);
	}

	inline static int32_t get_offset_of_panel_setting_25() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___panel_setting_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_setting_25() const { return ___panel_setting_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_setting_25() { return &___panel_setting_25; }
	inline void set_panel_setting_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_setting_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_setting_25), (void*)value);
	}

	inline static int32_t get_offset_of_panel_levels_26() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___panel_levels_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_levels_26() const { return ___panel_levels_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_levels_26() { return &___panel_levels_26; }
	inline void set_panel_levels_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_levels_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_levels_26), (void*)value);
	}

	inline static int32_t get_offset_of_panel_record_27() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___panel_record_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_record_27() const { return ___panel_record_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_record_27() { return &___panel_record_27; }
	inline void set_panel_record_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_record_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_record_27), (void*)value);
	}

	inline static int32_t get_offset_of_panel_gamewin_28() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___panel_gamewin_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_gamewin_28() const { return ___panel_gamewin_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_gamewin_28() { return &___panel_gamewin_28; }
	inline void set_panel_gamewin_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_gamewin_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_gamewin_28), (void*)value);
	}

	inline static int32_t get_offset_of_text_nomer_levels_29() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_nomer_levels_29)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_nomer_levels_29() const { return ___text_nomer_levels_29; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_nomer_levels_29() { return &___text_nomer_levels_29; }
	inline void set_text_nomer_levels_29(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_nomer_levels_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_nomer_levels_29), (void*)value);
	}

	inline static int32_t get_offset_of_text_time_30() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_time_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_time_30() const { return ___text_time_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_time_30() { return &___text_time_30; }
	inline void set_text_time_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_time_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_time_30), (void*)value);
	}

	inline static int32_t get_offset_of_text_goal_31() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_goal_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_goal_31() const { return ___text_goal_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_goal_31() { return &___text_goal_31; }
	inline void set_text_goal_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_goal_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_goal_31), (void*)value);
	}

	inline static int32_t get_offset_of_text_goal_achieved_32() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_goal_achieved_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_goal_achieved_32() const { return ___text_goal_achieved_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_goal_achieved_32() { return &___text_goal_achieved_32; }
	inline void set_text_goal_achieved_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_goal_achieved_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_goal_achieved_32), (void*)value);
	}

	inline static int32_t get_offset_of_text_btn_play_33() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_btn_play_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_btn_play_33() const { return ___text_btn_play_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_btn_play_33() { return &___text_btn_play_33; }
	inline void set_text_btn_play_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_btn_play_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_btn_play_33), (void*)value);
	}

	inline static int32_t get_offset_of_text_setting_34() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_setting_34)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_setting_34() const { return ___text_setting_34; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_setting_34() { return &___text_setting_34; }
	inline void set_text_setting_34(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_setting_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_setting_34), (void*)value);
	}

	inline static int32_t get_offset_of_text_sound_35() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_sound_35)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_sound_35() const { return ___text_sound_35; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_sound_35() { return &___text_sound_35; }
	inline void set_text_sound_35(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_sound_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_sound_35), (void*)value);
	}

	inline static int32_t get_offset_of_text_music_36() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_music_36)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_music_36() const { return ___text_music_36; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_music_36() { return &___text_music_36; }
	inline void set_text_music_36(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_music_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_music_36), (void*)value);
	}

	inline static int32_t get_offset_of_text_btn_review_37() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_btn_review_37)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_btn_review_37() const { return ___text_btn_review_37; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_btn_review_37() { return &___text_btn_review_37; }
	inline void set_text_btn_review_37(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_btn_review_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_btn_review_37), (void*)value);
	}

	inline static int32_t get_offset_of_text_shop_38() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_shop_38)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_shop_38() const { return ___text_shop_38; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_shop_38() { return &___text_shop_38; }
	inline void set_text_shop_38(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_shop_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_shop_38), (void*)value);
	}

	inline static int32_t get_offset_of_text_coins_39() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_coins_39)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_coins_39() const { return ___text_coins_39; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_coins_39() { return &___text_coins_39; }
	inline void set_text_coins_39(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_coins_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_coins_39), (void*)value);
	}

	inline static int32_t get_offset_of_text_record_40() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_record_40)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_record_40() const { return ___text_record_40; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_record_40() { return &___text_record_40; }
	inline void set_text_record_40(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_record_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_record_40), (void*)value);
	}

	inline static int32_t get_offset_of_text_record_max_star_41() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_record_max_star_41)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_record_max_star_41() const { return ___text_record_max_star_41; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_record_max_star_41() { return &___text_record_max_star_41; }
	inline void set_text_record_max_star_41(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_record_max_star_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_record_max_star_41), (void*)value);
	}

	inline static int32_t get_offset_of_text_record_max_score_42() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_record_max_score_42)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_record_max_score_42() const { return ___text_record_max_score_42; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_record_max_score_42() { return &___text_record_max_score_42; }
	inline void set_text_record_max_score_42(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_record_max_score_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_record_max_score_42), (void*)value);
	}

	inline static int32_t get_offset_of_text_record_count_star_43() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_record_count_star_43)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_record_count_star_43() const { return ___text_record_count_star_43; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_record_count_star_43() { return &___text_record_count_star_43; }
	inline void set_text_record_count_star_43(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_record_count_star_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_record_count_star_43), (void*)value);
	}

	inline static int32_t get_offset_of_text_record_count_score_44() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_record_count_score_44)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_record_count_score_44() const { return ___text_record_count_score_44; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_record_count_score_44() { return &___text_record_count_score_44; }
	inline void set_text_record_count_score_44(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_record_count_score_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_record_count_score_44), (void*)value);
	}

	inline static int32_t get_offset_of_text_message_gamewin_45() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_message_gamewin_45)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_message_gamewin_45() const { return ___text_message_gamewin_45; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_message_gamewin_45() { return &___text_message_gamewin_45; }
	inline void set_text_message_gamewin_45(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_message_gamewin_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_message_gamewin_45), (void*)value);
	}

	inline static int32_t get_offset_of_text_resources_46() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_resources_46)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_text_resources_46() const { return ___text_resources_46; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_text_resources_46() { return &___text_resources_46; }
	inline void set_text_resources_46(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___text_resources_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_resources_46), (void*)value);
	}

	inline static int32_t get_offset_of_text_buy_btn_resources_47() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_buy_btn_resources_47)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_text_buy_btn_resources_47() const { return ___text_buy_btn_resources_47; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_text_buy_btn_resources_47() { return &___text_buy_btn_resources_47; }
	inline void set_text_buy_btn_resources_47(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___text_buy_btn_resources_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_buy_btn_resources_47), (void*)value);
	}

	inline static int32_t get_offset_of_text_buy_btn_coins_48() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___text_buy_btn_coins_48)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_text_buy_btn_coins_48() const { return ___text_buy_btn_coins_48; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_text_buy_btn_coins_48() { return &___text_buy_btn_coins_48; }
	inline void set_text_buy_btn_coins_48(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___text_buy_btn_coins_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_buy_btn_coins_48), (void*)value);
	}

	inline static int32_t get_offset_of_stars_level_54() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___stars_level_54)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_stars_level_54() const { return ___stars_level_54; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_stars_level_54() { return &___stars_level_54; }
	inline void set_stars_level_54(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___stars_level_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_level_54), (void*)value);
	}

	inline static int32_t get_offset_of_btn_buy_55() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___btn_buy_55)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_btn_buy_55() const { return ___btn_buy_55; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_btn_buy_55() { return &___btn_buy_55; }
	inline void set_btn_buy_55(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___btn_buy_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_buy_55), (void*)value);
	}

	inline static int32_t get_offset_of_audBtn_62() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___audBtn_62)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audBtn_62() const { return ___audBtn_62; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audBtn_62() { return &___audBtn_62; }
	inline void set_audBtn_62(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audBtn_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audBtn_62), (void*)value);
	}

	inline static int32_t get_offset_of_audBuy_63() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___audBuy_63)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audBuy_63() const { return ___audBuy_63; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audBuy_63() { return &___audBuy_63; }
	inline void set_audBuy_63(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audBuy_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audBuy_63), (void*)value);
	}

	inline static int32_t get_offset_of_all_levels_64() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___all_levels_64)); }
	inline int32_t get_all_levels_64() const { return ___all_levels_64; }
	inline int32_t* get_address_of_all_levels_64() { return &___all_levels_64; }
	inline void set_all_levels_64(int32_t value)
	{
		___all_levels_64 = value;
	}

	inline static int32_t get_offset_of_time_65() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___time_65)); }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * get_time_65() const { return ___time_65; }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 ** get_address_of_time_65() { return &___time_65; }
	inline void set_time_65(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * value)
	{
		___time_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time_65), (void*)value);
	}

	inline static int32_t get_offset_of_scrollVertical_66() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___scrollVertical_66)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scrollVertical_66() const { return ___scrollVertical_66; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scrollVertical_66() { return &___scrollVertical_66; }
	inline void set_scrollVertical_66(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scrollVertical_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollVertical_66), (void*)value);
	}

	inline static int32_t get_offset_of_scroll_67() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___scroll_67)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_scroll_67() const { return ___scroll_67; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_scroll_67() { return &___scroll_67; }
	inline void set_scroll_67(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___scroll_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scroll_67), (void*)value);
	}
};

struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields
{
public:
	// System.String Menu::txt_coins
	String_t* ___txt_coins_49;
	// System.String Menu::tx_nomer_levels
	String_t* ___tx_nomer_levels_50;
	// System.String Menu::tx_time
	String_t* ___tx_time_51;
	// System.String Menu::tx_goal
	String_t* ___tx_goal_52;
	// System.String Menu::tx_goal_achieved
	String_t* ___tx_goal_achieved_53;
	// LoadResources Menu::coins
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___coins_56;
	// LoadResources Menu::pauseTimer
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___pauseTimer_57;
	// LoadResources Menu::x2
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x2_58;
	// LoadResources Menu::destroyLine
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___destroyLine_59;
	// LoadResources Menu::destroyAllLine
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___destroyAllLine_60;
	// LoadResources Menu::maxScore
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___maxScore_61;

public:
	inline static int32_t get_offset_of_txt_coins_49() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___txt_coins_49)); }
	inline String_t* get_txt_coins_49() const { return ___txt_coins_49; }
	inline String_t** get_address_of_txt_coins_49() { return &___txt_coins_49; }
	inline void set_txt_coins_49(String_t* value)
	{
		___txt_coins_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txt_coins_49), (void*)value);
	}

	inline static int32_t get_offset_of_tx_nomer_levels_50() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___tx_nomer_levels_50)); }
	inline String_t* get_tx_nomer_levels_50() const { return ___tx_nomer_levels_50; }
	inline String_t** get_address_of_tx_nomer_levels_50() { return &___tx_nomer_levels_50; }
	inline void set_tx_nomer_levels_50(String_t* value)
	{
		___tx_nomer_levels_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_nomer_levels_50), (void*)value);
	}

	inline static int32_t get_offset_of_tx_time_51() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___tx_time_51)); }
	inline String_t* get_tx_time_51() const { return ___tx_time_51; }
	inline String_t** get_address_of_tx_time_51() { return &___tx_time_51; }
	inline void set_tx_time_51(String_t* value)
	{
		___tx_time_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_time_51), (void*)value);
	}

	inline static int32_t get_offset_of_tx_goal_52() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___tx_goal_52)); }
	inline String_t* get_tx_goal_52() const { return ___tx_goal_52; }
	inline String_t** get_address_of_tx_goal_52() { return &___tx_goal_52; }
	inline void set_tx_goal_52(String_t* value)
	{
		___tx_goal_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_goal_52), (void*)value);
	}

	inline static int32_t get_offset_of_tx_goal_achieved_53() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___tx_goal_achieved_53)); }
	inline String_t* get_tx_goal_achieved_53() const { return ___tx_goal_achieved_53; }
	inline String_t** get_address_of_tx_goal_achieved_53() { return &___tx_goal_achieved_53; }
	inline void set_tx_goal_achieved_53(String_t* value)
	{
		___tx_goal_achieved_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_goal_achieved_53), (void*)value);
	}

	inline static int32_t get_offset_of_coins_56() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___coins_56)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_coins_56() const { return ___coins_56; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_coins_56() { return &___coins_56; }
	inline void set_coins_56(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___coins_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coins_56), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimer_57() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___pauseTimer_57)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_pauseTimer_57() const { return ___pauseTimer_57; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_pauseTimer_57() { return &___pauseTimer_57; }
	inline void set_pauseTimer_57(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___pauseTimer_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseTimer_57), (void*)value);
	}

	inline static int32_t get_offset_of_x2_58() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___x2_58)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_x2_58() const { return ___x2_58; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_x2_58() { return &___x2_58; }
	inline void set_x2_58(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___x2_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x2_58), (void*)value);
	}

	inline static int32_t get_offset_of_destroyLine_59() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___destroyLine_59)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_destroyLine_59() const { return ___destroyLine_59; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_destroyLine_59() { return &___destroyLine_59; }
	inline void set_destroyLine_59(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___destroyLine_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyLine_59), (void*)value);
	}

	inline static int32_t get_offset_of_destroyAllLine_60() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___destroyAllLine_60)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_destroyAllLine_60() const { return ___destroyAllLine_60; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_destroyAllLine_60() { return &___destroyAllLine_60; }
	inline void set_destroyAllLine_60(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___destroyAllLine_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyAllLine_60), (void*)value);
	}

	inline static int32_t get_offset_of_maxScore_61() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields, ___maxScore_61)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_maxScore_61() const { return ___maxScore_61; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_maxScore_61() { return &___maxScore_61; }
	inline void set_maxScore_61(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___maxScore_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxScore_61), (void*)value);
	}
};


// Pause
struct  Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Pause::audBtn
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audBtn_4;

public:
	inline static int32_t get_offset_of_audBtn_4() { return static_cast<int32_t>(offsetof(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28, ___audBtn_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audBtn_4() const { return ___audBtn_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audBtn_4() { return &___audBtn_4; }
	inline void set_audBtn_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audBtn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audBtn_4), (void*)value);
	}
};


// PurchaseSource
struct  PurchaseSource_t620AC8CE6AE17C233A7A8D2297E78678850A0605  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScoresManager
struct  ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoresManager::text_score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_score_4;
	// UnityEngine.UI.Text ScoresManager::text_line
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_line_5;
	// UnityEngine.UI.Text ScoresManager::text_goal_score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_goal_score_6;
	// UnityEngine.UI.Text ScoresManager::text_coins
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_coins_7;

public:
	inline static int32_t get_offset_of_text_score_4() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497, ___text_score_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_score_4() const { return ___text_score_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_score_4() { return &___text_score_4; }
	inline void set_text_score_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_score_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_score_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_line_5() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497, ___text_line_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_line_5() const { return ___text_line_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_line_5() { return &___text_line_5; }
	inline void set_text_line_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_line_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_line_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_goal_score_6() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497, ___text_goal_score_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_goal_score_6() const { return ___text_goal_score_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_goal_score_6() { return &___text_goal_score_6; }
	inline void set_text_goal_score_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_goal_score_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_goal_score_6), (void*)value);
	}

	inline static int32_t get_offset_of_text_coins_7() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497, ___text_coins_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_coins_7() const { return ___text_coins_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_coins_7() { return &___text_coins_7; }
	inline void set_text_coins_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_coins_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_coins_7), (void*)value);
	}
};

struct ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields
{
public:
	// System.Int32 ScoresManager::mult_x2
	int32_t ___mult_x2_8;
	// LoadResources ScoresManager::countCoins
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___countCoins_9;
	// LoadResources ScoresManager::countLine
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___countLine_10;
	// LoadResources ScoresManager::countScore
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___countScore_11;
	// LoadResources ScoresManager::countClearLine
	LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___countClearLine_12;

public:
	inline static int32_t get_offset_of_mult_x2_8() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields, ___mult_x2_8)); }
	inline int32_t get_mult_x2_8() const { return ___mult_x2_8; }
	inline int32_t* get_address_of_mult_x2_8() { return &___mult_x2_8; }
	inline void set_mult_x2_8(int32_t value)
	{
		___mult_x2_8 = value;
	}

	inline static int32_t get_offset_of_countCoins_9() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields, ___countCoins_9)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_countCoins_9() const { return ___countCoins_9; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_countCoins_9() { return &___countCoins_9; }
	inline void set_countCoins_9(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___countCoins_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countCoins_9), (void*)value);
	}

	inline static int32_t get_offset_of_countLine_10() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields, ___countLine_10)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_countLine_10() const { return ___countLine_10; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_countLine_10() { return &___countLine_10; }
	inline void set_countLine_10(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___countLine_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countLine_10), (void*)value);
	}

	inline static int32_t get_offset_of_countScore_11() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields, ___countScore_11)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_countScore_11() const { return ___countScore_11; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_countScore_11() { return &___countScore_11; }
	inline void set_countScore_11(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___countScore_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countScore_11), (void*)value);
	}

	inline static int32_t get_offset_of_countClearLine_12() { return static_cast<int32_t>(offsetof(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields, ___countClearLine_12)); }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * get_countClearLine_12() const { return ___countClearLine_12; }
	inline LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 ** get_address_of_countClearLine_12() { return &___countClearLine_12; }
	inline void set_countClearLine_12(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * value)
	{
		___countClearLine_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countClearLine_12), (void*)value);
	}
};


// SliderScore
struct  SliderScore_t4AF102FE28942884FB814210209A5920332E04EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider SliderScore::sl
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sl_4;
	// UnityEngine.UI.Image[] SliderScore::stars
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___stars_5;
	// System.Int32 SliderScore::k
	int32_t ___k_6;
	// UnityEngine.Sprite SliderScore::gh
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___gh_7;

public:
	inline static int32_t get_offset_of_sl_4() { return static_cast<int32_t>(offsetof(SliderScore_t4AF102FE28942884FB814210209A5920332E04EF, ___sl_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sl_4() const { return ___sl_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sl_4() { return &___sl_4; }
	inline void set_sl_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sl_4), (void*)value);
	}

	inline static int32_t get_offset_of_stars_5() { return static_cast<int32_t>(offsetof(SliderScore_t4AF102FE28942884FB814210209A5920332E04EF, ___stars_5)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_stars_5() const { return ___stars_5; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_stars_5() { return &___stars_5; }
	inline void set_stars_5(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___stars_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_5), (void*)value);
	}

	inline static int32_t get_offset_of_k_6() { return static_cast<int32_t>(offsetof(SliderScore_t4AF102FE28942884FB814210209A5920332E04EF, ___k_6)); }
	inline int32_t get_k_6() const { return ___k_6; }
	inline int32_t* get_address_of_k_6() { return &___k_6; }
	inline void set_k_6(int32_t value)
	{
		___k_6 = value;
	}

	inline static int32_t get_offset_of_gh_7() { return static_cast<int32_t>(offsetof(SliderScore_t4AF102FE28942884FB814210209A5920332E04EF, ___gh_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_gh_7() const { return ___gh_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_gh_7() { return &___gh_7; }
	inline void set_gh_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___gh_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gh_7), (void*)value);
	}
};


// SpawnBlock
struct  SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] SpawnBlock::Block
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Block_4;
	// UnityEngine.GameObject SpawnBlock::previewBlock
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___previewBlock_5;
	// UnityEngine.GameObject SpawnBlock::nextBlock
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nextBlock_6;
	// UnityEngine.GameObject SpawnBlock::ghostBlock
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ghostBlock_7;
	// UnityEngine.GameObject SpawnBlock::spawn_position_next
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawn_position_next_8;
	// System.Int32 SpawnBlock::maxSwaps
	int32_t ___maxSwaps_9;
	// System.Int32 SpawnBlock::currentSwaps
	int32_t ___currentSwaps_10;
	// System.Boolean SpawnBlock::gameStarted
	bool ___gameStarted_11;
	// UnityEngine.AudioSource SpawnBlock::audDestroy
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audDestroy_15;
	// System.Int32 SpawnBlock::coinsPlus
	int32_t ___coinsPlus_16;

public:
	inline static int32_t get_offset_of_Block_4() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___Block_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Block_4() const { return ___Block_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Block_4() { return &___Block_4; }
	inline void set_Block_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Block_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Block_4), (void*)value);
	}

	inline static int32_t get_offset_of_previewBlock_5() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___previewBlock_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_previewBlock_5() const { return ___previewBlock_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_previewBlock_5() { return &___previewBlock_5; }
	inline void set_previewBlock_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___previewBlock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previewBlock_5), (void*)value);
	}

	inline static int32_t get_offset_of_nextBlock_6() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___nextBlock_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nextBlock_6() const { return ___nextBlock_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nextBlock_6() { return &___nextBlock_6; }
	inline void set_nextBlock_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nextBlock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextBlock_6), (void*)value);
	}

	inline static int32_t get_offset_of_ghostBlock_7() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___ghostBlock_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ghostBlock_7() const { return ___ghostBlock_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ghostBlock_7() { return &___ghostBlock_7; }
	inline void set_ghostBlock_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ghostBlock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ghostBlock_7), (void*)value);
	}

	inline static int32_t get_offset_of_spawn_position_next_8() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___spawn_position_next_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawn_position_next_8() const { return ___spawn_position_next_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawn_position_next_8() { return &___spawn_position_next_8; }
	inline void set_spawn_position_next_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawn_position_next_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawn_position_next_8), (void*)value);
	}

	inline static int32_t get_offset_of_maxSwaps_9() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___maxSwaps_9)); }
	inline int32_t get_maxSwaps_9() const { return ___maxSwaps_9; }
	inline int32_t* get_address_of_maxSwaps_9() { return &___maxSwaps_9; }
	inline void set_maxSwaps_9(int32_t value)
	{
		___maxSwaps_9 = value;
	}

	inline static int32_t get_offset_of_currentSwaps_10() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___currentSwaps_10)); }
	inline int32_t get_currentSwaps_10() const { return ___currentSwaps_10; }
	inline int32_t* get_address_of_currentSwaps_10() { return &___currentSwaps_10; }
	inline void set_currentSwaps_10(int32_t value)
	{
		___currentSwaps_10 = value;
	}

	inline static int32_t get_offset_of_gameStarted_11() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___gameStarted_11)); }
	inline bool get_gameStarted_11() const { return ___gameStarted_11; }
	inline bool* get_address_of_gameStarted_11() { return &___gameStarted_11; }
	inline void set_gameStarted_11(bool value)
	{
		___gameStarted_11 = value;
	}

	inline static int32_t get_offset_of_audDestroy_15() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___audDestroy_15)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audDestroy_15() const { return ___audDestroy_15; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audDestroy_15() { return &___audDestroy_15; }
	inline void set_audDestroy_15(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audDestroy_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audDestroy_15), (void*)value);
	}

	inline static int32_t get_offset_of_coinsPlus_16() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2, ___coinsPlus_16)); }
	inline int32_t get_coinsPlus_16() const { return ___coinsPlus_16; }
	inline int32_t* get_address_of_coinsPlus_16() { return &___coinsPlus_16; }
	inline void set_coinsPlus_16(int32_t value)
	{
		___coinsPlus_16 = value;
	}
};

struct SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields
{
public:
	// System.Int32 SpawnBlock::height
	int32_t ___height_12;
	// System.Int32 SpawnBlock::width
	int32_t ___width_13;
	// UnityEngine.Transform[0...,0...] SpawnBlock::grid
	TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* ___grid_14;

public:
	inline static int32_t get_offset_of_height_12() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields, ___height_12)); }
	inline int32_t get_height_12() const { return ___height_12; }
	inline int32_t* get_address_of_height_12() { return &___height_12; }
	inline void set_height_12(int32_t value)
	{
		___height_12 = value;
	}

	inline static int32_t get_offset_of_width_13() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields, ___width_13)); }
	inline int32_t get_width_13() const { return ___width_13; }
	inline int32_t* get_address_of_width_13() { return &___width_13; }
	inline void set_width_13(int32_t value)
	{
		___width_13 = value;
	}

	inline static int32_t get_offset_of_grid_14() { return static_cast<int32_t>(offsetof(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields, ___grid_14)); }
	inline TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* get_grid_14() const { return ___grid_14; }
	inline TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14** get_address_of_grid_14() { return &___grid_14; }
	inline void set_grid_14(TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* value)
	{
		___grid_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_14), (void*)value);
	}
};


// Timer
struct  Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Timer::time_minuts
	float ___time_minuts_4;
	// UnityEngine.UI.Text Timer::text_time
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_time_5;
	// UnityEngine.UI.Button Timer::btn_pause
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn_pause_6;
	// UnityEngine.UI.Button Timer::btn_x2
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn_x2_7;
	// UnityEngine.UI.Button Timer::btn_destroyline
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn_destroyline_8;
	// UnityEngine.UI.Button Timer::btn_destroyAllline
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn_destroyAllline_9;
	// UnityEngine.UI.Slider Timer::sliderPause
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sliderPause_10;
	// UnityEngine.UI.Slider Timer::sliderX2
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sliderX2_11;
	// System.Int32 Timer::k
	int32_t ___k_15;

public:
	inline static int32_t get_offset_of_time_minuts_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___time_minuts_4)); }
	inline float get_time_minuts_4() const { return ___time_minuts_4; }
	inline float* get_address_of_time_minuts_4() { return &___time_minuts_4; }
	inline void set_time_minuts_4(float value)
	{
		___time_minuts_4 = value;
	}

	inline static int32_t get_offset_of_text_time_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___text_time_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_time_5() const { return ___text_time_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_time_5() { return &___text_time_5; }
	inline void set_text_time_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_time_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_time_5), (void*)value);
	}

	inline static int32_t get_offset_of_btn_pause_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___btn_pause_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn_pause_6() const { return ___btn_pause_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn_pause_6() { return &___btn_pause_6; }
	inline void set_btn_pause_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn_pause_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_pause_6), (void*)value);
	}

	inline static int32_t get_offset_of_btn_x2_7() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___btn_x2_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn_x2_7() const { return ___btn_x2_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn_x2_7() { return &___btn_x2_7; }
	inline void set_btn_x2_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn_x2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_x2_7), (void*)value);
	}

	inline static int32_t get_offset_of_btn_destroyline_8() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___btn_destroyline_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn_destroyline_8() const { return ___btn_destroyline_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn_destroyline_8() { return &___btn_destroyline_8; }
	inline void set_btn_destroyline_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn_destroyline_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_destroyline_8), (void*)value);
	}

	inline static int32_t get_offset_of_btn_destroyAllline_9() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___btn_destroyAllline_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn_destroyAllline_9() const { return ___btn_destroyAllline_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn_destroyAllline_9() { return &___btn_destroyAllline_9; }
	inline void set_btn_destroyAllline_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn_destroyAllline_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_destroyAllline_9), (void*)value);
	}

	inline static int32_t get_offset_of_sliderPause_10() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___sliderPause_10)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sliderPause_10() const { return ___sliderPause_10; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sliderPause_10() { return &___sliderPause_10; }
	inline void set_sliderPause_10(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sliderPause_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderPause_10), (void*)value);
	}

	inline static int32_t get_offset_of_sliderX2_11() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___sliderX2_11)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sliderX2_11() const { return ___sliderX2_11; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sliderX2_11() { return &___sliderX2_11; }
	inline void set_sliderX2_11(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sliderX2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderX2_11), (void*)value);
	}

	inline static int32_t get_offset_of_k_15() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___k_15)); }
	inline int32_t get_k_15() const { return ___k_15; }
	inline int32_t* get_address_of_k_15() { return &___k_15; }
	inline void set_k_15(int32_t value)
	{
		___k_15 = value;
	}
};

struct Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields
{
public:
	// ITimer Timer::timerGame
	ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * ___timerGame_12;
	// ITimer Timer::pauseTimer
	ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * ___pauseTimer_13;
	// ITimer Timer::x2Timer
	ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * ___x2Timer_14;

public:
	inline static int32_t get_offset_of_timerGame_12() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields, ___timerGame_12)); }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * get_timerGame_12() const { return ___timerGame_12; }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 ** get_address_of_timerGame_12() { return &___timerGame_12; }
	inline void set_timerGame_12(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * value)
	{
		___timerGame_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerGame_12), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimer_13() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields, ___pauseTimer_13)); }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * get_pauseTimer_13() const { return ___pauseTimer_13; }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 ** get_address_of_pauseTimer_13() { return &___pauseTimer_13; }
	inline void set_pauseTimer_13(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * value)
	{
		___pauseTimer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseTimer_13), (void*)value);
	}

	inline static int32_t get_offset_of_x2Timer_14() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields, ___x2Timer_14)); }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * get_x2Timer_14() const { return ___x2Timer_14; }
	inline ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 ** get_address_of_x2Timer_14() { return &___x2Timer_14; }
	inline void set_x2Timer_14(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * value)
	{
		___x2Timer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x2Timer_14), (void*)value);
	}
};


// Translator
struct  Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Translator::btn_language_rus
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_language_rus_4;
	// UnityEngine.GameObject Translator::btn_language_eng
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_language_eng_5;
	// UnityEngine.AudioSource Translator::audSetting
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audSetting_6;
	// TranslatorMenu Translator::translatorMenu
	TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * ___translatorMenu_7;

public:
	inline static int32_t get_offset_of_btn_language_rus_4() { return static_cast<int32_t>(offsetof(Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A, ___btn_language_rus_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btn_language_rus_4() const { return ___btn_language_rus_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btn_language_rus_4() { return &___btn_language_rus_4; }
	inline void set_btn_language_rus_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btn_language_rus_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_language_rus_4), (void*)value);
	}

	inline static int32_t get_offset_of_btn_language_eng_5() { return static_cast<int32_t>(offsetof(Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A, ___btn_language_eng_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btn_language_eng_5() const { return ___btn_language_eng_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btn_language_eng_5() { return &___btn_language_eng_5; }
	inline void set_btn_language_eng_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btn_language_eng_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_language_eng_5), (void*)value);
	}

	inline static int32_t get_offset_of_audSetting_6() { return static_cast<int32_t>(offsetof(Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A, ___audSetting_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audSetting_6() const { return ___audSetting_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audSetting_6() { return &___audSetting_6; }
	inline void set_audSetting_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audSetting_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audSetting_6), (void*)value);
	}

	inline static int32_t get_offset_of_translatorMenu_7() { return static_cast<int32_t>(offsetof(Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A, ___translatorMenu_7)); }
	inline TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * get_translatorMenu_7() const { return ___translatorMenu_7; }
	inline TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 ** get_address_of_translatorMenu_7() { return &___translatorMenu_7; }
	inline void set_translatorMenu_7(TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * value)
	{
		___translatorMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translatorMenu_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Volume
struct  Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// IVolume Volume::music
	IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * ___music_4;
	// IVolume Volume::sound
	IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * ___sound_5;
	// UnityEngine.GameObject Volume::btnMusicOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnMusicOn_6;
	// UnityEngine.GameObject Volume::btnMusicOff
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnMusicOff_7;
	// UnityEngine.GameObject Volume::btnSoundOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnSoundOn_8;
	// UnityEngine.GameObject Volume::btnSoundOff
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnSoundOff_9;
	// System.String Volume::tagVolumeMusic
	String_t* ___tagVolumeMusic_10;
	// System.String Volume::tagVolumeSound
	String_t* ___tagVolumeSound_11;
	// System.String Volume::tagMixerMusic
	String_t* ___tagMixerMusic_12;
	// System.String Volume::tagMixerSound
	String_t* ___tagMixerSound_13;
	// UnityEngine.AudioSource Volume::audSetting
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audSetting_14;
	// UnityEngine.Audio.AudioMixerGroup Volume::mixerMusic
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixerMusic_15;
	// UnityEngine.Audio.AudioMixerGroup Volume::mixerSound
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixerSound_16;

public:
	inline static int32_t get_offset_of_music_4() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___music_4)); }
	inline IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * get_music_4() const { return ___music_4; }
	inline IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 ** get_address_of_music_4() { return &___music_4; }
	inline void set_music_4(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * value)
	{
		___music_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_4), (void*)value);
	}

	inline static int32_t get_offset_of_sound_5() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___sound_5)); }
	inline IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * get_sound_5() const { return ___sound_5; }
	inline IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 ** get_address_of_sound_5() { return &___sound_5; }
	inline void set_sound_5(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * value)
	{
		___sound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sound_5), (void*)value);
	}

	inline static int32_t get_offset_of_btnMusicOn_6() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___btnMusicOn_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnMusicOn_6() const { return ___btnMusicOn_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnMusicOn_6() { return &___btnMusicOn_6; }
	inline void set_btnMusicOn_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnMusicOn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnMusicOn_6), (void*)value);
	}

	inline static int32_t get_offset_of_btnMusicOff_7() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___btnMusicOff_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnMusicOff_7() const { return ___btnMusicOff_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnMusicOff_7() { return &___btnMusicOff_7; }
	inline void set_btnMusicOff_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnMusicOff_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnMusicOff_7), (void*)value);
	}

	inline static int32_t get_offset_of_btnSoundOn_8() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___btnSoundOn_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnSoundOn_8() const { return ___btnSoundOn_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnSoundOn_8() { return &___btnSoundOn_8; }
	inline void set_btnSoundOn_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnSoundOn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnSoundOn_8), (void*)value);
	}

	inline static int32_t get_offset_of_btnSoundOff_9() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___btnSoundOff_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnSoundOff_9() const { return ___btnSoundOff_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnSoundOff_9() { return &___btnSoundOff_9; }
	inline void set_btnSoundOff_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnSoundOff_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnSoundOff_9), (void*)value);
	}

	inline static int32_t get_offset_of_tagVolumeMusic_10() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___tagVolumeMusic_10)); }
	inline String_t* get_tagVolumeMusic_10() const { return ___tagVolumeMusic_10; }
	inline String_t** get_address_of_tagVolumeMusic_10() { return &___tagVolumeMusic_10; }
	inline void set_tagVolumeMusic_10(String_t* value)
	{
		___tagVolumeMusic_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagVolumeMusic_10), (void*)value);
	}

	inline static int32_t get_offset_of_tagVolumeSound_11() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___tagVolumeSound_11)); }
	inline String_t* get_tagVolumeSound_11() const { return ___tagVolumeSound_11; }
	inline String_t** get_address_of_tagVolumeSound_11() { return &___tagVolumeSound_11; }
	inline void set_tagVolumeSound_11(String_t* value)
	{
		___tagVolumeSound_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagVolumeSound_11), (void*)value);
	}

	inline static int32_t get_offset_of_tagMixerMusic_12() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___tagMixerMusic_12)); }
	inline String_t* get_tagMixerMusic_12() const { return ___tagMixerMusic_12; }
	inline String_t** get_address_of_tagMixerMusic_12() { return &___tagMixerMusic_12; }
	inline void set_tagMixerMusic_12(String_t* value)
	{
		___tagMixerMusic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagMixerMusic_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagMixerSound_13() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___tagMixerSound_13)); }
	inline String_t* get_tagMixerSound_13() const { return ___tagMixerSound_13; }
	inline String_t** get_address_of_tagMixerSound_13() { return &___tagMixerSound_13; }
	inline void set_tagMixerSound_13(String_t* value)
	{
		___tagMixerSound_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagMixerSound_13), (void*)value);
	}

	inline static int32_t get_offset_of_audSetting_14() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___audSetting_14)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audSetting_14() const { return ___audSetting_14; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audSetting_14() { return &___audSetting_14; }
	inline void set_audSetting_14(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audSetting_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audSetting_14), (void*)value);
	}

	inline static int32_t get_offset_of_mixerMusic_15() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___mixerMusic_15)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_mixerMusic_15() const { return ___mixerMusic_15; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_mixerMusic_15() { return &___mixerMusic_15; }
	inline void set_mixerMusic_15(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___mixerMusic_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixerMusic_15), (void*)value);
	}

	inline static int32_t get_offset_of_mixerSound_16() { return static_cast<int32_t>(offsetof(Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE, ___mixerSound_16)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_mixerSound_16() const { return ___mixerSound_16; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_mixerSound_16() { return &___mixerSound_16; }
	inline void set_mixerSound_16(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___mixerSound_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixerSound_16), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// TranslatorGame
struct  TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297  : public GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C
{
public:

public:
};


// TranslatorMenu
struct  TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0  : public Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6
{
public:
	// UnityEngine.GameObject TranslatorMenu::btn_rus
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_rus_68;
	// UnityEngine.GameObject TranslatorMenu::btn_eng
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_eng_69;

public:
	inline static int32_t get_offset_of_btn_rus_68() { return static_cast<int32_t>(offsetof(TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0, ___btn_rus_68)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btn_rus_68() const { return ___btn_rus_68; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btn_rus_68() { return &___btn_rus_68; }
	inline void set_btn_rus_68(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btn_rus_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_rus_68), (void*)value);
	}

	inline static int32_t get_offset_of_btn_eng_69() { return static_cast<int32_t>(offsetof(TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0, ___btn_eng_69)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btn_eng_69() const { return ___btn_eng_69; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btn_eng_69() { return &___btn_eng_69; }
	inline void set_btn_eng_69(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btn_eng_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_eng_69), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar
struct  Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Games[]
struct GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * m_Items[1];

public:
	inline Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * m_Items[1];

public:
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[0...,0...]
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void LoadResources::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, String_t* ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Timer>()
inline Timer_t32ADF3155A88C37628B80D227C821651666DD405 * Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1 (const RuntimeMethod* method)
{
	return ((  Timer_t32ADF3155A88C37628B80D227C821651666DD405 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void ActiveControlResources::CheckResources(UnityEngine.UI.Button,LoadResources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_CheckResources_mAA334B786274DFBA41C17DBCE91568524802B517 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn0, LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___res1, const RuntimeMethod* method);
// System.Int32 LoadResources::get_Resources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void ITimer::set_Times(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ITimer_set_Times_mB33A42A621B30FC8913E520E7187966336F25F24_inline (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, float ___value0, const RuntimeMethod* method);
// System.Void ITimer::pauseTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_pauseTimer_m9796C34762F6564CB80D17FDB32BBF2860C4C83B (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.Void ITimer::startTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_startTimer_mE3CA12B9D2194FFF7AB43D4BE8836DA0A589EDE6 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.Single ITimer::get_Times()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// LoadResources LoadResources::op_Decrement(LoadResources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Decrement_mCB04209A2D6419F7C6E31DC7521C0753CB615CDF (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<SpawnBlock>()
inline SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A (const RuntimeMethod* method)
{
	return ((  SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void SpawnBlock::ClickDestroyLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_ClickDestroyLine_m5D56B213552503CA4CBB0CA063EF4007C73D247E (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method);
// System.Void SpawnBlock::ClickDestroyAllLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_ClickDestroyAllLine_m06121B557683980AFAA3CCE3B617D53A29212D63 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Menu>()
inline Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8 (const RuntimeMethod* method)
{
	return ((  Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void Menu::ClickClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickClose_m11859E125779CA011FF7A7AC8D596B2D0C80140B (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method);
// System.Void Menu::ClickActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickActive_m35743C102B7770FB18F9C7D5AA41DE744184A8BC (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method);
// System.Void Menu::ScrollClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ScrollClose_m495FD2427AD343ABA5155A5AFEA86B849EB902E2 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method);
// System.Void Menu::ClickActiveBuyResources(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickActiveBuyResources_m2EE695ED6CD051A14242AB1C40A52666D51681BF (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method);
// System.Void Menu::ClickActiveBuyCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickActiveBuyCoins_mEBBB8733F539974483B912EB1207CD686B6664B8 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean ControlBlock::ValidMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61 (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void ControlBlock::AddToGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBlock_AddToGrid_m4655120B930C2CF28F10944946B8AD9FD12512AA (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method);
// System.Void ControlBlock::CheckForLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBlock_CheckForLines_mFEFD693BDEF6D6D97D8500E7C11591F82CA604DC (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void SpawnBlock::SpawnNextBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_SpawnNextBlock_m4B841CDA4FE0A301EC6028DA7A3C4AB3831405B8 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method);
// System.Void SpawnBlock::CheckForLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_CheckForLines_m07E26CFE705FC4C6B68FD0B33F69AE8F88A9B965 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method);
// System.Void SpawnBlock::AddToGrid(ControlBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_AddToGrid_m737D18DA7B716A6674CB3F09291F3B18E19737A5 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * ___tetromino0, const RuntimeMethod* method);
// System.Boolean SpawnBlock::ValidMove(ControlBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnBlock_ValidMove_mE1AB4C2C00358D6D41E23543E94FB5B28BFB42C4 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * ___tetromino0, const RuntimeMethod* method);
// System.Void TranslatorGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame__ctor_m59CB2EB634E7B8A32E1ABA02429B0E5627423E5E (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Level>()
inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8 (const RuntimeMethod* method)
{
	return ((  Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<ScoresManager>()
inline ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * Object_FindObjectOfType_TisScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_mD27D3C5E5AF2FEFFB5A31FE21F2A242B05352469 (const RuntimeMethod* method)
{
	return ((  ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Pause>()
inline Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * Object_FindObjectOfType_TisPause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_mF3C32B80A47A07022DA6AB900DB7DBCAEA4A2C99 (const RuntimeMethod* method)
{
	return ((  Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void Pause::Outs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_Outs_m15F49D5BFF71B1760EA81203E8C9CA29FD27DEC3 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void GameRound::ViewStar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_ViewStar_m6C5D420C20B913943E80D50D5061FA5615CE1A59 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void LoadResources::SaveIntResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07 (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Void GameRound::ChangedTextWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_ChangedTextWin_mF424B1B3E2DF72AE2653E502955E97E273E2B7B7 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method);
// System.Void GameRound::SaveMaxScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_SaveMaxScore_m4253A7E594F358960834D6A6D358A67F92FE0253 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, int32_t ___value0, int32_t ___level1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameRound::SaveIntResult(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_SaveIntResult_mAC91519E67E609555BE94264039A95112924FAD9 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, String_t* ___keys0, int32_t ___value1, const RuntimeMethod* method);
// System.Void GameRound::ChangedTextGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_ChangedTextGameOver_mC76C2815A506BC8F8EA43C345DBEB08A756B1E2D (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method);
// System.Void GameRound::GameWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_GameWin_mD1ED83089C2A6BDCE8271D871876DD00120657CE (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Ghost::FollowActiveTetromino()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_FollowActiveTetromino_m561F121B2236C767C45303EE2760FFEE70BDCCC4 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method);
// System.Void Ghost::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_MoveDown_m2B1376A9847A3D42A3C9D11CE418601658B3DF60 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean Ghost::CheckIsValidPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ghost_CheckIsValidPosition_m5A98FD7085CE6FCD1E1B022F70F356EE43A8CDA0 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 SpawnBlock::Round(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SpawnBlock_Round_mAB965B52548508313766CFF9B8238D7637F4330C (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Boolean SpawnBlock::CheckInsideGrid(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnBlock_CheckInsideGrid_mFE62A833B6816882767C66986EA7917CEF804BD5 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// UnityEngine.Transform SpawnBlock::GetTransformAtGridPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SpawnBlock_GetTransformAtGridPosition_m3CAEE0F48F5487C8DF1C03180CABC03646366A5D (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void IVolume::Off()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_Off_m5B977018E0D19049F471CFCEAB49156AB27C9170 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method);
// System.Void IVolume::On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_On_m6CC6731CE7913E88D1B861CF4BFFC2919EB631CC (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method);
// System.Void LoadResources::set_Resources(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Audio.AudioMixer UnityEngine.Audio.AudioMixerGroup::get_audioMixer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * AudioMixerGroup_get_audioMixer_mDB232CE003BDC95A3966A4A8547037550561F58A (AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void LoadResources::set_resources(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 LoadResources::get_resources()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method);
// System.Void LoadResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources__ctor_mA9FFB9F8C29E7241CDE822B895167A4A478E46A4 (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Scrollbar>()
inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554 (String_t* ___key0, const RuntimeMethod* method);
// System.Void Menu::level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_level_m0879645B8B026ADA4C4677AFC03CE25ED0F2BA37 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Int32 Menu::CountStar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Menu_CountStar_m1634242BE4AB95B19A38229160AC0BBAD8DEA4A7 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Int32 Menu::CountScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Menu_CountScore_m1B319F451AC3D87DA0189D596C7DC8AF43D7352D (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Int32 Menu::CountMaxScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Menu_CountMaxScore_mE6F39CA43F177C7A6BDB4F30DCE027CF9CC9C877 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Void Menu::CheckCoinsBuyResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_CheckCoinsBuyResources_m24C5AF492E0289C555AA51BC2F0CCFFCD7E7DC59 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Menu::ActiveBtn(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ActiveBtn_mC819761F5069488FBA0D8178D3A8B172D62CE92E (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___coin0, int32_t ___nomer_btn1, const RuntimeMethod* method);
// LoadResources LoadResources::op_Subtraction(LoadResources,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Subtraction_m4B1D04B9D30EDD8328965E14FBD13414E0F9D46E (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, int32_t ___k1, const RuntimeMethod* method);
// LoadResources LoadResources::op_Increment(LoadResources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void ITimer::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer__ctor_m71477617444E67AC8E4E55EFEB8E2E358FDE371F (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, float ___minuts0, bool ___state1, const RuntimeMethod* method);
// System.Single ITimer::getMinuts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_getMinuts_m9018F6E7F7BECB1DD226DC86CD69C6F095306D62 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Single ITimer::getSecunds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_getSecunds_m8065C0DDFDF7C0EB63AF822A9D062859E6DC2AA4 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Void Menu::clearStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_clearStars_m3BA9668E630177337168EBFB16502F6F33C5246A (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Void Menu::ChangeTextPanelLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ChangeTextPanelLevel_mABC27375C2725CAAD7C890597B69BA6400A15966 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// LoadResources LoadResources::op_Addition(LoadResources,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, int32_t ___k1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ScoresManager::ClearOneLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearOneLine_mBD23D79F4DF9A21D90D13EF825D03F60ECC6A053 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method);
// System.Void ScoresManager::ClearTwoLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearTwoLine_mF7271EB9909DFF10301990BCEB71013C0FDA9822 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method);
// System.Void ScoresManager::ClearThreeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearThreeLine_m0D43DEEE0FAE26423A803F8856BEB2E5F32AEB37 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method);
// System.Void ScoresManager::ClearFourLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearFourLine_m6D6D1744BB7BB87A0DB75BF180C33B566D083794 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameRound>()
inline GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767 (const RuntimeMethod* method)
{
	return ((  GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void GameRound::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_GameOver_m3A869F8CFEFF3BD0242DC986EF24346E4FAE5E87 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void SpawnBlock::RowDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_RowDown_mB53DFE5044AC838D918D349A3C831A6D99CA67EB (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<ControlBlock>()
inline ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void SpawnBlock::SpawnGhostBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_SpawnGhostBlock_mB71DE697A16A1FF2F8EA75E2D835F871365E433D (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Ghost>()
inline Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * GameObject_AddComponent_TisGhost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7_mAF1DFBC6266BA82B6281813C805C68334AD3C3C6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean SpawnBlock::HasLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnBlock_HasLine_m4C02F3D99F8CA051DCA82986089A8F1CA7671987 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void SpawnBlock::DeleteLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_DeleteLine_m498ECFFE41C081E3F10A463DB26EB45CE3910934 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void ITimer::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_UpdateTime_mA3AFEBC197C616D23487CAC210F7B14F89657C4D (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.Single ITimer::getMillisecunds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_getMillisecunds_m8AF577B7C9A49892A44516FA5CC12F4C6855E8D3 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void TranslatorMenu::.ctor(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu__ctor_m3A96DA25047B52C50C18A5D317B3B1B4B623569E (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_rus0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_eng1, const RuntimeMethod* method);
// System.Void TranslatorMenu::OnTranslatorEnglish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu_OnTranslatorEnglish_m7E77DBA56F5166667E2D00AF05D163018B7ABFCB (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void TranslatorMenu::OnTranslatorRussian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu_OnTranslatorRussian_m1C3E9BE6C5A889BBE5C5E3BC6CF33A332EE40191 (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, const RuntimeMethod* method);
// System.Void GameRound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound__ctor_m35BAA94F2076E98B23978EA2B96DA0328F83D97B (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void TranslatorGame::OnTranslatorRussian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame_OnTranslatorRussian_mAAC12E22C40B70771A0B5F4FB32F2C4DEA8895CA (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, const RuntimeMethod* method);
// System.Void TranslatorGame::OnTranslatorEnglish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame_OnTranslatorEnglish_mC06602985F82BA62D07BA4051D2B475C5D04ADCE (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, const RuntimeMethod* method);
// System.Void TranslatorGame::Translation(UnityEngine.UI.Text,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990 (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___oldText0, String_t* ___newText1, const RuntimeMethod* method);
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Void TranslatorMenu::Translation(UnityEngine.UI.Text,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4 (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___oldText0, String_t* ___newText1, const RuntimeMethod* method);
// System.Void IVolume::.ctor(System.String,System.String,UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume__ctor_m11013DA671C1F83CF11CB562C44C207D204A9829 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, String_t* ___keysVolume0, String_t* ___keysMixer1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnVolumeOn2, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnVolumeOff3, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixer4, const RuntimeMethod* method);
// System.Void IVolume::ClickOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_ClickOn_mABE9511E04F5DF5A03A1AB187B3A8690580BE321 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method);
// System.Void IVolume::ClickOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_ClickOff_m325CEF7709B25866AA6AE42528F00A2BC03ECC16 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method);
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
// System.Void ActiveControlResources::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_Start_mD1BA6B46515BAED2561A4F7E78F4921196719E4D (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107ADEBE5850FC36C6B2E726F9E49525A0892E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A0F5DFA3E846ECABECD683BEA957DE1CF520AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B784DFD1CCBBDAB63F92C64AA5B8AC5912D6D42);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseTimer = new LoadResources("pauseTimer");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_0, _stringLiteral10A0F5DFA3E846ECABECD683BEA957DE1CF520AE, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_pauseTimer_8(L_0);
		// x2 = new LoadResources("x2");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_1, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_x2_9(L_1);
		// destroyLine = new LoadResources("destroyLine");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_2, _stringLiteral107ADEBE5850FC36C6B2E726F9E49525A0892E8C, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_destroyLine_10(L_2);
		// destroyAllLine = new LoadResources("destroyAllLine");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_3, _stringLiteral6B784DFD1CCBBDAB63F92C64AA5B8AC5912D6D42, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_destroyAllLine_11(L_3);
		// CheckResources(FindObjectOfType<Timer>().btn_pause, pauseTimer);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_4;
		L_4 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_4);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = L_4->get_btn_pause_6();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_pauseTimer_8();
		ActiveControlResources_CheckResources_mAA334B786274DFBA41C17DBCE91568524802B517(__this, L_5, L_6, /*hidden argument*/NULL);
		// CheckResources(FindObjectOfType<Timer>().btn_x2, x2);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_7;
		L_7 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_7);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = L_7->get_btn_x2_7();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_9 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_x2_9();
		ActiveControlResources_CheckResources_mAA334B786274DFBA41C17DBCE91568524802B517(__this, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActiveControlResources::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_Update_m93A4DF5C5D2FDF006AAC6C94AE76326E49859F13 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pauseTimerText.text = pauseTimer.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_pauseTimerText_4();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_pauseTimer_8();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// x2Text.text = x2.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_x2Text_5();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_x2_9();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// destroyLineText.text = destroyLine.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_destroyLineText_6();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_9 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyLine_10();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// destroyAllLineText.text = destroyAllLine.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_destroyAllLineText_7();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_13 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyAllLine_11();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// CheckResources(FindObjectOfType<Timer>().btn_destroyline, destroyLine);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_16;
		L_16 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_16);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = L_16->get_btn_destroyline_8();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_18 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyLine_10();
		ActiveControlResources_CheckResources_mAA334B786274DFBA41C17DBCE91568524802B517(__this, L_17, L_18, /*hidden argument*/NULL);
		// CheckResources(FindObjectOfType<Timer>().btn_destroyAllline, destroyAllLine);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_19;
		L_19 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_19);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_20 = L_19->get_btn_destroyAllline_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_21 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyAllLine_11();
		ActiveControlResources_CheckResources_mAA334B786274DFBA41C17DBCE91568524802B517(__this, L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActiveControlResources::activePauseTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_activePauseTimer_m0D5B19805889E285BB3B530844E0634581BE9DC7 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_12();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// Timer.pauseTimer.Times = 10;
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_1 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_1);
		ITimer_set_Times_mB33A42A621B30FC8913E520E7187966336F25F24_inline(L_1, (10.0f), /*hidden argument*/NULL);
		// Timer.timerGame.pauseTimer();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_2 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_2);
		ITimer_pauseTimer_m9796C34762F6564CB80D17FDB32BBF2860C4C83B(L_2, /*hidden argument*/NULL);
		// Timer.pauseTimer.startTimer();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_3 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_3);
		ITimer_startTimer_mE3CA12B9D2194FFF7AB43D4BE8836DA0A589EDE6(L_3, /*hidden argument*/NULL);
		// FindObjectOfType<Timer>().sliderPause.maxValue = Timer.pauseTimer.Times;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_4;
		L_4 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_4);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = L_4->get_sliderPause_10();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_6 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_6);
		float L_7;
		L_7 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_5, L_7, /*hidden argument*/NULL);
		// FindObjectOfType<Timer>().btn_pause.interactable = false;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_8;
		L_8 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_8);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = L_8->get_btn_pause_6();
		NullCheck(L_9);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_9, (bool)0, /*hidden argument*/NULL);
		// pauseTimer--;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_10 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_pauseTimer_8();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_11;
		L_11 = LoadResources_op_Decrement_mCB04209A2D6419F7C6E31DC7521C0753CB615CDF(L_10, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_pauseTimer_8(L_11);
		// }
		return;
	}
}
// System.Void ActiveControlResources::activeX2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_activeX2_m0B057480DCEE2F5162EEEFCC2FB6D924961A5439 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_12();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// Timer.x2Timer.Times = 20;
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_1 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_1);
		ITimer_set_Times_mB33A42A621B30FC8913E520E7187966336F25F24_inline(L_1, (20.0f), /*hidden argument*/NULL);
		// Timer.x2Timer.startTimer();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_2 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_2);
		ITimer_startTimer_mE3CA12B9D2194FFF7AB43D4BE8836DA0A589EDE6(L_2, /*hidden argument*/NULL);
		// ScoresManager.mult_x2 = 2;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_mult_x2_8(2);
		// FindObjectOfType<Timer>().sliderX2.maxValue = Timer.x2Timer.Times;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_3;
		L_3 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_3);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = L_3->get_sliderX2_11();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_5 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_5);
		float L_6;
		L_6 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_4, L_6, /*hidden argument*/NULL);
		// FindObjectOfType<Timer>().btn_x2.interactable = false;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_7;
		L_7 = Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1(/*hidden argument*/Object_FindObjectOfType_TisTimer_t32ADF3155A88C37628B80D227C821651666DD405_mAC579F901BAA7FD28A4D77AD40ABE2A43A5358B1_RuntimeMethod_var);
		NullCheck(L_7);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = L_7->get_btn_x2_7();
		NullCheck(L_8);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_8, (bool)0, /*hidden argument*/NULL);
		// x2--;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_9 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_x2_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_10;
		L_10 = LoadResources_op_Decrement_mCB04209A2D6419F7C6E31DC7521C0753CB615CDF(L_9, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_x2_9(L_10);
		// }
		return;
	}
}
// System.Void ActiveControlResources::activeDestroyLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_activeDestroyLine_m76CF2775C03A97D6D38F09CC0F82137E8C777316 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<SpawnBlock>().ClickDestroyLine();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		NullCheck(L_0);
		SpawnBlock_ClickDestroyLine_m5D56B213552503CA4CBB0CA063EF4007C73D247E(L_0, /*hidden argument*/NULL);
		// destroyLine--;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2;
		L_2 = LoadResources_op_Decrement_mCB04209A2D6419F7C6E31DC7521C0753CB615CDF(L_1, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_destroyLine_10(L_2);
		// }
		return;
	}
}
// System.Void ActiveControlResources::activeDestroyAllLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_activeDestroyAllLine_m2020ADA621DB21ED583D4F426AAEB6C18DA756E4 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<SpawnBlock>().ClickDestroyAllLine();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		NullCheck(L_0);
		SpawnBlock_ClickDestroyAllLine_m06121B557683980AFAA3CCE3B617D53A29212D63(L_0, /*hidden argument*/NULL);
		// destroyAllLine--;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyAllLine_11();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2;
		L_2 = LoadResources_op_Decrement_mCB04209A2D6419F7C6E31DC7521C0753CB615CDF(L_1, /*hidden argument*/NULL);
		((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->set_destroyAllLine_11(L_2);
		// }
		return;
	}
}
// System.Void ActiveControlResources::CheckResources(UnityEngine.UI.Button,LoadResources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources_CheckResources_mAA334B786274DFBA41C17DBCE91568524802B517 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn0, LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___res1, const RuntimeMethod* method)
{
	{
		// if(res.Resources <= 0){
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ___res1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// btn.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = ___btn0;
		NullCheck(L_2);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0011:
	{
		// btn.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = ___btn0;
		NullCheck(L_3);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActiveControlResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveControlResources__ctor_mC6440E75CAEC0CD2D027F4E33EF5F39CFD8DD7A9 (ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AnimButton::ClosePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimButton_ClosePanel_m72A513CEFB5AE5ABCB225E13810D2C21E15998A2 (AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Menu>().ClickClose(k);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_0;
		L_0 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		int32_t L_1 = __this->get_k_4();
		NullCheck(L_0);
		Menu_ClickClose_m11859E125779CA011FF7A7AC8D596B2D0C80140B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimButton::ActivePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimButton_ActivePanel_m027798E0848846A53A7568A5D58BFB8F8AB99519 (AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Menu>().ClickActive(k);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_0;
		L_0 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		int32_t L_1 = __this->get_k_4();
		NullCheck(L_0);
		Menu_ClickActive_m35743C102B7770FB18F9C7D5AA41DE744184A8BC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimButton::ScrollClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimButton_ScrollClose_m608010869D316BD9AC272F9FB8EB0C09B6659082 (AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Menu>().ScrollClose(k);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_0;
		L_0 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		int32_t L_1 = __this->get_k_4();
		NullCheck(L_0);
		Menu_ScrollClose_m495FD2427AD343ABA5155A5AFEA86B849EB902E2(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimButton::ClickActiveBuyResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimButton_ClickActiveBuyResources_m4EEFB2AF5BBD2B1877591466D888C755714D7738 (AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Menu>().ClickActiveBuyResources(k);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_0;
		L_0 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		int32_t L_1 = __this->get_k_4();
		NullCheck(L_0);
		Menu_ClickActiveBuyResources_m2EE695ED6CD051A14242AB1C40A52666D51681BF(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimButton::ClickActiveBuyCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimButton_ClickActiveBuyCoins_m846CDCA571154FADAEC152AB64A04EA3693904E4 (AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Menu>().ClickActiveBuyCoins(k);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_0;
		L_0 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		int32_t L_1 = __this->get_k_4();
		NullCheck(L_0);
		Menu_ClickActiveBuyCoins_mEBBB8733F539974483B912EB1207CD686B6664B8(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimButton__ctor_mD7E0B957A70AEA8A742C1B34D3BC5AC29E2DEA83 (AnimButton_t2CE88476F02A308EFCC6359E375B393738B94C45 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ControlBlock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBlock_Update_m5D79F9AA20498FE7B3C16E3E9DDE7E05C352D49D (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	float G_B22_0 = 0.0f;
	float G_B20_0 = 0.0f;
	float G_B21_0 = 0.0f;
	float G_B23_0 = 0.0f;
	float G_B23_1 = 0.0f;
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow) || ID_Control.id_control==-1)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->get_id_control_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_007e;
		}
	}

IL_0014:
	{
		// ID_Control.id_control = 0;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(0);
		// transform.position += new Vector3(-1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// if (!ValidMove())
		bool L_7;
		L_7 = ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_020a;
		}
	}
	{
		// transform.position -= new Vector3(-1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_12, /*hidden argument*/NULL);
		// }
		goto IL_020a;
	}

IL_007e:
	{
		// if(Input.GetKeyDown(KeyCode.RightArrow) || ID_Control.id_control == 1)
		bool L_13;
		L_13 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_14 = ((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->get_id_control_4();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00fc;
		}
	}

IL_0092:
	{
		// ID_Control.id_control = 0;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(0);
		// transform.position += new Vector3(1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15;
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_19, /*hidden argument*/NULL);
		// if (!ValidMove())
		bool L_20;
		L_20 = ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61(__this, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_020a;
		}
	}
	{
		// transform.position -= new Vector3(1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_25, /*hidden argument*/NULL);
		// }
		goto IL_020a;
	}

IL_00fc:
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow) || ID_Control.id_control == 2)
		bool L_26;
		L_26 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)273), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_27 = ((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->get_id_control_4();
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_018d;
		}
	}

IL_0110:
	{
		// ID_Control.id_control = 0;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(0);
		// transform.RotateAround(transform.TransformPoint(rotationPoint), new Vector3(0, 0, 1), 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get_rotationPoint_4();
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_28, L_31, L_32, (90.0f), /*hidden argument*/NULL);
		// if (!ValidMove())
		bool L_33;
		L_33 = ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_020a;
		}
	}
	{
		// transform.RotateAround(transform.TransformPoint(rotationPoint), new Vector3(0, 0, 1), -90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get_rotationPoint_4();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_35, L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_38), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_34, L_37, L_38, (-90.0f), /*hidden argument*/NULL);
		// }
		goto IL_020a;
	}

IL_018d:
	{
		// if (Input.GetKeyUp(KeyCode.Space) || ID_Control.id_control == 4)
		bool L_39;
		L_39 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)32), /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_40 = ((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->get_id_control_4();
		if ((!(((uint32_t)L_40) == ((uint32_t)4))))
		{
			goto IL_020a;
		}
	}

IL_019e:
	{
		// ID_Control.id_control = 0;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(0);
		goto IL_01d0;
	}

IL_01a6:
	{
		// transform.position += new Vector3(0, -1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = L_41;
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_45, /*hidden argument*/NULL);
	}

IL_01d0:
	{
		// while (ValidMove())
		bool L_46;
		L_46 = ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61(__this, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_01a6;
		}
	}
	{
		// if (!ValidMove())
		bool L_47;
		L_47 = ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61(__this, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_020a;
		}
	}
	{
		// transform.position += new Vector3(0, 1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = L_48;
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_52, /*hidden argument*/NULL);
	}

IL_020a:
	{
		// if (Time.time - previousTime > ((Input.GetKey(KeyCode.DownArrow) || ID_Control.id_control == 3 )? fallTime / 15 : fallTime))
		float L_53;
		L_53 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_54 = __this->get_previousTime_5();
		bool L_55;
		L_55 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)274), /*hidden argument*/NULL);
		G_B20_0 = ((float)il2cpp_codegen_subtract((float)L_53, (float)L_54));
		if (L_55)
		{
			G_B22_0 = ((float)il2cpp_codegen_subtract((float)L_53, (float)L_54));
			goto IL_0232;
		}
	}
	{
		int32_t L_56 = ((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->get_id_control_4();
		G_B21_0 = G_B20_0;
		if ((((int32_t)L_56) == ((int32_t)3)))
		{
			G_B22_0 = G_B20_0;
			goto IL_0232;
		}
	}
	{
		float L_57 = __this->get_fallTime_6();
		G_B23_0 = L_57;
		G_B23_1 = G_B21_0;
		goto IL_023e;
	}

IL_0232:
	{
		float L_58 = __this->get_fallTime_6();
		G_B23_0 = ((float)((float)L_58/(float)(15.0f)));
		G_B23_1 = G_B22_0;
	}

IL_023e:
	{
		if ((!(((float)G_B23_1) > ((float)G_B23_0))))
		{
			goto IL_02d2;
		}
	}
	{
		// transform.position += new Vector3(0, -1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = L_59;
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_60, L_63, /*hidden argument*/NULL);
		// if (!ValidMove())
		bool L_64;
		L_64 = ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61(__this, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_02c7;
		}
	}
	{
		// transform.position -= new Vector3(0, -1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66 = L_65;
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_66, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_68), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_67, L_68, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_66, L_69, /*hidden argument*/NULL);
		// AddToGrid();
		ControlBlock_AddToGrid_m4655120B930C2CF28F10944946B8AD9FD12512AA(__this, /*hidden argument*/NULL);
		// CheckForLines();
		ControlBlock_CheckForLines_mFEFD693BDEF6D6D97D8500E7C11591F82CA604DC(__this, /*hidden argument*/NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// tag = "Untagged";
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(__this, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		// FindObjectOfType<SpawnBlock>().SpawnNextBlock();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_70;
		L_70 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		NullCheck(L_70);
		SpawnBlock_SpawnNextBlock_m4B841CDA4FE0A301EC6028DA7A3C4AB3831405B8(L_70, /*hidden argument*/NULL);
	}

IL_02c7:
	{
		// previousTime = Time.time;
		float L_71;
		L_71 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_previousTime_5(L_71);
	}

IL_02d2:
	{
		// }
		return;
	}
}
// System.Void ControlBlock::CheckForLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBlock_CheckForLines_mFEFD693BDEF6D6D97D8500E7C11591F82CA604DC (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<SpawnBlock>().CheckForLines();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		NullCheck(L_0);
		SpawnBlock_CheckForLines_m07E26CFE705FC4C6B68FD0B33F69AE8F88A9B965(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlBlock::AddToGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBlock_AddToGrid_m4655120B930C2CF28F10944946B8AD9FD12512AA (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<SpawnBlock>().AddToGrid(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		NullCheck(L_0);
		SpawnBlock_AddToGrid_m737D18DA7B716A6674CB3F09291F3B18E19737A5(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean ControlBlock::ValidMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControlBlock_ValidMove_m93E5063BCAD17FDFEA26263CB999F41A47F37F61 (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FindObjectOfType<SpawnBlock>().ValidMove(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = SpawnBlock_ValidMove_mE1AB4C2C00358D6D41E23543E94FB5B28BFB42C4(L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void ControlBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBlock__ctor_m4DC055DC66DFC9C204E220BAEA47E9A4D51ED040 (ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * __this, const RuntimeMethod* method)
{
	{
		// public float fallTime = 0.8f;
		__this->set_fallTime_6((0.800000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameRound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_Start_mA27000038CB17AEEDBE597C4286C3E211DEAB73E (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_mD27D3C5E5AF2FEFFB5A31FE21F2A242B05352469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// translatorGame = new TranslatorGame();
		TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * L_0 = (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 *)il2cpp_codegen_object_new(TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297_il2cpp_TypeInfo_var);
		TranslatorGame__ctor_m59CB2EB634E7B8A32E1ABA02429B0E5627423E5E(L_0, /*hidden argument*/NULL);
		__this->set_translatorGame_28(L_0);
		// if(PlayerPrefs.HasKey("level"))
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// k = PlayerPrefs.GetInt("level");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		__this->set_k_4(L_2);
		// }
		goto IL_0030;
	}

IL_0029:
	{
		// k = 0;
		__this->set_k_4(0);
	}

IL_0030:
	{
		// maxScore = new LoadResources("max_score_level" + k);
		int32_t* L_3 = __this->get_address_of_k_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C, L_4, /*hidden argument*/NULL);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_6, L_5, /*hidden argument*/NULL);
		__this->set_maxScore_27(L_6);
		// if(PlayerPrefs.HasKey("score"))
		bool L_7;
		L_7 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		// goal_score_level = PlayerPrefs.GetInt("score");
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->set_goal_score_level_26(L_8);
		// }
		goto IL_0088;
	}

IL_006d:
	{
		// goal_score_level =  FindObjectOfType<Level>().levels[k].goal_score;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_9;
		L_9 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_9);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_10 = L_9->get_levels_4();
		int32_t L_11 = __this->get_k_4();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14 = L_13->get_goal_score_1();
		((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->set_goal_score_level_26(L_14);
	}

IL_0088:
	{
		// FindObjectOfType<ScoresManager>().text_goal_score.text = goal_score_level.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * L_15;
		L_15 = Object_FindObjectOfType_TisScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_mD27D3C5E5AF2FEFFB5A31FE21F2A242B05352469(/*hidden argument*/Object_FindObjectOfType_TisScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_mD27D3C5E5AF2FEFFB5A31FE21F2A242B05352469_RuntimeMethod_var);
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_text_goal_score_6();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->get_address_of_goal_score_level_26()), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_17);
		// n_level = number_level_win.text + " ";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_number_level_win_7();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		__this->set_n_level_24(L_20);
		// text_score = text_score_win.text + " ";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_text_score_win_9();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_21);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		__this->set_text_score_25(L_23);
		// number_level_gameover.text = number_level_win.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_number_level_gameover_8();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = __this->get_number_level_win_7();
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_25);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_26);
		// text_level.text = n_level + " " + (k + 1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_text_level_22();
		String_t* L_28 = __this->get_n_level_24();
		int32_t L_29 = __this->get_k_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_31);
		// }
		return;
	}
}
// System.Void GameRound::InMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_InMenu_m5D59EF4526E553A2544E68FD448B0C40561B0D3B (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_mF3C32B80A47A07022DA6AB900DB7DBCAEA4A2C99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Pause>().Outs();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * L_0;
		L_0 = Object_FindObjectOfType_TisPause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_mF3C32B80A47A07022DA6AB900DB7DBCAEA4A2C99(/*hidden argument*/Object_FindObjectOfType_TisPause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_mF3C32B80A47A07022DA6AB900DB7DBCAEA4A2C99_RuntimeMethod_var);
		NullCheck(L_0);
		Pause_Outs_m15F49D5BFF71B1760EA81203E8C9CA29FD27DEC3(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GameRound::CheckScoreMore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameRound_CheckScoreMore_m9A4D38ACA5926C8A95C570675F381BCCBBD25690 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ScoresManager.countScore.Resources >= goal_score_level*x/3;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->get_goal_score_level_26();
		int32_t L_3 = ___x0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))/(int32_t)3))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GameRound::CheckScoreLess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameRound_CheckScoreLess_mB95C60EEB7D31093E59BF30314F9DC0F170D512E (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ScoresManager.countScore.Resources < goal_score_level*x/3;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->get_goal_score_level_26();
		int32_t L_3 = ___x0;
		return (bool)((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))/(int32_t)3))))? 1 : 0);
	}
}
// System.Void GameRound::ViewStar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_ViewStar_m6C5D420C20B913943E80D50D5061FA5615CE1A59 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_0 = NULL;
	{
		// Sprite gh = Resources.Load("Star", typeof(Sprite)) as Sprite;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, L_1, /*hidden argument*/NULL);
		V_0 = ((Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)IsInstSealed((RuntimeObject*)L_2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var));
		// if (CheckScoreMore(1) && CheckScoreLess(2))
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, __this, 1);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean GameRound::CheckScoreLess(System.Int32) */, __this, 2);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// star[0].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_5 = __this->get_star_23();
		NullCheck(L_5);
		int32_t L_6 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = V_0;
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003b:
	{
		// if (CheckScoreMore(2) && CheckScoreLess(3))
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, __this, 2);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		bool L_10;
		L_10 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean GameRound::CheckScoreLess(System.Int32) */, __this, 3);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// star[0].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_11 = __this->get_star_23();
		NullCheck(L_11);
		int32_t L_12 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = V_0;
		NullCheck(L_13);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_13, L_14, /*hidden argument*/NULL);
		// star[1].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_15 = __this->get_star_23();
		NullCheck(L_15);
		int32_t L_16 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = V_0;
		NullCheck(L_17);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006a:
	{
		// if (CheckScoreMore(3))
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, __this, 3);
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		// star[0].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_20 = __this->get_star_23();
		NullCheck(L_20);
		int32_t L_21 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_23 = V_0;
		NullCheck(L_22);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_22, L_23, /*hidden argument*/NULL);
		// star[1].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_24 = __this->get_star_23();
		NullCheck(L_24);
		int32_t L_25 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_27 = V_0;
		NullCheck(L_26);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_26, L_27, /*hidden argument*/NULL);
		// star[2].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_28 = __this->get_star_23();
		NullCheck(L_28);
		int32_t L_29 = 2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_31 = V_0;
		NullCheck(L_30);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_30, L_31, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void GameRound::GameWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_GameWin_mD1ED83089C2A6BDCE8271D871876DD00120657CE (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// ViewStar();
		GameRound_ViewStar_m6C5D420C20B913943E80D50D5061FA5615CE1A59(__this, /*hidden argument*/NULL);
		// if (CheckScoreMore(1) && CheckScoreLess(2) && !PlayerPrefs.HasKey("star"+k.ToString()))
		bool L_0;
		L_0 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, __this, 1);
		if (!L_0)
		{
			goto IL_005e;
		}
	}
	{
		bool L_1;
		L_1 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean GameRound::CheckScoreLess(System.Int32) */, __this, 2);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		int32_t* L_2 = __this->get_address_of_k_4();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005e;
		}
	}
	{
		// PlayerPrefs.SetInt("star" + k.ToString(), 1);
		int32_t* L_6 = __this->get_address_of_k_4();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_7, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_8, 1, /*hidden argument*/NULL);
		// }
		goto IL_0123;
	}

IL_005e:
	{
		// if (CheckScoreMore(2) && CheckScoreLess(3) && (!PlayerPrefs.HasKey("star" + k.ToString())|| PlayerPrefs.GetInt("star"+k.ToString())<2))
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, __this, 2);
		if (!L_9)
		{
			goto IL_00c6;
		}
	}
	{
		bool L_10;
		L_10 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean GameRound::CheckScoreLess(System.Int32) */, __this, 3);
		if (!L_10)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t* L_11 = __this->get_address_of_k_4();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t* L_15 = __this->get_address_of_k_4();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) >= ((int32_t)2)))
		{
			goto IL_00c6;
		}
	}

IL_00a9:
	{
		// PlayerPrefs.SetInt("star" + k.ToString(), 2);
		int32_t* L_19 = __this->get_address_of_k_4();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_20, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_21, 2, /*hidden argument*/NULL);
		// }
		goto IL_0123;
	}

IL_00c6:
	{
		// if (CheckScoreMore(3) && (!PlayerPrefs.HasKey("star" + k.ToString()) || PlayerPrefs.GetInt("star" + k.ToString()) < 3))
		bool L_22;
		L_22 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, __this, 3);
		if (!L_22)
		{
			goto IL_0123;
		}
	}
	{
		int32_t* L_23 = __this->get_address_of_k_4();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0108;
		}
	}
	{
		int32_t* L_27 = __this->get_address_of_k_4();
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_28, /*hidden argument*/NULL);
		int32_t L_30;
		L_30 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) >= ((int32_t)3)))
		{
			goto IL_0123;
		}
	}

IL_0108:
	{
		// PlayerPrefs.SetInt("star" + k.ToString(), 3);
		int32_t* L_31 = __this->get_address_of_k_4();
		String_t* L_32;
		L_32 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_31, /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_32, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_33, 3, /*hidden argument*/NULL);
	}

IL_0123:
	{
		// ScoresManager.countCoins.SaveIntResources();
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_34 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		NullCheck(L_34);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_34, /*hidden argument*/NULL);
		// ActiveControlResources.pauseTimer.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_35 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_pauseTimer_8();
		NullCheck(L_35);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_35, /*hidden argument*/NULL);
		// ActiveControlResources.x2.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_36 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_x2_9();
		NullCheck(L_36);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_36, /*hidden argument*/NULL);
		// ActiveControlResources.destroyLine.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_37 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyLine_10();
		NullCheck(L_37);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_37, /*hidden argument*/NULL);
		// ActiveControlResources.destroyAllLine.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_38 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyAllLine_11();
		NullCheck(L_38);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_38, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("gamewinlevel", k);
		int32_t L_39 = __this->get_k_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7, L_39, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// ChangedTextWin();
		GameRound_ChangedTextWin_mF424B1B3E2DF72AE2653E502955E97E273E2B7B7(__this, /*hidden argument*/NULL);
		// SaveMaxScore(ScoresManager.countScore.Resources, k);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_40 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_40, /*hidden argument*/NULL);
		int32_t L_42 = __this->get_k_4();
		GameRound_SaveMaxScore_m4253A7E594F358960834D6A6D358A67F92FE0253(__this, L_41, L_42, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// panel_win.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_panel_win_5();
		NullCheck(L_43);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_43, (bool)1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameRound::SaveIntResult(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_SaveIntResult_mAC91519E67E609555BE94264039A95112924FAD9 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, String_t* ___keys0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.SetInt(keys, value);
		String_t* L_0 = ___keys0;
		int32_t L_1 = ___value1;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_0, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameRound::SaveMaxScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_SaveMaxScore_m4253A7E594F358960834D6A6D358A67F92FE0253 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, int32_t ___value0, int32_t ___level1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(maxScore.Resources < ScoresManager.countScore.Resources)
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = __this->get_maxScore_27();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		// SaveIntResult("max_score_level" + level, value);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___level1), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___value0;
		GameRound_SaveIntResult_mAC91519E67E609555BE94264039A95112924FAD9(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void GameRound::ChangedTextWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_ChangedTextWin_mF424B1B3E2DF72AE2653E502955E97E273E2B7B7 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// number_level_win.text = n_level + (k + 1).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_number_level_win_7();
		String_t* L_1 = __this->get_n_level_24();
		int32_t L_2 = __this->get_k_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// text_score_win.text = text_score + ScoresManager.countScore.Resources;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_text_score_win_9();
		String_t* L_6 = __this->get_text_score_25();
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_7 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Void GameRound::ChangedTextGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_ChangedTextGameOver_mC76C2815A506BC8F8EA43C345DBEB08A756B1E2D (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// number_level_gameover.text = n_level + (k + 1).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_number_level_gameover_8();
		String_t* L_1 = __this->get_n_level_24();
		int32_t L_2 = __this->get_k_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// text_score_gameover.text = text_score + ScoresManager.countScore.Resources;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_text_score_gameover_10();
		String_t* L_6 = __this->get_text_score_25();
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_7 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Void GameRound::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound_GameOver_m3A869F8CFEFF3BD0242DC986EF24346E4FAE5E87 (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// if(ScoresManager.countScore.Resources < goal_score_level/3)
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->get_goal_score_level_26();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)((int32_t)L_2/(int32_t)3)))))
		{
			goto IL_0078;
		}
	}
	{
		// ScoresManager.countCoins.SaveIntResources();
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		NullCheck(L_3);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_3, /*hidden argument*/NULL);
		// ActiveControlResources.pauseTimer.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_pauseTimer_8();
		NullCheck(L_4);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_4, /*hidden argument*/NULL);
		// ActiveControlResources.x2.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_x2_9();
		NullCheck(L_5);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_5, /*hidden argument*/NULL);
		// ActiveControlResources.destroyLine.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyLine_10();
		NullCheck(L_6);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_6, /*hidden argument*/NULL);
		// ActiveControlResources.destroyAllLine.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_7 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_destroyAllLine_11();
		NullCheck(L_7);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_7, /*hidden argument*/NULL);
		// SaveMaxScore(ScoresManager.countScore.Resources, k);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_8 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_8, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_k_4();
		GameRound_SaveMaxScore_m4253A7E594F358960834D6A6D358A67F92FE0253(__this, L_9, L_10, /*hidden argument*/NULL);
		// ChangedTextGameOver();
		GameRound_ChangedTextGameOver_mC76C2815A506BC8F8EA43C345DBEB08A756B1E2D(__this, /*hidden argument*/NULL);
		// panel_gameover.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_panel_gameover_6();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0078:
	{
		// GameWin();
		GameRound_GameWin_mD1ED83089C2A6BDCE8271D871876DD00120657CE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameRound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameRound__ctor_m35BAA94F2076E98B23978EA2B96DA0328F83D97B (GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Games::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Games__ctor_m043A5C9415BDFED874076A83909A92F2C54E982B (Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Ghost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_Start_m4D58708DF0B0990AD546DD02C95396D5C3BE6D11 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927B8FA775E6D9BECC20D93CD62ABF45AA3B9ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2897FA8FDFED0C42A6117BB52B4214C5D143F5E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// tag = "ghost_block";
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(__this, _stringLiteral927B8FA775E6D9BECC20D93CD62ABF45AA3B9ABE, /*hidden argument*/NULL);
		// foreach (Transform mino in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007d;
		}

IL_0019:
		{
			// foreach (Transform mino in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// Sprite gh = Resources.Load("Ghost", typeof(Sprite)) as Sprite;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_5;
			L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
			L_6 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralA2897FA8FDFED0C42A6117BB52B4214C5D143F5E, L_5, /*hidden argument*/NULL);
			V_1 = ((Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)IsInstSealed((RuntimeObject*)L_6, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var));
			// mino.GetComponent<SpriteRenderer>().sprite= gh;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			NullCheck(L_7);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8;
			L_8 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_7, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = V_1;
			NullCheck(L_8);
			SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_8, L_9, /*hidden argument*/NULL);
			// mino.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0.7f);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = L_7;
			NullCheck(L_10);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11;
			L_11 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_10, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
			memset((&L_12), 0, sizeof(L_12));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (1.0f), (1.0f), (1.0f), (0.699999988f), /*hidden argument*/NULL);
			NullCheck(L_11);
			SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_11, L_12, /*hidden argument*/NULL);
			// mino.GetComponent<SpriteRenderer>().sortingLayerName = "Ghost";
			NullCheck(L_10);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13;
			L_13 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_10, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
			NullCheck(L_13);
			Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_13, _stringLiteralA2897FA8FDFED0C42A6117BB52B4214C5D143F5E, /*hidden argument*/NULL);
		}

IL_007d:
		{
			// foreach (Transform mino in transform)
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0019;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x98, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_2;
			if (!L_17)
			{
				goto IL_0097;
			}
		}

IL_0091:
		{
			RuntimeObject* L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void Ghost::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_Update_m3339B7394A7239AED2A4216B27A5F6E1D430BEB5 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	{
		// FollowActiveTetromino();
		Ghost_FollowActiveTetromino_m561F121B2236C767C45303EE2760FFEE70BDCCC4(__this, /*hidden argument*/NULL);
		// MoveDown();
		Ghost_MoveDown_m2B1376A9847A3D42A3C9D11CE418601658B3DF60(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ghost::FollowActiveTetromino()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_FollowActiveTetromino_m561F121B2236C767C45303EE2760FFEE70BDCCC4 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// Transform currentActiveBlockTransform = GameObject.FindGameObjectWithTag("active_block").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// transform.position = currentActiveBlockTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// transform.rotation = currentActiveBlockTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = V_0;
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ghost::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_MoveDown_m2B1376A9847A3D42A3C9D11CE418601658B3DF60 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	{
		goto IL_002c;
	}

IL_0002:
	{
		// transform.position += new Vector3(0, -1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// while (CheckIsValidPosition())
		bool L_5;
		L_5 = Ghost_CheckIsValidPosition_m5A98FD7085CE6FCD1E1B022F70F356EE43A8CDA0(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}
	{
		// if (!CheckIsValidPosition())
		bool L_6;
		L_6 = Ghost_CheckIsValidPosition_m5A98FD7085CE6FCD1E1B022F70F356EE43A8CDA0(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		// transform.position += new Vector3(0, 1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Boolean Ghost::CheckIsValidPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ghost_CheckIsValidPosition_m5A98FD7085CE6FCD1E1B022F70F356EE43A8CDA0 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Transform mino in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b3;
		}

IL_0011:
		{
			// foreach (Transform mino in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// Vector2 pos = FindObjectOfType<SpawnBlock>().Round(mino.position);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_4;
			L_4 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_1;
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
			L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
			L_8 = SpawnBlock_Round_mAB965B52548508313766CFF9B8238D7637F4330C(L_4, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			// if (FindObjectOfType<SpawnBlock>().CheckInsideGrid(pos) == false)
			SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_9;
			L_9 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_2;
			NullCheck(L_9);
			bool L_11;
			L_11 = SpawnBlock_CheckInsideGrid_mFE62A833B6816882767C66986EA7917CEF804BD5(L_9, L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0xD6, FINALLY_00c0);
		}

IL_0047:
		{
			// if (FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos) != null && FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos).parent.tag == "active_block")
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_12;
			L_12 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_2;
			NullCheck(L_12);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = SpawnBlock_GetTransformAtGridPosition_m3CAEE0F48F5487C8DF1C03180CABC03646366A5D(L_12, L_13, /*hidden argument*/NULL);
			bool L_15;
			L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_007f;
			}
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_16;
			L_16 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_2;
			NullCheck(L_16);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
			L_18 = SpawnBlock_GetTransformAtGridPosition_m3CAEE0F48F5487C8DF1C03180CABC03646366A5D(L_16, L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
			L_19 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_19, /*hidden argument*/NULL);
			bool L_21;
			L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_007f;
			}
		}

IL_007b:
		{
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0xD6, FINALLY_00c0);
		}

IL_007f:
		{
			// if (FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos) != null && FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos).parent != transform)
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_22;
			L_22 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_2;
			NullCheck(L_22);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
			L_24 = SpawnBlock_GetTransformAtGridPosition_m3CAEE0F48F5487C8DF1C03180CABC03646366A5D(L_22, L_23, /*hidden argument*/NULL);
			bool L_25;
			L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00b3;
			}
		}

IL_0092:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * L_26;
			L_26 = Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A(/*hidden argument*/Object_FindObjectOfType_TisSpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_m5B2F5C0BB6B97135212AE3238CDC7E20511BB16A_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_2;
			NullCheck(L_26);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
			L_28 = SpawnBlock_GetTransformAtGridPosition_m3CAEE0F48F5487C8DF1C03180CABC03646366A5D(L_26, L_27, /*hidden argument*/NULL);
			NullCheck(L_28);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
			L_29 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_28, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
			L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			bool L_31;
			L_31 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_29, L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_00b3;
			}
		}

IL_00af:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0xD6, FINALLY_00c0);
		}

IL_00b3:
		{
			// foreach (Transform mino in transform)
			RuntimeObject* L_32 = V_0;
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_0011;
			}
		}

IL_00be:
		{
			IL2CPP_LEAVE(0xD4, FINALLY_00c0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c0;
	}

FINALLY_00c0:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_0;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_4;
			if (!L_35)
			{
				goto IL_00d3;
			}
		}

IL_00cc:
		{
			RuntimeObject* L_36 = V_4;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
		}

IL_00d3:
		{
			IL2CPP_END_FINALLY(192)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
	}

IL_00d4:
	{
		// return true;
		return (bool)1;
	}

IL_00d6:
	{
		// }
		bool L_37 = V_3;
		return L_37;
	}
}
// System.Void Ghost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost__ctor_mD85306F4823FAF1C651A2FEBE432C090D2F34948 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ID_Control::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_Start_m196610EACF7CB7C4E3289FACE835DFB0B1A96FFD (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// id_control = 0;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(0);
		// }
		return;
	}
}
// System.Void ID_Control::ClickLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_ClickLeft_m2C9137249F8D5F9DB1B30219257E9AFC6FFAD550 (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// id_control = -1;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4((-1));
		// }
		return;
	}
}
// System.Void ID_Control::ClickRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_ClickRight_mD582FD5C36521328B7AB2EB8C3DEDA6A0256DBFE (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// id_control = 1;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(1);
		// }
		return;
	}
}
// System.Void ID_Control::ClickRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_ClickRotate_m738AF2FFEE6AB73D01E156A0C2F98AC60579455B (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audRotate.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audRotate_5();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// id_control = 2;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(2);
		// }
		return;
	}
}
// System.Void ID_Control::ClickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_ClickUp_m165AE48F5602DD90B187BF702A9B7D2ED4AC6909 (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// id_control = 0;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(0);
		// }
		return;
	}
}
// System.Void ID_Control::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_ClickDown_mE46CC739249DBC52673606481A03D3BF6B6838A8 (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// id_control = 3;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(3);
		// }
		return;
	}
}
// System.Void ID_Control::ClickDownFast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control_ClickDownFast_mEE0A8A0D1CF0F123A73A6448F75C57844469D193 (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audDownFast.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audDownFast_6();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// id_control = 4;
		((ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_StaticFields*)il2cpp_codegen_static_fields_for(ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE_il2cpp_TypeInfo_var))->set_id_control_4(4);
		// }
		return;
	}
}
// System.Void ID_Control::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ID_Control__ctor_m08BFCCF4E9C0DFCFF8018C41032BFE5758D4D7FD (ID_Control_t7B75BEDBA4D1D68EA9E80B052AFA822E935EB3EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ITimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer__ctor_mD094AC71F5F978027A6EE1EA1B87C4DD917289AF (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// private bool stateTimer = true;
		__this->set_stateTimer_5((bool)1);
		// public ITimer(){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ITimer::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer__ctor_m71477617444E67AC8E4E55EFEB8E2E358FDE371F (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, float ___minuts0, bool ___state1, const RuntimeMethod* method)
{
	{
		// private bool stateTimer = true;
		__this->set_stateTimer_5((bool)1);
		// public ITimer(float minuts,bool state){
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.minuts = minuts;
		float L_0 = ___minuts0;
		__this->set_minuts_4(L_0);
		// this.stateTimer = state;
		bool L_1 = ___state1;
		__this->set_stateTimer_5(L_1);
		// }
		return;
	}
}
// System.Single ITimer::getMillisecunds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_getMillisecunds_m8AF577B7C9A49892A44516FA5CC12F4C6855E8D3 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// return (int)((minuts - (int)minuts) * 100);
		float L_0 = __this->get_minuts_4();
		float L_1 = __this->get_minuts_4();
		return ((float)((float)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)((int32_t)((int32_t)L_1)))))), (float)(100.0f)))))));
	}
}
// System.Single ITimer::getSecunds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_getSecunds_m8065C0DDFDF7C0EB63AF822A9D062859E6DC2AA4 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// return (int)minuts % 60;
		float L_0 = __this->get_minuts_4();
		return ((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_0))%(int32_t)((int32_t)60)))));
	}
}
// System.Single ITimer::getMinuts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_getMinuts_m9018F6E7F7BECB1DD226DC86CD69C6F095306D62 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// return (int)minuts / 60;
		float L_0 = __this->get_minuts_4();
		return ((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_0))/(int32_t)((int32_t)60)))));
	}
}
// System.Single ITimer::get_Times()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// get => minuts;
		float L_0 = __this->get_minuts_4();
		return L_0;
	}
}
// System.Void ITimer::set_Times(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_set_Times_mB33A42A621B30FC8913E520E7187966336F25F24 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minuts = value;
		float L_0 = ___value0;
		__this->set_minuts_4(L_0);
		return;
	}
}
// System.Void ITimer::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_UpdateTime_mA3AFEBC197C616D23487CAC210F7B14F89657C4D (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// if(stateTimer)
		bool L_0 = __this->get_stateTimer_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// this.minuts -= Time.deltaTime;
		float L_1 = __this->get_minuts_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_minuts_4(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void ITimer::pauseTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_pauseTimer_m9796C34762F6564CB80D17FDB32BBF2860C4C83B (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// stateTimer = false;
		__this->set_stateTimer_5((bool)0);
		// }
		return;
	}
}
// System.Void ITimer::startTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITimer_startTimer_mE3CA12B9D2194FFF7AB43D4BE8836DA0A589EDE6 (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// stateTimer = true;
		__this->set_stateTimer_5((bool)1);
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
// System.Void IVolume::.ctor(System.String,System.String,UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume__ctor_m11013DA671C1F83CF11CB562C44C207D204A9829 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, String_t* ___keysVolume0, String_t* ___keysMixer1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnVolumeOn2, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnVolumeOff3, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___mixer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IVolume(string keysVolume, string keysMixer, GameObject btnVolumeOn, GameObject btnVolumeOff, AudioMixerGroup mixer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.keysVolume = keysVolume;
		String_t* L_0 = ___keysVolume0;
		__this->set_keysVolume_1(L_0);
		// this.keysMixer = keysMixer;
		String_t* L_1 = ___keysMixer1;
		__this->set_keysMixer_2(L_1);
		// this.btnVolumeOn = btnVolumeOn;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___btnVolumeOn2;
		__this->set_btnVolumeOn_3(L_2);
		// this.btnVolumeOff = btnVolumeOff;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___btnVolumeOff3;
		__this->set_btnVolumeOff_4(L_3);
		// this.mixer = mixer;
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_4 = ___mixer4;
		__this->set_mixer_5(L_4);
		// flagVolume = new LoadResources(this.keysVolume);
		String_t* L_5 = __this->get_keysVolume_1();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_6, L_5, /*hidden argument*/NULL);
		__this->set_flagVolume_0(L_6);
		// if(flagVolume.Resources == 0)
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_7 = __this->get_flagVolume_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		// Off();
		IVolume_Off_m5B977018E0D19049F471CFCEAB49156AB27C9170(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// On();
		IVolume_On_m6CC6731CE7913E88D1B861CF4BFFC2919EB631CC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IVolume::ClickOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_ClickOn_mABE9511E04F5DF5A03A1AB187B3A8690580BE321 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method)
{
	{
		// flagVolume.Resources = 1;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = __this->get_flagVolume_0();
		NullCheck(L_0);
		LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB(L_0, 1, /*hidden argument*/NULL);
		// On();
		IVolume_On_m6CC6731CE7913E88D1B861CF4BFFC2919EB631CC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IVolume::ClickOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_ClickOff_m325CEF7709B25866AA6AE42528F00A2BC03ECC16 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method)
{
	{
		// flagVolume.Resources = 0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = __this->get_flagVolume_0();
		NullCheck(L_0);
		LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB(L_0, 0, /*hidden argument*/NULL);
		// Off();
		IVolume_Off_m5B977018E0D19049F471CFCEAB49156AB27C9170(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IVolume::On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_On_m6CC6731CE7913E88D1B861CF4BFFC2919EB631CC (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method)
{
	{
		// mixer.audioMixer.SetFloat(keysMixer, -80);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_0 = __this->get_mixer_5();
		NullCheck(L_0);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_1;
		L_1 = AudioMixerGroup_get_audioMixer_mDB232CE003BDC95A3966A4A8547037550561F58A(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_keysMixer_2();
		NullCheck(L_1);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_1, L_2, (-80.0f), /*hidden argument*/NULL);
		// flagVolume.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = __this->get_flagVolume_0();
		NullCheck(L_4);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_4, /*hidden argument*/NULL);
		// btnVolumeOn.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_btnVolumeOn_3();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// btnVolumeOff.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_btnVolumeOff_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IVolume::Off()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVolume_Off_m5B977018E0D19049F471CFCEAB49156AB27C9170 (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * __this, const RuntimeMethod* method)
{
	{
		// mixer.audioMixer.SetFloat(keysMixer, 0);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_0 = __this->get_mixer_5();
		NullCheck(L_0);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_1;
		L_1 = AudioMixerGroup_get_audioMixer_mDB232CE003BDC95A3966A4A8547037550561F58A(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_keysMixer_2();
		NullCheck(L_1);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_1, L_2, (0.0f), /*hidden argument*/NULL);
		// flagVolume.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = __this->get_flagVolume_0();
		NullCheck(L_4);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_4, /*hidden argument*/NULL);
		// btnVolumeOn.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_btnVolumeOn_3();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// btnVolumeOff.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_btnVolumeOff_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
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
// System.Void Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_mBBC9E192AD5FC6CC5FA5DFA55E8CA13E182C353A (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 LoadResources::get_resources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method)
{
	{
		// private int resources { get; set; }
		int32_t L_0 = __this->get_U3CresourcesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void LoadResources::set_resources(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private int resources { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CresourcesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void LoadResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources__ctor_mA9FFB9F8C29E7241CDE822B895167A4A478E46A4 (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method)
{
	{
		// public LoadResources(){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadResources::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// public LoadResources(string key){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.key=key;
		String_t* L_0 = ___key0;
		__this->set_key_1(L_0);
		// if(PlayerPrefs.HasKey(this.key)){
		String_t* L_1 = __this->get_key_1();
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// this.resources=PlayerPrefs.GetInt(this.key);
		String_t* L_3 = __this->get_key_1();
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_3, /*hidden argument*/NULL);
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// this.resources = 0;
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadResources::SaveIntResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07 (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.SetInt(this.key, this.resources);
		String_t* L_0 = __this->get_key_1();
		int32_t L_1;
		L_1 = LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_0, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// LoadResources LoadResources::op_Increment(LoadResources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// LoadResources res = new LoadResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mA9FFB9F8C29E7241CDE822B895167A4A478E46A4(L_0, /*hidden argument*/NULL);
		// x.resources++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ___x0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		// return x;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ___x0;
		return L_5;
	}
}
// LoadResources LoadResources::op_Decrement(LoadResources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Decrement_mCB04209A2D6419F7C6E31DC7521C0753CB615CDF (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// LoadResources res = new LoadResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mA9FFB9F8C29E7241CDE822B895167A4A478E46A4(L_0, /*hidden argument*/NULL);
		// x.resources--;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ___x0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		// return x;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ___x0;
		return L_5;
	}
}
// LoadResources LoadResources::op_Addition(LoadResources,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, int32_t ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadResources res = new LoadResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mA9FFB9F8C29E7241CDE822B895167A4A478E46A4(L_0, /*hidden argument*/NULL);
		// x.resources+=k;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ___x0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___k1;
		NullCheck(L_2);
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		// return x;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ___x0;
		return L_5;
	}
}
// LoadResources LoadResources::op_Subtraction(LoadResources,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * LoadResources_op_Subtraction_m4B1D04B9D30EDD8328965E14FBD13414E0F9D46E (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * ___x0, int32_t ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadResources res = new LoadResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mA9FFB9F8C29E7241CDE822B895167A4A478E46A4(L_0, /*hidden argument*/NULL);
		// x.resources-=k;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ___x0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___k1;
		NullCheck(L_2);
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		// return x;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ___x0;
		return L_5;
	}
}
// System.Int32 LoadResources::get_Resources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method)
{
	{
		// get { return resources; }
		int32_t L_0;
		L_0 = LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void LoadResources::set_Resources(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { resources = value; }
		int32_t L_0 = ___value0;
		LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline(__this, L_0, /*hidden argument*/NULL);
		// set { resources = value; }
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_m50A1B94A03D9E9BE1E2B69E931A1E02943BB2F36 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107ADEBE5850FC36C6B2E726F9E49525A0892E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A0F5DFA3E846ECABECD683BEA957DE1CF520AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B784DFD1CCBBDAB63F92C64AA5B8AC5912D6D42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scroll = scrollVertical.GetComponent<Scrollbar>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_scrollVertical_66();
		NullCheck(L_0);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_1;
		L_1 = GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4(L_0, /*hidden argument*/GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4_RuntimeMethod_var);
		__this->set_scroll_67(L_1);
		// coins = new LoadResources("coins");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_2, _stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_2);
		// pauseTimer = new LoadResources("pauseTimer");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_3, _stringLiteral10A0F5DFA3E846ECABECD683BEA957DE1CF520AE, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_pauseTimer_57(L_3);
		// x2 = new LoadResources("x2");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_4, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_x2_58(L_4);
		// destroyLine = new LoadResources("destroyLine");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_5, _stringLiteral107ADEBE5850FC36C6B2E726F9E49525A0892E8C, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_destroyLine_59(L_5);
		// destroyAllLine = new LoadResources("destroyAllLine");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_6, _stringLiteral6B784DFD1CCBBDAB63F92C64AA5B8AC5912D6D42, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_destroyAllLine_60(L_6);
		// if(PlayerPrefs.HasKey("scroll")){
		bool L_7;
		L_7 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		// scroll.value = PlayerPrefs.GetFloat("scroll");
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_8 = __this->get_scroll_67();
		float L_9;
		L_9 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8, /*hidden argument*/NULL);
		NullCheck(L_8);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_8, L_9, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// anim1 = panel_shop.transform.GetChild(0).GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_panel_shop_23();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13;
		L_13 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_12, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim1_17(L_13);
		// anim2 = panel_coins.transform.GetChild(0).GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_panel_coins_24();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17;
		L_17 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_16, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim2_18(L_17);
		// anim3 = panel_setting.transform.GetChild(0).GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_panel_setting_25();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_19, 0, /*hidden argument*/NULL);
		NullCheck(L_20);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21;
		L_21 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_20, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim3_19(L_21);
		// anim4 = panel_levels.transform.GetChild(0).GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_panel_levels_26();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_25;
		L_25 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_24, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim4_20(L_25);
		// anim5 = panel_record.transform.GetChild(0).GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_panel_record_27();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29;
		L_29 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_28, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim5_21(L_29);
		// anim6 = panel_gamewin.transform.GetChild(0).GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_panel_gamewin_28();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_31, 0, /*hidden argument*/NULL);
		NullCheck(L_32);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_33;
		L_33 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_32, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim6_22(L_33);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// if(PlayerPrefs.HasKey("gamewinlevel")){
		bool L_34;
		L_34 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0160;
		}
	}
	{
		// if(PlayerPrefs.GetInt("gamewinlevel") == all_levels - 1){
		int32_t L_35;
		L_35 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7, /*hidden argument*/NULL);
		int32_t L_36 = __this->get_all_levels_64();
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1))))))
		{
			goto IL_0160;
		}
	}
	{
		// ClickActive(5);
		Menu_ClickActive_m35743C102B7770FB18F9C7D5AA41DE744184A8BC(__this, 5, /*hidden argument*/NULL);
		// PlayerPrefs.DeleteKey("gamewinlevel");
		PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554(_stringLiteral448F4438461B00DB7FFA914594E4451DA89A3EC7, /*hidden argument*/NULL);
	}

IL_0160:
	{
		// count_star = new int[all_levels];
		int32_t L_37 = __this->get_all_levels_64();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_37);
		__this->set_count_star_13(L_38);
		// level();
		Menu_level_m0879645B8B026ADA4C4677AFC03CE25ED0F2BA37(__this, /*hidden argument*/NULL);
		// Star_text.text = CountStar().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = __this->get_Star_text_5();
		int32_t L_40;
		L_40 = Menu_CountStar_m1634242BE4AB95B19A38229160AC0BBAD8DEA4A7(__this, /*hidden argument*/NULL);
		V_0 = L_40;
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_41);
		// text_record_count_star.text = CountStar().ToString() + "/" + (all_levels * 3).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_42 = __this->get_text_record_count_star_43();
		int32_t L_43;
		L_43 = Menu_CountStar_m1634242BE4AB95B19A38229160AC0BBAD8DEA4A7(__this, /*hidden argument*/NULL);
		V_0 = L_43;
		String_t* L_44;
		L_44 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_45 = __this->get_all_levels_64();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)3));
		String_t* L_46;
		L_46 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_47;
		L_47 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_44, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_47);
		// text_record_count_score.text = CountScore().ToString() + "/" + CountMaxScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48 = __this->get_text_record_count_score_44();
		int32_t L_49;
		L_49 = Menu_CountScore_m1B319F451AC3D87DA0189D596C7DC8AF43D7352D(__this, /*hidden argument*/NULL);
		V_0 = L_49;
		String_t* L_50;
		L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_51;
		L_51 = Menu_CountMaxScore_mE6F39CA43F177C7A6BDB4F30DCE027CF9CC9C877(__this, /*hidden argument*/NULL);
		V_0 = L_51;
		String_t* L_52;
		L_52 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_53;
		L_53 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_50, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_52, /*hidden argument*/NULL);
		NullCheck(L_48);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_53);
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_mDF23A59FAEDA72A8B115C4C3CF2ACCAFC6B415AD (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// CheckCoinsBuyResources();
		Menu_CheckCoinsBuyResources_m24C5AF492E0289C555AA51BC2F0CCFFCD7E7DC59(__this, /*hidden argument*/NULL);
		// Coins_text.text = coins.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Coins_text_6();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// pauseTimerText.text = pauseTimer.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_pauseTimerText_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_pauseTimer_57();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// x2Text.text = x2.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_x2Text_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_9 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_x2_58();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// destroyLineText.text = destroyLine.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_destroyLineText_11();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_13 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_destroyLine_59();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// destroyAllLineText.text = destroyAllLine.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_destroyAllLineText_12();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_17 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_destroyAllLine_60();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// Buy_Coins_text.text = txt_coins + Coins_text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_Buy_Coins_text_7();
		String_t* L_21 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_txt_coins_49();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_Coins_text_6();
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_22);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_24);
		// Shop_Coins_text.text = Coins_text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = __this->get_Shop_Coins_text_8();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_Coins_text_6();
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_26);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_27);
		// }
		return;
	}
}
// System.Void Menu::ClickClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickClose_m11859E125779CA011FF7A7AC8D596B2D0C80140B (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___k0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_0046;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0060;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// panel_shop.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_panel_shop_23();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002c:
	{
		// panel_coins.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panel_coins_24();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0039:
	{
		// panel_setting.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_panel_setting_25();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0046:
	{
		// panel_levels.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_panel_levels_26();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0053:
	{
		// panel_record.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_panel_record_27();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0060:
	{
		// panel_gamewin.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_panel_gamewin_28();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::ClickActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickActive_m35743C102B7770FB18F9C7D5AA41DE744184A8BC (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_62();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___k0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_00bb;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// panel_shop.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panel_shop_23();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// anim1.SetTrigger("Scroll_active");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_anim1_17();
		NullCheck(L_3);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_3, _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0047:
	{
		// panel_coins.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_panel_coins_24();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// anim2.SetTrigger("Scroll_active");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim2_18();
		NullCheck(L_5);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_5, _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0064:
	{
		// panel_setting.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_panel_setting_25();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// anim3.SetTrigger("Scroll_active");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_anim3_19();
		NullCheck(L_7);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_7, _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0081:
	{
		// panel_levels.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_panel_levels_26();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// anim4.SetTrigger("Scroll_active");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_anim4_20();
		NullCheck(L_9);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_9, _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_009e:
	{
		// panel_record.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_panel_record_27();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// anim5.SetTrigger("Scroll_active");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get_anim5_21();
		NullCheck(L_11);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_11, _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00bb:
	{
		// panel_gamewin.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_panel_gamewin_28();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// anim6.SetTrigger("Scroll_active");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = __this->get_anim6_22();
		NullCheck(L_13);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_13, _stringLiteral64EC6C954292887FB68640C59B28E4482B8BBFFF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::ScrollClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ScrollClose_m495FD2427AD343ABA5155A5AFEA86B849EB902E2 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_62();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___k0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_005d;
			}
			case 4:
			{
				goto IL_006e;
			}
			case 5:
			{
				goto IL_007f;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// anim1.SetTrigger("Scroll_close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim1_17();
		NullCheck(L_2);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_2, _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003b:
	{
		// anim2.SetTrigger("Scroll_close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_anim2_18();
		NullCheck(L_3);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_3, _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004c:
	{
		// anim3.SetTrigger("Scroll_close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim3_19();
		NullCheck(L_4);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_4, _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005d:
	{
		// anim4.SetTrigger("Scroll_close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim4_20();
		NullCheck(L_5);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_5, _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_006e:
	{
		// anim5.SetTrigger("Scroll_close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_anim5_21();
		NullCheck(L_6);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_6, _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007f:
	{
		// anim6.SetTrigger("Scroll_close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_anim6_22();
		NullCheck(L_7);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_7, _stringLiteral5031C064CC7B908BD5E4E4E601AEDCB46C8B62A4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::ActiveBtn(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ActiveBtn_mC819761F5069488FBA0D8178D3A8B172D62CE92E (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___coin0, int32_t ___nomer_btn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(coins.Resources >= coin){
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___coin0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		// btn_buy[nomer_btn].interactable=true;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_3 = __this->get_btn_buy_55();
		int32_t L_4 = ___nomer_btn1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// btn_buy[nomer_btn].interactable=false;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_7 = __this->get_btn_buy_55();
		int32_t L_8 = ___nomer_btn1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_10, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::CheckCoinsBuyResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_CheckCoinsBuyResources_m24C5AF492E0289C555AA51BC2F0CCFFCD7E7DC59 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// ActiveBtn(50,0);
		Menu_ActiveBtn_mC819761F5069488FBA0D8178D3A8B172D62CE92E(__this, ((int32_t)50), 0, /*hidden argument*/NULL);
		// ActiveBtn(100,1);
		Menu_ActiveBtn_mC819761F5069488FBA0D8178D3A8B172D62CE92E(__this, ((int32_t)100), 1, /*hidden argument*/NULL);
		// ActiveBtn(25,2);
		Menu_ActiveBtn_mC819761F5069488FBA0D8178D3A8B172D62CE92E(__this, ((int32_t)25), 2, /*hidden argument*/NULL);
		// ActiveBtn(200,3);
		Menu_ActiveBtn_mC819761F5069488FBA0D8178D3A8B172D62CE92E(__this, ((int32_t)200), 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::ClickActiveBuyResources(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickActiveBuyResources_m2EE695ED6CD051A14242AB1C40A52666D51681BF (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBuy.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBuy_63();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___k0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_008c;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_0026:
	{
		// coins-=50;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3;
		L_3 = LoadResources_op_Subtraction_m4B1D04B9D30EDD8328965E14FBD13414E0F9D46E(L_2, ((int32_t)50), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_3);
		// pauseTimer++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_pauseTimer_57();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5;
		L_5 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_4, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_pauseTimer_57(L_5);
		// break;
		goto IL_00af;
	}

IL_0048:
	{
		// coins-=100;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_7;
		L_7 = LoadResources_op_Subtraction_m4B1D04B9D30EDD8328965E14FBD13414E0F9D46E(L_6, ((int32_t)100), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_7);
		// x2++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_8 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_x2_58();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_9;
		L_9 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_8, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_x2_58(L_9);
		// break;
		goto IL_00af;
	}

IL_006a:
	{
		// coins-=25;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_10 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_11;
		L_11 = LoadResources_op_Subtraction_m4B1D04B9D30EDD8328965E14FBD13414E0F9D46E(L_10, ((int32_t)25), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_11);
		// destroyLine++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_12 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_destroyLine_59();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_13;
		L_13 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_12, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_destroyLine_59(L_13);
		// break;
		goto IL_00af;
	}

IL_008c:
	{
		// coins-=200;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_14 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_15;
		L_15 = LoadResources_op_Subtraction_m4B1D04B9D30EDD8328965E14FBD13414E0F9D46E(L_14, ((int32_t)200), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_15);
		// destroyAllLine++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_16 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_destroyAllLine_60();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_17;
		L_17 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_16, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_destroyAllLine_60(L_17);
	}

IL_00af:
	{
		// coins.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_18 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		NullCheck(L_18);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_18, /*hidden argument*/NULL);
		// pauseTimer.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_19 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_pauseTimer_57();
		NullCheck(L_19);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_19, /*hidden argument*/NULL);
		// x2.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_20 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_x2_58();
		NullCheck(L_20);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_20, /*hidden argument*/NULL);
		// destroyLine.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_21 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_destroyLine_59();
		NullCheck(L_21);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_21, /*hidden argument*/NULL);
		// destroyAllLine.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_22 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_destroyAllLine_60();
		NullCheck(L_22);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::ClickActiveBuyCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ClickActiveBuyCoins_mEBBB8733F539974483B912EB1207CD686B6664B8 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_62();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___k0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0021;
			}
		}
	}

IL_0021:
	{
		// coins.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		NullCheck(L_2);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Menu::CountStar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Menu_CountStar_m1634242BE4AB95B19A38229160AC0BBAD8DEA4A7 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// sum_star = 0;
		__this->set_sum_star_14(0);
		// for (int i = 0; i < all_levels; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_000b:
	{
		// sum_star += count_star[i];
		int32_t L_0 = __this->get_sum_star_14();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_count_star_13();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_sum_star_14(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_4)));
		// for (int i = 0; i < all_levels; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < all_levels; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_all_levels_64();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// return sum_star;
		int32_t L_8 = __this->get_sum_star_14();
		return L_8;
	}
}
// System.Int32 Menu::CountScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Menu_CountScore_m1B319F451AC3D87DA0189D596C7DC8AF43D7352D (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < all_levels; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0004:
	{
		// if(PlayerPrefs.HasKey("max_score_level" + i)){
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C, L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// sum_Score += PlayerPrefs.GetInt("max_score_level" + i);
		int32_t L_3 = __this->get_sum_Score_16();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C, L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_5, /*hidden argument*/NULL);
		__this->set_sum_Score_16(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_6)));
	}

IL_003f:
	{
		// for(int i = 0; i < all_levels; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0043:
	{
		// for(int i = 0; i < all_levels; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_all_levels_64();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return sum_Score;
		int32_t L_10 = __this->get_sum_Score_16();
		return L_10;
	}
}
// System.Int32 Menu::CountMaxScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Menu_CountMaxScore_mE6F39CA43F177C7A6BDB4F30DCE027CF9CC9C877 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < all_levels; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// sum_maxScore += FindObjectOfType<Level>().levels[i].goal_score;
		int32_t L_0 = __this->get_sum_maxScore_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1;
		L_1 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_1);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_2 = L_1->get_levels_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		int32_t L_6 = L_5->get_goal_score_1();
		__this->set_sum_maxScore_15(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_6)));
		// for(int i = 0; i < all_levels; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0026:
	{
		// for(int i = 0; i < all_levels; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_all_levels_64();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return sum_maxScore;
		int32_t L_10 = __this->get_sum_maxScore_15();
		return L_10;
	}
}
// System.Void Menu::level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_level_m0879645B8B026ADA4C4677AFC03CE25ED0F2BA37 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Sprite gh = Resources.Load("Star", typeof(Sprite)) as Sprite;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, L_1, /*hidden argument*/NULL);
		V_0 = ((Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)IsInstSealed((RuntimeObject*)L_2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var));
		// for (int i = 0; i < all_levels; i++)
		V_1 = 0;
		goto IL_0202;
	}

IL_0021:
	{
		// if (PlayerPrefs.HasKey("star" + i))
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_01fe;
		}
	}
	{
		// btn_level[i].transform.GetChild(1).gameObject.SetActive(true);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_6 = __this->get_btn_level_4();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, 1, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// if(i < all_levels - 1)
		int32_t L_13 = V_1;
		int32_t L_14 = __this->get_all_levels_64();
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))))
		{
			goto IL_0095;
		}
	}
	{
		// btn_level[i+1].transform.GetChild(2).gameObject.SetActive(false);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_15 = __this->get_btn_level_4();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_19, 2, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// btn_level[i+1].interactable=true;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_22 = __this->get_btn_level_4();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// if (PlayerPrefs.GetInt("star" + i) == 1)
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_26, /*hidden argument*/NULL);
		int32_t L_28;
		L_28 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_00e5;
		}
	}
	{
		// count_star[i] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_count_star_13();
		int32_t L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)1);
		// btn_level[i].transform.GetChild(1).transform.GetChild(0).GetComponent<Image>().sprite = gh;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_31 = __this->get_btn_level_4();
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_35, 1, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_37, 0, /*hidden argument*/NULL);
		NullCheck(L_38);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_39;
		L_39 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_38, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_40 = V_0;
		NullCheck(L_39);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_39, L_40, /*hidden argument*/NULL);
		// }
		goto IL_01fe;
	}

IL_00e5:
	{
		// if (PlayerPrefs.GetInt("star" + i) == 2)
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_41, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_42, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)2))))
		{
			goto IL_015e;
		}
	}
	{
		// count_star[i] = 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = __this->get_count_star_13();
		int32_t L_45 = V_1;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int32_t)2);
		// btn_level[i].transform.GetChild(1).transform.GetChild(0).GetComponent<Image>().sprite = gh;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_46 = __this->get_btn_level_4();
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_50, 1, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_52, 0, /*hidden argument*/NULL);
		NullCheck(L_53);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_54;
		L_54 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_53, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_55 = V_0;
		NullCheck(L_54);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_54, L_55, /*hidden argument*/NULL);
		// btn_level[i].transform.GetChild(1).transform.GetChild(1).GetComponent<Image>().sprite = gh;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_56 = __this->get_btn_level_4();
		int32_t L_57 = V_1;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_60, 1, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_62, 1, /*hidden argument*/NULL);
		NullCheck(L_63);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_64;
		L_64 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_63, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_65 = V_0;
		NullCheck(L_64);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_64, L_65, /*hidden argument*/NULL);
		// }
		goto IL_01fe;
	}

IL_015e:
	{
		// if (PlayerPrefs.GetInt("star" + i) == 3)
		String_t* L_66;
		L_66 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_67;
		L_67 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_66, /*hidden argument*/NULL);
		int32_t L_68;
		L_68 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_67, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)3))))
		{
			goto IL_01fe;
		}
	}
	{
		// count_star[i] = 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = __this->get_count_star_13();
		int32_t L_70 = V_1;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (int32_t)3);
		// btn_level[i].transform.GetChild(1).transform.GetChild(0).GetComponent<Image>().sprite = gh;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_71 = __this->get_btn_level_4();
		int32_t L_72 = V_1;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_75, 1, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_77, 0, /*hidden argument*/NULL);
		NullCheck(L_78);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_79;
		L_79 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_78, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_80 = V_0;
		NullCheck(L_79);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_79, L_80, /*hidden argument*/NULL);
		// btn_level[i].transform.GetChild(1).transform.GetChild(1).GetComponent<Image>().sprite = gh;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_81 = __this->get_btn_level_4();
		int32_t L_82 = V_1;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_85, 1, /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_87, 1, /*hidden argument*/NULL);
		NullCheck(L_88);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_89;
		L_89 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_88, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_90 = V_0;
		NullCheck(L_89);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_89, L_90, /*hidden argument*/NULL);
		// btn_level[i].transform.GetChild(1).transform.GetChild(2).GetComponent<Image>().sprite = gh;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_91 = __this->get_btn_level_4();
		int32_t L_92 = V_1;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_95, 1, /*hidden argument*/NULL);
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98;
		L_98 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_97, 2, /*hidden argument*/NULL);
		NullCheck(L_98);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_99;
		L_99 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_98, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_100 = V_0;
		NullCheck(L_99);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_99, L_100, /*hidden argument*/NULL);
	}

IL_01fe:
	{
		// for (int i = 0; i < all_levels; i++)
		int32_t L_101 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_0202:
	{
		// for (int i = 0; i < all_levels; i++)
		int32_t L_102 = V_1;
		int32_t L_103 = __this->get_all_levels_64();
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Menu::ChangeTextPanelLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ChangeTextPanelLevel_mABC27375C2725CAAD7C890597B69BA6400A15966 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// text_nomer_levels.text = tx_nomer_levels + (k + 1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_nomer_levels_29();
		String_t* L_1 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_tx_nomer_levels_50();
		int32_t L_2 = ___k0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// text_goal.text = tx_goal + FindObjectOfType<Level>().levels[k].goal_score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_text_goal_31();
		String_t* L_6 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_tx_goal_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_7;
		L_7 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_7);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_8 = L_7->get_levels_4();
		int32_t L_9 = ___k0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t* L_12 = L_11->get_address_of_goal_score_1();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_13, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_14);
		// time = new ITimer(FindObjectOfType<Level>().levels[k].minut * 60, true);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_15;
		L_15 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_15);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_16 = L_15->get_levels_4();
		int32_t L_17 = ___k0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		float L_20 = L_19->get_minut_0();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_21 = (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 *)il2cpp_codegen_object_new(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var);
		ITimer__ctor_m71477617444E67AC8E4E55EFEB8E2E358FDE371F(L_21, ((float)il2cpp_codegen_multiply((float)L_20, (float)(60.0f))), (bool)1, /*hidden argument*/NULL);
		__this->set_time_65(L_21);
		// text_time.text = tx_time +  time.getMinuts().ToString("00") + ":" + time.getSecunds().ToString("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_text_time_30();
		String_t* L_23 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_tx_time_51();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_24 = __this->get_time_65();
		NullCheck(L_24);
		float L_25;
		L_25 = ITimer_getMinuts_m9018F6E7F7BECB1DD226DC86CD69C6F095306D62(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		String_t* L_26;
		L_26 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_1), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_27 = __this->get_time_65();
		NullCheck(L_27);
		float L_28;
		L_28 = ITimer_getSecunds_m8065C0DDFDF7C0EB63AF822A9D062859E6DC2AA4(L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		String_t* L_29;
		L_29 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_1), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_23, L_26, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_30);
		// maxScore = new LoadResources("max_score_level" + k.ToString());
		String_t* L_31;
		L_31 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___k0), /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral258CB50A390111016EB5815C51C56A5C3BFDF13C, L_31, /*hidden argument*/NULL);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_33 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_33, L_32, /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_maxScore_61(L_33);
		// maxScore.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_34 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_maxScore_61();
		NullCheck(L_34);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_34, /*hidden argument*/NULL);
		// text_goal_achieved.text = tx_goal_achieved + maxScore.Resources;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = __this->get_text_goal_achieved_32();
		String_t* L_36 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_tx_goal_achieved_53();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_37 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_maxScore_61();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_40;
		L_40 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_36, L_39, /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_40);
		// }
		return;
	}
}
// System.Void Menu::clearStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_clearStars_m3BA9668E630177337168EBFB16502F6F33C5246A (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA72A02677C3987BBC09EED5B238FD2D0990032);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Sprite gh = Resources.Load("Star_ghost", typeof(Sprite)) as Sprite;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralFFA72A02677C3987BBC09EED5B238FD2D0990032, L_1, /*hidden argument*/NULL);
		V_0 = ((Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)IsInstSealed((RuntimeObject*)L_2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var));
		// for(int i = 0; i < 3; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_001e:
	{
		// stars_level[i].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_3 = __this->get_stars_level_54();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = V_0;
		NullCheck(L_6);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_7, /*hidden argument*/NULL);
		// for(int i = 0; i < 3; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0030:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Menu::PlayLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_PlayLevel_m3EFB3EECBEFDF968417739871EB445279E2B5151 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_62();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// if(k%10 == 0){
		int32_t L_1 = ___k0;
		if (((int32_t)((int32_t)L_1%(int32_t)((int32_t)10))))
		{
			goto IL_002b;
		}
	}
	{
		// PlayerPrefs.SetFloat("scroll", (float)0.166*(k/10));
		int32_t L_2 = ___k0;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8, ((float)il2cpp_codegen_multiply((float)(0.165999994f), (float)((float)((float)((int32_t)((int32_t)L_2/(int32_t)((int32_t)10))))))), /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
	}

IL_002b:
	{
		// clearStars();
		Menu_clearStars_m3BA9668E630177337168EBFB16502F6F33C5246A(__this, /*hidden argument*/NULL);
		// Sprite gh = Resources.Load("Star", typeof(Sprite)) as Sprite;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, L_4, /*hidden argument*/NULL);
		V_0 = ((Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)IsInstSealed((RuntimeObject*)L_5, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var));
		// ChangeTextPanelLevel(k);
		int32_t L_6 = ___k0;
		Menu_ChangeTextPanelLevel_mABC27375C2725CAAD7C890597B69BA6400A15966(__this, L_6, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("time", FindObjectOfType<Level>().levels[k].minut * 60);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_7;
		L_7 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_7);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_8 = L_7->get_levels_4();
		int32_t L_9 = ___k0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		float L_12 = L_11->get_minut_0();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral51C6279E31F7483126B79E3000116001A915B690, ((float)il2cpp_codegen_multiply((float)L_12, (float)(60.0f))), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("score", FindObjectOfType<Level>().levels[k].goal_score);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_13;
		L_13 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_13);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_14 = L_13->get_levels_4();
		int32_t L_15 = ___k0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		int32_t L_18 = L_17->get_goal_score_1();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_18, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// PlayerPrefs.SetInt("level", k);
		int32_t L_19 = ___k0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_19, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// coins.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_20 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		NullCheck(L_20);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_20, /*hidden argument*/NULL);
		// for(int i=0;i<PlayerPrefs.GetInt("star"+ k);i++)
		V_1 = 0;
		goto IL_00c3;
	}

IL_00b1:
	{
		// stars_level[i].sprite=gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_21 = __this->get_stars_level_54();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_25 = V_0;
		NullCheck(L_24);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_24, L_25, /*hidden argument*/NULL);
		// for(int i=0;i<PlayerPrefs.GetInt("star"+ k);i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00c3:
	{
		// for(int i=0;i<PlayerPrefs.GetInt("star"+ k);i++)
		int32_t L_27 = V_1;
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___k0), /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral36F960BE1B662A036736C7174C9EB1612774F590, L_28, /*hidden argument*/NULL);
		int32_t L_30;
		L_30 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_30)))
		{
			goto IL_00b1;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Menu::LoadGameScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_LoadGameScene_m5571626E15C428FCC6629F89DF54A25F9305AD5B (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::GiveFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_GiveFeedback_mA66E2E41F6413D420C2DC9C7885BBA8859FA0F35 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_62();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// public int all_levels = 70;
		__this->set_all_levels_64(((int32_t)70));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Pause::OpenPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_OpenPause_mAE60B397FB6ABE8DD78D12B6C8269FAD25703C2F (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pause::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_Resume_m3E7596818DA043F9184F6507BB51E298B9F83487 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pause::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_Restart_m534DC75B82B5CEF183E318BA5E5D0FD6CCB3AADB (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pause::Outs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_Outs_m15F49D5BFF71B1760EA81203E8C9CA29FD27DEC3 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audBtn.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audBtn_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause__ctor_m0A16764376F8C9A6D19DE0BB24A41FA81F587928 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PurchaseSource::OnPurchaseComplete(UnityEngine.Purchasing.Product)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseSource_OnPurchaseComplete_m35821CB55ADF1411E7DAA82B9C02A44CDABED4CE (PurchaseSource_t620AC8CE6AE17C233A7A8D2297E78678850A0605 * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F799EC17A43BC611A1590C5CC2DF1C5701BEE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F3395E015095F89CCB9B11C0AB1A6708004241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA67EA36C52FC49763DB862CF1B9C38A9A57885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A4B7999BF2AC8B755C574D138EA8604FF920DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (product.definition.id == "ID_coins_400")
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_0 = ___product0;
		NullCheck(L_0);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_1;
		L_1 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7FA67EA36C52FC49763DB862CF1B9C38A9A57885, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Menu.coins += 400;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5;
		L_5 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_4, ((int32_t)400), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_5);
		// }
		goto IL_00b5;
	}

IL_0030:
	{
		// if (product.definition.id == "ID_coins_1000")
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_6 = ___product0;
		NullCheck(L_6);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_7;
		L_7 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral78F3395E015095F89CCB9B11C0AB1A6708004241, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// Menu.coins += 1000;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_10 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_11;
		L_11 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_10, ((int32_t)1000), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_11);
		// }
		goto IL_00b5;
	}

IL_005d:
	{
		// if (product.definition.id == "ID_coins_1600")
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_12 = ___product0;
		NullCheck(L_12);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_13;
		L_13 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral1F799EC17A43BC611A1590C5CC2DF1C5701BEE3E, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		// Menu.coins += 1600;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_16 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_17;
		L_17 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_16, ((int32_t)1600), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_17);
		// }
		goto IL_00b5;
	}

IL_008a:
	{
		// if (product.definition.id == "ID_coins_2500")
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_18 = ___product0;
		NullCheck(L_18);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_19;
		L_19 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral84A4B7999BF2AC8B755C574D138EA8604FF920DD, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b5;
		}
	}
	{
		// Menu.coins += 2500;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_22 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_23;
		L_23 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_22, ((int32_t)2500), /*hidden argument*/NULL);
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_coins_56(L_23);
	}

IL_00b5:
	{
		// Menu.coins.SaveIntResources();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_24 = ((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->get_coins_56();
		NullCheck(L_24);
		LoadResources_SaveIntResources_mA3A86AC61767B54B22B696FE63D2E65469625A07(L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PurchaseSource::OnPurchaseFailure(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseSource_OnPurchaseFailure_mE0D5538AC70843AA8D69B443B6F3992248227117 (PurchaseSource_t620AC8CE6AE17C233A7A8D2297E78678850A0605 * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral251BCA1EDD19CD243189D1A5017D8FF8AA64B737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33DB4FC9B4154F1ECA0324CA1E4F333B2BF25482);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Purchase of product " + product.definition.id + " failed because " + reason);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_0 = ___product0;
		NullCheck(L_0);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_1;
		L_1 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_1, /*hidden argument*/NULL);
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var, (&___reason1));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___reason1 = *(int32_t*)UnBox(L_3);
		String_t* L_5;
		L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral33DB4FC9B4154F1ECA0324CA1E4F333B2BF25482, L_2, _stringLiteral251BCA1EDD19CD243189D1A5017D8FF8AA64B737, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PurchaseSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseSource__ctor_mDBD40B59201509534EE7A1F409CD6D791428F4BD (PurchaseSource_t620AC8CE6AE17C233A7A8D2297E78678850A0605 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScoresManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_Start_m60453BB7D341F769AB19AE6269E0A4545FEFD868 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78648AD81B975D5F611ACD999BCD22F5C4F8E4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countCoins = new LoadResources("coins");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_0, _stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_0);
		// countLine = new LoadResources("line");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_1, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_1);
		// countScore = new LoadResources("score");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_2, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countScore_11(L_2);
		// countClearLine = new LoadResources("clearLine");
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 *)il2cpp_codegen_object_new(LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4_il2cpp_TypeInfo_var);
		LoadResources__ctor_mE5787671B1AA03D3250FB91F52AAB05F221018FC(L_3, _stringLiteralB78648AD81B975D5F611ACD999BCD22F5C4F8E4C, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countClearLine_12(L_3);
		// countLine.Resources = 0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		NullCheck(L_4);
		LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB(L_4, 0, /*hidden argument*/NULL);
		// countScore.Resources = 0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_5);
		LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB(L_5, 0, /*hidden argument*/NULL);
		// countClearLine.Resources = 0;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_6);
		LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB(L_6, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoresManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_Update_m15F34B40F66461C01CA88E7E9FF26160166D0127 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// text_score.text = countScore.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_score_4();
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// text_line.text = countLine.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_text_line_5();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// text_coins.text = countCoins.Resources.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_text_coins_7();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_9 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// if (countClearLine.Resources > 0)
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_12 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		// if (countClearLine.Resources == 1)
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_14 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// ClearOneLine();
		ScoresManager_ClearOneLine_mBD23D79F4DF9A21D90D13EF825D03F60ECC6A053(__this, /*hidden argument*/NULL);
		// }
		goto IL_00b6;
	}

IL_0079:
	{
		// if (countClearLine.Resources == 2)
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_16 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008e;
		}
	}
	{
		// ClearTwoLine();
		ScoresManager_ClearTwoLine_mF7271EB9909DFF10301990BCEB71013C0FDA9822(__this, /*hidden argument*/NULL);
		// }
		goto IL_00b6;
	}

IL_008e:
	{
		// if (countClearLine.Resources == 3)
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_18 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_00a3;
		}
	}
	{
		// ClearThreeLine();
		ScoresManager_ClearThreeLine_m0D43DEEE0FAE26423A803F8856BEB2E5F32AEB37(__this, /*hidden argument*/NULL);
		// }
		goto IL_00b6;
	}

IL_00a3:
	{
		// if (countClearLine.Resources == 4)
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_20 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)4))))
		{
			goto IL_00b6;
		}
	}
	{
		// ClearFourLine();
		ScoresManager_ClearFourLine_m6D6D1744BB7BB87A0DB75BF180C33B566D083794(__this, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// countClearLine.Resources = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_22 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		NullCheck(L_22);
		LoadResources_set_Resources_m4B2B6BAC7534350AB6F35213E26F82C44B1DD4BB(L_22, 0, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// if (countScore.Resources >= GameRound.goal_score_level)
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_23 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_23, /*hidden argument*/NULL);
		int32_t L_25 = ((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->get_goal_score_level_26();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_00dc;
		}
	}
	{
		// FindObjectOfType<GameRound>().GameWin();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_26;
		L_26 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_26);
		GameRound_GameWin_mD1ED83089C2A6BDCE8271D871876DD00120657CE(L_26, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		// if(Timer.timerGame.Times <= 0){
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_27 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_27);
		float L_28;
		L_28 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_27, /*hidden argument*/NULL);
		if ((!(((float)L_28) <= ((float)(0.0f)))))
		{
			goto IL_00f7;
		}
	}
	{
		// FindObjectOfType<GameRound>().GameOver();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_29;
		L_29 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_29);
		GameRound_GameOver_m3A869F8CFEFF3BD0242DC986EF24346E4FAE5E87(L_29, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void ScoresManager::ClearOneLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearOneLine_mBD23D79F4DF9A21D90D13EF825D03F60ECC6A053 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countScore+=(100*mult_x2);
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		int32_t L_1 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_mult_x2_8();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2;
		L_2 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)100), (int32_t)L_1)), /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countScore_11(L_2);
		// countLine++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4;
		L_4 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_3, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_4);
		// countCoins++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6;
		L_6 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_5, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_6);
		// }
		return;
	}
}
// System.Void ScoresManager::ClearTwoLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearTwoLine_mF7271EB9909DFF10301990BCEB71013C0FDA9822 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countScore+=(300*mult_x2);
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		int32_t L_1 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_mult_x2_8();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2;
		L_2 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)300), (int32_t)L_1)), /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countScore_11(L_2);
		// countLine+=2;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4;
		L_4 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_3, 2, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_4);
		// countCoins+=2;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6;
		L_6 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_5, 2, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_6);
		// }
		return;
	}
}
// System.Void ScoresManager::ClearThreeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearThreeLine_m0D43DEEE0FAE26423A803F8856BEB2E5F32AEB37 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countScore+=(700*mult_x2);
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		int32_t L_1 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_mult_x2_8();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2;
		L_2 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)700), (int32_t)L_1)), /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countScore_11(L_2);
		// countLine+=3;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4;
		L_4 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_3, 3, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_4);
		// countCoins+=3;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6;
		L_6 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_5, 3, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_6);
		// }
		return;
	}
}
// System.Void ScoresManager::ClearFourLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager_ClearFourLine_m6D6D1744BB7BB87A0DB75BF180C33B566D083794 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countScore+=(1500*mult_x2);
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_0 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		int32_t L_1 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_mult_x2_8();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_2;
		L_2 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1500), (int32_t)L_1)), /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countScore_11(L_2);
		// countLine+=4;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_3 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_4;
		L_4 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_3, 4, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_4);
		// countCoins+=4;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_5 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6;
		L_6 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_5, 4, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_6);
		// }
		return;
	}
}
// System.Void ScoresManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager__ctor_mA09A516F1D5769A678B455AF170A2CA5CCE61FF0 (ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoresManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoresManager__cctor_mCC87EA7EA95557D1B2A06978790CEF6789FD9601 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int mult_x2 = 1;
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_mult_x2_8(1);
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
// System.Void SliderScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScore_Start_mE78ADADBB390E68BCC4B9027CCEC7B198A8920CD (SliderScore_t4AF102FE28942884FB814210209A5920332E04EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gh = Resources.Load("Star", typeof(Sprite)) as Sprite;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, L_1, /*hidden argument*/NULL);
		__this->set_gh_7(((Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)IsInstSealed((RuntimeObject*)L_2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_il2cpp_TypeInfo_var)));
		// sl.maxValue = GameRound.goal_score_level;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_sl_4();
		int32_t L_4 = ((GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_StaticFields*)il2cpp_codegen_static_fields_for(GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_il2cpp_TypeInfo_var))->get_goal_score_level_26();
		NullCheck(L_3);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_3, ((float)((float)L_4)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SliderScore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScore_Update_m8FF0899A060287D453CF3481E704CF899C70D8A3 (SliderScore_t4AF102FE28942884FB814210209A5920332E04EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sl.value = ScoresManager.countScore.Resources;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_sl_4();
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_1 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_2)));
		// if (FindObjectOfType<GameRound>().CheckScoreMore(1) && FindObjectOfType<GameRound>().CheckScoreLess(2))
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_3;
		L_3 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, L_3, 1);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_5;
		L_5 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean GameRound::CheckScoreLess(System.Int32) */, L_5, 2);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// stars[0].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_stars_5();
		NullCheck(L_7);
		int32_t L_8 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_gh_7();
		NullCheck(L_9);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0044:
	{
		// if (FindObjectOfType<GameRound>().CheckScoreMore(2) && FindObjectOfType<GameRound>().CheckScoreLess(3))
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_11;
		L_11 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, L_11, 2);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_13;
		L_13 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean GameRound::CheckScoreLess(System.Int32) */, L_13, 3);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		// stars[0].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_15 = __this->get_stars_5();
		NullCheck(L_15);
		int32_t L_16 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = __this->get_gh_7();
		NullCheck(L_17);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_17, L_18, /*hidden argument*/NULL);
		// stars[1].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_19 = __this->get_stars_5();
		NullCheck(L_19);
		int32_t L_20 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_22 = __this->get_gh_7();
		NullCheck(L_21);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0085:
	{
		// if (FindObjectOfType<GameRound>().CheckScoreMore(3))
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_23;
		L_23 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean GameRound::CheckScoreMore(System.Int32) */, L_23, 3);
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// stars[0].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_25 = __this->get_stars_5();
		NullCheck(L_25);
		int32_t L_26 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_28 = __this->get_gh_7();
		NullCheck(L_27);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_27, L_28, /*hidden argument*/NULL);
		// stars[1].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_29 = __this->get_stars_5();
		NullCheck(L_29);
		int32_t L_30 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_32 = __this->get_gh_7();
		NullCheck(L_31);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_31, L_32, /*hidden argument*/NULL);
		// stars[2].sprite = gh;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_33 = __this->get_stars_5();
		NullCheck(L_33);
		int32_t L_34 = 2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_36 = __this->get_gh_7();
		NullCheck(L_35);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_35, L_36, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void SliderScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScore__ctor_m31141C13A211152F903AE5532BAF7D2D9D31488D (SliderScore_t4AF102FE28942884FB814210209A5920332E04EF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnBlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_Start_m9331FDA31D121CD7CBB668C112575BAD6986B49D (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SpawnNextBlock();
		SpawnBlock_SpawnNextBlock_m4B841CDA4FE0A301EC6028DA7A3C4AB3831405B8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnBlock::ClickDestroyLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_ClickDestroyLine_m5D56B213552503CA4CBB0CA063EF4007C73D247E (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// audDestroy.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audDestroy_15();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// int i = 0;
		V_0 = 0;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_004c;
	}

IL_0011:
	{
		// if (grid[j, i] != null)
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_1 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Destroy(grid[j, i].gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_6 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = (L_6)->GetAt(L_7, L_8);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// grid[j, i] = null;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_11 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(L_12, L_13, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
	}

IL_0048:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004c:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_16 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0011;
		}
	}
	{
		// RowDown(i);
		int32_t L_17 = V_0;
		SpawnBlock_RowDown_mB53DFE5044AC838D918D349A3C831A6D99CA67EB(__this, L_17, /*hidden argument*/NULL);
		// ScoresManager.countCoins++;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_18 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_19;
		L_19 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_18, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_19);
		// ScoresManager.countLine++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_20 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_21;
		L_21 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_20, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_21);
		// }
		return;
	}
}
// System.Void SpawnBlock::ClickDestroyAllLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_ClickDestroyAllLine_m06121B557683980AFAA3CCE3B617D53A29212D63 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// audDestroy.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audDestroy_15();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// for (int i = height - 1; i >= 0; i--)
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_height_12();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0085;
	}

IL_0015:
	{
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_0054;
	}

IL_0019:
	{
		// if (grid[j, i] != null)
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_2 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = (L_2)->GetAt(L_3, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// Destroy(grid[j, i].gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_7 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// grid[j, i] = null;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_12 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
	}

IL_0050:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0054:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_17 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0019;
		}
	}
	{
		// RowDown(i);
		int32_t L_18 = V_0;
		SpawnBlock_RowDown_mB53DFE5044AC838D918D349A3C831A6D99CA67EB(__this, L_18, /*hidden argument*/NULL);
		// ScoresManager.countCoins++;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_19 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countCoins_9();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_20;
		L_20 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_19, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countCoins_9(L_20);
		// ScoresManager.countLine++;
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_21 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countLine_10();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_22;
		L_22 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_21, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countLine_10(L_22);
		// for (int i = height - 1; i >= 0; i--)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
	}

IL_0085:
	{
		// for (int i = height - 1; i >= 0; i--)
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// ScoresManager.countScore+=coinsPlus;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_25 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countScore_11();
		int32_t L_26 = __this->get_coinsPlus_16();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_27;
		L_27 = LoadResources_op_Addition_m702E3CE57AF01C433220EE62A2CB9494D9B82C7A(L_25, L_26, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countScore_11(L_27);
		// }
		return;
	}
}
// System.Void SpawnBlock::SpawnNextBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_SpawnNextBlock_m4B841CDA4FE0A301EC6028DA7A3C4AB3831405B8 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!gameStarted)
		bool L_0 = __this->get_gameStarted_11();
		if (L_0)
		{
			goto IL_00a3;
		}
	}
	{
		// gameStarted = true;
		__this->set_gameStarted_11((bool)1);
		// nextBlock = Instantiate(Block[Random.Range(0, Block.Length)], transform.position, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_Block_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Block_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_nextBlock_6(L_9);
		// previewBlock = Instantiate(Block[Random.Range(0, Block.Length)], spawn_position_next.transform.position, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_Block_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_Block_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_spawn_position_next_8();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_14, L_17, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_previewBlock_5(L_19);
		// previewBlock.GetComponent<ControlBlock>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_previewBlock_5();
		NullCheck(L_20);
		ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * L_21;
		L_21 = GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264(L_20, /*hidden argument*/GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var);
		NullCheck(L_21);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_21, (bool)0, /*hidden argument*/NULL);
		// nextBlock.tag = "active_block";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_nextBlock_6();
		NullCheck(L_22);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_22, _stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8, /*hidden argument*/NULL);
		// SpawnGhostBlock();
		SpawnBlock_SpawnGhostBlock_mB71DE697A16A1FF2F8EA75E2D835F871365E433D(__this, /*hidden argument*/NULL);
		// }
		goto IL_0137;
	}

IL_00a3:
	{
		// previewBlock.transform.localPosition = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_previewBlock_5();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_24, L_26, /*hidden argument*/NULL);
		// nextBlock = previewBlock;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_previewBlock_5();
		__this->set_nextBlock_6(L_27);
		// nextBlock.GetComponent<ControlBlock>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_nextBlock_6();
		NullCheck(L_28);
		ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * L_29;
		L_29 = GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264(L_28, /*hidden argument*/GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var);
		NullCheck(L_29);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_29, (bool)1, /*hidden argument*/NULL);
		// nextBlock.tag = "active_block";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_nextBlock_6();
		NullCheck(L_30);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_30, _stringLiteral7772C61A91B50F9735FFFBB5525BD7C75AB0DFA8, /*hidden argument*/NULL);
		// previewBlock = Instantiate(Block[Random.Range(0, Block.Length)], spawn_position_next.transform.position, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_31 = __this->get_Block_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = __this->get_Block_4();
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_34 = L_33;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_spawn_position_next_8();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_35, L_38, L_39, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_previewBlock_5(L_40);
		// previewBlock.GetComponent<ControlBlock>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_previewBlock_5();
		NullCheck(L_41);
		ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * L_42;
		L_42 = GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264(L_41, /*hidden argument*/GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var);
		NullCheck(L_42);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_42, (bool)0, /*hidden argument*/NULL);
		// SpawnGhostBlock();
		SpawnBlock_SpawnGhostBlock_mB71DE697A16A1FF2F8EA75E2D835F871365E433D(__this, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// currentSwaps = 0;
		__this->set_currentSwaps_10(0);
		// }
		return;
	}
}
// System.Void SpawnBlock::SpawnGhostBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_SpawnGhostBlock_mB71DE697A16A1FF2F8EA75E2D835F871365E433D (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGhost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7_mAF1DFBC6266BA82B6281813C805C68334AD3C3C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927B8FA775E6D9BECC20D93CD62ABF45AA3B9ABE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.FindGameObjectsWithTag("ghost_block") != null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral927B8FA775E6D9BECC20D93CD62ABF45AA3B9ABE, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Destroy(GameObject.FindGameObjectWithTag("ghost_block"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral927B8FA775E6D9BECC20D93CD62ABF45AA3B9ABE, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// ghostBlock = Instantiate(nextBlock, nextBlock.transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_nextBlock_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_nextBlock_6();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_ghostBlock_7(L_7);
		// Destroy(ghostBlock.GetComponent<ControlBlock>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_ghostBlock_7();
		NullCheck(L_8);
		ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * L_9;
		L_9 = GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264(L_8, /*hidden argument*/GameObject_GetComponent_TisControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163_m63F4F064097234DBBC19B86B5D791B2095F00264_RuntimeMethod_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		// ghostBlock.AddComponent<Ghost>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_ghostBlock_7();
		NullCheck(L_10);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_11;
		L_11 = GameObject_AddComponent_TisGhost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7_mAF1DFBC6266BA82B6281813C805C68334AD3C3C6(L_10, /*hidden argument*/GameObject_AddComponent_TisGhost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7_mAF1DFBC6266BA82B6281813C805C68334AD3C3C6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean SpawnBlock::CheckInsideGrid(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnBlock_CheckInsideGrid_mFE62A833B6816882767C66986EA7917CEF804BD5 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	{
		// return ((int)pos.x >= 0 && (int)pos.x <= 10 && (int)pos.y >= 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		float L_1 = L_0.get_x_0();
		if ((((int32_t)((int32_t)((int32_t)L_1))) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___pos0;
		float L_3 = L_2.get_x_0();
		if ((((int32_t)((int32_t)((int32_t)L_3))) > ((int32_t)((int32_t)10))))
		{
			goto IL_0023;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___pos0;
		float L_5 = L_4.get_y_1();
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_5))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector2 SpawnBlock::Round(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SpawnBlock_Round_mAB965B52548508313766CFF9B8238D7637F4330C (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	{
		// return new Vector2(Mathf.Round(pos.x), Mathf.Round(pos.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		float L_1 = L_0.get_x_0();
		float L_2;
		L_2 = bankers_roundf(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pos0;
		float L_4 = L_3.get_y_1();
		float L_5;
		L_5 = bankers_roundf(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Transform SpawnBlock::GetTransformAtGridPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SpawnBlock_GetTransformAtGridPosition_m3CAEE0F48F5487C8DF1C03180CABC03646366A5D (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pos.y > height - 1)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		float L_1 = L_0.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_height_12();
		if ((!(((float)L_1) > ((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))))))))
		{
			goto IL_0012;
		}
	}
	{
		// return null;
		return (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
	}

IL_0012:
	{
		// return grid[(int)pos.x, (int)pos.y];
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_3 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___pos0;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___pos0;
		float L_7 = L_6.get_y_1();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = (L_3)->GetAt(((int32_t)((int32_t)L_5)), ((int32_t)((int32_t)L_7)));
		return L_8;
	}
}
// System.Void SpawnBlock::CheckForLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_CheckForLines_m07E26CFE705FC4C6B68FD0B33F69AE8F88A9B965 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = height - 1; i >= 0; i--)
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_height_12();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_003f;
	}

IL_000a:
	{
		// if (HasLine(i))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = SpawnBlock_HasLine_m4C02F3D99F8CA051DCA82986089A8F1CA7671987(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// audDestroy.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audDestroy_15();
		NullCheck(L_3);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_3, /*hidden argument*/NULL);
		// DeleteLine(i);
		int32_t L_4 = V_0;
		SpawnBlock_DeleteLine_m498ECFFE41C081E3F10A463DB26EB45CE3910934(__this, L_4, /*hidden argument*/NULL);
		// RowDown(i);
		int32_t L_5 = V_0;
		SpawnBlock_RowDown_mB53DFE5044AC838D918D349A3C831A6D99CA67EB(__this, L_5, /*hidden argument*/NULL);
		// ScoresManager.countClearLine++;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_6 = ((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->get_countClearLine_12();
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_7;
		L_7 = LoadResources_op_Increment_m1D66569843C29F2B4C95035A694E3C88C1DF452D(L_6, /*hidden argument*/NULL);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_countClearLine_12(L_7);
	}

IL_003b:
	{
		// for (int i = height - 1; i >= 0; i--)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_003f:
	{
		// for (int i = height - 1; i >= 0; i--)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean SpawnBlock::HasLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnBlock_HasLine_m4C02F3D99F8CA051DCA82986089A8F1CA7671987 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int j = 0; j < width; j++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// if (grid[j, i] == null)
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_0 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_1 = V_0;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void SpawnBlock::DeleteLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_DeleteLine_m498ECFFE41C081E3F10A463DB26EB45CE3910934 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int j = 0; j < width; j++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// Destroy(grid[j, i].gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_0 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_1 = V_0;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// grid[j, i] = null;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_5 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_6 = V_0;
		int32_t L_7 = ___i0;
		NullCheck(L_5);
		(L_5)->SetAt(L_6, L_7, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// for (int j = 0; j < width; j++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002b:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SpawnBlock::RowDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_RowDown_mB53DFE5044AC838D918D349A3C831A6D99CA67EB (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int y = i; y < height; y++)
		int32_t L_0 = ___i0;
		V_0 = L_0;
		goto IL_008d;
	}

IL_0007:
	{
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_0081;
	}

IL_000b:
	{
		// if (grid[j, y] != null)
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_1 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// grid[j, y - 1] = grid[j, y];
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_6 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_9 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_6);
		(L_6)->SetAt(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), L_12);
		// grid[j, y] = null;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_13 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(L_14, L_15, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// grid[j, y - 1].transform.position -= new Vector3(0, 1, 0);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_16 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = (L_16)->GetAt(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)));
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = L_20;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_24, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0081:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_27 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_000b;
		}
	}
	{
		// for (int y = i; y < height; y++)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008d:
	{
		// for (int y = i; y < height; y++)
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		int32_t L_30 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_height_12();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SpawnBlock::AddToGrid(ControlBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock_AddToGrid_m737D18DA7B716A6674CB3F09291F3B18E19737A5 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * ___tetromino0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Transform children in tetromino.transform)
		ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * L_0 = ___tetromino0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_000e:
		{
			// foreach (Transform children in tetromino.transform)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// int roundedX = Mathf.RoundToInt(children.transform.position.x);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_1;
			NullCheck(L_5);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
			L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
			float L_8 = L_7.get_x_2();
			int32_t L_9;
			L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			// int roundedY = Mathf.RoundToInt(children.transform.position.y);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_1;
			NullCheck(L_10);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
			float L_13 = L_12.get_y_3();
			int32_t L_14;
			L_14 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_13, /*hidden argument*/NULL);
			V_3 = L_14;
			// grid[roundedX, roundedY] = children;
			IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
			TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_15 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
			int32_t L_16 = V_2;
			int32_t L_17 = V_3;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_1;
			NullCheck(L_15);
			(L_15)->SetAt(L_16, L_17, L_18);
			// if (roundedY >= 17)
			int32_t L_19 = V_3;
			if ((((int32_t)L_19) < ((int32_t)((int32_t)17))))
			{
				goto IL_0062;
			}
		}

IL_0058:
		{
			// FindObjectOfType<GameRound>().GameOver();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_20;
			L_20 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
			NullCheck(L_20);
			GameRound_GameOver_m3A869F8CFEFF3BD0242DC986EF24346E4FAE5E87(L_20, /*hidden argument*/NULL);
		}

IL_0062:
		{
			// foreach (Transform children in tetromino.transform)
			RuntimeObject* L_21 = V_0;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_000e;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x80, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_0;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_24 = V_4;
			if (!L_24)
			{
				goto IL_007f;
			}
		}

IL_0078:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Boolean SpawnBlock::ValidMove(ControlBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnBlock_ValidMove_mE1AB4C2C00358D6D41E23543E94FB5B28BFB42C4 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * ___tetromino0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Transform children in tetromino.transform)
		ControlBlock_t7CC278F9A6137D8E9888FEB0D7732247F296A163 * L_0 = ___tetromino0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_000e:
		{
			// foreach (Transform children in tetromino.transform)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			// int roundedX = Mathf.RoundToInt(children.transform.position.x);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			NullCheck(L_5);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
			L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
			float L_8 = L_7.get_x_2();
			int32_t L_9;
			L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			// int roundedY = Mathf.RoundToInt(children.transform.position.y);
			NullCheck(L_5);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
			L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
			NullCheck(L_10);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
			float L_12 = L_11.get_y_3();
			int32_t L_13;
			L_13 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			// if (roundedX < 0 || roundedX >= width || roundedY < 0 || roundedY >= height+5)
			int32_t L_14 = V_1;
			if ((((int32_t)L_14) < ((int32_t)0)))
			{
				goto IL_005e;
			}
		}

IL_0048:
		{
			int32_t L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
			int32_t L_16 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
			if ((((int32_t)L_15) >= ((int32_t)L_16)))
			{
				goto IL_005e;
			}
		}

IL_0050:
		{
			int32_t L_17 = V_2;
			if ((((int32_t)L_17) < ((int32_t)0)))
			{
				goto IL_005e;
			}
		}

IL_0054:
		{
			int32_t L_18 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
			int32_t L_19 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_height_12();
			if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)5)))))
			{
				goto IL_0062;
			}
		}

IL_005e:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x9A, FINALLY_0084);
		}

IL_0062:
		{
			// if (grid[roundedX, roundedY] != null)
			IL2CPP_RUNTIME_CLASS_INIT(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
			TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_20 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_grid_14();
			int32_t L_21 = V_1;
			int32_t L_22 = V_2;
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
			L_23 = (L_20)->GetAt(L_21, L_22);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_24;
			L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_007a;
			}
		}

IL_0076:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x9A, FINALLY_0084);
		}

IL_007a:
		{
			// foreach (Transform children in tetromino.transform)
			RuntimeObject* L_25 = V_0;
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_000e;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x98, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_0;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_27, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_28 = V_4;
			if (!L_28)
			{
				goto IL_0097;
			}
		}

IL_0090:
		{
			RuntimeObject* L_29 = V_4;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_29);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// return true;
		return (bool)1;
	}

IL_009a:
	{
		// }
		bool L_30 = V_3;
		return L_30;
	}
}
// System.Void SpawnBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock__ctor_mB24C6C1C28A9DE28770BE7E4D67B112A5AD7AF29 (SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2 * __this, const RuntimeMethod* method)
{
	{
		// public int maxSwaps = 2;
		__this->set_maxSwaps_9(2);
		// public int coinsPlus = 2500;
		__this->set_coinsPlus_16(((int32_t)2500));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnBlock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBlock__cctor_m8B4AFB39A2B0580D847277AAAA617F5C6B52D896 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int height = 20;
		((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->set_height_12(((int32_t)20));
		// public static int width = 10;
		((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->set_width_13(((int32_t)10));
		// public static Transform[,] grid = new Transform[width, height];
		int32_t L_0 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_width_13();
		int32_t L_1 = ((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->get_height_12();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_2 = (TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14*)GenArrayNew(TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var, L_3);
		((SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBlock_t7B0359462B574B2B05D9F44E9B07B1F388E109E2_il2cpp_TypeInfo_var))->set_grid_14(L_2);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.HasKey("level"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// k = PlayerPrefs.GetInt("level");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		__this->set_k_15(L_1);
		// }
		goto IL_0025;
	}

IL_001e:
	{
		// k = 0;
		__this->set_k_15(0);
	}

IL_0025:
	{
		// if(PlayerPrefs.HasKey("time")){
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral51C6279E31F7483126B79E3000116001A915B690, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// time_minuts = PlayerPrefs.GetFloat("time");
		float L_3;
		L_3 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral51C6279E31F7483126B79E3000116001A915B690, /*hidden argument*/NULL);
		__this->set_time_minuts_4(L_3);
		// }
		goto IL_0065;
	}

IL_0043:
	{
		// time_minuts = FindObjectOfType<Level>().levels[k].minut * 60;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_4;
		L_4 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_4);
		GamesU5BU5D_t98C07AF773B3850E9CA7E4C1578A4D581DF8A066* L_5 = L_4->get_levels_4();
		int32_t L_6 = __this->get_k_15();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Games_tEE22B592CDA1655C677A5F11C50A9AD079B7C084 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9 = L_8->get_minut_0();
		__this->set_time_minuts_4(((float)il2cpp_codegen_multiply((float)L_9, (float)(60.0f))));
	}

IL_0065:
	{
		// timerGame = new ITimer(time_minuts, true);
		float L_10 = __this->get_time_minuts_4();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_11 = (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 *)il2cpp_codegen_object_new(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var);
		ITimer__ctor_m71477617444E67AC8E4E55EFEB8E2E358FDE371F(L_11, L_10, (bool)1, /*hidden argument*/NULL);
		((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->set_timerGame_12(L_11);
		// pauseTimer = new ITimer(0, false);
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_12 = (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 *)il2cpp_codegen_object_new(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var);
		ITimer__ctor_m71477617444E67AC8E4E55EFEB8E2E358FDE371F(L_12, (0.0f), (bool)0, /*hidden argument*/NULL);
		((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->set_pauseTimer_13(L_12);
		// x2Timer = new ITimer(0, false);
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_13 = (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 *)il2cpp_codegen_object_new(ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0_il2cpp_TypeInfo_var);
		ITimer__ctor_m71477617444E67AC8E4E55EFEB8E2E358FDE371F(L_13, (0.0f), (bool)0, /*hidden argument*/NULL);
		((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->set_x2Timer_14(L_13);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// x2Timer.UpdateTime();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_0 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_0);
		ITimer_UpdateTime_mA3AFEBC197C616D23487CAC210F7B14F89657C4D(L_0, /*hidden argument*/NULL);
		// pauseTimer.UpdateTime();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_1 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_1);
		ITimer_UpdateTime_mA3AFEBC197C616D23487CAC210F7B14F89657C4D(L_1, /*hidden argument*/NULL);
		// sliderX2.value = x2Timer.Times;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_sliderX2_11();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_3 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_3);
		float L_4;
		L_4 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_4);
		// sliderPause.value = pauseTimer.Times;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_sliderPause_10();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_6 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_6);
		float L_7;
		L_7 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_7);
		// if (x2Timer.Times <= 0)
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_8 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_8);
		float L_9;
		L_9 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_8, /*hidden argument*/NULL);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// if(ActiveControlResources.x2.Resources > 0){
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_10 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_x2_9();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// btn_x2.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_btn_x2_7();
		NullCheck(L_12);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// ScoresManager.mult_x2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var);
		((ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_StaticFields*)il2cpp_codegen_static_fields_for(ScoresManager_t3493A980D607C923CEE9A6A11AFB5877BA014497_il2cpp_TypeInfo_var))->set_mult_x2_8(1);
		// x2Timer.pauseTimer();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_13 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_x2Timer_14();
		NullCheck(L_13);
		ITimer_pauseTimer_m9796C34762F6564CB80D17FDB32BBF2860C4C83B(L_13, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// if (pauseTimer.Times <= 0)
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_14 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_14);
		float L_15;
		L_15 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_14, /*hidden argument*/NULL);
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		// if(ActiveControlResources.pauseTimer.Resources > 0){
		LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * L_16 = ((ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_StaticFields*)il2cpp_codegen_static_fields_for(ActiveControlResources_tBD7692B2A83456ED57B4BDD2C7A366BE28891008_il2cpp_TypeInfo_var))->get_pauseTimer_8();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = LoadResources_get_Resources_m53442FC4E7F1203E2309A7213699C6F8FCD37BDD(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		// btn_pause.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = __this->get_btn_pause_6();
		NullCheck(L_18);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_18, (bool)1, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// timerGame.startTimer();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_19 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_19);
		ITimer_startTimer_mE3CA12B9D2194FFF7AB43D4BE8836DA0A589EDE6(L_19, /*hidden argument*/NULL);
		// pauseTimer.pauseTimer();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_20 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_pauseTimer_13();
		NullCheck(L_20);
		ITimer_pauseTimer_m9796C34762F6564CB80D17FDB32BBF2860C4C83B(L_20, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// timerGame.UpdateTime();
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_21 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_21);
		ITimer_UpdateTime_mA3AFEBC197C616D23487CAC210F7B14F89657C4D(L_21, /*hidden argument*/NULL);
		// if (timerGame.Times >= 0)
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_22 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_22);
		float L_23;
		L_23 = ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline(L_22, /*hidden argument*/NULL);
		if ((!(((float)L_23) >= ((float)(0.0f)))))
		{
			goto IL_0146;
		}
	}
	{
		// text_time.text = timerGame.getMinuts().ToString("00") + ":" + timerGame.getSecunds().ToString("00") + ":" + timerGame.getMillisecunds().ToString("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_text_time_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_27 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_27);
		float L_28;
		L_28 = ITimer_getMinuts_m9018F6E7F7BECB1DD226DC86CD69C6F095306D62(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		String_t* L_29;
		L_29 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_32 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_32);
		float L_33;
		L_33 = ITimer_getSecunds_m8065C0DDFDF7C0EB63AF822A9D062859E6DC2AA4(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		String_t* L_34;
		L_34 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * L_37 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_timerGame_12();
		NullCheck(L_37);
		float L_38;
		L_38 = ITimer_getMillisecunds_m8AF577B7C9A49892A44516FA5CC12F4C6855E8D3(L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		String_t* L_39;
		L_39 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40;
		L_40 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_36, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_40);
		// }
		return;
	}

IL_0146:
	{
		// text_time.text = 0.ToString("00") + ":" + 0.ToString("00") + ":" + 0.ToString("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = __this->get_text_time_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		V_1 = 0;
		String_t* L_44;
		L_44 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_1), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_43;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		V_1 = 0;
		String_t* L_47;
		L_47 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_1), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_47);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_46;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		V_1 = 0;
		String_t* L_50;
		L_50 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_1), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_50);
		String_t* L_51;
		L_51 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_49, /*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_51);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Translator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translator_Start_mDE981428E385C88A873A79D9A08E69D91E6C5C51 (Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// translatorMenu = new TranslatorMenu(btn_language_rus, btn_language_eng);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_btn_language_rus_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_btn_language_eng_5();
		TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * L_2 = (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 *)il2cpp_codegen_object_new(TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0_il2cpp_TypeInfo_var);
		TranslatorMenu__ctor_m3A96DA25047B52C50C18A5D317B3B1B4B623569E(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_translatorMenu_7(L_2);
		// }
		return;
	}
}
// System.Void Translator::OnClickTranslateRUS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translator_OnClickTranslateRUS_m6F51DFA6E3CB39CE5F835CE388B7ACE217113C65 (Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audSetting.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audSetting_6();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// translatorMenu.OnTranslatorEnglish();
		TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * L_1 = __this->get_translatorMenu_7();
		NullCheck(L_1);
		TranslatorMenu_OnTranslatorEnglish_m7E77DBA56F5166667E2D00AF05D163018B7ABFCB(L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Language","English");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Translator::OnClickTranslateENG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translator_OnClickTranslateENG_m2419A4082EDF63EFE8D18492AD47CEA187F4B73D (Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audSetting.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audSetting_6();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// translatorMenu.OnTranslatorRussian();
		TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * L_1 = __this->get_translatorMenu_7();
		NullCheck(L_1);
		TranslatorMenu_OnTranslatorRussian_m1C3E9BE6C5A889BBE5C5E3BC6CF33A332EE40191(L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Language","Russian");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Translator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translator__ctor_mEA0E40F510E2C3959AD31E698F89A06EC40F5C3F (Translator_tA2F53C47E442BAA0A14107DA62B83D00A950C34A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TranslatorGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame__ctor_m59CB2EB634E7B8A32E1ABA02429B0E5627423E5E (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TranslatorGame(){
		GameRound__ctor_m35BAA94F2076E98B23978EA2B96DA0328F83D97B(__this, /*hidden argument*/NULL);
		// if(PlayerPrefs.HasKey("Language"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if(PlayerPrefs.GetString("Language") == "Russian")
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// OnTranslatorRussian();
		TranslatorGame_OnTranslatorRussian_mAAC12E22C40B70771A0B5F4FB32F2C4DEA8895CA(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// if(PlayerPrefs.GetString("Language") == "English")
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// OnTranslatorEnglish();
		TranslatorGame_OnTranslatorEnglish_mC06602985F82BA62D07BA4051D2B475C5D04ADCE(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// OnTranslatorRussian();
		TranslatorGame_OnTranslatorRussian_mAAC12E22C40B70771A0B5F4FB32F2C4DEA8895CA(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void TranslatorGame::OnTranslatorRussian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame_OnTranslatorRussian_mAAC12E22C40B70771A0B5F4FB32F2C4DEA8895CA (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3981E6B6943EA68025F9B1CC02C110525624F3BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AF3FBCEC7B2197911FC588EBC4BD712C3713E75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CADE3F56AC3B36A82073A81153A6EC63EA7852B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93ADFC213A427399629E9CBF8769B349656C397F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9441CE41F9555DA2968E5D0ED40E271B3FCEE69A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C76C3D56C712D734E4DCAA3F341B529745B1EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABFA76E6CBEDEBA6269A21A858923B3ACDF5741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC33DFF80AE5B61379F9C1707321BBBEE2CC87DA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97C6AAFDD69585E94AC421DE87B1FC60F0350EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10745B62D29E1561BC659C281C8E74343886210);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Translation(FindObjectOfType<GameRound>().number_level_win, "???????");
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_0;
		L_0 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_number_level_win_7();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_1, _stringLiteralD97C6AAFDD69585E94AC421DE87B1FC60F0350EF, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().number_level_gameover, "???????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_2;
		L_2 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = L_2->get_number_level_gameover_8();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_3, _stringLiteralD97C6AAFDD69585E94AC421DE87B1FC60F0350EF, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_score_win, "??????? ?????:");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_4;
		L_4 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_text_score_win_9();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_5, _stringLiteral8CADE3F56AC3B36A82073A81153A6EC63EA7852B, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_score_gameover, "??????? ?????:");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_6;
		L_6 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_text_score_gameover_10();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_7, _stringLiteral8CADE3F56AC3B36A82073A81153A6EC63EA7852B, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gameover_message, "?? ?? ??????? ?????? ?????????? ?????!!!");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_8;
		L_8 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_text_gameover_message_11();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_9, _stringLiteralC33DFF80AE5B61379F9C1707321BBBEE2CC87DA5, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gameover_restart, "??????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_10;
		L_10 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = L_10->get_text_gameover_restart_12();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_11, _stringLiteral9C76C3D56C712D734E4DCAA3F341B529745B1EE6, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gameover_resume, "??????????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_12;
		L_12 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_text_gameover_resume_13();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_13, _stringLiteral4AF3FBCEC7B2197911FC588EBC4BD712C3713E75, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gamewin_resume, "??????????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_14;
		L_14 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_14);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_text_gamewin_resume_14();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_15, _stringLiteral4AF3FBCEC7B2197911FC588EBC4BD712C3713E75, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_scores, "????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_16;
		L_16 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_16);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = L_16->get_text_scores_15();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_17, _stringLiteral3981E6B6943EA68025F9B1CC02C110525624F3BC, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_line, "?????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_18;
		L_18 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get_text_line_16();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_19, _stringLiteralE10745B62D29E1561BC659C281C8E74343886210, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_goal_achieved, "??????? ????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_20;
		L_20 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_text_goal_achieved_17();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_21, _stringLiteralBABFA76E6CBEDEBA6269A21A858923B3ACDF5741, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause, "?????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_22;
		L_22 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_text_pause_18();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_23, _stringLiteral9441CE41F9555DA2968E5D0ED40E271B3FCEE69A, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause_resume, "??????????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_24;
		L_24 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_24);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = L_24->get_text_pause_resume_19();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_25, _stringLiteral4AF3FBCEC7B2197911FC588EBC4BD712C3713E75, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause_restart, "??????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_26;
		L_26 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_26);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = L_26->get_text_pause_restart_20();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_27, _stringLiteral9C76C3D56C712D734E4DCAA3F341B529745B1EE6, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause_out, "?????");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_28;
		L_28 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_28);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = L_28->get_text_pause_out_21();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_29, _stringLiteral93ADFC213A427399629E9CBF8769B349656C397F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TranslatorGame::OnTranslatorEnglish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame_OnTranslatorEnglish_mC06602985F82BA62D07BA4051D2B475C5D04ADCE (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F577079E23738A9679EA7BF50804A66A34D879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1BBD3BE7FBDDEF7ED15E4128E066DB589D523D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6581286B6AF1F520E6E2B73B996223C3A99E385F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A099545C0446267BF9F207652D47B366BF3FBCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F7716105008679A47EE25B5C46BDD9BBFD28301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6E27D1624FDB59200E6DEB029F7FD509C197289);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Translation(FindObjectOfType<GameRound>().number_level_win, "Level");
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_0;
		L_0 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_number_level_win_7();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_1, _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().number_level_gameover, "Level");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_2;
		L_2 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = L_2->get_number_level_gameover_8();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_3, _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_score_win, "Points scored:");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_4;
		L_4 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_text_score_win_9();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_5, _stringLiteralA6E27D1624FDB59200E6DEB029F7FD509C197289, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_score_gameover, "Points scored:");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_6;
		L_6 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_text_score_gameover_10();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_7, _stringLiteralA6E27D1624FDB59200E6DEB029F7FD509C197289, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gameover_message, "You have not scored the required number of points!!!");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_8;
		L_8 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_text_gameover_message_11();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_9, _stringLiteral6581286B6AF1F520E6E2B73B996223C3A99E385F, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gameover_restart, "Restart");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_10;
		L_10 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = L_10->get_text_gameover_restart_12();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_11, _stringLiteral838E394589B5693706685699154545855BEAE0B2, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gameover_resume, "Resume");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_12;
		L_12 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_text_gameover_resume_13();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_13, _stringLiteral8A099545C0446267BF9F207652D47B366BF3FBCD, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_gamewin_resume, "Resume");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_14;
		L_14 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_14);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_text_gamewin_resume_14();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_15, _stringLiteral8A099545C0446267BF9F207652D47B366BF3FBCD, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_scores, "SCORE");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_16;
		L_16 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_16);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = L_16->get_text_scores_15();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_17, _stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_line, "LINE");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_18;
		L_18 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get_text_line_16();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_19, _stringLiteral5A1BBD3BE7FBDDEF7ED15E4128E066DB589D523D, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_goal_achieved, "GET POINTS");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_20;
		L_20 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_text_goal_achieved_17();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_21, _stringLiteral59F577079E23738A9679EA7BF50804A66A34D879, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause, "Pause");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_22;
		L_22 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_text_pause_18();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_23, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause_resume, "Resume");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_24;
		L_24 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_24);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = L_24->get_text_pause_resume_19();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_25, _stringLiteral8A099545C0446267BF9F207652D47B366BF3FBCD, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause_restart, "Restart");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_26;
		L_26 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_26);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = L_26->get_text_pause_restart_20();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_27, _stringLiteral838E394589B5693706685699154545855BEAE0B2, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<GameRound>().text_pause_out, "Outs");
		GameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C * L_28;
		L_28 = Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767(/*hidden argument*/Object_FindObjectOfType_TisGameRound_t6A02E72260C78AF1914BD099D64AAF241777A47C_m0D7DA253ECEA6A7F2D4F6F729A280AC23F559767_RuntimeMethod_var);
		NullCheck(L_28);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = L_28->get_text_pause_out_21();
		TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990(__this, L_29, _stringLiteral9F7716105008679A47EE25B5C46BDD9BBFD28301, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TranslatorGame::Translation(UnityEngine.UI.Text,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorGame_Translation_mFD204CE5EDB82884C6E1F70B36AB234D74A7B990 (TranslatorGame_t98ECF3D42EFBB2DEDDB66A68FCCF51C8DFC7B297 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___oldText0, String_t* ___newText1, const RuntimeMethod* method)
{
	{
		// oldText.text = newText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___oldText0;
		String_t* L_1 = ___newText1;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void TranslatorMenu::.ctor(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu__ctor_m3A96DA25047B52C50C18A5D317B3B1B4B623569E (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_rus0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_eng1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TranslatorMenu(GameObject btn_rus, GameObject btn_eng){
		Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134(__this, /*hidden argument*/NULL);
		// this.btn_rus = btn_rus;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___btn_rus0;
		__this->set_btn_rus_68(L_0);
		// this.btn_eng = btn_eng;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___btn_eng1;
		__this->set_btn_eng_69(L_1);
		// if(PlayerPrefs.HasKey("Language"))
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// if(PlayerPrefs.GetString("Language") == "Russian")
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// OnTranslatorRussian();
		TranslatorMenu_OnTranslatorRussian_m1C3E9BE6C5A889BBE5C5E3BC6CF33A332EE40191(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003d:
	{
		// if(PlayerPrefs.GetString("Language") == "English")
		String_t* L_5;
		L_5 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral17708B72EC859E0A7BA6DAFBB240D1B447C87E65, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// OnTranslatorEnglish();
		TranslatorMenu_OnTranslatorEnglish_m7E77DBA56F5166667E2D00AF05D163018B7ABFCB(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005a:
	{
		// OnTranslatorRussian();
		TranslatorMenu_OnTranslatorRussian_m1C3E9BE6C5A889BBE5C5E3BC6CF33A332EE40191(__this, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void TranslatorMenu::OnTranslatorRussian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu_OnTranslatorRussian_m1C3E9BE6C5A889BBE5C5E3BC6CF33A332EE40191 (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral099B84B5681B725FB87045EAA488F40C703946DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E9BE5F28B244CB9EDD8EB3EF0E0D3493E58CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C050651E95E5AB75B6E6A40216A792B180E1C6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D10D78F544F04360AD45A797648E1FAFB47FE4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D4319F808180E869823965BDED30E6800D5E3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CDF3B7236EBD95E8D60AA7B01A12A0192090675);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D189F33BC75731D52B3B0FEE15F38DDA0D3705F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3713A6C0E6FE7A22B3D060787C3487463FC6B527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44111E3A38A61B08B1B74434710C1600C4442E26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4838482BD214DAEBB1EAD908042E90CA521D2D1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493E4638F122AAD392B50B1C1CDAD00D82AB3C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60540227E3432813D31B05AF989991E259E41FB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74320554DAA67666E41924B66814392C088ED8AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D0D6F7209CC328B99BAF89E55B660347FAB66E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9227A6BC7A203E819F5C51FCD9C46C746796E00D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963CF07F1DE1EE3CBED3D2FAFA46AF09B727E778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD69E7EB9402DA943DD9C8992BC7B75C200AB85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC263BA5BFDCA69ACF302FFB95D7B44B3A00B14D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD640D88E420626876E2BC6AA18E32337B5AB7491);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7E7CEFFFFFF5FE882320B133C1BB32741BF58E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btn_rus.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_btn_rus_68();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// btn_eng.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_btn_eng_69();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// tx_nomer_levels = "??????? ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_nomer_levels_50(_stringLiteral74320554DAA67666E41924B66814392C088ED8AB);
		// tx_goal = "???????: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_goal_52(_stringLiteral1D10D78F544F04360AD45A797648E1FAFB47FE4A);
		// tx_goal_achieved = "???????: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_goal_achieved_53(_stringLiteral09E9BE5F28B244CB9EDD8EB3EF0E0D3493E58CC7);
		// tx_time = "?????: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_time_51(_stringLiteral2CDF3B7236EBD95E8D60AA7B01A12A0192090675);
		// Translation(FindObjectOfType<Menu>().text_btn_play, "??????");
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_2;
		L_2 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = L_2->get_text_btn_play_33();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_3, _stringLiteralC263BA5BFDCA69ACF302FFB95D7B44B3A00B14D8, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_setting, "?????????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_4;
		L_4 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_text_setting_34();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_5, _stringLiteral60540227E3432813D31B05AF989991E259E41FB6, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_sound, "????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_6;
		L_6 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_text_sound_35();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_7, _stringLiteralAD69E7EB9402DA943DD9C8992BC7B75C200AB85F, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_music, "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_8;
		L_8 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_text_music_36();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_9, _stringLiteral27D4319F808180E869823965BDED30E6800D5E3C, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_btn_review, "???????? ?????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_10;
		L_10 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = L_10->get_text_btn_review_37();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_11, _stringLiteral9227A6BC7A203E819F5C51FCD9C46C746796E00D, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_shop, "???????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_12;
		L_12 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_text_shop_38();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_13, _stringLiteral2D189F33BC75731D52B3B0FEE15F38DDA0D3705F, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[0], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_14;
		L_14 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_14);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_15 = L_14->get_text_buy_btn_resources_47();
		NullCheck(L_15);
		int32_t L_16 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_17, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[1], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_18;
		L_18 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_18);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_19 = L_18->get_text_buy_btn_resources_47();
		NullCheck(L_19);
		int32_t L_20 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_21, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[2], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_22;
		L_22 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_22);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_23 = L_22->get_text_buy_btn_resources_47();
		NullCheck(L_23);
		int32_t L_24 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_25, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[3], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_26;
		L_26 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_26);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_27 = L_26->get_text_buy_btn_resources_47();
		NullCheck(L_27);
		int32_t L_28 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_29, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[0], "????? ???????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_30;
		L_30 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_30);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_31 = L_30->get_text_resources_46();
		NullCheck(L_31);
		int32_t L_32 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_33, _stringLiteral0C050651E95E5AB75B6E6A40216A792B180E1C6C, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[1], "????????? ????????? ??????? ? 2 ????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_34;
		L_34 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_34);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_35 = L_34->get_text_resources_46();
		NullCheck(L_35);
		int32_t L_36 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_37, _stringLiteral099B84B5681B725FB87045EAA488F40C703946DE, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[2], "??????????? ???? ??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_38;
		L_38 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_38);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_39 = L_38->get_text_resources_46();
		NullCheck(L_39);
		int32_t L_40 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_41, _stringLiteral963CF07F1DE1EE3CBED3D2FAFA46AF09B727E778, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[3], "??????????? ???? ??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_42;
		L_42 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_42);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_43 = L_42->get_text_resources_46();
		NullCheck(L_43);
		int32_t L_44 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_45, _stringLiteral493E4638F122AAD392B50B1C1CDAD00D82AB3C5A, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[0], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_46;
		L_46 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_46);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_47 = L_46->get_text_buy_btn_coins_48();
		NullCheck(L_47);
		int32_t L_48 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_49, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[1], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_50;
		L_50 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_50);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_51 = L_50->get_text_buy_btn_coins_48();
		NullCheck(L_51);
		int32_t L_52 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_53, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[2], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_54;
		L_54 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_54);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_55 = L_54->get_text_buy_btn_coins_48();
		NullCheck(L_55);
		int32_t L_56 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_57, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[3], "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_58;
		L_58 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_58);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_59 = L_58->get_text_buy_btn_coins_48();
		NullCheck(L_59);
		int32_t L_60 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_61, _stringLiteralCE86AF24681C31C3173994C3B7E03523992508AB, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_coins, "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_62;
		L_62 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_62);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_63 = L_62->get_text_coins_39();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_63, _stringLiteral3713A6C0E6FE7A22B3D060787C3487463FC6B527, /*hidden argument*/NULL);
		// txt_coins = "??? ??????: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_txt_coins_49(_stringLiteral80D0D6F7209CC328B99BAF89E55B660347FAB66E);
		// Translation(FindObjectOfType<Menu>().text_record, "??????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_64;
		L_64 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_64);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_65 = L_64->get_text_record_40();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_65, _stringLiteralE7E7CEFFFFFF5FE882320B133C1BB32741BF58E8, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_record_max_star, "??????? ?????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_66;
		L_66 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_66);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_67 = L_66->get_text_record_max_star_41();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_67, _stringLiteralD640D88E420626876E2BC6AA18E32337B5AB7491, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_record_max_score, "??????? ?????");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_68;
		L_68 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_68);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_69 = L_68->get_text_record_max_score_42();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_69, _stringLiteral44111E3A38A61B08B1B74434710C1600C4442E26, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_message_gamewin, "?????????? ?? ?????? ??? ??????!!!");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_70;
		L_70 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_70);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_71 = L_70->get_text_message_gamewin_45();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_71, _stringLiteral4838482BD214DAEBB1EAD908042E90CA521D2D1F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TranslatorMenu::OnTranslatorEnglish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu_OnTranslatorEnglish_m7E77DBA56F5166667E2D00AF05D163018B7ABFCB (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07AAA2F6693845965A3972D205AE126F69AE2EFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1938F3EB07E076D0B65A5CDAA69417F00E0246D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD4AE4EE84B9710E7DC704A83C93BB16C5B2541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4E6F844F2FF4C1817994462A6C616C155F4183);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402F9FE34538B052F7FF980F7359F6484BD9057E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD112923E6C1CA79E0851DAF889C2EFCF69FCA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BF20946961A657274841C0E4AB4981274B2191B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8631D1D7AA6C1EFE480CF0DD4CB1CB642636F083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1065D06F317F557E6457D2B703675A090B18AC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF44F175F4785896B5CE83A5590E18F6D1153ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75F9DE07BE041A2FA2EF3826716AA14F239569C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6824F2EB39490F36A74EA8E64F69543D1778A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btn_rus.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_btn_rus_68();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// btn_eng.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_btn_eng_69();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// tx_nomer_levels = "Level ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_nomer_levels_50(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		// tx_goal = "Goal: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_goal_52(_stringLiteralFC6824F2EB39490F36A74EA8E64F69543D1778A5);
		// tx_goal_achieved = "Your record: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_goal_achieved_53(_stringLiteralBF44F175F4785896B5CE83A5590E18F6D1153ED8);
		// tx_time = "Time: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_tx_time_51(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		// Translation(FindObjectOfType<Menu>().text_btn_play, "Play");
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_2;
		L_2 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = L_2->get_text_btn_play_33();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_3, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_setting, "Setting");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_4;
		L_4 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_text_setting_34();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_5, _stringLiteralB1065D06F317F557E6457D2B703675A090B18AC8, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_sound, "Sound");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_6;
		L_6 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_text_sound_35();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_7, _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_music, "Music");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_8;
		L_8 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_text_music_36();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_9, _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_btn_review, "Give feedback");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_10;
		L_10 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = L_10->get_text_btn_review_37();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_11, _stringLiteral5AD112923E6C1CA79E0851DAF889C2EFCF69FCA2, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_shop, "Shop");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_12;
		L_12 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_text_shop_38();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_13, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[0], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_14;
		L_14 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_14);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_15 = L_14->get_text_buy_btn_resources_47();
		NullCheck(L_15);
		int32_t L_16 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_17, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[1], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_18;
		L_18 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_18);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_19 = L_18->get_text_buy_btn_resources_47();
		NullCheck(L_19);
		int32_t L_20 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_21, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[2], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_22;
		L_22 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_22);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_23 = L_22->get_text_buy_btn_resources_47();
		NullCheck(L_23);
		int32_t L_24 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_25, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_resources[3], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_26;
		L_26 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_26);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_27 = L_26->get_text_buy_btn_resources_47();
		NullCheck(L_27);
		int32_t L_28 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_29, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[0], "Pause timer");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_30;
		L_30 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_30);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_31 = L_30->get_text_resources_46();
		NullCheck(L_31);
		int32_t L_32 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_33, _stringLiteral1938F3EB07E076D0B65A5CDAA69417F00E0246D0, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[1], "Increase bonuses by 2 times");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_34;
		L_34 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_34);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_35 = L_34->get_text_resources_46();
		NullCheck(L_35);
		int32_t L_36 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_37, _stringLiteralD75F9DE07BE041A2FA2EF3826716AA14F239569C, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[2], "Destruction of a number of blocks");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_38;
		L_38 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_38);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_39 = L_38->get_text_resources_46();
		NullCheck(L_39);
		int32_t L_40 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_41, _stringLiteral8631D1D7AA6C1EFE480CF0DD4CB1CB642636F083, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_resources[3], "Destruction of all blocks");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_42;
		L_42 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_42);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_43 = L_42->get_text_resources_46();
		NullCheck(L_43);
		int32_t L_44 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_45, _stringLiteral07AAA2F6693845965A3972D205AE126F69AE2EFC, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[0], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_46;
		L_46 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_46);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_47 = L_46->get_text_buy_btn_coins_48();
		NullCheck(L_47);
		int32_t L_48 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_49, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[1], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_50;
		L_50 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_50);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_51 = L_50->get_text_buy_btn_coins_48();
		NullCheck(L_51);
		int32_t L_52 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_53, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[2], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_54;
		L_54 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_54);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_55 = L_54->get_text_buy_btn_coins_48();
		NullCheck(L_55);
		int32_t L_56 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_57, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_buy_btn_coins[3], "Buy");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_58;
		L_58 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_58);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_59 = L_58->get_text_buy_btn_coins_48();
		NullCheck(L_59);
		int32_t L_60 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_61, _stringLiteral2D8094826FE3A8FA2C7F771E946D9A34C4451B7E, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_coins, "Coins");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_62;
		L_62 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_62);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_63 = L_62->get_text_coins_39();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_63, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		// txt_coins = "Your balance: ";
		((Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_il2cpp_TypeInfo_var))->set_txt_coins_49(_stringLiteral3C4E6F844F2FF4C1817994462A6C616C155F4183);
		// Translation(FindObjectOfType<Menu>().text_record, "Record");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_64;
		L_64 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_64);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_65 = L_64->get_text_record_40();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_65, _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_record_max_star, "Stars scored");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_66;
		L_66 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_66);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_67 = L_66->get_text_record_max_star_41();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_67, _stringLiteral5BF20946961A657274841C0E4AB4981274B2191B, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_record_max_score, "Points scored");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_68;
		L_68 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_68);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_69 = L_68->get_text_record_max_score_42();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_69, _stringLiteral2FD4AE4EE84B9710E7DC704A83C93BB16C5B2541, /*hidden argument*/NULL);
		// Translation(FindObjectOfType<Menu>().text_message_gamewin, "Congratulations, you have completed all levels!!!");
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_70;
		L_70 = Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8(/*hidden argument*/Object_FindObjectOfType_TisMenu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6_m3E36F0548F769A2181D46DF5ABDAEBC58C4E95D8_RuntimeMethod_var);
		NullCheck(L_70);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_71 = L_70->get_text_message_gamewin_45();
		TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4(__this, L_71, _stringLiteral402F9FE34538B052F7FF980F7359F6484BD9057E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TranslatorMenu::Translation(UnityEngine.UI.Text,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatorMenu_Translation_m6AA0BD9CB435E530F32F3FE3447B2FCB8DB7C5B4 (TranslatorMenu_t52CC21D27F50B0B5C37F079C9F07A6A3CC9569D0 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___oldText0, String_t* ___newText1, const RuntimeMethod* method)
{
	{
		// oldText.text = newText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___oldText0;
		String_t* L_1 = ___newText1;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void Volume::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_Start_m31AFF376F944CF77AF848F505B4125154A9EAD2F (Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// music = new IVolume(tagVolumeMusic, tagMixerMusic, btnMusicOn, btnMusicOff, mixerMusic);
		String_t* L_0 = __this->get_tagVolumeMusic_10();
		String_t* L_1 = __this->get_tagMixerMusic_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_btnMusicOn_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_btnMusicOff_7();
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_4 = __this->get_mixerMusic_15();
		IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * L_5 = (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 *)il2cpp_codegen_object_new(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529_il2cpp_TypeInfo_var);
		IVolume__ctor_m11013DA671C1F83CF11CB562C44C207D204A9829(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_music_4(L_5);
		// sound = new IVolume(tagVolumeSound, tagMixerSound, btnSoundOn, btnSoundOff, mixerSound);
		String_t* L_6 = __this->get_tagVolumeSound_11();
		String_t* L_7 = __this->get_tagMixerSound_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_btnSoundOn_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_btnSoundOff_9();
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_10 = __this->get_mixerSound_16();
		IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * L_11 = (IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 *)il2cpp_codegen_object_new(IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529_il2cpp_TypeInfo_var);
		IVolume__ctor_m11013DA671C1F83CF11CB562C44C207D204A9829(L_11, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_sound_5(L_11);
		// }
		return;
	}
}
// System.Void Volume::ClickMusicOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_ClickMusicOn_mB0CDDB24D31FD33DD3B6C02799817B6F5D0205D9 (Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE * __this, const RuntimeMethod* method)
{
	{
		// audSetting.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audSetting_14();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// music.ClickOn();
		IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * L_1 = __this->get_music_4();
		NullCheck(L_1);
		IVolume_ClickOn_mABE9511E04F5DF5A03A1AB187B3A8690580BE321(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Volume::ClickMusicOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_ClickMusicOff_mC20EA86DB4F0B4A53EB81BA1411A07AAE80B254A (Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE * __this, const RuntimeMethod* method)
{
	{
		// audSetting.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audSetting_14();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// music.ClickOff();
		IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * L_1 = __this->get_music_4();
		NullCheck(L_1);
		IVolume_ClickOff_m325CEF7709B25866AA6AE42528F00A2BC03ECC16(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Volume::ClickSoundOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_ClickSoundOn_mA2E3AADF8AC04FC46F97BD2F6BDDA1143D40724D (Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE * __this, const RuntimeMethod* method)
{
	{
		// audSetting.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audSetting_14();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// sound.ClickOn();
		IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * L_1 = __this->get_sound_5();
		NullCheck(L_1);
		IVolume_ClickOn_mABE9511E04F5DF5A03A1AB187B3A8690580BE321(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Volume::ClickSoundOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_ClickSoundOff_m8F160B694E6CC59AA372CB3B0D8D8A7E7920B67A (Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE * __this, const RuntimeMethod* method)
{
	{
		// audSetting.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audSetting_14();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// sound.ClickOff();
		IVolume_t277AA5F57BC3C853C4803107E0384B9B1FD41529 * L_1 = __this->get_sound_5();
		NullCheck(L_1);
		IVolume_ClickOff_m325CEF7709B25866AA6AE42528F00A2BC03ECC16(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Volume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume__ctor_mA56519EF57E54FB50C53553DAD3ED0BB29748273 (Volume_tFDE94869302B57FFCE74AC2F1C013FC0AE95C9AE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ITimer_set_Times_mB33A42A621B30FC8913E520E7187966336F25F24_inline (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minuts = value;
		float L_0 = ___value0;
		__this->set_minuts_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ITimer_get_Times_mC85D7EA8679A777309E0212FE87B05DD21B56BFD_inline (ITimer_t642AE6EFE3C87480A89B74798192032D835B8EE0 * __this, const RuntimeMethod* method)
{
	{
		// get => minuts;
		float L_0 = __this->get_minuts_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadResources_set_resources_mD212122659B50D70D6429DB54B230932061B13BA_inline (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private int resources { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CresourcesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadResources_get_resources_mD30F02260833BCFE79757B25DC4643B8ECCF5EDC_inline (LoadResources_t562FCD0267E15DA6EC65C266415C057492E54EA4 * __this, const RuntimeMethod* method)
{
	{
		// private int resources { get; set; }
		int32_t L_0 = __this->get_U3CresourcesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method)
{
	{
		// public ProductDefinition definition { get; private set; }
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
