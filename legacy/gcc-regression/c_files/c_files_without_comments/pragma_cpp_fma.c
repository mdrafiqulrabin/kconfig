 
 
 
 
 

 
#pragma GCC target ("fpu=vfp")

#pragma GCC push_options
#pragma GCC target ("fpu=crypto-neon-fp-armv8")

#ifndef __ARM_FEATURE_FMA
#error "__ARM_FEATURE_FMA is not defined but should be"
#endif

#ifndef __ARM_FEATURE_CRYPTO
#error "__ARM_FEATURE_CRYPTO is not defined but should be"
#endif

#if __ARM_NEON_FP != 6
#error "__ARM_NEON_FP"
#endif

#if __ARM_FP != 14
#error "__ARM_FP"
#endif

#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC target ("fpu=neon-vfpv4")
#pragma GCC pop_options

#ifdef __ARM_FEATURE_FMA
#error "__ARM_FEATURE_FMA is defined but should not be"
#endif



