#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
192,
201,
202,
203,
204,
205,
206,
207,
208,
211,
212,
289,
290,
291,
315,
316,
317,
329,
330,
331,
332,
419,
420,
421,
422,
425,
460,
461,
463,
465,
467,
469,
474,
482,
483,
484,
485,
486,
487,
488,
489,
490,
491,
492,
493,
494,
495,
496,
497,
498,
499,
605,
606,
673,
680,
683,
685,
690,
691,
693,
694,
698,
699,
701,
703,
704,
707,
708,
709,
712,
714,
717,
719,
721,
730,
791,
793,
795,
805,
806,
807,
809,
815,
816,
817,
818,
819,
827,
828,
829,
833,
834,
836,
838,
1035,
1194,
1195,
6920,
6921,
6923,
6924,
6925,
6926,
6927,
6929,
6931,
6933,
6934,
6944,
6946,
6951,
6953,
6955,
6957,
7006,
7012,
7013,
7015,
7016,
7017,
7018,
7019,
7021,
7023,
8040,
8044,
8046,
8047,
8048,
8049,
8298,
8299,
8300,
8301,
8319,
8320,
8321,
8323,
8362,
8422,
8424,
8427,
8435,
8436,
8437,
8438,
8823,
8827,
8828,
8857,
8874,
8881,
8888,
8899,
8902,
8922,
8997,
8999,
9009,
9011,
9012,
9013,
9020,
9034,
9054,
9055,
9063,
9065,
9072,
9073,
9076,
9078,
9083,
9089,
9090,
9097,
9099,
9111,
9114,
9115,
9116,
9127,
9136,
9142,
9143,
9144,
9146,
9147,
9164,
9166,
9180,
9201,
9202,
9203,
9230,
9260,
9261,
9753,
9843,
9844,
10025,
10026,
10031,
10032,
10033,
10038,
10109,
10484,
10485,
10854,
10864,
11530,
11551,
11553,
11555,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 192,
ves_icall_System_Array_InternalCreate,
// token 201,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 202,
ves_icall_System_Array_CanChangePrimitive,
// token 203,
ves_icall_System_Array_FastCopy,
// token 204,
ves_icall_System_Array_GetLengthInternal_raw,
// token 205,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 206,
ves_icall_System_Array_GetGenericValue_icall,
// token 207,
ves_icall_System_Array_GetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetGenericValue_icall,
// token 211,
ves_icall_System_Array_SetValueImpl_raw,
// token 212,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 289,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 290,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 291,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 315,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 316,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 317,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 329,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 330,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 331,
ves_icall_System_Enum_InternalGetCorElementType,
// token 332,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 419,
ves_icall_System_Environment_get_ProcessorCount,
// token 420,
ves_icall_System_Environment_get_TickCount,
// token 421,
ves_icall_System_Environment_get_TickCount64,
// token 422,
ves_icall_System_Environment_Exit,
// token 425,
ves_icall_System_Environment_FailFast_raw,
// token 460,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 461,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 463,
ves_icall_System_GC_SuppressFinalize_raw,
// token 465,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 467,
ves_icall_System_GC_GetGCMemoryInfo,
// token 469,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 474,
ves_icall_System_Object_MemberwiseClone_raw,
// token 482,
ves_icall_System_Math_Acos,
// token 483,
ves_icall_System_Math_Asin,
// token 484,
ves_icall_System_Math_Atan,
// token 485,
ves_icall_System_Math_Atan2,
// token 486,
ves_icall_System_Math_Ceiling,
// token 487,
ves_icall_System_Math_Cos,
// token 488,
ves_icall_System_Math_Cosh,
// token 489,
ves_icall_System_Math_Exp,
// token 490,
ves_icall_System_Math_Floor,
// token 491,
ves_icall_System_Math_Log,
// token 492,
ves_icall_System_Math_Log10,
// token 493,
ves_icall_System_Math_Pow,
// token 494,
ves_icall_System_Math_Sin,
// token 495,
ves_icall_System_Math_Sinh,
// token 496,
ves_icall_System_Math_Sqrt,
// token 497,
ves_icall_System_Math_Tan,
// token 498,
ves_icall_System_Math_Tanh,
// token 499,
ves_icall_System_Math_ModF,
// token 605,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 606,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 673,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 680,
ves_icall_RuntimeType_make_array_type_raw,
// token 683,
ves_icall_RuntimeType_make_byref_type_raw,
// token 685,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 690,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 691,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 693,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 694,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 698,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 699,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 701,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 703,
ves_icall_System_RuntimeType_getFullName_raw,
// token 704,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 707,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 708,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 709,
ves_icall_RuntimeType_GetFields_native_raw,
// token 712,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 714,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 717,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 719,
ves_icall_RuntimeType_GetName_raw,
// token 721,
ves_icall_RuntimeType_GetNamespace_raw,
// token 730,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 791,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 793,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 795,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 805,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 806,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 807,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 809,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 815,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 816,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 817,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 818,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 819,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 827,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 828,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 829,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 833,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 834,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 836,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 838,
ves_icall_System_String_FastAllocateString_raw,
// token 1035,
ves_icall_System_Type_internal_from_handle_raw,
// token 1194,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1195,
ves_icall_System_ValueType_Equals_raw,
// token 6920,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6921,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6923,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6924,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6925,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6926,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6927,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6929,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6931,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6933,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6934,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6944,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6946,
mono_monitor_exit_icall_raw,
// token 6951,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6953,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6955,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6957,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7006,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 7012,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7013,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7015,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7016,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7017,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7018,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7019,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7021,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7023,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8040,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8044,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8046,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8047,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8048,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8049,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8298,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8299,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8300,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8301,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8319,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8320,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8321,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8323,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8362,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8422,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8424,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8427,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8435,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8436,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8437,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8438,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8823,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8827,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8828,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8857,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8874,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8881,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8888,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8899,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8902,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8922,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8997,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8999,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9009,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9011,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9012,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9013,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9020,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9034,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9054,
ves_icall_reflection_get_token_raw,
// token 9055,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9063,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9065,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9072,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9073,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9076,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9078,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9083,
ves_icall_reflection_get_token_raw,
// token 9089,
ves_icall_get_method_info_raw,
// token 9090,
ves_icall_get_method_attributes,
// token 9097,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9099,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9111,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9114,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9115,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9116,
ves_icall_reflection_get_token_raw,
// token 9127,
ves_icall_InternalInvoke_raw,
// token 9136,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9142,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9143,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9144,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9146,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9147,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9164,
ves_icall_InvokeClassConstructor_raw,
// token 9166,
ves_icall_InternalInvoke_raw,
// token 9180,
ves_icall_reflection_get_token_raw,
// token 9201,
ves_icall_reflection_get_token_raw,
// token 9202,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9203,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9230,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9260,
ves_icall_reflection_get_token_raw,
// token 9261,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9753,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9843,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9844,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10025,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10026,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10031,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10032,
ves_icall_ModuleBuilder_getToken_raw,
// token 10033,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10038,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10109,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10484,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10485,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10854,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10864,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11530,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11551,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11553,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11555,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
