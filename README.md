Dynamic Binary Translation (DBT) is a key enabler for cross-ISA emulation, system virtualization, runtime instrumentation, and many other important applications.
Among several critical requirements for DBT, it is important to provide equivalent semantics for atomic synchronization instructions such as Load - Link /  Store - Conditional (LL/SC), which are mostly included in the reduced-instruction set architectures (RISC) and Compare-and-Swap(CAS), which is mostly in the complex instruction set architectures (CISC).
However, the state-of-the-art DBT tools often do not provide a fully correct translation of these atomic instructions, in particular, from RISC atomic instructions (i.e. LL/SC) to CISC atomic instructions (i.e. CAS), due to performance concerns.
As a result, some may cause the well-known ABA problem, which could lead to  wrong  results or program crashes.
In our experimental studies on QEMU, a state-of-the-art DBT, and provides servel solutions to correctly emulate LL/SC on Intel x86 platforms.

## Building
```
./configure --disable-kvm --disable-werror --target-list=arm-linux-user --extra-cflags="-mrtm"
make
```