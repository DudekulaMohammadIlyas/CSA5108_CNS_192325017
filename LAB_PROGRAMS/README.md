# Cryptography and Network Security (CSA5108) - Lab Programs

**Course Code:** CSA5108 - Cryptography and Network Security  
**Student Register Number:** 192325017  
**Directory:** `LAB_PROGRAMS/`

---

## Overview

This repository contains C implementations of 40 lab experiments covering foundational concepts in classical cryptography, modern symmetric key algorithms, asymmetric (public-key) cryptography, cryptographic hash functions, digital signatures, and cryptanalytic attacks.

Each program is designed to be concise, self-contained, easy to understand, and written without inline code comments to maintain clean academic code style.

---

## Category-wise Index

### 1. Classical Substitution & Transposition Ciphers
- **[1_caesar_cipher.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/1_caesar_cipher.c)**: Caesar cipher shift encryption and modular decryption.
- **[2_monoalphabetic_cipher.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/2_monoalphabetic_cipher.c)**: General monoalphabetic substitution with a 26-letter key mapping.
- **[3_playfair_cipher.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/3_playfair_cipher.c)**: $5 \times 5$ matrix Playfair cipher with automatic digraph splitting and padding.
- **[4_polyalphabetic_cipher.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/4_polyalphabetic_cipher.c)**: Vigenère polyalphabetic cipher with repeating keyword shift.
- **[5_affine_cipher.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/5_affine_cipher.c)**: Affine cipher $C = (ap + b) \bmod 26$ and allowed keys analysis.
- **[8_keyword_monoalphabetic.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/8_keyword_monoalphabetic.c)**: Monoalphabetic sequence generated from a user keyword.
- **[9_playfair_pt109.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/9_playfair_pt109.c)**: Historical PT-109 message decryption using Playfair keyword `"ROYAL NEW ZEALAND NAVY"`.
- **[10_playfair_matrix.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/10_playfair_matrix.c)**: Playfair encryption using Cadogan West pre-configured key matrix.
- **[11_playfair_keyspace.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/11_playfair_keyspace.c)**: Total keyspace ($25! \approx 2^{84}$) vs. effectively unique keys ($24! \approx 2^{79}$).
- **[14_onetime_pad_vigenere.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/14_onetime_pad_vigenere.c)**: One-Time Pad Vigenère cipher and keystream manipulation.
- **[35_vigenere_otp.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/35_vigenere_otp.c)**: General OTP Vigenère cipher with random integer keystream.
- **[36_affine_caesar.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/36_affine_caesar.c)**: One-to-one mapping requirement ($\gcd(a, 26) = 1$) and collision demonstration.

### 2. Linear Matrix Ciphers (Hill Cipher) & Attacks
- **[12_hill_cipher.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/12_hill_cipher.c)**: $2 \times 2$ Hill cipher encryption and matrix inverse decryption.
- **[13_hill_known_plaintext.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/13_hill_known_plaintext.c)**: Known Plaintext Attack (KPA) and Chosen Plaintext Attack (CPA) on Hill cipher.
- **[38_hill_kpa_cpa.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/38_hill_kpa_cpa.c)**: Compact implementation of KPA matrix inversion and CPA identity matrix attack.

### 3. Cryptanalysis & Automated Frequency Attacks
- **[6_affine_break.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/6_affine_break.c)**: Solving Affine cipher keys via frequency analysis ('B' and 'U').
- **[7_simple_substitution.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/7_simple_substitution.c)**: Cryptanalysis and decryption of Edgar Allan Poe's Gold Bug cipher.
- **[15_additive_frequency_attack.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/15_additive_frequency_attack.c)**: Automated frequency scoring attack on additive ciphers with top $N$ ranking.
- **[16_mono_frequency_attack.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/16_mono_frequency_attack.c)**: Automated frequency attack on monoalphabetic substitution ciphers.
- **[37_mono_frequency_attack.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/37_mono_frequency_attack.c)**: Monoalphabetic substitution frequency attack with user interface.
- **[39_additive_frequency_attack.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/39_additive_frequency_attack.c)**: Additive cipher automated frequency attack supporting top $N$ plaintexts.
- **[40_mono_frequency_attack.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/40_mono_frequency_attack.c)**: Clean monoalphabetic cryptanalysis tool producing candidate plaintexts.

### 4. Symmetric Block Ciphers & Operational Modes
- **[17_des_decryption_keys.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/17_des_decryption_keys.c)**: DES decryption subkey schedule using circular right shifts.
- **[18_des_subkey_bits.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/18_des_subkey_bits.c)**: Verification of PC-2 24-bit split from disjoint $C$ and $D$ halves.
- **[19_3des_cbc.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/19_3des_cbc.c)**: Triple-DES (3DES) in CBC mode with security vs. performance tradeoffs.
- **[20_ecb_cbc_error_propagation.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/20_ecb_cbc_error_propagation.c)**: Error propagation analysis in ECB vs. CBC transmission.
- **[21_padding_modes.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/21_padding_modes.c)**: Bit-padding (`0x80` + `0x00`s) in block modes (ECB, CBC, CFB).
- **[22_sdes_cbc.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/22_sdes_cbc.c)**: Simplified DES (S-DES) encryption and decryption in CBC mode.
- **[23_sdes_ctr.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/23_sdes_ctr.c)**: Simplified DES (S-DES) in Counter (CTR) mode.
- **[30_cbc_mac_extension.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/30_cbc_mac_extension.c)**: CBC-MAC length-extension forgery attack on variable-length messages.
- **[31_cmac_subkey.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/31_cmac_subkey.c)**: CMAC subkey generation for 64-bit and 128-bit blocks ($GF(2^b)$ reduction).
- **[33_des_64bit.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/33_des_64bit.c)**: Complete 64-bit block DES algorithm with 16 Feistel rounds and S-boxes.
- **[34_padding_motivation.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/34_padding_motivation.c)**: Unconditional padding block motivation for unambiguous parsing.

### 5. Asymmetric Key Cryptography (RSA & Diffie-Hellman)
- **[24_rsa_private_key.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/24_rsa_private_key.c)**: Factoring $n = 3599$ and finding private key $d$ for public key $e = 31$.
- **[25_rsa_common_factor.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/25_rsa_common_factor.c)**: RSA break when plaintext block shares a common factor with modulus $n$.
- **[26_rsa_leaked_key.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/26_rsa_leaked_key.c)**: Vulnerability of reusing modulus $n$ after private key leakage.
- **[27_rsa_small_message.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/27_rsa_small_message.c)**: Precomputation / dictionary attack on small message space RSA.
- **[28_diffie_hellman_analysis.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/28_diffie_hellman_analysis.c)**: Diffie-Hellman variant sending $x^a \bmod q$ and private value recovery.

### 6. Cryptographic Hash Functions & Signatures
- **[29_sha3_diffusion.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/29_sha3_diffusion.c)**: Keccak / SHA-3 internal state diffusion rate (Theta step analysis).
- **[32_dsa_signature.c](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/32_dsa_signature.c)**: Non-deterministic DSA signature generation vs. RSA and $k$-reuse risks.

---

## Detailed Experiments Summary

| No. | File Name | Algorithm / Concept | Description & Key Results |
|:---:|:---|:---|:---|
| 01 | [`1_caesar_cipher.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/1_caesar_cipher.c) | Caesar Cipher | Modular shift $C = (P + k) \bmod 26$ and reverse shift decryption. |
| 02 | [`2_monoalphabetic_cipher.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/2_monoalphabetic_cipher.c) | Monoalphabetic Substitution | Maps 26 letters of plaintext to a 26-letter substitution alphabet. |
| 03 | [`3_playfair_cipher.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/3_playfair_cipher.c) | Playfair Cipher | Constructs $5 \times 5$ matrix from keyword; encrypts digraph pairs. |
| 04 | [`4_polyalphabetic_cipher.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/4_polyalphabetic_cipher.c) | Polyalphabetic (Vigenère) | Successive monoalphabetic shifts guided by a repeated keyword. |
| 05 | [`5_affine_cipher.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/5_affine_cipher.c) | Affine Caesar Cipher | Evaluates valid coprimes $a$ ($\gcd(a, 26)=1$) and shifts $b \in [0, 25]$. |
| 06 | [`6_affine_break.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/6_affine_break.c) | Cryptanalysis of Affine | Solves system of modular equations for 'B' and 'U' to find $a=3, b=15$. |
| 07 | [`7_simple_substitution.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/7_simple_substitution.c) | Gold Bug Cipher Attack | Frequency analysis and symbol-to-letter mapping for Poe's cipher. |
| 08 | [`8_keyword_monoalphabetic.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/8_keyword_monoalphabetic.c) | Keyword Substitution | Generates alphabet sequence starting with keyword followed by unused letters. |
| 09 | [`9_playfair_pt109.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/9_playfair_pt109.c) | PT-109 Decryption | Decodes historic WWII patrol boat wireless message with Playfair matrix. |
| 10 | [`10_playfair_matrix.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/10_playfair_matrix.c) | Cadogan West Matrix | Encrypts message using specific 5x5 matrix with duplicate pair splitting. |
| 11 | [`11_playfair_keyspace.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/11_playfair_keyspace.c) | Playfair Key Space | Calculates total keys ($25! \approx 2^{84}$) and effectively unique keys ($24! \approx 2^{79}$). |
| 12 | [`12_hill_cipher.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/12_hill_cipher.c) | Hill Cipher (2x2) | Computes matrix inverse mod 26 and performs pair encryption/decryption. |
| 13 | [`13_hill_known_plaintext.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/13_hill_known_plaintext.c) | Hill Cipher KPA & CPA | Solves $K = P^{-1} \cdot C \bmod 26$; demonstrates direct key recovery via CPA. |
| 14 | [`14_onetime_pad_vigenere.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/14_onetime_pad_vigenere.c) | OTP Vigenère Manipulation | Shows key derivation $K_2 = (C - P_2) \bmod 26$ to decrypt into arbitrary plaintext. |
| 15 | [`15_additive_frequency_attack.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/15_additive_frequency_attack.c) | Additive Frequency Attack | Tests all 26 shifts, ranks plaintexts by English frequency correlation score. |
| 16 | [`16_mono_frequency_attack.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/16_mono_frequency_attack.c) | Monoalphabetic Cryptanalysis | Automated mapping of ciphertext frequencies to English distribution (`ETAOIN...`). |
| 17 | [`17_des_decryption_keys.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/17_des_decryption_keys.c) | DES Key Schedule | Generates decryption subkeys $K_{16}\dots K_1$ using right circular shifts. |
| 18 | [`18_des_subkey_bits.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/18_des_subkey_bits.c) | DES PC-2 Analysis | Confirms bits 1–24 come from $C$ half and bits 25–48 come from $D$ half. |
| 19 | [`19_3des_cbc.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/19_3des_cbc.c) | 3DES in CBC Mode | Simulates 3DES-CBC and analyzes security (3-key/AES) vs performance. |
| 20 | [`20_ecb_cbc_error_propagation.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/20_ecb_cbc_error_propagation.c) | Error Propagation | Simulates transmission error ($C_1$ corrupts $P_1, P_2$) vs source error in $P_1$. |
| 21 | [`21_padding_modes.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/21_padding_modes.c) | Padding in Block Modes | Evaluates bit-padding and explains motivation for unconditional extra padding block. |
| 22 | [`22_sdes_cbc.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/22_sdes_cbc.c) | S-DES CBC Mode | Complete S-DES implementation; verifies textbook test vectors in CBC mode. |
| 23 | [`23_sdes_ctr.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/23_sdes_ctr.c) | S-DES Counter (CTR) Mode | Counter mode stream generation with S-DES; verifies textbook CTR vectors. |
| 24 | [`24_rsa_private_key.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/24_rsa_private_key.c) | RSA Key Derivation | Factors $n=3599$ into $59 \times 61$, computes $\phi(n)=3480$, finds $d=3031$. |
| 25 | [`25_rsa_common_factor.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/25_rsa_common_factor.c) | RSA Common Factor Attack | Computes $\gcd(C, n)$ to expose secret prime factor $p$ instantly. |
| 26 | [`26_rsa_leaked_key.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/26_rsa_leaked_key.c) | RSA Modulus Re-use Risk | Factors $n$ from leaked $(e, d)$ and computes any new private key $d_{new}$. |
| 27 | [`27_rsa_small_message.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/27_rsa_small_message.c) | Small Plaintext Space RSA | Executes 26-entry precomputed codebook attack to invert ciphertexts instantly. |
| 28 | [`28_diffie_hellman_analysis.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/28_diffie_hellman_analysis.c) | Diffie-Hellman Protocol Analysis | Inverts public exponent $a$ mod $q-1$ to extract private values $x_A, x_B$. |
| 29 | [`29_sha3_diffusion.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/29_sha3_diffusion.c) | SHA-3 / Keccak Diffusion | Proves all zero capacity lanes become non-zero in round 1 ($\theta$ step). |
| 30 | [`30_cbc_mac_extension.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/30_cbc_mac_extension.c) | CBC-MAC Length Extension | Proves $\text{MAC}(K, X \mathbin{\Vert} (X \oplus T)) = T$ for a 1-block tag $T$. |
| 31 | [`31_cmac_subkey.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/31_cmac_subkey.c) | CMAC Subkey Generation | Calculates $K_1, K_2$ using left shift and reduction constants `0x1B` & `0x87`. |
| 32 | [`32_dsa_signature.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/32_dsa_signature.c) | DSA vs RSA Signatures | Contrasts randomized DSA signatures with deterministic RSA; details $k$-reuse risks. |
| 33 | [`33_des_64bit.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/33_des_64bit.c) | 64-bit DES Cipher | Complete standard DES: 16 Feistel rounds, IP, S-boxes, key schedule, FP. |
| 34 | [`34_padding_motivation.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/34_padding_motivation.c) | Padding Motivation | Shows padding and unpadding for complete/incomplete blocks with zero ambiguity. |
| 35 | [`35_vigenere_otp.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/35_vigenere_otp.c) | Vigenère OTP Cipher | Character-by-character modular shifts driven by an arbitrary random key stream. |
| 36 | [`36_affine_caesar.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/36_affine_caesar.c) | Affine Invertibility | Demonstrates encryption collision when $\gcd(a, 26) \ne 1$ ($a=2, b=3$). |
| 37 | [`37_mono_frequency_attack.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/37_mono_frequency_attack.c) | Mono Frequency Attack | Ranked frequency attack mapping cipher letters to top English candidates. |
| 38 | [`38_hill_kpa_cpa.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/38_hill_kpa_cpa.c) | Hill KPA & CPA Comparison | Contrast between KPA matrix inversion and CPA zero-calculation key recovery. |
| 39 | [`39_additive_frequency_attack.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/39_additive_frequency_attack.c) | Additive Frequency Attack | Full automated frequency scoring across all 26 shifts with top $N$ user option. |
| 40 | [`40_mono_frequency_attack.c`](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/40_mono_frequency_attack.c) | Substitution Attack Tool | Automated frequency ranker outputting top candidate decryptions. |

---

## Compilation & Execution

All programs are written in standard ANSI/ISO C and can be compiled using GCC, Clang, or MSVC.

### Using GCC / MinGW (Recommended)
```bash
# Compile any program (e.g., Program 1)
gcc -Wall -Wextra -O2 1_caesar_cipher.c -o 1_caesar_cipher.exe

# Run the executable
./1_caesar_cipher.exe
```

### Batch Compilation of All Programs (PowerShell)
```powershell
Get-ChildItem -Filter "*.c" | ForEach-Object {
    $exe = $_.BaseName + ".exe"
    gcc -O2 $_.Name -o $exe
    Write-Host "Compiled: $($_.Name) -> $exe"
}
```

---

## Technical & Cryptographic Takeaways

1. **Information Theory & Unconditional Security:**
   - The One-Time Pad ([14](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/14_onetime_pad_vigenere.c), [35](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/35_vigenere_otp.c)) is the only mathematically proven cipher with perfect secrecy, provided the key stream is truly random, never reused, and as long as the message.
2. **Linear Ciphers & Cryptanalysis:**
   - Hill ciphers ([12](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/12_hill_cipher.c), [13](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/13_hill_known_plaintext.c), [38](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/38_hill_kpa_cpa.c)) are linear over modular arithmetic ($C = P \cdot K \bmod 26$). They are completely vulnerable to Known Plaintext Attacks ($K = P^{-1} \cdot C$) and Chosen Plaintext Attacks (using identity basis vectors).
3. **Block Modes & Error Behavior:**
   - In ECB mode, transmission errors affect only the corrupted block.
   - In CBC mode ([20](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/20_ecb_cbc_error_propagation.c)), a 1-bit transmission error in $C_1$ completely scrambles $P_1$ and produces an identical 1-bit error in $P_2$, but leaves all subsequent blocks ($P_3, P_4, \dots$) intact due to self-synchronization.
4. **Public-Key Hazards:**
   - **Common Factors ([25](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/25_rsa_common_factor.c)):** If any plaintext block shares a divisor with RSA modulus $n = pq$, $\gcd(C, n)$ reveals prime $p$ in sub-millisecond time.
   - **Key Leakage ([26](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/26_rsa_leaked_key.c)):** A leaked private key $(e, d)$ permanently compromises the modulus $n$. Modulus $n$ cannot be reused even with a new public exponent $e_{new}$.
   - **Small Message Space ([27](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/27_rsa_small_message.c)):** Encrypting small blocks (e.g. single letters) allows trivial precomputation / dictionary attacks, bypassing key size entirely. Proper padding (e.g., OAEP) is mandatory.
   - **DSA Nonce Reuse ([32](file:///f:/B-tech/cnds/programs/CSA5108_CNS_192325017/LAB_PROGRAMS/32_dsa_signature.c)):** Reusing ephemeral key $k$ in DSA allows algebraic extraction of the private signing key $x$.
