## [earliest commit: rtm committed on Jun 12, 2006](https://github.com/OccupyMars2025/xv6-riscv/commit/55e95b16db458b7f9abeca96e541acbdf8d7f85b)

## https://en.wikipedia.org/wiki/Robert_Tappan_Morris
## https://people.csail.mit.edu/kaashoek/
```
It is easy for a kernel developer to omit a crucial check, and real-world kernels have a long
history of missing checks whose absence can be exploited by user programs to obtain kernel priv-
ileges. It is likely that xv6 doesn’t do a complete job of validating user-level data supplied to the
kernel, which a malicious user program might be able to exploit to circumvent xv6’s isolation.
```
```
xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6).  xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using ANSI C.

ACKNOWLEDGMENTS

xv6 is inspired by John Lions's Commentary on UNIX 6th Edition (Peer
to Peer Communications; ISBN: 1-57398-013-7; 1st edition (June 14,
2000)).  See also https://pdos.csail.mit.edu/6.1810/, which provides
pointers to on-line resources for v6.

The following people have made contributions: Russ Cox (context switching,
locking), Cliff Frey (MP), Xiao Yu (MP), Nickolai Zeldovich, and Austin
Clements.

We are also grateful for the bug reports and patches contributed by
Takahiro Aoyagi, Silas Boyd-Wickizer, Anton Burtsev, carlclone, Ian
Chen, Dan Cross, Cody Cutler, Mike CAT, Tej Chajed, Asami Doi,
eyalz800, Nelson Elhage, Saar Ettinger, Alice Ferrazzi, Nathaniel
Filardo, flespark, Peter Froehlich, Yakir Goaron, Shivam Handa, Matt
Harvey, Bryan Henry, jaichenhengjie, Jim Huang, Matúš Jókay, John
Jolly, Alexander Kapshuk, Anders Kaseorg, kehao95, Wolfgang Keller,
Jungwoo Kim, Jonathan Kimmitt, Eddie Kohler, Vadim Kolontsov, Austin
Liew, l0stman, Pavan Maddamsetti, Imbar Marinescu, Yandong Mao, Matan
Shabtay, Hitoshi Mitake, Carmi Merimovich, Mark Morrissey, mtasm, Joel
Nider, Hayato Ohhashi, OptimisticSide, Harry Porter, Greg Price, Jude
Rich, segfault, Ayan Shafqat, Eldar Sehayek, Yongming Shen, Fumiya
Shigemitsu, Cam Tenny, tyfkda, Warren Toomey, Stephen Tu, Rafael Ubal,
Amane Uehara, Pablo Ventura, Xi Wang, WaheedHafez, Keiichi Watanabe,
Nicolas Wolovick, wxdao, Grant Wu, Jindong Zhang, Icenowy Zheng,
ZhUyU1997, and Zou Chang Wei.


The code in the files that constitute xv6 is
Copyright 2006-2022 Frans Kaashoek, Robert Morris, and Russ Cox.

ERROR REPORTS

Please send errors and suggestions to Frans Kaashoek and Robert Morris
(kaashoek,rtm@mit.edu).  The main purpose of xv6 is as a teaching
operating system for MIT's 6.1810, so we are more interested in
simplifications and clarifications than new features.

BUILDING AND RUNNING XV6

You will need a RISC-V "newlib" tool chain from
https://github.com/riscv/riscv-gnu-toolchain, and qemu compiled for
riscv64-softmmu.  Once they are installed, and in your shell
search path, you can run "make qemu".
```

![Screenshot from 2023-11-09 20-37-02](https://github.com/OccupyMars2025/xv6-riscv/assets/31559413/c63c0e15-f4cc-492f-9c86-c8a8e4055cf7)
![Screenshot from 2023-11-16 10-38-36](https://github.com/OccupyMars2025/xv6-riscv/assets/31559413/9ac1a729-662d-4037-b4c8-04ede26d47f9)


```
The high-level path of a trap from
user space is uservec (kernel/trampoline.S:21), then usertrap (kernel/trap.c:37); and when re-
turning, usertrapret (kernel/trap.c:90) and then userret (kernel/trampoline.S:101)
```
