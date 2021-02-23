// Autogenerated C header file for Random Number Generator
#ifndef _JACDAC_SPEC_RNG_H
#define _JACDAC_SPEC_RNG_H 1

#define JD_SERVICE_CLASS_RNG  0x1789f0a2

// enum Variant (uint8_t)
#define JD_RNG_VARIANT_QUANTUM 0x1
#define JD_RNG_VARIANT_ADCNOISE 0x2
#define JD_RNG_VARIANT_WEB_CRYPTO 0x3

/**
 * Read-only bytes. A register that returns a 64 bytes random buffer on every request.
 * This never blocks for a long time. If you need additional random bytes, keep querying the register.
 */
#define JD_RNG_REG_RANDOM JD_REG_READING

/**
 * Constant Variant (uint8_t). The type of algorithm/technique used to generate the number.
 * `Quantum` refers to dedicated hardware device generating random noise due to quantum effects.
 * `ADCNoise` is the noise from quick readings of analog-digital converter, which reads temperature of the MCU or some floating pin.
 * `WebCrypto` refers is used in simulators, where the source of randomness comes from an advanced operating system.
 */
#define JD_RNG_REG_VARIANT JD_REG_VARIANT

#endif