savedcmd_libqdma/qdma_debugfs_dev.o := gcc -Wp,-MMD,libqdma/.qdma_debugfs_dev.o.d -nostdinc -I/usr/src/linux-headers-7.0.0-27-generic/arch/x86/include -I/usr/src/linux-headers-7.0.0-27-generic/arch/x86/include/generated -I/usr/src/linux-headers-7.0.0-27-generic/include -I/usr/src/linux-headers-7.0.0-27-generic/include -I/usr/src/linux-headers-7.0.0-27-generic/arch/x86/include/uapi -I/usr/src/linux-headers-7.0.0-27-generic/arch/x86/include/generated/uapi -I/usr/src/linux-headers-7.0.0-27-generic/include/uapi -I/usr/src/linux-headers-7.0.0-27-generic/include/generated/uapi -include /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler-version.h -include /usr/src/linux-headers-7.0.0-27-generic/include/linux/kconfig.h -I/usr/src/linux-headers-7.0.0-27-generic/ubuntu/include -include /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler_types.h -D__KERNEL__ -std=gnu11 -fshort-wchar -funsigned-char -fno-common -fno-PIE -fno-strict-aliasing -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -mno-sse4a -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -march=x86-64 -mtune=generic -mno-red-zone -mcmodel=kernel -mstack-protector-guard-reg=gs -mstack-protector-guard-symbol=__ref_stack_chk_guard -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -mindirect-branch-cs-prefix -mfunction-return=thunk-extern -fno-jump-tables -mharden-sls=all -fpatchable-function-entry=16,16 -fno-delete-null-pointer-checks -O2 -fno-allow-store-data-races -fstack-protector-strong -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fzero-init-padding-bits=all -fno-stack-clash-protection -fzero-call-used-regs=used-gpr -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -fmin-function-alignment=16 -fstrict-flex-arrays=3 -fms-extensions -fno-strict-overflow -fno-stack-check -fconserve-stack -fno-builtin-wcslen -Wall -Wextra -Wundef -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Werror=strict-prototypes -Wno-format-security -Wno-trigraphs -Wno-frame-address -Wno-address-of-packed-member -Wmissing-declarations -Wmissing-prototypes -Wframe-larger-than=1024 -Wno-main -Wno-type-limits -Wno-dangling-pointer -Wvla-larger-than=1 -Wno-pointer-sign -Wcast-function-type -Wno-unterminated-string-initialization -Wno-array-bounds -Wno-stringop-overflow -Wno-alloc-size-larger-than -Wimplicit-fallthrough=5 -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wenum-conversion -Wunused -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-packed-not-aligned -Wno-format-overflow -Wno-format-truncation -Wno-stringop-truncation -Wno-override-init -Wno-missing-field-initializers -Wno-shift-negative-value -Wno-maybe-uninitialized -Wno-sign-compare -Wno-unused-parameter -g -gdwarf-5 -Wall -I././. -I././libqdma/qdma_access -I././libqdma -I././libqdma/qdma_access/qdma_soft_access -I././libqdma/qdma_access/eqdma_soft_access -I././libqdma/qdma_access/qdma_s80_hard_access -I././jsmn -DMBOX_INTERRUPT_DISABLE  -fsanitize=bounds-strict -fsanitize=shift -fsanitize=bool -fsanitize=enum    -DMODULE  -DKBUILD_BASENAME='"qdma_debugfs_dev"' -DKBUILD_MODNAME='"onic"' -D__KBUILD_MODNAME=onic -c -o libqdma/qdma_debugfs_dev.o libqdma/qdma_debugfs_dev.c  

source_libqdma/qdma_debugfs_dev.o := libqdma/qdma_debugfs_dev.c

deps_libqdma/qdma_debugfs_dev.o := \
  /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  /usr/src/linux-headers-7.0.0-27-generic/include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/FUNCTION_ALIGNMENT) \
    $(wildcard include/config/CC_HAS_SANE_FUNCTION_ALIGNMENT) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/ARM64) \
    $(wildcard include/config/LD_DEAD_CODE_DATA_ELIMINATION) \
    $(wildcard include/config/LTO_CLANG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/KCSAN) \
    $(wildcard include/config/CC_HAS_ASSUME) \
    $(wildcard include/config/CC_HAS_COUNTED_BY) \
    $(wildcard include/config/FORTIFY_SOURCE) \
    $(wildcard include/config/UBSAN_BOUNDS) \
    $(wildcard include/config/CC_HAS_COUNTED_BY_PTR) \
    $(wildcard include/config/CC_HAS_MULTIDIMENSIONAL_NONSTRING) \
    $(wildcard include/config/UBSAN_INTEGER_WRAP) \
    $(wildcard include/config/CFI) \
    $(wildcard include/config/ARCH_USES_CFI_GENERIC_LLVM_PASS) \
    $(wildcard include/config/CC_HAS_BROKEN_COUNTED_BY_REF) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler-context-analysis.h \
  /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler_attributes.h \
  /usr/src/linux-headers-7.0.0-27-generic/include/linux/compiler-gcc.h \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/SHADOW_CALL_STACK) \
    $(wildcard include/config/KCOV) \
    $(wildcard include/config/CC_HAS_TYPEOF_UNQUAL) \

libqdma/qdma_debugfs_dev.o: $(deps_libqdma/qdma_debugfs_dev.o)

$(deps_libqdma/qdma_debugfs_dev.o):
