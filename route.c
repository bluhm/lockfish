# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
# 104 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_null.h" 1
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/cdefs.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/cdefs.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cdefs.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/cdefs.h" 2
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/endian.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/endian.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h" 1
# 36 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_types.h" 1
# 37 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_types.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/_types.h" 1
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/_types.h"
typedef struct label_t {
 long val[8];
} label_t;



typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;


typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;


typedef __int32_t __int_fast8_t;
typedef __uint32_t __uint_fast8_t;
typedef __int32_t __int_fast16_t;
typedef __uint32_t __uint_fast16_t;
typedef __int32_t __int_fast32_t;
typedef __uint32_t __uint_fast32_t;
typedef __int64_t __int_fast64_t;
typedef __uint64_t __uint_fast64_t;
# 102 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/_types.h"
typedef long __intptr_t;
typedef unsigned long __uintptr_t;


typedef __int64_t __intmax_t;
typedef __uint64_t __uintmax_t;


typedef long __register_t;


typedef unsigned long __vaddr_t;
typedef unsigned long __paddr_t;
typedef unsigned long __vsize_t;
typedef unsigned long __psize_t;


typedef double __double_t;
typedef float __float_t;
typedef long __ptrdiff_t;
typedef unsigned long __size_t;
typedef long __ssize_t;

typedef __builtin_va_list __va_list;






typedef int __wchar_t;

typedef int __wint_t;
typedef int __rune_t;
typedef void * __wctrans_t;
typedef void * __wctype_t;
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_types.h" 2

typedef __int64_t __blkcnt_t;
typedef __int32_t __blksize_t;
typedef __int64_t __clock_t;
typedef __int32_t __clockid_t;
typedef unsigned long __cpuid_t;
typedef __int32_t __dev_t;
typedef __uint32_t __fixpt_t;
typedef __uint64_t __fsblkcnt_t;
typedef __uint64_t __fsfilcnt_t;
typedef __uint32_t __gid_t;
typedef __uint32_t __id_t;
typedef __uint32_t __in_addr_t;
typedef __uint16_t __in_port_t;
typedef __uint64_t __ino_t;
typedef long __key_t;
typedef __uint32_t __mode_t;
typedef __uint32_t __nlink_t;
typedef __int64_t __off_t;
typedef __int32_t __pid_t;
typedef __uint64_t __rlim_t;
typedef __uint8_t __sa_family_t;
typedef __int32_t __segsz_t;
typedef __uint32_t __socklen_t;
typedef long __suseconds_t;
typedef __int32_t __swblk_t;
typedef __int64_t __time_t;
typedef __int32_t __timer_t;
typedef __uint32_t __uid_t;
typedef __uint32_t __useconds_t;





typedef union {
 char __mbstate8[128];
 __int64_t __mbstateL;
} __mbstate_t;
# 37 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/endian.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h" 2
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/endian.h" 2
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h" 2





typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;

typedef __cpuid_t cpuid_t;
typedef __register_t register_t;
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
typedef __int8_t int8_t;




typedef __uint8_t uint8_t;




typedef __int16_t int16_t;




typedef __uint16_t uint16_t;




typedef __int32_t int32_t;




typedef __uint32_t uint32_t;




typedef __int64_t int64_t;




typedef __uint64_t uint64_t;



typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef __int64_t quad_t;
typedef __uint64_t u_quad_t;



typedef __vaddr_t vaddr_t;
typedef __paddr_t paddr_t;
typedef __vsize_t vsize_t;
typedef __psize_t psize_t;



typedef __blkcnt_t blkcnt_t;
typedef __blksize_t blksize_t;
typedef char * caddr_t;
typedef __int32_t daddr32_t;
typedef __int64_t daddr_t;
typedef __dev_t dev_t;
typedef __fixpt_t fixpt_t;
typedef __gid_t gid_t;
typedef __id_t id_t;
typedef __ino_t ino_t;
typedef __key_t key_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __rlim_t rlim_t;
typedef __segsz_t segsz_t;
typedef __swblk_t swblk_t;
typedef __uid_t uid_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
# 162 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
typedef __in_addr_t in_addr_t;
typedef __in_port_t in_port_t;






typedef __clock_t clock_t;




typedef __clockid_t clockid_t;




typedef __pid_t pid_t;




typedef __size_t size_t;




typedef __ssize_t ssize_t;




typedef __time_t time_t;




typedef __timer_t timer_t;




typedef __off_t off_t;
# 234 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
struct proc;
struct pgrp;
struct ucred;
struct rusage;
struct file;
struct buf;
struct tty;
struct uio;
# 51 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 60 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/syslimits.h" 1
# 61 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/errno.h" 1
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h" 1
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/select.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/select.h"
struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 70 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/select.h"
typedef uint32_t __fd_mask;



typedef struct fd_set {
 __fd_mask fds_bits[(((1024) + ((((unsigned)(sizeof(__fd_mask) * 8))) - 1)) / (((unsigned)(sizeof(__fd_mask) * 8))))];
} fd_set;

static __inline void
__fd_set(int fd, fd_set *p)
{
 p->fds_bits[fd / ((unsigned)(sizeof(__fd_mask) * 8))] |= (1U << (fd % ((unsigned)(sizeof(__fd_mask) * 8))));
}


static __inline void
__fd_clr(int fd, fd_set *p)
{
 p->fds_bits[fd / ((unsigned)(sizeof(__fd_mask) * 8))] &= ~(1U << (fd % ((unsigned)(sizeof(__fd_mask) * 8))));
}


static __inline int
__fd_isset(int fd, const fd_set *p)
{
 return (p->fds_bits[fd / ((unsigned)(sizeof(__fd_mask) * 8))] & (1U << (fd % ((unsigned)(sizeof(__fd_mask) * 8)))));
}
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h" 2
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 144 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_time.h" 1
# 55 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 164 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h" 2


struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *bt, uint64_t x)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += x;
 if (u > bt->frac)
  bt->sec++;
}

static __inline void
bintime_add(struct bintime *bt, struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += bt2->frac;
 if (u > bt->frac)
  bt->sec++;
 bt->sec += bt2->sec;
}

static __inline void
bintime_sub(struct bintime *bt, struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac -= bt2->frac;
 if (u < bt->frac)
  bt->sec--;
 bt->sec -= bt2->sec;
}
# 220 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
static __inline void
bintime2timespec(struct bintime *bt, struct timespec *ts)
{

 ts->tv_sec = bt->sec;
 ts->tv_nsec = (long)(((uint64_t)1000000000 * (uint32_t)(bt->frac >> 32)) >> 32);
}

static __inline void
timespec2bintime(struct timespec *ts, struct bintime *bt)
{

 bt->sec = ts->tv_sec;

 bt->frac = (uint64_t)ts->tv_nsec * (uint64_t)18446744073ULL;
}

static __inline void
bintime2timeval(struct bintime *bt, struct timeval *tv)
{

 tv->tv_sec = bt->sec;
 tv->tv_usec = (long)(((uint64_t)1000000 * (uint32_t)(bt->frac >> 32)) >> 32);
}

static __inline void
timeval2bintime(struct timeval *tv, struct bintime *bt)
{

 bt->sec = (time_t)tv->tv_sec;

 bt->frac = (uint64_t)tv->tv_usec * (uint64_t)18446744073709ULL;
}

extern volatile time_t time_second;
extern volatile time_t time_uptime;
# 278 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
void bintime(struct bintime *);
void nanotime(struct timespec *);
void microtime(struct timeval *);

void getnanotime(struct timespec *);
void getmicrotime(struct timeval *);

void binuptime(struct bintime *);
void nanouptime(struct timespec *);
void microuptime(struct timeval *);

void getnanouptime(struct timespec *);
void getmicrouptime(struct timeval *);

struct proc;
int clock_gettime(struct proc *, clockid_t, struct timespec *);

int timespecfix(struct timespec *);
int itimerfix(struct timeval *);
int itimerdecr(struct itimerval *itp, int usec);
void itimerround(struct timeval *);
int settime(struct timespec *);
int ratecheck(struct timeval *, const struct timeval *);
int ppsratecheck(struct timeval *, int *, int);




struct clock_ymdhms {
        u_short dt_year;
        u_char dt_mon;
        u_char dt_day;
        u_char dt_wday;
        u_char dt_hour;
        u_char dt_min;
        u_char dt_sec;
};

time_t clock_ymdhms_to_secs(struct clock_ymdhms *);
void clock_secs_to_ymdhms(time_t, struct clock_ymdhms *);
# 77 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/resource.h" 1
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;

};
# 98 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/resource.h"
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};



struct loadavg {
 fixpt_t ldavg[3];
 long fscale;
};



extern struct loadavg averunnable;
struct process;
int dosetrlimit(struct proc *, u_int, struct rlimit *);
int donice(struct proc *, struct process *, int);
int dogetrusage(struct proc *, int, struct rusage *);
# 78 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ucred.h" 1
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ucred.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/syslimits.h" 1
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ucred.h" 2




struct ucred {
 u_int cr_ref;



 uid_t cr_uid;
 uid_t cr_ruid;
 uid_t cr_svuid;
 gid_t cr_gid;
 gid_t cr_rgid;
 gid_t cr_svgid;
 short cr_ngroups;
 gid_t cr_groups[16];
};






struct xucred {
 uid_t cr_uid;
 gid_t cr_gid;
 short cr_ngroups;
 gid_t cr_groups[16];
};






int crfromxucred(struct ucred *, const struct xucred *);
void crset(struct ucred *, const struct ucred *);
struct ucred *crcopy(struct ucred *cr);
struct ucred *crdup(struct ucred *cr);
void crfree(struct ucred *cr);
struct ucred *crget(void);
int suser(struct proc *p, u_int flags);
int suser_ucred(struct ucred *cred);
# 79 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/uio.h" 1
# 51 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/uio.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};


enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE
};



struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 size_t uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct proc *uio_procp;
};
# 97 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/uio.h"
int ureadc(int c, struct uio *);

struct file;
int dofilereadv(struct proc *, int, struct file *,
     const struct iovec *, int, int, off_t *, register_t *);
int dofilewritev(struct proc *, int, struct file *,
     const struct iovec *, int, int, off_t *, register_t *);
# 80 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h" 1
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/refcnt.h" 1
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/refcnt.h"
struct refcnt {
 unsigned int refs;
};





void refcnt_init(struct refcnt *);
void refcnt_take(struct refcnt *);
int refcnt_rele(struct refcnt *);
void refcnt_rele_wake(struct refcnt *);
void refcnt_finalize(struct refcnt *, const char *);
# 23 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h" 2
# 32 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h"
struct srp {
 void *ref;
};



struct srp_hazard {
 struct srp *sh_p;
 void *sh_v;
};

struct srp_ref {
 struct srp_hazard *hz;
} __attribute__((__unused__));



struct srp_gc {
 void (*srp_gc_dtor)(void *, void *);
 void *srp_gc_cookie;
 struct refcnt srp_gc_refcnt;
};







struct srpl_rc {
 void (*srpl_ref)(void *, void *);
 struct srp_gc srpl_gc;
};




struct srpl {
 struct srp sl_head;
};



void srp_startup(void);
void srp_gc_init(struct srp_gc *, void (*)(void *, void *), void *);
void *srp_swap_locked(struct srp *, void *);
void srp_update_locked(struct srp_gc *, struct srp *, void *);
void *srp_get_locked(struct srp *);
void srp_gc_finalize(struct srp_gc *);

void srp_init(struct srp *);
# 101 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h"
void srpl_rc_init(struct srpl_rc *, void (*)(void *, void *),
      void (*)(void *, void *), void *);
# 81 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h"
typedef int sig_atomic_t;


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/trap.h" 1
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h" 2
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h"
struct sigcontext {

 long sc_rdi;
 long sc_rsi;
 long sc_rdx;
 long sc_rcx;
 long sc_r8;
 long sc_r9;
 long sc_r10;
 long sc_r11;
 long sc_r12;
 long sc_r13;
 long sc_r14;
 long sc_r15;
 long sc_rbp;
 long sc_rbx;
 long sc_rax;
 long sc_gs;
 long sc_fs;
 long sc_es;
 long sc_ds;
 long sc_trapno;
 long sc_err;
 long sc_rip;
 long sc_cs;
 long sc_rflags;
 long sc_rsp;
 long sc_ss;

 struct fxsave64 *sc_fpstate;
 int __sc_unused;
 int sc_mask;
 long sc_cookie;
};
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h" 2
# 104 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
typedef unsigned int sigset_t;


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h" 1
# 33 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
union sigval {
 int sival_int;
 void *sival_ptr;
};
# 132 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
typedef struct {
 int si_signo;
 int si_code;
 int si_errno;
 union {
  int _pad[((128 / sizeof (int)) - 3)];
  struct {
   pid_t _pid;
   union {
    struct {
     uid_t _uid;
     union sigval _value;
    } _kill;
    struct {
     clock_t _utime;
     clock_t _stime;
     int _status;
    } _cld;
   } _pdata;
  } _proc;
  struct {
   caddr_t _addr;
   int _trapno;
  } _fault;
# 172 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
 } _data;
} siginfo_t;
# 196 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
void initsiginfo(siginfo_t *, int, u_long, int, union sigval);
# 108 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h" 2




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, siginfo_t *, void *);
 } __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 146 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
typedef void (*sig_t)(int);





struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 176 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
typedef struct sigaltstack {
 void *ss_sp;
 size_t ss_size;
 int ss_flags;
} stack_t;





typedef struct sigcontext ucontext_t;
# 85 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/limits.h" 1
# 34 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/limits.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/limits.h" 1
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/limits.h" 2
# 88 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/param.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 1
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h" 1
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/fpu.h" 1
# 16 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/fpu.h"
struct fxsave64 {
 u_int16_t fx_fcw;
 u_int16_t fx_fsw;
 u_int8_t fx_ftw;
 u_int8_t fx_unused1;
 u_int16_t fx_fop;
 u_int64_t fx_rip;
 u_int64_t fx_rdp;
 u_int32_t fx_mxcsr;
 u_int32_t fx_mxcsr_mask;
 u_int64_t fx_st[8][2];
 u_int64_t fx_xmm[16][2];
 u_int8_t fx_unused3[96];
} __attribute__((__packed__));

struct xstate_hdr {
 uint64_t xstate_bv;
 uint64_t xstate_xcomp_bv;
 uint8_t xstate_rsrv0[0];
 uint8_t xstate_rsrv[40];
} __attribute__((__packed__));

struct savefpu {
 struct fxsave64 fp_fxsave;
 struct xstate_hdr fp_xstate;
 u_int64_t fp_ymm[16][2];
 u_int16_t fp_ex_sw;
 u_int16_t fp_ex_tw;
};
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/fpu.h"
struct trapframe;
struct cpu_info;

extern size_t fpu_save_len;
extern uint32_t fpu_mxcsr_mask;
extern uint64_t xsave_mask;

void fpuinit(struct cpu_info *);
void fpudrop(void);
void fpudiscard(struct proc *);
void fputrap(struct trapframe *);
void fpusave_proc(struct proc *, int);
void fpusave_cpu(struct cpu_info *, int);
void fpu_kernel_enter(void);
void fpu_kernel_exit(void);
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h" 2
# 84 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h"
struct trapframe {
 int64_t tf_rdi;
 int64_t tf_rsi;
 int64_t tf_rdx;
 int64_t tf_rcx;
 int64_t tf_r8;
 int64_t tf_r9;
 int64_t tf_r10;
 int64_t tf_r11;
 int64_t tf_r12;
 int64_t tf_r13;
 int64_t tf_r14;
 int64_t tf_r15;
 int64_t tf_rbp;
 int64_t tf_rbx;
 int64_t tf_rax;
 int64_t tf_gs;
 int64_t tf_fs;
 int64_t tf_es;
 int64_t tf_ds;
 int64_t tf_trapno;

 int64_t tf_err;
 int64_t tf_rip;
 int64_t tf_cs;
 int64_t tf_rflags;

 int64_t tf_rsp;
 int64_t tf_ss;
};




struct intrframe {
 int64_t if_ppl;
 int64_t if_rdi;
 int64_t if_rsi;
 int64_t if_rdx;
 int64_t if_rcx;
 int64_t if_r8;
 int64_t if_r9;
 int64_t if_r10;
 int64_t if_r11;
 int64_t if_r12;
 int64_t if_r13;
 int64_t if_r14;
 int64_t if_r15;
 int64_t if_rbp;
 int64_t if_rbx;
 int64_t if_rax;
 int64_t tf_gs;
 int64_t tf_fs;
 int64_t tf_es;
 int64_t tf_ds;
 u_int64_t __if_trapno;
 u_int64_t __if_err;

 int64_t if_rip;
 int64_t if_cs;
 int64_t if_rflags;

 int64_t if_rsp;
 int64_t if_ss;
};




struct switchframe {
 int64_t sf_r15;
 int64_t sf_r14;
 int64_t sf_r13;
 int64_t sf_r12;
 int64_t sf_rbp;
 int64_t sf_rbx;
 int64_t sf_rip;
};

struct callframe {
 struct callframe *f_frame;
 long f_retaddr;
 long f_arg0;
};
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/segments.h" 1
# 95 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/segments.h"
struct sys_segment_descriptor {
 u_int64_t sd_lolimit:16;
 u_int64_t sd_lobase:24;
 u_int64_t sd_type:5;
 u_int64_t sd_dpl:2;
 u_int64_t sd_p:1;
 u_int64_t sd_hilimit:4;
 u_int64_t sd_xx1:3;
 u_int64_t sd_gran:1;
 u_int64_t sd_hibase:40;
 u_int64_t sd_xx2:8;
 u_int64_t sd_zero:5;
 u_int64_t sd_xx3:19;
} __attribute__((__packed__));




struct mem_segment_descriptor {
 unsigned int sd_lolimit:16;
 unsigned int sd_lobase:24;
 unsigned int sd_type:5;
 unsigned int sd_dpl:2;
 unsigned int sd_p:1;
 unsigned int sd_hilimit:4;
 unsigned int sd_avl:1;
 unsigned int sd_long:1;
 unsigned int sd_def32:1;
 unsigned int sd_gran:1;
 unsigned int sd_hibase:8;
} __attribute__((__packed__));




struct gate_descriptor {
 u_int64_t gd_looffset:16;
 u_int64_t gd_selector:16;
 u_int64_t gd_ist:3;
 u_int64_t gd_xx1:5;
 u_int64_t gd_type:5;
 u_int64_t gd_dpl:2;
 u_int64_t gd_p:1;
 u_int64_t gd_hioffset:48;
 u_int64_t gd_xx2:8;
 u_int64_t gd_zero:5;
 u_int64_t gd_xx3:19;
} __attribute__((__packed__));




struct region_descriptor {
 u_int16_t rd_limit;
 u_int64_t rd_base;
} __attribute__((__packed__));


extern struct gate_descriptor *idt;

void setgate(struct gate_descriptor *, void *, int, int, int, int);
void unsetgate(struct gate_descriptor *);
void setregion(struct region_descriptor *, void *, u_int16_t);
void set_sys_segment(struct sys_segment_descriptor *, void *, size_t,
     int, int, int);
void set_mem_segment(struct mem_segment_descriptor *, void *, size_t,
     int, int, int, int, int);
int idt_vec_alloc(int, int);
void idt_vec_set(int, void (*)(void));
void idt_vec_free(int);
void cpu_init_idt(void);
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cacheinfo.h" 1






struct x86_cache_info {
 uint8_t cai_index;
 uint8_t cai_desc;
 uint8_t cai_associativity;
 u_int cai_totalsize;
 u_int cai_linesize;
 const char *cai_string;
};
# 27 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cacheinfo.h"
struct cpu_info;

const struct x86_cache_info *cache_info_lookup(const struct x86_cache_info *,
            u_int8_t);
void amd_cpu_cacheinfo(struct cpu_info *);
void x86_print_cacheinfo(struct cpu_info *);
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intrdefs.h" 1
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/queue.h" 1
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h" 2





enum devclass {
 DV_DULL,
 DV_CPU,
 DV_DISK,
 DV_IFNET,
 DV_TAPE,
 DV_TTY
};
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h"
struct device {
 enum devclass dv_class;
 struct { struct device *tqe_next; struct device **tqe_prev; } dv_list;
 struct cfdata *dv_cfdata;
 int dv_unit;
 char dv_xname[16];
 struct device *dv_parent;
 int dv_flags;
 int dv_ref;
};




struct devicelist { struct device *tqh_first; struct device **tqh_last; };




struct cfdata {
 struct cfattach *cf_attach;
 struct cfdriver *cf_driver;
 short cf_unit;
 short cf_fstate;
 long *cf_loc;
 int cf_flags;
 short *cf_parents;
 int cf_locnames;
 short cf_starunit1;
};
extern struct cfdata cfdata[];






typedef int (*cfmatch_t)(struct device *, void *, void *);
typedef void (*cfscan_t)(struct device *, void *);
# 127 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h"
struct cfattach {
 size_t ca_devsize;
 cfmatch_t ca_match;
 void (*ca_attach)(struct device *, struct device *, void *);
 int (*ca_detach)(struct device *, int);
 int (*ca_activate)(struct device *, int);
};





struct cfdriver {
 void **cd_devs;
 char *cd_name;
 enum devclass cd_class;
 int cd_indirect;
 int cd_ndevs;
};







typedef int (*cfprint_t)(void *, const char *);







struct pdevinit {
 void (*pdev_attach)(int);
 int pdev_count;
};


extern struct devicelist alldevs;

extern int autoconf_verbose;
extern volatile int config_pending;

void config_init(void);
void *config_search(cfmatch_t, struct device *, void *);
struct device *config_found_sm(struct device *, void *, cfprint_t,
    cfmatch_t);
struct device *config_rootfound(char *, void *);
void config_scan(cfscan_t, struct device *);
struct device *config_attach(struct device *, void *, void *, cfprint_t);
int config_detach(struct device *, int);
int config_detach_children(struct device *, int);
int config_deactivate(struct device *);
int config_suspend(struct device *, int);
int config_suspend_all(int);
int config_activate_children(struct device *, int);
struct device *config_make_softc(struct device *parent,
    struct cfdata *cf);
void config_defer(struct device *, void (*)(struct device *));
void config_pending_incr(void);
void config_pending_decr(void);
void config_mountroot(struct device *, void (*)(struct device *));
void config_process_deferred_mountroot(void);

struct device *device_mainbus(void);
struct device *device_mpath(void);
struct device *device_lookup(struct cfdriver *, int unit);
void device_ref(struct device *);
void device_unref(struct device *);

struct nam2blk {
 char *name;
 int maj;
};

int findblkmajor(struct device *dv);
char *findblkname(int);
void setroot(struct device *, int, int);
struct device *getdisk(char *str, int len, int defpart, dev_t *devp);
struct device *parsedisk(char *str, int len, int defpart, dev_t *devp);
void device_register(struct device *, void *);

int loadfirmware(const char *name, u_char **bufp, size_t *buflen);
# 52 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h" 1
# 96 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h"
struct schedstate_percpu {
 struct timespec spc_runtime;
 volatile int spc_schedflags;
 u_int spc_schedticks;
 u_int64_t spc_cp_time[5];
 u_char spc_curpriority;
 int spc_rrticks;
 int spc_pscnt;
 int spc_psdiv;
 struct proc *spc_idleproc;

 u_int spc_nrun;
 fixpt_t spc_ldavg;

 struct prochead { struct proc *tqh_first; struct proc **tqh_last; } spc_qs[32];
 volatile uint32_t spc_whichqs;




 struct { struct proc *lh_first; } spc_deadproc;

 volatile int spc_barrier;
};
# 134 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h"
extern int schedhz;
extern int rrticks_init;

struct proc;
void schedclock(struct proc *);
struct cpu_info;
void roundrobin(struct cpu_info *);
void scheduler_start(void);
void userret(struct proc *p);

void sched_init_cpu(struct cpu_info *);
void sched_idle(void *);
void sched_exit(struct proc *);
void mi_switch(void);
void cpu_switchto(struct proc *, struct proc *);
struct proc *sched_chooseproc(void);
struct cpu_info *sched_choosecpu(struct proc *);
struct cpu_info *sched_choosecpu_fork(struct proc *parent, int);
void cpu_idle_enter(void);
void cpu_idle_cycle(void);
void cpu_idle_leave(void);
void sched_peg_curproc(struct cpu_info *ci);
void sched_barrier(struct cpu_info *ci);

int sysctl_hwsetperf(void *, size_t *, void *, size_t);
int sysctl_hwperfpolicy(void *, size_t *, void *, size_t);
# 168 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h"
void sched_init_runqueues(void);
void setrunqueue(struct proc *);
void remrunqueue(struct proc *);
# 53 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sensors.h" 1
# 33 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sensors.h"
enum sensor_type {
 SENSOR_TEMP,
 SENSOR_FANRPM,
 SENSOR_VOLTS_DC,
 SENSOR_VOLTS_AC,
 SENSOR_OHMS,
 SENSOR_WATTS,
 SENSOR_AMPS,
 SENSOR_WATTHOUR,
 SENSOR_AMPHOUR,
 SENSOR_INDICATOR,
 SENSOR_INTEGER,
 SENSOR_PERCENT,
 SENSOR_LUX,
 SENSOR_DRIVE,
 SENSOR_TIMEDELTA,
 SENSOR_HUMIDITY,
 SENSOR_FREQ,
 SENSOR_ANGLE,
 SENSOR_DISTANCE,
 SENSOR_PRESSURE,
 SENSOR_ACCEL,
 SENSOR_MAX_TYPES
};
# 97 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sensors.h"
enum sensor_status {
 SENSOR_S_UNSPEC,
 SENSOR_S_OK,
 SENSOR_S_WARN,
 SENSOR_S_CRIT,
 SENSOR_S_UNKNOWN
};




struct sensor {
 char desc[32];
 struct timeval tv;
 int64_t value;
 enum sensor_type type;
 enum sensor_status status;
 int numt;
 int flags;


};




struct sensordev {
 int num;
 char xname[16];
 int maxnumt[SENSOR_MAX_TYPES];
 int sensors_count;
};




struct ksensor {
 struct { struct ksensor *sle_next; } list;
 char desc[32];
 struct timeval tv;
 int64_t value;
 enum sensor_type type;
 enum sensor_status status;
 int numt;
 int flags;
};
struct ksensors_head { struct ksensor *slh_first; };


struct ksensordev {
 struct { struct ksensordev *sle_next; } list;
 int num;
 char xname[16];
 int maxnumt[SENSOR_MAX_TYPES];
 int sensors_count;
 struct ksensors_head sensors_list;
};


void sensordev_install(struct ksensordev *);
void sensordev_deinstall(struct ksensordev *);
int sensordev_get(int, struct ksensordev **);


void sensor_attach(struct ksensordev *, struct ksensor *);
void sensor_detach(struct ksensordev *, struct ksensor *);
int sensor_find(int, enum sensor_type, int, struct ksensor **);


struct sensor_task;
struct sensor_task *sensor_task_register(void *, void (*)(void *),
        unsigned int);
void sensor_task_unregister(struct sensor_task *);
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2




struct vmxon_region {
        uint32_t vr_revision;
};




struct vmx {
 uint64_t vmx_cr0_fixed0;
 uint64_t vmx_cr0_fixed1;
 uint64_t vmx_cr4_fixed0;
 uint64_t vmx_cr4_fixed1;
 uint32_t vmx_vmxon_revision;
 uint32_t vmx_msr_table_size;
 uint32_t vmx_cr3_tgt_count;
 uint64_t vmx_vm_func;
};




struct svm {
};

union vmm_cpu_cap {
 struct vmx vcc_vmx;
 struct svm vcc_svm;
};

struct x86_64_tss;
struct cpu_info {
 struct device *ci_dev;
 struct cpu_info *ci_self;
 struct schedstate_percpu ci_schedstate;
 struct cpu_info *ci_next;

 struct proc *ci_curproc;
 u_int ci_cpuid;
 u_int ci_apicid;
 u_int ci_acpi_proc_id;
 u_int32_t ci_randseed;

 u_int64_t ci_scratch;

 struct proc *ci_fpcurproc;
 struct proc *ci_fpsaveproc;
 int ci_fpsaving;

 struct pcb *ci_curpcb;
 struct pcb *ci_idle_pcb;

 struct intrsource *ci_isources[64];
 u_int64_t ci_ipending;
 int ci_ilevel;
 int ci_idepth;
 int ci_handled_intr_level;
 u_int64_t ci_imask[16];
 u_int64_t ci_iunmask[16];

 int ci_mutex_level;


 volatile u_int ci_flags;
 u_int32_t ci_ipis;

 u_int32_t ci_feature_flags;
 u_int32_t ci_feature_eflags;
 u_int32_t ci_feature_sefflags_ebx;
 u_int32_t ci_feature_sefflags_ecx;
 u_int32_t ci_feature_tpmflags;
 u_int32_t ci_pnfeatset;
 u_int32_t ci_efeature_eax;
 u_int32_t ci_efeature_ecx;
 u_int32_t ci_brand[12];
 u_int32_t ci_amdcacheinfo[4];
 u_int32_t ci_extcacheinfo[4];
 u_int32_t ci_signature;
 u_int32_t ci_family;
 u_int32_t ci_model;
 u_int32_t ci_cflushsz;
 u_int64_t ci_tsc_freq;

 int ci_inatomic;


 u_int32_t ci_smt_id;
 u_int32_t ci_core_id;
 u_int32_t ci_pkg_id;

 struct cpu_functions *ci_func;
 void (*cpu_setup)(struct cpu_info *);
 void (*ci_info)(struct cpu_info *);

 struct device *ci_acpicpudev;
 volatile u_int ci_mwait;





 int ci_want_resched;

 struct x86_cache_info ci_cinfo[8];

 struct x86_64_tss *ci_tss;
 char *ci_gdt;

 volatile int ci_ddb_paused;
# 176 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
 struct ksensordev ci_sensordev;
 struct ksensor ci_sensor;



 u_int32_t ci_vmm_flags;





 union vmm_cpu_cap ci_vmm_cap;
 paddr_t ci_vmxon_region_pa;
 struct vmxon_region *ci_vmxon_region;
};
# 215 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
extern struct cpu_info cpu_info_primary;
extern struct cpu_info *cpu_info_list;
# 228 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
extern void need_resched(struct cpu_info *);
# 261 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
extern struct cpu_info cpu_info_primary;
# 281 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/psl.h" 1
# 77 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/psl.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 1
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/evcount.h" 1
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/evcount.h"
struct evcount {
 u_int64_t ec_count;
 int ec_id;
 const char *ec_name;
 void *ec_data;

 struct { struct evcount *tqe_next; struct evcount **tqe_prev; } next;
};

void evcount_attach(struct evcount *, const char *, void *);
void evcount_detach(struct evcount *);
int evcount_sysctl(int *, u_int, void *, size_t *, void *, size_t);
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 2
# 61 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
struct intrstub {
 void *ist_entry;
 void *ist_recurse;
 void *ist_resume;
};

struct intrsource {
 int is_maxlevel;
 int is_pin;
 struct intrhand *is_handlers;
 struct pic *is_pic;
 void *is_recurse;
 void *is_resume;
 char is_evname[32];
 int is_flags;
 int is_type;
 int is_idtvec;
 int is_minlevel;
};
# 91 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
struct intrhand {
 int (*ih_fun)(void *);
 void *ih_arg;
 int ih_level;
 int ih_flags;
 struct intrhand *ih_next;
 int ih_pin;
 int ih_slot;
 struct cpu_info *ih_cpu;
 int ih_irq;
 struct evcount ih_count;
};




extern void Xspllower(int);

int splraise(int);
int spllower(int);
void softintr(int);
# 162 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
void splassert_fail(int, int, const char *);
extern int splassert_ctl;
void splassert_check(int, const char *);
# 179 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pic.h" 1







# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mutex.h" 1
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mutex.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/mutex.h" 1
# 30 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/mutex.h"
struct mutex {
 int mtx_wantipl;
 int mtx_oldipl;
 volatile void *mtx_owner;
};
# 52 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/mutex.h"
void __mtx_init(struct mutex *, int);
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mutex.h" 2







void mtx_enter(struct mutex *);
void mtx_leave(struct mutex *);
int mtx_enter_try(struct mutex *);
# 9 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pic.h" 2

struct cpu_info;




struct pic {
 struct device pic_dev;
        int pic_type;



        void (*pic_hwmask)(struct pic *, int);
        void (*pic_hwunmask)(struct pic *, int);
 void (*pic_addroute)(struct pic *, struct cpu_info *, int, int, int);
 void (*pic_delroute)(struct pic *, struct cpu_info *, int, int, int);
 struct intrstub *pic_level_stubs;
 struct intrstub *pic_edge_stubs;
};
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pic.h"
extern struct pic i8259_pic;
extern struct pic local_pic;
extern struct pic msi_pic;
extern struct pic softintr_pic;
# 180 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 2





extern void Xsoftclock(void);
extern void Xsoftnet(void);
extern void Xsofttty(void);

extern struct intrstub i8259_stubs[];
extern struct intrstub ioapic_edge_stubs[];
extern struct intrstub ioapic_level_stubs[];

struct cpu_info;

extern int intr_shared_edge;

extern char idt_allocmap[];

void intr_default_setup(void);
int x86_nmi(void);
void intr_calculatemasks(struct cpu_info *);
int intr_allocate_slot_cpu(struct cpu_info *, struct pic *, int, int *);
int intr_allocate_slot(struct pic *, int, int, int, struct cpu_info **, int *,
     int *);
void *intr_establish(int, struct pic *, int, int, int, int (*)(void *),
     void *, const char *);
void intr_disestablish(struct intrhand *);
int intr_handler(struct intrframe *, struct intrhand *);
void cpu_intr_init(struct cpu_info *);
int intr_find_mpmapping(int bus, int pin, int *handle);
void intr_printconfig(void);
void intr_barrier(void *);
# 238 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
struct x86_soft_intrhand {
 struct { struct x86_soft_intrhand *tqe_next; struct x86_soft_intrhand **tqe_prev; }
  sih_q;
 struct x86_soft_intr *sih_intrhead;
 void (*sih_fn)(void *);
 void *sih_arg;
 int sih_pending;
};

struct x86_soft_intr {
 struct { struct x86_soft_intrhand *tqh_first; struct x86_soft_intrhand **tqh_last; }
   softintr_q;
 int softintr_ssir;
 struct mutex softintr_lock;
};

void *softintr_establish(int, void (*)(void *), void *);
void softintr_disestablish(void *);
void softintr_init(void);
void softintr_dispatch(int);
# 78 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/psl.h" 2
# 282 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 311 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
void signotify(struct proc *);




extern void (*delay_func)(int);
struct timeval;







extern int biosbasemem;
extern int biosextmem;
extern int cpu;
extern int cpu_feature;
extern int cpu_ebxfeature;
extern int cpu_ecxfeature;
extern int cpu_perf_eax;
extern int cpu_perf_ebx;
extern int cpu_perf_edx;
extern int cpu_apmi_edx;
extern int ecpu_ecxfeature;
extern int cpu_id;
extern char cpu_vendor[];
extern int cpuid_level;
extern int cpuspeed;


extern u_int cpu_mwait_size;
extern u_int cpu_mwait_states;


void identifycpu(struct cpu_info *);
int cpu_amd64speed(int *);


void dumpconf(void);
void cpu_reset(void);
void x86_64_proc0_tss_ldt_init(void);
void x86_64_bufinit(void);
void x86_64_init_pcb_tss_ldt(struct cpu_info *);
void cpu_proc_fork(struct proc *, struct proc *);
int amd64_pa_used(paddr_t);
extern void (*cpu_idle_enter_fcn)(void);
extern void (*cpu_idle_cycle_fcn)(void);
extern void (*cpu_idle_leave_fcn)(void);

struct region_descriptor;
void lgdt(struct region_descriptor *);

struct pcb;
void savectx(struct pcb *);
void switch_exit(struct proc *, void (*)(struct proc *));
void proc_trampoline(void);


extern void (*initclock_func)(void);
void startclocks(void);
void rtcstart(void);
void rtcstop(void);
void i8254_delay(int);
void i8254_initclocks(void);
void i8254_startclock(void);
void i8254_inittimecounter(void);
void i8254_inittimecounter_simple(void);


void i8259_default_setup(void);


void cpu_init_msrs(struct cpu_info *);



void dkcsumattach(void);


void x86_bus_space_init(void);
void x86_bus_space_mallocok(void);


void k8_powernow_init(struct cpu_info *);
void k8_powernow_setperf(int);


void k1x_init(struct cpu_info *);
void k1x_setperf(int);

void est_init(struct cpu_info *);
void est_setperf(int);
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/param.h" 2
# 89 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 105 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 1
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/stdarg.h" 1
# 29 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 2
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
extern int securelevel;
extern const char *panicstr;
extern const char version[];
extern const char copyright[];
extern const char ostype[];
extern const char osversion[];
extern const char osrelease[];
extern int cold;

extern int ncpus;
extern int ncpusfound;
extern int nblkdev;
extern int nchrdev;

extern int selwait;
extern int maxmem;
extern int physmem;

extern dev_t dumpdev;
extern long dumplo;

extern dev_t rootdev;
extern u_char bootduid[8];
extern u_char rootduid[8];
extern struct vnode *rootvp;

extern dev_t swapdev;
extern struct vnode *swapdev_vp;

struct proc;
struct process;


typedef int sy_call_t(struct proc *, void *, register_t *);

extern struct sysent {
 short sy_narg;
 short sy_argsize;
 int sy_flags;
 sy_call_t *sy_call;
} sysent[];
# 131 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
extern int boothowto;

extern void (*v_putc)(int);




int nullop(void *);
int enodev(void);
int enosys(void);
int enoioctl(void);
int enxio(void);
int eopnotsupp(void *);

struct vnodeopv_desc;
void vfs_opv_init_explicit(struct vnodeopv_desc *);
void vfs_opv_init_default(struct vnodeopv_desc *);
void vfs_op_init(void);

int seltrue(dev_t dev, int which, struct proc *);
int selfalse(dev_t dev, int which, struct proc *);
void *hashinit(int, int, int, u_long *);
void hashfree(void *, int, int);
int sys_nosys(struct proc *, void *, register_t *);

void panic(const char *, ...)
    __attribute__((__noreturn__,__format__(__kprintf__,1,2)));
void __assert(const char *, const char *, int, const char *)
    __attribute__((__noreturn__));
int printf(const char *, ...)
    __attribute__((__format__(__kprintf__,1,2)));
void uprintf(const char *, ...)
    __attribute__((__format__(__kprintf__,1,2)));
int vprintf(const char *, va_list)
    __attribute__((__format__(__kprintf__,1,0)));
int vsnprintf(char *, size_t, const char *, va_list)
    __attribute__((__format__(__kprintf__,3,0)));
int snprintf(char *buf, size_t, const char *, ...)
    __attribute__((__format__(__kprintf__,3,4)));
struct tty;
void ttyprintf(struct tty *, const char *, ...)
    __attribute__((__format__(__kprintf__,2,3)));

void splassert_fail(int, int, const char *);
extern int splassert_ctl;

void assertwaitok(void);

void tablefull(const char *);

int kcopy(const void *, void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));

void bcopy(const void *, void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));
void bzero(void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,2)));
void explicit_bzero(void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,2)));
int bcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));
void *memmove(void *, const void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));
void *memset(void *, int, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)));

int copystr(const void *, void *, size_t, size_t *)
  __attribute__ ((__bounded__(__string__,2,3)));
int copyinstr(const void *, void *, size_t, size_t *)
  __attribute__ ((__bounded__(__string__,2,3)));
int copyoutstr(const void *, void *, size_t, size_t *);
int copyin(const void *, void *, size_t)
  __attribute__ ((__bounded__(__buffer__,2,3)));
int copyout(const void *, void *, size_t);

void arc4random_buf(void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,2)));
u_int32_t arc4random(void);
u_int32_t arc4random_uniform(u_int32_t);

struct timeval;
struct timespec;
int tvtohz(const struct timeval *);
int tstohz(const struct timespec *);
void realitexpire(void *);

struct intrframe;
void hardclock(struct intrframe *);
void softclock(void *);
void statclock(struct intrframe *);

void initclocks(void);
void inittodr(time_t);
void resettodr(void);
void cpu_initclocks(void);

void startprofclock(struct process *);
void stopprofclock(struct process *);
void setstatclockrate(int);

void start_periodic_resettodr(void);
void stop_periodic_resettodr(void);

struct sleep_state;
void sleep_setup(struct sleep_state *, const volatile void *, int,
     const char *);
void sleep_setup_timeout(struct sleep_state *, int);
void sleep_setup_signal(struct sleep_state *, int);
void sleep_finish(struct sleep_state *, int);
int sleep_finish_timeout(struct sleep_state *);
int sleep_finish_signal(struct sleep_state *);
void sleep_queue_init(void);

struct mutex;
struct rwlock;
void wakeup_n(const volatile void *, int);
void wakeup(const volatile void *);

int tsleep(const volatile void *, int, const char *, int);
int msleep(const volatile void *, struct mutex *, int, const char*, int);
int rwsleep(const volatile void *, struct rwlock *, int, const char *, int);
void yield(void);

void wdog_register(int (*)(void *, int), void *);
void wdog_shutdown(void *);






struct hook_desc {
 struct { struct hook_desc *tqe_next; struct hook_desc **tqe_prev; } hd_list;
 void (*hd_fn)(void *);
 void *hd_arg;
};
struct hook_desc_head { struct hook_desc *tqh_first; struct hook_desc **tqh_last; };

extern struct hook_desc_head startuphook_list;

void *hook_establish(struct hook_desc_head *, int, void (*)(void *), void *);
void hook_disestablish(struct hook_desc_head *, void *);
void dohooks(struct hook_desc_head *, int);
# 289 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
struct uio;
int uiomove(void *, size_t, struct uio *);



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/rwlock.h" 1
# 57 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/rwlock.h"
struct proc;

struct rwlock {
 volatile unsigned long rwl_owner;
 const char *rwl_name;
};
# 93 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/rwlock.h"
struct rrwlock {
 struct rwlock rrwl_lock;
 uint32_t rrwl_wcnt;
};



void rw_init(struct rwlock *, const char *);

void rw_enter_read(struct rwlock *);
void rw_enter_write(struct rwlock *);
void rw_exit_read(struct rwlock *);
void rw_exit_write(struct rwlock *);


void rw_assert_wrlock(struct rwlock *);
void rw_assert_rdlock(struct rwlock *);
void rw_assert_unlocked(struct rwlock *);






int rw_enter(struct rwlock *, int);
void rw_exit(struct rwlock *);
int rw_status(struct rwlock *);

void rrw_init(struct rrwlock *, char *);
int rrw_enter(struct rrwlock *, int);
void rrw_exit(struct rrwlock *);
int rrw_status(struct rrwlock *);
# 295 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 2

extern struct rwlock netlock;
# 317 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
__attribute__((returns_twice)) int setjmp(label_t *);
__attribute__((__noreturn__)) void longjmp(label_t *);


void consinit(void);

void cpu_startup(void);
void cpu_configure(void);
void diskconf(void);

int nfs_mountroot(void);
int dk_mountroot(void);
extern int (*mountroot)(void);

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/lib/libkern/libkern.h" 1
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/lib/libkern/libkern.h"
static __inline int imax(int, int);
static __inline int imin(int, int);
static __inline u_int max(u_int, u_int);
static __inline u_int min(u_int, u_int);
static __inline long lmax(long, long);
static __inline long lmin(long, long);
static __inline u_long ulmax(u_long, u_long);
static __inline u_long ulmin(u_long, u_long);
static __inline int abs(int);


static __inline int
imax(int a, int b)
{
 return (a > b ? a : b);
}
static __inline int
imin(int a, int b)
{
 return (a < b ? a : b);
}
static __inline long
lmax(long a, long b)
{
 return (a > b ? a : b);
}
static __inline long
lmin(long a, long b)
{
 return (a < b ? a : b);
}
static __inline u_int
max(u_int a, u_int b)
{
 return (a > b ? a : b);
}
static __inline u_int
min(u_int a, u_int b)
{
 return (a < b ? a : b);
}
static __inline u_long
ulmax(u_long a, u_long b)
{
 return (a > b ? a : b);
}
static __inline u_long
ulmin(u_long a, u_long b)
{
 return (a < b ? a : b);
}

static __inline int
abs(int j)
{
 return(j < 0 ? -j : j);
}
# 161 "/crypt/home/bluhm/openbsd/cvs/src/sys/lib/libkern/libkern.h"
void __assert(const char *, const char *, int, const char *)
     __attribute__ ((__noreturn__));
int bcmp(const void *, const void *, size_t);
void bzero(void *, size_t);
void explicit_bzero(void *, size_t);
int ffs(int);
int fls(int);
int flsl(long);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memset(void *, int c, size_t len);
u_int32_t random(void);
int scanc(u_int, const u_char *, const u_char [], int);
int skpc(int, size_t, u_char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t)
  __attribute__ ((__bounded__(__string__,1,3)));
size_t strnlen(const char *, size_t);
size_t strlcpy(char *, const char *, size_t)
  __attribute__ ((__bounded__(__string__,1,3)));
size_t strlcat(char *, const char *, size_t)
  __attribute__ ((__bounded__(__string__,1,3)));
int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t);
int strncasecmp(const char *, const char *, size_t);
int getsn(char *, int);
char *strchr(const char *, int);
char *strrchr(const char *, int);
int timingsafe_bcmp(const void *, const void *, size_t);
# 332 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 2



void Debugger(void);



void user_config(void);
# 106 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h" 1
# 69 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
};
# 82 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 u_int mh_len;
 short mh_type;
 u_short mh_flags;
};


struct pf_state_key;
struct inpcb;

struct pkthdr_pf {
 struct pf_state_key *statekey;
 struct inpcb *inp;
 u_int32_t qid;
 u_int16_t tag;
 u_int8_t flags;
 u_int8_t routed;
 u_int8_t prio;
 u_int8_t pad[3];
};
# 122 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct pkthdr {
 void *ph_cookie;
 struct { struct m_tag *slh_first; } ph_tags;
 int len;
 u_int16_t ph_tagsset;
 u_int16_t ph_flowid;
 u_int16_t csum_flags;
 u_int16_t ether_vtag;
 u_int ph_rtableid;
 u_int ph_ifidx;
 u_int8_t ph_loopcnt;
 struct pkthdr_pf pf;
};


struct mbuf_ext {
 caddr_t ext_buf;
 void *ext_arg;
 u_int ext_free_fn;
 u_int ext_size;
 struct mbuf *ext_nextref;
 struct mbuf *ext_prevref;






};

struct mbuf {
 struct m_hdr m_hdr;
 union {
  struct {
   struct pkthdr MH_pkthdr;
   union {
    struct mbuf_ext MH_ext;
    char MH_databuf[((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))];
   } MH_dat;
  } MH;
  char M_databuf[(256 - sizeof(struct m_hdr))];
 } M_dat;
};
# 245 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/malloc.h" 1
# 319 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/malloc.h"
struct kmemstats {
 long ks_inuse;
 long ks_calls;
 long ks_memuse;
 u_short ks_limblocks;
 u_short ks_mapblocks;
 long ks_maxused;
 long ks_limit;
 long ks_size;
 long ks_spare;
};




struct kmemusage {
 short ku_indx;
 union {
  u_short freecnt;
  u_short pagecnt;
 } ku_un;
};



struct kmem_freelist;




struct kmembuckets {
 struct { struct kmem_freelist *sqx_first; struct kmem_freelist **sqx_last; unsigned long sqx_cookie; } kb_freelist;
 u_int64_t kb_calls;
 u_int64_t kb_total;
 u_int64_t kb_totalfree;
 u_int64_t kb_elmpercl;
 u_int64_t kb_highwat;
 u_int64_t kb_couldfree;
};
# 388 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/malloc.h"
extern struct kmemstats kmemstats[];
extern struct kmemusage *kmemusage;
extern char *kmembase;
extern struct kmembuckets bucket[];

void *malloc(size_t, int, int);
void *mallocarray(size_t, size_t, int, int);
void free(void *, int, size_t);
int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);

size_t malloc_roundup(size_t);
void malloc_printit(int (*)(const char *, ...));

void poison_mem(void *, size_t);
int poison_check(void *, size_t, size_t *, uint32_t *);
uint32_t poison_value(void *);
# 246 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h" 2
# 312 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
u_int mextfree_register(void (*)(caddr_t, u_int, void *));
# 389 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct mbstat {
 u_long m_drops;
 u_long m_wait;
 u_long m_drain;
 u_short m_mtypes[256];
};
# 404 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct mbuf_list {
 struct mbuf *ml_head;
 struct mbuf *ml_tail;
 u_int ml_len;
};

struct mbuf_queue {
 struct mutex mq_mtx;
 struct mbuf_list mq_list;
 u_int mq_maxlen;
 u_int mq_drops;
};



extern int nmbclust;
extern int mblowat;
extern int mcllowat;
extern int max_linkhdr;
extern int max_protohdr;
extern int max_hdr;

void mbinit(void);
void mbcpuinit(void);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_free(struct mbuf *);
struct mbuf *m_get(int, int);
struct mbuf *m_getclr(int, int);
struct mbuf *m_gethdr(int, int);
struct mbuf *m_inithdr(struct mbuf *);
void m_resethdr(struct mbuf *);
int m_defrag(struct mbuf *, int);
struct mbuf *m_prepend(struct mbuf *, int, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_makespace(struct mbuf *, int, int, int *);
struct mbuf *m_getptr(struct mbuf *, int, int *);
int m_leadingspace(struct mbuf *);
int m_trailingspace(struct mbuf *);
struct mbuf *m_clget(struct mbuf *, int, u_int);
void m_extref(struct mbuf *, struct mbuf *);
void m_extfree_pool(caddr_t, u_int, void *);
void m_adj(struct mbuf *, int);
int m_copyback(struct mbuf *, int, int, const void *, int);
struct mbuf *m_freem(struct mbuf *);
void m_purge(struct mbuf *);
void m_reclaim(void *, int);
void m_copydata(struct mbuf *, int, int, caddr_t);
void m_cat(struct mbuf *, struct mbuf *);
struct mbuf *m_devget(char *, int, int);
int m_apply(struct mbuf *, int, int,
     int (*)(caddr_t, caddr_t, unsigned int), caddr_t);
struct mbuf *m_dup_pkt(struct mbuf *, unsigned int, int);
int m_dup_pkthdr(struct mbuf *, struct mbuf *, int);


struct m_tag *m_tag_get(int, int, int);
void m_tag_prepend(struct mbuf *, struct m_tag *);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *);
struct m_tag *m_tag_find(struct mbuf *, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *, int);
int m_tag_copy_chain(struct mbuf *, struct mbuf *, int);
void m_tag_init(struct mbuf *);
struct m_tag *m_tag_first(struct mbuf *);
struct m_tag *m_tag_next(struct mbuf *, struct m_tag *);
# 505 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
void ml_init(struct mbuf_list *);
void ml_enqueue(struct mbuf_list *, struct mbuf *);
struct mbuf * ml_dequeue(struct mbuf_list *);
void ml_enlist(struct mbuf_list *, struct mbuf_list *);
struct mbuf * ml_dechain(struct mbuf_list *);
unsigned int ml_purge(struct mbuf_list *);
# 530 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
void mq_init(struct mbuf_queue *, u_int, int);
int mq_enqueue(struct mbuf_queue *, struct mbuf *);
struct mbuf * mq_dequeue(struct mbuf_queue *);
int mq_enlist(struct mbuf_queue *, struct mbuf_list *);
void mq_delist(struct mbuf_queue *, struct mbuf_list *);
struct mbuf * mq_dechain(struct mbuf_queue *);
unsigned int mq_purge(struct mbuf_queue *);
# 107 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
typedef __socklen_t socklen_t;




typedef __sa_family_t sa_family_t;
# 119 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};
# 137 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct splice {
 int sp_fd;
 off_t sp_max;
 struct timeval sp_idle;
};
# 206 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct sockaddr {
 __uint8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 224 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct sockaddr_storage {
 __uint8_t ss_len;
 sa_family_t ss_family;
 unsigned char __ss_pad1[6];
 __uint64_t __ss_pad2;
 unsigned char __ss_pad3[240];
};






struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 297 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct sockpeercred {
 uid_t uid;
 gid_t gid;
 pid_t pid;
};
# 427 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 unsigned int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 456 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 535 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
void pfctlinput(int, struct sockaddr *);
# 108 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 1
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/selinfo.h" 1
# 37 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/selinfo.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h" 1
# 53 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
struct kevent {
 __uintptr_t ident;
 short filter;
 u_short flags;
 u_int fflags;
 __int64_t data;
 void *udata;
};
# 116 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
# 134 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};

struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
 int kn_sfflags;
 __int64_t kn_sdata;
 union {
  struct file *p_fp;
  struct process *p_process;
 } kn_ptr;
 const struct filterops *kn_fop;
 void *kn_hook;
# 167 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
};

struct proc;

extern void knote(struct klist *list, long hint);
extern void knote_activate(struct knote *);
extern void knote_remove(struct proc *p, struct klist *list);
extern void knote_fdclose(struct proc *p, int fd);
extern void knote_processexit(struct proc *);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct proc *p);
extern int filt_seltrue(struct knote *kn, long hint);
extern int seltrue_kqfilter(dev_t, struct knote *);
extern void klist_invalidate(struct klist *);
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/selinfo.h" 2





struct selinfo {
 pid_t si_seltid;
 struct klist si_note;
 short si_flags;
};



struct proc;

void selrecord(struct proc *selector, struct selinfo *);
void selwakeup(struct selinfo *);
# 36 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/task.h" 1
# 24 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/task.h"
struct taskq;

struct task {
 struct { struct task *tqe_next; struct task **tqe_prev; } t_entry;
 void (*t_func)(void *);
 void *t_arg;
 unsigned int t_flags;
};

struct task_list { struct task *tqh_first; struct task **tqh_last; };







extern struct taskq *const systq;
extern struct taskq *const systqmp;

struct taskq *taskq_create(const char *, unsigned int, int, unsigned int);
void taskq_destroy(struct taskq *);

void task_set(struct task *, void (*)(void *), void *);
int task_add(struct taskq *, struct task *);
int task_del(struct taskq *, struct task *);
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/timeout.h" 1
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/timeout.h"
struct circq {
 struct circq *next;
 struct circq *prev;
};

struct timeout {
 struct circq to_list;
 void (*to_func)(void *);
 void *to_arg;
 int to_time;
 int to_flags;
};
# 89 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/timeout.h"
struct bintime;

void timeout_set(struct timeout *, void (*)(void *), void *);
void timeout_set_proc(struct timeout *, void (*)(void *), void *);
int timeout_add(struct timeout *, int);
int timeout_add_tv(struct timeout *, const struct timeval *);
int timeout_add_ts(struct timeout *, const struct timespec *);
int timeout_add_bt(struct timeout *, const struct bintime *);
int timeout_add_sec(struct timeout *, int);
int timeout_add_msec(struct timeout *, int);
int timeout_add_usec(struct timeout *, int);
int timeout_add_nsec(struct timeout *, int);
int timeout_del(struct timeout *);

void timeout_startup(void);
void timeout_adjust_ticks(int);





int timeout_hardclock_update(void);
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 2






struct soqhead { struct socket *tqh_first; struct socket **tqh_last; };







struct socket {
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 void *so_pcb;
 struct protosw *so_proto;
# 71 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
 struct socket *so_head;
 struct soqhead *so_onq;
 struct soqhead so_q0;
 struct soqhead so_q;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_qe;
 short so_q0len;
 short so_qlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 uid_t so_siguid;
 uid_t so_sigeuid;
 u_long so_oobmark;



 struct sosplice {
  struct socket *ssp_socket;
  struct socket *ssp_soback;
  off_t ssp_len;
  off_t ssp_max;
  struct timeval ssp_idletv;
  struct timeout ssp_idleto;
  struct task ssp_task;
 } *so_sp;



 struct sockbuf {
  u_long sb_cc;
  u_long sb_datacc;
  u_long sb_hiwat;
  u_long sb_wat;
  u_long sb_mbcnt;
  u_long sb_mbmax;
  long sb_lowat;
  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  struct selinfo sb_sel;
  int sb_flagsintr;
  short sb_flags;
  u_short sb_timeo;
 } so_rcv, so_snd;
# 127 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
 void (*so_upcall)(struct socket *so, caddr_t arg, int waitf);
 caddr_t so_upcallarg;
 uid_t so_euid, so_ruid;
 gid_t so_egid, so_rgid;
 pid_t so_cpid;
};
# 218 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
struct rwlock;






int sblock(struct sockbuf *, int, struct rwlock *);


void sbunlock(struct sockbuf *);
# 237 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
extern u_long sb_max;

extern struct pool socket_pool;

struct mbuf;
struct sockaddr;
struct proc;
struct msghdr;
struct stat;
struct knote;




int soo_read(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_write(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_ioctl(struct file *fp, u_long cmd, caddr_t data,
     struct proc *p);
int soo_poll(struct file *fp, int events, struct proc *p);
int soo_kqfilter(struct file *fp, struct knote *kn);
int soo_close(struct file *fp, struct proc *p);
int soo_stat(struct file *, struct stat *, struct proc *);
int uipc_usrreq(struct socket *, int , struct mbuf *,
    struct mbuf *, struct mbuf *, struct proc *);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb);
int sbcheckreserve(u_long cnt, u_long defcnt);
int sbchecklowmem(void);
int sbreserve(struct sockbuf *sb, u_long cc);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
void soinit(void);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct mbuf *nam);
int sobind(struct socket *so, struct mbuf *nam, struct proc *p);
void socantrcvmore(struct socket *so);
void socantsendmore(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct mbuf *nam);
int soconnect2(struct socket *so1, struct socket *so2);
int socreate(int dom, struct socket **aso, int type, int proto);
int sodisconnect(struct socket *so);
void sofree(struct socket *so);
int sogetopt(struct socket *so, int level, int optname,
     struct mbuf **mp);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog);
struct socket *sonewconn(struct socket *head, int connstatus);
void soqinsque(struct socket *head, struct socket *so, int q);
int soqremque(struct socket *so, int q);
int soreceive(struct socket *so, struct mbuf **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp,
     socklen_t controllen);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct mbuf *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags);
int sosetopt(struct socket *so, int level, int optname,
     struct mbuf *m0);
int soshutdown(struct socket *so, int how);
void sowakeup(struct socket *so, struct sockbuf *sb);
void sorwakeup(struct socket *);
void sowwakeup(struct socket *);
int sockargs(struct mbuf **, const void *, size_t, int);

int sendit(struct proc *, int, struct msghdr *, int, register_t *);
int recvit(struct proc *, int, struct msghdr *, caddr_t,
      register_t *);
int doaccept(struct proc *, int, struct sockaddr *, socklen_t *, int,
     register_t *);
# 109 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/domain.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)(void);

 int (*dom_externalize)(struct mbuf *, socklen_t, int);

 void (*dom_dispose)(struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;

 unsigned int dom_rtkeylen;
 unsigned int dom_rtoffset;
 unsigned int dom_maxplen;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


extern struct domain *domains[];
void domaininit(void);

extern struct domain inetdomain;


extern struct domain inet6domain;
# 111 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/protosw.h" 1
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;
struct proc;

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;



 void (*pr_input)(struct mbuf *, ...);

 int (*pr_output)(struct mbuf *, ...);

 void *(*pr_ctlinput)(int, struct sockaddr *, u_int, void *);

 int (*pr_ctloutput)(int, struct socket *, int, int, struct mbuf **);



 int (*pr_usrreq)(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *, struct proc *);


 void (*pr_init)(void);
 void (*pr_fasttimo)(void);
 void (*pr_slowtimo)(void);
 void (*pr_drain)(void);

 int (*pr_sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};
# 229 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/protosw.h"
struct sockaddr;
struct protosw *pffindproto(int, int, int);
struct protosw *pffindtype(int, int);
void pfctlinput(int, struct sockaddr *);

extern u_char ip_protox[];
extern struct protosw inetsw[];
# 112 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ioctl.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ioctl.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ttycom.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ttycom.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ioccom.h" 1
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ttycom.h" 2







struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};

struct tstamps {
 int ts_set;
 int ts_clr;
};
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ioctl.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/filio.h" 1
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ioctl.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sockio.h" 1
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ioctl.h" 2
# 113 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/kernel.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/kernel.h"
extern long hostid;
extern char hostname[256];
extern int hostnamelen;
extern char domainname[256];
extern int domainnamelen;


extern struct timespec boottime;
extern struct timezone tz;

extern int tick;
extern int tickfix;
extern int tickfixinterval;
extern int tickadj;
extern int ticks;
extern int hz;
extern int stathz;
extern int profhz;
extern int lbolt;
extern int tickdelta;
extern long timedelta;

extern int64_t adjtimedelta;
extern struct bintime naptime;
# 114 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h"
struct kinfo_pool {
 unsigned int pr_size;
 unsigned int pr_pgsize;
 unsigned int pr_itemsperpage;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_hardlimit;


 unsigned int pr_npages;
 unsigned int pr_nout;
 unsigned int pr_nitems;

 unsigned long pr_nget;
 unsigned long pr_nput;
 unsigned long pr_nfail;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;
};




# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/tree.h" 1
# 767 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/tree.h"
struct rb_type {
 int (*t_compare)(const void *, const void *);
 void (*t_augment)(void *);
 unsigned int t_offset;
};

struct rb_tree {
 struct rb_entry *rbt_root;
};

struct rb_entry {
 struct rb_entry *rbt_parent;
 struct rb_entry *rbt_left;
 struct rb_entry *rbt_right;
 unsigned int rbt_color;
};
# 793 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/tree.h"
static inline void
_rb_init(struct rb_tree *rbt)
{
 rbt->rbt_root = ((void *)0);
}

static inline int
_rb_empty(struct rb_tree *rbt)
{
 return (rbt->rbt_root == ((void *)0));
}

void *_rb_insert(const struct rb_type *, struct rb_tree *, void *);
void *_rb_remove(const struct rb_type *, struct rb_tree *, void *);
void *_rb_find(const struct rb_type *, struct rb_tree *, const void *);
void *_rb_nfind(const struct rb_type *, struct rb_tree *, const void *);
void *_rb_root(const struct rb_type *, struct rb_tree *);
void *_rb_min(const struct rb_type *, struct rb_tree *);
void *_rb_max(const struct rb_type *, struct rb_tree *);
void *_rb_next(const struct rb_type *, void *);
void *_rb_prev(const struct rb_type *, void *);
void *_rb_left(const struct rb_type *, void *);
void *_rb_right(const struct rb_type *, void *);
void *_rb_parent(const struct rb_type *, void *);
void *_rb_color(const struct rb_type *, void *);
void _rb_poison(const struct rb_type *, void *, unsigned long);
int _rb_check(const struct rb_type *, void *, unsigned long);
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h" 2


struct pool;
struct pool_request;
struct pool_requests { struct pool_request *tqh_first; struct pool_request **tqh_last; };

struct pool_allocator {
 void *(*pa_alloc)(struct pool *, int, int *);
 void (*pa_free)(struct pool *, void *);
 size_t pa_pagesz;
};
# 111 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h"
struct pool_pagelist { struct pool_page_header *tqh_first; struct pool_page_header **tqh_last; };

struct pool_cache_item;
struct pool_cache_lists { struct pool_cache_item *tqh_first; struct pool_cache_item **tqh_last; };
struct cpumem;

struct pool {
 struct mutex pr_mtx;
 struct { struct pool *sqe_next; }
   pr_poollist;
 struct pool_pagelist
   pr_emptypages;
 struct pool_pagelist
   pr_fullpages;
 struct pool_pagelist
   pr_partpages;
 struct pool_page_header *
   pr_curpage;
 unsigned int pr_size;
 unsigned int pr_minitems;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_npages;
 unsigned int pr_itemsperpage;
 unsigned int pr_slack;
 unsigned int pr_nitems;
 unsigned int pr_nout;
 unsigned int pr_hardlimit;

 unsigned int pr_serial;
 unsigned int pr_pgsize;
 vaddr_t pr_pgmask;
 struct pool_allocator *
   pr_alloc;
 const char * pr_wchan;






 int pr_ipl;

 struct phtree { struct rb_tree rbh_root; }
   pr_phtree;

 struct cpumem * pr_cache;
 unsigned long pr_cache_magic[2];
 struct mutex pr_cache_mtx;
 struct pool_cache_lists
   pr_cache_lists;
 u_int pr_cache_nlist;
 u_int pr_cache_items;
 u_int pr_cache_contention;
 int pr_cache_nout;

 u_int pr_align;
 u_int pr_maxcolors;
 int pr_phoffset;





 const char *pr_hardlimit_warning;
 struct timeval pr_hardlimit_ratecap;
 struct timeval pr_hardlimit_warning_last;




 struct mutex pr_requests_mtx;
 struct pool_requests
   pr_requests;
 unsigned int pr_requesting;




 unsigned long pr_nget;
 unsigned long pr_nfail;
 unsigned long pr_nput;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;


 const struct kmem_pa_mode *
   pr_crange;
};





extern struct pool_allocator pool_allocator_single;

struct pool_request {
 struct { struct pool_request *tqe_next; struct pool_request **tqe_prev; } pr_entry;
 void (*pr_handler)(void *, void *);
 void *pr_cookie;
 void *pr_item;
};

void pool_init(struct pool *, size_t, u_int, int, int,
      const char *, struct pool_allocator *);
void pool_cache_init(struct pool *);
void pool_destroy(struct pool *);
void pool_setlowat(struct pool *, int);
void pool_sethiwat(struct pool *, int);
int pool_sethardlimit(struct pool *, u_int, const char *, int);
struct uvm_constraint_range;
void pool_set_constraints(struct pool *,
      const struct kmem_pa_mode *mode);

void *pool_get(struct pool *, int) __attribute__((__malloc__));
void pool_request_init(struct pool_request *,
      void (*)(void *, void *), void *);
void pool_request(struct pool *, struct pool_request *);
void pool_put(struct pool *, void *);
int pool_reclaim(struct pool *);
void pool_reclaim_all(void);
int pool_prime(struct pool *, int);





void pool_printit(struct pool *, const char *,
      int (*)(const char *, ...));
void pool_walk(struct pool *, int, int (*)(const char *, ...),
      void (*)(void *, int, int (*)(const char *, ...)));



void dma_alloc_init(void);
void *dma_alloc(size_t size, int flags);
void dma_free(void *m, size_t size);
# 116 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h" 1
# 21 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/atomic.h" 1
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/atomic.h"
static inline unsigned int
_atomic_cas_uint(volatile unsigned int *p, unsigned int e, unsigned int n)
{
 __asm volatile( " cmpxchgl %2, %1"
     : "=a" (n), "=m" (*p)
     : "r" (n), "a" (e), "m" (*p));

 return (n);
}


static inline unsigned long
_atomic_cas_ulong(volatile unsigned long *p, unsigned long e, unsigned long n)
{
 __asm volatile( " cmpxchgq %2, %1"
     : "=a" (n), "=m" (*p)
     : "r" (n), "a" (e), "m" (*p));

 return (n);
}


static inline void *
_atomic_cas_ptr(volatile void *p, void *e, void *n)
{
 __asm volatile( " cmpxchgq %2, %1"
     : "=a" (n), "=m" (*(unsigned long *)p)
     : "r" (n), "a" (e), "m" (*(unsigned long *)p));

 return (n);
}


static inline unsigned int
_atomic_swap_uint(volatile unsigned int *p, unsigned int n)
{
 __asm volatile("xchgl %0, %1"
     : "=a" (n), "=m" (*p)
     : "0" (n), "m" (*p));

 return (n);
}



static inline unsigned long
_atomic_swap_ulong(volatile unsigned long *p, unsigned long n)
{
 __asm volatile("xchgq %0, %1"
     : "=a" (n), "=m" (*p)
     : "0" (n), "m" (*p));

 return (n);
}


static inline uint64_t
_atomic_swap_64(volatile uint64_t *p, uint64_t n)
{
 __asm volatile("xchgq %0, %1"
     : "=a" (n), "=m" (*p)
     : "0" (n), "m" (*p));

 return (n);
}


static inline void *
_atomic_swap_ptr(volatile void *p, void *n)
{
 __asm volatile("xchgq %0, %1"
     : "=a" (n), "=m" (*(unsigned long *)p)
     : "0" (n), "m" (*(unsigned long *)p));

 return (n);
}


static inline void
_atomic_inc_int(volatile unsigned int *p)
{
 __asm volatile( " incl %0"
     : "+m" (*p));
}


static inline void
_atomic_inc_long(volatile unsigned long *p)
{
 __asm volatile( " incq %0"
     : "+m" (*p));
}


static inline void
_atomic_dec_int(volatile unsigned int *p)
{
 __asm volatile( " decl %0"
     : "+m" (*p));
}


static inline void
_atomic_dec_long(volatile unsigned long *p)
{
 __asm volatile( " decq %0"
     : "+m" (*p));
}


static inline void
_atomic_add_int(volatile unsigned int *p, unsigned int v)
{
 __asm volatile( " addl %1,%0"
     : "+m" (*p)
     : "a" (v));
}


static inline void
_atomic_add_long(volatile unsigned long *p, unsigned long v)
{
 __asm volatile( " addq %1,%0"
     : "+m" (*p)
     : "a" (v));
}


static inline void
_atomic_sub_int(volatile unsigned int *p, unsigned int v)
{
 __asm volatile( " subl %1,%0"
     : "+m" (*p)
     : "a" (v));
}


static inline void
_atomic_sub_long(volatile unsigned long *p, unsigned long v)
{
 __asm volatile( " subq %1,%0"
     : "+m" (*p)
     : "a" (v));
}



static inline unsigned long
_atomic_add_int_nv(volatile unsigned int *p, unsigned int v)
{
 unsigned int rv = v;

 __asm volatile( " xaddl %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv + v);
}


static inline unsigned long
_atomic_add_long_nv(volatile unsigned long *p, unsigned long v)
{
 unsigned long rv = v;

 __asm volatile( " xaddq %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv + v);
}


static inline unsigned long
_atomic_sub_int_nv(volatile unsigned int *p, unsigned int v)
{
 unsigned int rv = 0 - v;

 __asm volatile( " xaddl %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv - v);
}


static inline unsigned long
_atomic_sub_long_nv(volatile unsigned long *p, unsigned long v)
{
 unsigned long rv = 0 - v;

 __asm volatile( " xaddq %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv - v);
}
# 284 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/atomic.h"
static __inline void
x86_atomic_setbits_u32(volatile u_int32_t *ptr, u_int32_t bits)
{
 __asm volatile( " orl %1,%0" : "=m" (*ptr) : "ir" (bits));
}

static __inline void
x86_atomic_clearbits_u32(volatile u_int32_t *ptr, u_int32_t bits)
{
 __asm volatile( " andl %1,%0" : "=m" (*ptr) : "ir" (~bits));
}

static __inline void
x86_atomic_setbits_u64(volatile u_int64_t *ptr, u_int64_t bits)
{
 __asm volatile( " orq %1,%0" : "=m" (*ptr) : "er" (bits));
}

static __inline void
x86_atomic_clearbits_u64(volatile u_int64_t *ptr, u_int64_t bits)
{
 __asm volatile( " andq %1,%0" : "=m" (*ptr) : "er" (~bits));
}
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h" 2
# 117 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h" 1
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_nameindex {
 unsigned int if_index;
 char *if_name;
};
# 65 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};



struct if_rxring {
 int rxr_adjusted;
 u_int rxr_alive;
 u_int rxr_cwm;
 u_int rxr_lwm;
 u_int rxr_hwm;
};

struct if_rxring_info {
 char ifr_name[16];
 u_int ifr_size;
 struct if_rxring ifr_info;
};


struct if_rxrinfo {
 u_int ifri_total;
 struct if_rxring_info *ifri_entries;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
 u_int32_t ifi_mtu;
 u_int32_t ifi_metric;
 u_int32_t ifi_rdomain;
 u_int64_t ifi_baudrate;

 u_int64_t ifi_ipackets;
 u_int64_t ifi_ierrors;
 u_int64_t ifi_opackets;
 u_int64_t ifi_oerrors;
 u_int64_t ifi_collisions;
 u_int64_t ifi_ibytes;
 u_int64_t ifi_obytes;
 u_int64_t ifi_imcasts;
 u_int64_t ifi_omcasts;
 u_int64_t ifi_iqdrops;
 u_int64_t ifi_oqdrops;
 u_int64_t ifi_noproto;
 u_int32_t ifi_capabilities;
 struct timeval ifi_lastchange;
};
# 145 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_status_description {
 u_char ifs_type;
 u_char ifs_state;
 const char *ifs_string;
};
# 258 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_msghdr {
 u_short ifm_msglen;
 u_char ifm_version;
 u_char ifm_type;
 u_short ifm_hdrlen;
 u_short ifm_index;
 u_short ifm_tableid;
 u_char ifm_pad1;
 u_char ifm_pad2;
 int ifm_addrs;
 int ifm_flags;
 int ifm_xflags;
 struct if_data ifm_data;
};





struct ifa_msghdr {
 u_short ifam_msglen;
 u_char ifam_version;
 u_char ifam_type;
 u_short ifam_hdrlen;
 u_short ifam_index;
 u_short ifam_tableid;
 u_char ifam_pad1;
 u_char ifam_pad2;
 int ifam_addrs;
 int ifam_flags;
 int ifam_metric;
};




struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_hdrlen;
 u_short ifan_index;
 u_short ifan_what;
 char ifan_name[16];
};





struct if_nameindex_msg {
 unsigned int if_index;
 char if_name[16];
};
# 320 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct ifg_req {
 union {
  char ifgrqu_group[16];
  char ifgrqu_member[16];
 } ifgrq_ifgrqu;


};

struct ifg_attrib {
 int ifg_carp_demoted;
};




struct ifgroupreq {
 char ifgr_name[16];
 u_int ifgr_len;
 union {
  char ifgru_group[16];
  struct ifg_req *ifgru_groups;
  struct ifg_attrib ifgru_attrib;
 } ifgr_ifgru;



};







struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags;
  int ifru_metric;
  int64_t ifru_vnetid;
  uint64_t ifru_media;
  caddr_t ifru_data;
  unsigned int ifru_index;
 } ifr_ifru;
# 382 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
};

struct ifaliasreq {
 char ifra_name[16];
 union {
  struct sockaddr ifrau_addr;
  int ifrau_align;
  } ifra_ifrau;



 struct sockaddr ifra_dstaddr;

 struct sockaddr ifra_mask;
};

struct ifmediareq {
 char ifm_name[16];
 uint64_t ifm_current;
 uint64_t ifm_mask;
 uint64_t ifm_status;
 uint64_t ifm_active;
 int ifm_count;
 uint64_t *ifm_ulist;
};

struct ifkalivereq {
 char ikar_name[16];
 int ikar_timeo;
 int ikar_cnt;
};







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};




struct if_laddrreq {
 char iflr_name[16];
 unsigned int flags;

 unsigned int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};


struct if_afreq {
 char ifar_name[16];
 sa_family_t ifar_af;
};


struct if_parent {
 char ifp_name[16];
 char ifp_parent[16];
};

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_arp.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_arp.h"
struct arphdr {
 u_int16_t ar_hrd;




 u_int16_t ar_pro;
 u_int8_t ar_hln;
 u_int8_t ar_pln;
 u_int16_t ar_op;
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_arp.h"
};




struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 455 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h" 2


struct socket;
struct ifnet;

void if_alloc_sadl(struct ifnet *);
void if_free_sadl(struct ifnet *);
void if_attach(struct ifnet *);
void if_attachtail(struct ifnet *);
void if_attachhead(struct ifnet *);
void if_deactivate(struct ifnet *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_downall(void);
void if_link_state_change(struct ifnet *);
void if_up(struct ifnet *);
int ifconf(u_long, caddr_t);
void ifinit(void);
int ifioctl(struct socket *, u_long, caddr_t, struct proc *);
int ifpromisc(struct ifnet *, int);
struct ifg_group *if_creategroup(const char *);
int if_addgroup(struct ifnet *, const char *);
int if_delgroup(struct ifnet *, const char *);
void if_group_routechange(struct sockaddr *, struct sockaddr *);
struct ifnet *ifunit(const char *);
struct ifnet *if_get(unsigned int);
void if_put(struct ifnet *);
void ifnewlladdr(struct ifnet *);
void if_congestion(void);
int if_congested(void);
__attribute__((__noreturn__)) void unhandled_af(int);
int if_setlladdr(struct ifnet *, const uint8_t *);
# 119 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h" 1
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/ifq.h" 1
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/ifq.h"
struct ifnet;

struct ifq_ops;

struct ifqueue {
 struct ifnet *ifq_if;


 struct mutex ifq_mtx;
 uint64_t ifq_drops;
 const struct ifq_ops *ifq_ops;
 void *ifq_q;
 unsigned int ifq_len;
 unsigned int ifq_oactive;


 struct mutex ifq_task_mtx;
 struct task_list ifq_task_list;
 void *ifq_serializer;


 struct task ifq_start;
 struct task ifq_restart;

 unsigned int ifq_maxlen;
};
# 304 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/ifq.h"
struct ifq_ops {
 void *(*ifqop_alloc)(void *);
 void (*ifqop_free)(void *);
 int (*ifqop_enq)(struct ifqueue *, struct mbuf *);
 struct mbuf *(*ifqop_deq_begin)(struct ifqueue *, void **);
 void (*ifqop_deq_commit)(struct ifqueue *,
        struct mbuf *, void *);
 void (*ifqop_purge)(struct ifqueue *,
        struct mbuf_list *);
};





void ifq_init(struct ifqueue *, struct ifnet *);
void ifq_attach(struct ifqueue *, const struct ifq_ops *, void *);
void ifq_destroy(struct ifqueue *);
int ifq_enqueue_try(struct ifqueue *, struct mbuf *);
int ifq_enqueue(struct ifqueue *, struct mbuf *);
struct mbuf *ifq_deq_begin(struct ifqueue *);
void ifq_deq_commit(struct ifqueue *, struct mbuf *);
void ifq_deq_rollback(struct ifqueue *, struct mbuf *);
struct mbuf *ifq_dequeue(struct ifqueue *);
unsigned int ifq_purge(struct ifqueue *);
void *ifq_q_enter(struct ifqueue *, const struct ifq_ops *);
void ifq_q_leave(struct ifqueue *, void *);
void ifq_serialize(struct ifqueue *, struct task *);
int ifq_is_serialized(struct ifqueue *);
void ifq_barrier(struct ifqueue *);





static inline void
ifq_set_oactive(struct ifqueue *ifq)
{
 ifq->ifq_oactive = 1;
}

static inline void
ifq_clr_oactive(struct ifqueue *ifq)
{
 ifq->ifq_oactive = 0;
}

static inline unsigned int
ifq_is_oactive(struct ifqueue *ifq)
{
 return (ifq->ifq_oactive);
}

static inline void
ifq_start(struct ifqueue *ifq)
{
 ifq_serialize(ifq, &ifq->ifq_start);
}

static inline void
ifq_restart(struct ifqueue *ifq)
{
 ifq_serialize(ifq, &ifq->ifq_restart);
}



extern const struct ifq_ops * const ifq_priq_ops;
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h" 2
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h"
struct rtentry;
struct timeout;
struct ifnet;
struct task;




struct if_clone {
 struct { struct if_clone *le_next; struct if_clone **le_prev; } ifc_list;
 const char *ifc_name;
 size_t ifc_namelen;

 int (*ifc_create)(struct if_clone *, int);
 int (*ifc_destroy)(struct ifnet *);
};
# 100 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h"
struct ifnet_head { struct ifnet *tqh_first; struct ifnet **tqh_last; };

struct ifnet {
 void *if_softc;
 struct refcnt if_refcnt;
 struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_list;
 struct { struct ifaddr *tqh_first; struct ifaddr **tqh_last; } if_addrlist;
 struct { struct ifmaddr *tqh_first; struct ifmaddr **tqh_last; } if_maddrlist;
 struct { struct ifg_list *tqh_first; struct ifg_list **tqh_last; } if_groups;
 struct hook_desc_head *if_addrhooks;
 struct hook_desc_head *if_linkstatehooks;
 struct hook_desc_head *if_detachhooks;

 void (*if_rtrequest)(struct ifnet *, int, struct rtentry *);
 char if_xname[16];
 int if_pcount;
 caddr_t if_bpf;
 caddr_t if_bridgeport;
 caddr_t if_switchport;
 caddr_t if_pf_kif;
 union {
  caddr_t carp_s;
  struct ifnet *carp_d;
 } if_carp_ptr;


 unsigned int if_index;
 short if_timer;
 short if_flags;
 int if_xflags;
 struct if_data if_data;
 u_int32_t if_hardmtu;
 char if_description[64];
 u_short if_rtlabelid;
 u_int8_t if_priority;
 u_int8_t if_llprio;
 struct timeout *if_slowtimo;
 struct task *if_watchdogtask;
 struct task *if_linkstatetask;


 struct mbuf_queue if_inputqueue;
 struct task *if_inputtask;
 struct srpl if_inputs;


 int (*if_output)(struct ifnet *, struct mbuf *, struct sockaddr *,
       struct rtentry *);


 int (*if_ll_output)(struct ifnet *, struct mbuf *,
      struct sockaddr *, struct rtentry *);

 void (*if_start)(struct ifnet *);

 int (*if_ioctl)(struct ifnet *, u_long, caddr_t);

 void (*if_watchdog)(struct ifnet *);
 int (*if_wol)(struct ifnet *, int);
 struct ifqueue if_snd;
 struct sockaddr_dl *if_sadl;

 void *if_afdata[36];
};
# 193 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h"
struct ifaddr {
 struct sockaddr *ifa_addr;
 struct sockaddr *ifa_dstaddr;

 struct sockaddr *ifa_netmask;
 struct ifnet *ifa_ifp;
 struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_list;
 u_int ifa_flags;
 u_int ifa_refcnt;
 int ifa_metric;
};






struct ifmaddr {
 struct sockaddr *ifma_addr;
 unsigned int ifma_ifidx;
 unsigned int ifma_refcnt;
 struct { struct ifmaddr *tqe_next; struct ifmaddr **tqe_prev; } ifma_list;
};





struct ifg_group {
 char ifg_group[16];
 u_int ifg_refcnt;
 caddr_t ifg_pf_kif;
 int ifg_carp_demoted;
 struct { struct ifg_member *tqh_first; struct ifg_member **tqh_last; } ifg_members;
 struct { struct ifg_group *tqe_next; struct ifg_group **tqe_prev; } ifg_next;
};

struct ifg_member {
 struct { struct ifg_member *tqe_next; struct ifg_member **tqe_prev; } ifgm_next;
 struct ifnet *ifgm_ifp;
};

struct ifg_list {
 struct ifg_group *ifgl_group;
 struct { struct ifg_list *tqe_next; struct ifg_list **tqe_prev; } ifgl_next;
};
# 273 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h"
struct niqueue {
 struct mbuf_queue ni_q;
 u_int ni_isr;
};




void niq_init(struct niqueue *, u_int, u_int);
int niq_enqueue(struct niqueue *, struct mbuf *);
int niq_enlist(struct niqueue *, struct mbuf_list *);
# 293 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_var.h"
extern struct ifnet_head ifnet;
extern struct taskq *softnettq;

void if_start(struct ifnet *);
int if_enqueue_try(struct ifnet *, struct mbuf *);
int if_enqueue(struct ifnet *, struct mbuf *);
void if_input(struct ifnet *, struct mbuf_list *);
int if_input_local(struct ifnet *, struct mbuf *, sa_family_t);
void if_rtrequest_dummy(struct ifnet *, int, struct rtentry *);
void p2p_rtrequest(struct ifnet *, int, struct rtentry *);

struct ifaddr *ifa_ifwithaddr(struct sockaddr *, u_int);
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *, u_int);
struct ifaddr *ifaof_ifpforaddr(struct sockaddr *, struct ifnet *);
void ifafree(struct ifaddr *);

int if_isconnected(const struct ifnet *, unsigned int);

void if_clone_attach(struct if_clone *);
void if_clone_detach(struct if_clone *);

int if_clone_create(const char *, int);
int if_clone_destroy(const char *);

struct if_clone *
 if_clone_lookup(const char *, int *);

int sysctl_mq(int *, u_int, void *, size_t *, void *, size_t,
     struct mbuf_queue *);

void ifa_add(struct ifnet *, struct ifaddr *);
void ifa_del(struct ifnet *, struct ifaddr *);
void ifa_update_broadaddr(struct ifnet *, struct ifaddr *,
     struct sockaddr *);

void if_ih_insert(struct ifnet *, int (*)(struct ifnet *, struct mbuf *,
     void *), void *);
void if_ih_remove(struct ifnet *, int (*)(struct ifnet *, struct mbuf *,
     void *), void *);

void if_rxr_init(struct if_rxring *, u_int, u_int);
u_int if_rxr_get(struct if_rxring *, u_int);




int if_rxr_info_ioctl(struct if_rxrinfo *, u_int, struct if_rxring_info *);
int if_rxr_ioctl(struct if_rxrinfo *, const char *, u_int,
     struct if_rxring *);
# 120 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_dl.h" 1
# 59 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_dl.h"
struct sockaddr_dl {
 u_char sdl_len;
 u_char sdl_family;
 u_int16_t sdl_index;
 u_char sdl_type;
 u_char sdl_nlen;
 u_char sdl_alen;
 u_char sdl_slen;
 char sdl_data[24];


};





static __inline struct sockaddr_dl *
satosdl(struct sockaddr *sa)
{
 return ((struct sockaddr_dl *)(sa));
}

static __inline struct sockaddr *
sdltosa(struct sockaddr_dl *sdl)
{
 return ((struct sockaddr *)(sdl));
}
# 121 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h" 1
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rt_kmetrics {
 u_int64_t rmx_pksent;
 int64_t rmx_expire;
 u_int rmx_locks;
 u_int rmx_mtu;
};




struct rt_metrics {
 u_int64_t rmx_pksent;
 int64_t rmx_expire;
 u_int rmx_locks;
 u_int rmx_mtu;
 u_int rmx_refcnt;

 u_int rmx_hopcount;
 u_int rmx_recvpipe;
 u_int rmx_sendpipe;
 u_int rmx_ssthresh;
 u_int rmx_rtt;
 u_int rmx_rttvar;
 u_int rmx_pad;
};
# 84 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/rtable.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/rtable.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/art.h" 1
# 29 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/art.h"
struct art_root {
 struct srp ar_root;
 struct rwlock ar_lock;
 uint8_t ar_bits[32];
 uint8_t ar_nlvl;
 uint8_t ar_alen;
 uint8_t ar_off;
 unsigned int ar_rtableid;
};





struct rtentry;




struct art_node {
 struct srpl an_rtlist;
 union {
  struct sockaddr *an__dst;
  struct art_node *an__gc;
 } an_pointer;
 uint8_t an_plen;
};



void art_init(void);
struct art_root *art_alloc(unsigned int, unsigned int, unsigned int);
struct art_node *art_insert(struct art_root *, struct art_node *, uint8_t *,
       int);
struct art_node *art_delete(struct art_root *, struct art_node *, uint8_t *,
       int);
struct art_node *art_match(struct art_root *, uint8_t *, struct srp_ref *);
struct art_node *art_lookup(struct art_root *, uint8_t *, int,
       struct srp_ref *);
int art_walk(struct art_root *,
       int (*)(struct art_node *, void *), void *);

struct art_node *art_get(struct sockaddr *, uint8_t);
void art_put(struct art_node *);
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/rtable.h" 2







int rtable_satoplen(sa_family_t, struct sockaddr *);

void rtable_init(void);
int rtable_exists(unsigned int);
int rtable_add(unsigned int);
unsigned int rtable_l2(unsigned int);
unsigned int rtable_loindex(unsigned int);
void rtable_l2set(unsigned int, unsigned int, unsigned int);

struct rtentry *rtable_lookup(unsigned int, struct sockaddr *,
       struct sockaddr *, struct sockaddr *, uint8_t);
struct rtentry *rtable_match(unsigned int, struct sockaddr *, uint32_t *);
struct rtentry *rtable_iterate(struct rtentry *);
int rtable_insert(unsigned int, struct sockaddr *,
       struct sockaddr *, struct sockaddr *, uint8_t,
       struct rtentry *);
int rtable_delete(unsigned int, struct sockaddr *,
       struct sockaddr *, struct rtentry *);
int rtable_walk(unsigned int, sa_family_t,
       int (*)(struct rtentry *, void *, unsigned int), void *);

int rtable_mpath_capable(unsigned int, sa_family_t);
struct rtentry *rtable_mpath_match(unsigned int, struct rtentry *,
       struct sockaddr *, uint8_t);
int rtable_mpath_reprio(unsigned int, struct sockaddr *,
       struct sockaddr *, uint8_t, struct rtentry *);
# 85 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h" 2
# 95 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rtentry {



 struct sockaddr *rt_dest;
 struct { struct srp se_next; } rt_next;

 struct sockaddr *rt_gateway;
 struct ifaddr *rt_ifa;
 caddr_t rt_llinfo;

 union {
  struct rtentry *_nh;
  unsigned int _ref;
 } RT_gw;


 struct rtentry *rt_parent;
 struct { struct rttimer *lh_first; } rt_timer;
 struct rt_kmetrics rt_rmx;
 unsigned int rt_ifidx;
 unsigned int rt_flags;
 int rt_refcnt;

 int rt_plen;

 uint16_t rt_labelid;
 uint8_t rt_priority;
};
# 178 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rtstat {
 u_int32_t rts_badredirect;
 u_int32_t rts_dynamic;
 u_int32_t rts_newgateway;
 u_int32_t rts_unreach;
 u_int32_t rts_wildcard;
};




struct rt_tableinfo {
 u_short rti_tableid;
 u_short rti_domainid;
};




struct rt_msghdr {
 u_short rtm_msglen;
 u_char rtm_version;
 u_char rtm_type;
 u_short rtm_hdrlen;
 u_short rtm_index;
 u_short rtm_tableid;
 u_char rtm_priority;
 u_char rtm_mpls;
 int rtm_addrs;
 int rtm_flags;
 int rtm_fmask;
 pid_t rtm_pid;
 int rtm_seq;
 int rtm_errno;
 u_int rtm_inits;
 struct rt_metrics rtm_rmx;
};
# 292 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct sockaddr_rtlabel {
 u_int8_t sr_len;
 sa_family_t sr_family;
 char sr_label[32];
};






struct route {
 struct rtentry *ro_rt;
 u_long ro_tableid;
 struct sockaddr ro_dst;
};

struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[11];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct rt_msghdr *rti_rtm;
 u_char rti_mpls;
};
# 325 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rttimer {
 struct { struct rttimer *tqe_next; struct rttimer **tqe_prev; } rtt_next;
 struct { struct rttimer *le_next; struct rttimer **le_prev; } rtt_link;
 struct rttimer_queue *rtt_queue;
 struct rtentry *rtt_rt;
 void (*rtt_func)(struct rtentry *,
       struct rttimer *);
 time_t rtt_time;
 u_int rtt_tableid;
};

struct rttimer_queue {
 long rtq_timeout;
 unsigned long rtq_count;
 struct { struct rttimer *tqh_first; struct rttimer **tqh_last; } rtq_head;
 struct { struct rttimer_queue *le_next; struct rttimer_queue **le_prev; } rtq_link;
};

const char *rtlabel_id2name(u_int16_t);
u_int16_t rtlabel_name2id(char *);
struct sockaddr *rtlabel_id2sa(u_int16_t, struct sockaddr_rtlabel *);
void rtlabel_unref(u_int16_t);






extern struct rtstat rtstat;

struct mbuf;
struct socket;
struct ifnet;
struct sockaddr_in6;
struct bfd_config;

void route_init(void);
int route_output(struct mbuf *, ...);
int route_usrreq(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *, struct proc *);
void rt_ifmsg(struct ifnet *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_bfdmsg(struct bfd_config *);
void rt_maskedcopy(struct sockaddr *,
     struct sockaddr *, struct sockaddr *);
struct sockaddr *rt_plen2mask(struct rtentry *, struct sockaddr_in6 *);
void rt_sendmsg(struct rtentry *, int, u_int);
void rt_sendaddrmsg(struct rtentry *, int, struct ifaddr *);
void rt_missmsg(int, struct rt_addrinfo *, int, uint8_t, u_int, int, u_int);
int rt_setgate(struct rtentry *, struct sockaddr *, u_int);
struct rtentry *rt_getll(struct rtentry *);
void rt_setmetrics(u_long, const struct rt_metrics *, struct rt_kmetrics *);
void rt_getmetrics(const struct rt_kmetrics *, struct rt_metrics *);

int rt_timer_add(struct rtentry *,
               void(*)(struct rtentry *, struct rttimer *),
        struct rttimer_queue *, u_int);
void rt_timer_remove_all(struct rtentry *);
struct rttimer_queue *rt_timer_queue_create(u_int);
void rt_timer_queue_change(struct rttimer_queue *, long);
void rt_timer_queue_destroy(struct rttimer_queue *);
unsigned long rt_timer_queue_count(struct rttimer_queue *);
void rt_timer_timer(void *);

int rtisvalid(struct rtentry *);
int rt_hash(struct rtentry *, struct sockaddr *, uint32_t *);



struct rtentry *rtalloc_mpath(struct sockaddr *, uint32_t *, u_int);

struct rtentry *rtalloc(struct sockaddr *, int, unsigned int);
void rtref(struct rtentry *);
void rtfree(struct rtentry *);

int rt_getifa(struct rt_addrinfo *, u_int);
int rt_ifa_add(struct ifaddr *, int, struct sockaddr *);
int rt_ifa_del(struct ifaddr *, int, struct sockaddr *);
void rt_ifa_purge(struct ifaddr *);
int rt_ifa_addlocal(struct ifaddr *);
int rt_ifa_dellocal(struct ifaddr *);
void rtredirect(struct sockaddr *, struct sockaddr *, struct sockaddr *, struct rtentry **, unsigned int);
int rtrequest(int, struct rt_addrinfo *, u_int8_t, struct rtentry **,
      u_int);

void rt_if_track(struct ifnet *);
int rt_if_linkstate_change(struct rtentry *, void *, u_int);

int rtdeletemsg(struct rtentry *, struct ifnet *, u_int);
# 122 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h" 1
# 159 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};
# 250 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct sockaddr_in {
 u_int8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 int8_t sin_zero[8];
};
# 265 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct ip_opts {
 struct in_addr ip_dst;



 int8_t ip_opts[40];

};
# 356 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 782 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h" 1
# 81 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
struct in6_addr {
 union {
  u_int8_t __u6_addr8[16];
  u_int16_t __u6_addr16[8];
  u_int32_t __u6_addr32[4];
 } __u6_addr;
};
# 106 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
struct sockaddr_in6 {
 u_int8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 u_int32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 u_int32_t sin6_scope_id;
};
# 130 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
extern const struct sockaddr_in6 sa6_any;

extern const struct in6_addr in6mask0;
extern const struct in6_addr in6mask32;
extern const struct in6_addr in6mask64;
extern const struct in6_addr in6mask96;
extern const struct in6_addr in6mask128;



extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
extern const struct in6_addr in6addr_intfacelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;





struct route_in6 {
 struct rtentry *ro_rt;
 u_long ro_tableid;
 struct sockaddr_in6 ro_dst;
};
# 366 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};






struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 u_int32_t ip6m_mtu;
};
# 407 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
extern u_char inet6ctlerrmap[];
extern struct niqueue ip6intrq;
extern struct in6_addr zeroin6_addr;

struct mbuf;
struct ifnet;
struct cmsghdr;

int in6_cksum(struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
void in6_proto_cksum_out(struct mbuf *, struct ifnet *);
int in6_localaddr(struct in6_addr *);
int in6_addrscope(struct in6_addr *);
struct in6_ifaddr *in6_ifawithscope(struct ifnet *, struct in6_addr *, u_int);
void in6_get_rand_ifid(struct ifnet *, struct in6_addr *);
int in6_mask2len(struct in6_addr *, u_char *);

struct inpcb;

int in6_embedscope(struct in6_addr *, const struct sockaddr_in6 *,
     struct inpcb *);
void in6_recoverscope(struct sockaddr_in6 *, const struct in6_addr *);
void in6_clearscope(struct in6_addr *);

struct sockaddr;
struct sockaddr_in6;
struct ifaddr;
struct in6_ifaddr;







static __inline struct sockaddr_in6 *
satosin6(struct sockaddr *sa)
{
 return ((struct sockaddr_in6 *)(sa));
}

static __inline struct sockaddr *
sin6tosa(struct sockaddr_in6 *sin6)
{
 return ((struct sockaddr *)(sin6));
}

static __inline struct in6_ifaddr *
ifatoia6(struct ifaddr *ifa)
{
 return ((struct in6_ifaddr *)(ifa));
}
# 713 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"

struct cmsghdr;

extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, u_int8_t,
  socklen_t, u_int8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);

extern int inet6_opt_next(void *, socklen_t, int, u_int8_t *,
  socklen_t *, void **);
extern int inet6_opt_find(void *, socklen_t, int, u_int8_t,
  socklen_t *, void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);

extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, const struct in6_addr *);
extern int inet6_rth_reverse(const void *, void *);
extern int inet6_rth_segments(const void *);
extern struct in6_addr *inet6_rth_getaddr(const void *, int);

# 783 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h" 2
# 796 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
extern int inetctlerrmap[];
extern struct niqueue ipintrq;
extern struct in_addr zeroin_addr;

struct mbuf;
struct sockaddr;
struct sockaddr_in;
struct ifaddr;
struct in_ifaddr;

int in_broadcast(struct in_addr, u_int);
int in_canforward(struct in_addr);
int in_cksum(struct mbuf *, int);
int in4_cksum(struct mbuf *, u_int8_t, int, int);
void in_proto_cksum_out(struct mbuf *, struct ifnet *);
void in_ifdetach(struct ifnet *);
int in_mask2len(struct in_addr *);
void in_len2mask(struct in_addr *, int);

char *inet_ntoa(struct in_addr);
int inet_nat64(int, const void *, void *, const void *, u_int8_t);
int inet_nat46(int, const void *, void *, const void *, u_int8_t);

const char *inet_ntop(int, const void *, char *, socklen_t);
const char *sockaddr_ntop(struct sockaddr *, char *, size_t);
# 831 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
static __inline struct sockaddr_in *
satosin(struct sockaddr *sa)
{
 return ((struct sockaddr_in *)(sa));
}

static __inline struct sockaddr *
sintosa(struct sockaddr_in *sin)
{
 return ((struct sockaddr *)(sin));
}

static __inline struct in_ifaddr *
ifatoia(struct ifaddr *ifa)
{
 return ((struct in_ifaddr *)(ifa));
}
# 124 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_var.h" 1
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_var.h"
struct ipovly {
 u_int8_t ih_x1[9];
 u_int8_t ih_pr;
 u_int16_t ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};

struct ipstat {
 u_long ips_total;
 u_long ips_badsum;
 u_long ips_tooshort;
 u_long ips_toosmall;
 u_long ips_badhlen;
 u_long ips_badlen;
 u_long ips_fragments;
 u_long ips_fragdropped;
 u_long ips_fragtimeout;
 u_long ips_forward;
 u_long ips_cantforward;
 u_long ips_redirectsent;
 u_long ips_noproto;
 u_long ips_delivered;
 u_long ips_localout;
 u_long ips_odropped;
 u_long ips_reassembled;
 u_long ips_fragmented;
 u_long ips_ofragments;
 u_long ips_cantfrag;
 u_long ips_badoptions;
 u_long ips_noroute;
 u_long ips_badvers;
 u_long ips_rawout;
 u_long ips_badfrags;
 u_long ips_rcvmemdrop;
 u_long ips_toolong;
 u_long ips_nogif;
 u_long ips_badaddr;
 u_long ips_inswcsum;
 u_long ips_outswcsum;
 u_long ips_notmember;
};

struct ipoption {
 struct in_addr ipopt_dst;
 int8_t ipopt_list[40];
};



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h" 1
# 34 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h"
struct cpumem {
 void *mem;
};

struct cpumem_iter {
 unsigned int cpu;
} __attribute__((__unused__));

struct counters_ref {
 uint64_t g;
 uint64_t *c;
};





struct pool;

struct cpumem *cpumem_get(struct pool *);
void cpumem_put(struct pool *, struct cpumem *);

struct cpumem *cpumem_malloc(size_t, int);
struct cpumem *cpumem_malloc_ncpus(struct cpumem *, size_t, int);
void cpumem_free(struct cpumem *, int, size_t);

void *cpumem_first(struct cpumem_iter *, struct cpumem *);
void *cpumem_next(struct cpumem_iter *, struct cpumem *);

static inline void *
cpumem_enter(struct cpumem *cm)
{



 return (cm);

}

static inline void
cpumem_leave(struct cpumem *cm, void *mem)
{

}
# 113 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h"
struct cpumem *counters_alloc(unsigned int, int);
struct cpumem *counters_alloc_ncpus(struct cpumem *, unsigned int, int);
void counters_free(struct cpumem *, int, unsigned int);
void counters_read(struct cpumem *, uint64_t *, unsigned int);
void counters_zero(struct cpumem *, unsigned int);

static inline uint64_t *
counters_enter(struct counters_ref *ref, struct cpumem *cm)
{
 ref->c = cpumem_enter(cm);





 return (ref->c);

}

static inline void
counters_leave(struct counters_ref *ref, struct cpumem *cm)
{




 cpumem_leave(cm, ref->c);
}

static inline void
counters_inc(struct cpumem *cm, unsigned int c)
{
 struct counters_ref ref;
 uint64_t *counters;

 counters = counters_enter(&ref, cm);
 counters[c]++;
 counters_leave(&ref, cm);
}

static inline void
counters_add(struct cpumem *cm, unsigned int c, uint64_t v)
{
 struct counters_ref ref;
 uint64_t *counters;

 counters = counters_enter(&ref, cm);
 counters[c] += v;
 counters_leave(&ref, cm);
}

static inline void
counters_pkt(struct cpumem *cm, unsigned int c, unsigned int b, uint64_t v)
{
 struct counters_ref ref;
 uint64_t *counters;

 counters = counters_enter(&ref, cm);
 counters[c]++;
 counters[b] += v;
 counters_leave(&ref, cm);
}
# 100 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_var.h" 2

enum ipstat_counters {
 ips_total,
 ips_badsum,
 ips_tooshort,
 ips_toosmall,
 ips_badhlen,
 ips_badlen,
 ips_fragments,
 ips_fragdropped,
 ips_fragtimeout,
 ips_forward,
 ips_cantforward,
 ips_redirectsent,
 ips_noproto,
 ips_delivered,
 ips_localout,
 ips_odropped,
 ips_reassembled,
 ips_fragmented,
 ips_ofragments,
 ips_cantfrag,
 ips_badoptions,
 ips_noroute,
 ips_badvers,
 ips_rawout,
 ips_badfrags,
 ips_rcvmemdrop,
 ips_toolong,
 ips_nogif,
 ips_badaddr,
 ips_inswcsum,
 ips_outswcsum,
 ips_notmember,

 ips_ncounters
};

extern struct cpumem *ipcounters;

static inline void
ipstat_inc(enum ipstat_counters c)
{
 counters_inc(ipcounters, c);
}





struct ip_moptions {
 struct in_multi **imo_membership;
 unsigned short imo_ifidx;
 u_int8_t imo_ttl;
 u_int8_t imo_loop;
 u_int16_t imo_num_memberships;
 u_int16_t imo_max_memberships;
};






struct ipqehead { struct ipqent *lh_first; };
struct ipqent {
 struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_q;
 struct ip *ipqe_ip;
 struct mbuf *ipqe_m;
 u_int8_t ipqe_mff;
};







struct ipq {
 struct { struct ipq *le_next; struct ipq **le_prev; } ipq_q;
 u_int8_t ipq_ttl;
 u_int8_t ipq_p;
 u_int16_t ipq_id;
 struct ipqehead ipq_fragq;
 struct in_addr ipq_src, ipq_dst;
};







extern struct ipstat ipstat;
extern struct ipqhead { struct ipq *lh_first; } ipq;
extern int ip_defttl;

extern struct socket *ip_mrouter[];




extern int ip_mtudisc;
extern u_int ip_mtudisc_timeout;

extern int ipport_firstauto;
extern int ipport_lastauto;
extern int ipport_hifirstauto;
extern int ipport_hilastauto;
extern int encdebug;
extern int ipforwarding;

extern int ipmforwarding;

extern int ipmultipath;
extern int la_hold_total;

extern struct rttimer_queue *ip_mtudisc_timeout_q;
extern struct pool ipqent_pool;
struct route;
struct inpcb;

int ip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void ip_drain(void);
void ip_flush(void);
int ip_fragment(struct mbuf *, struct ifnet *, u_long);
void ip_freef(struct ipq *);
void ip_freemoptions(struct ip_moptions *);
int ip_getmoptions(int, struct ip_moptions *, struct mbuf **);
void ip_init(void);
struct mbuf*
  ip_insertoptions(struct mbuf *, struct mbuf *, int *);
int ip_mforward(struct mbuf *, struct ifnet *);
int ip_optcopy(struct ip *, struct ip *);
int ip_output(struct mbuf *, struct mbuf *, struct route *, int,
     struct ip_moptions *, struct inpcb *, u_int32_t);
int ip_pcbopts(struct mbuf **, struct mbuf *);
struct mbuf *
  ip_reass(struct ipqent *, struct ipq *);
u_int16_t
  ip_randomid(void);
void ip_send(struct mbuf *);
int ip_setmoptions(int, struct ip_moptions **, struct mbuf *, u_int);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(struct mbuf *);
void ip_stripoptions(struct mbuf *);
int ip_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void ip_savecontrol(struct inpcb *, struct mbuf **, struct ip *,
     struct mbuf *);
void ipintr(void);
void ipv4_input(struct mbuf *);
void ip_forward(struct mbuf *, struct ifnet *, struct rtentry *, int);
int rip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void rip_init(void);
void rip_input(struct mbuf *, ...);
int rip_output(struct mbuf *, ...);
int rip_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);
# 125 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_var.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_var.h"
struct in_ifaddr {
 struct ifaddr ia_ifa;



 u_int32_t ia_net;
 u_int32_t ia_netmask;
 struct { struct in_ifaddr *tqe_next; struct in_ifaddr **tqe_prev; } ia_list;
 struct sockaddr_in ia_addr;
 struct sockaddr_in ia_dstaddr;

 struct sockaddr_in ia_sockmask;
 struct in_multi *ia_allhosts;

};


struct in_aliasreq {
 char ifra_name[16];
 union {
  struct sockaddr_in ifrau_addr;
  int ifrau_align;
 } ifra_ifrau;



 struct sockaddr_in ifra_dstaddr;

 struct sockaddr_in ifra_mask;
};
# 100 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_var.h"
struct router_info {
 unsigned int rti_ifidx;
 int rti_type;
 int rti_age;
 struct router_info *rti_next;
};






struct in_multi {
 struct ifmaddr inm_ifma;



 struct sockaddr_in inm_sin;


 u_int inm_state;
 u_int inm_timer;

 struct router_info *inm_rti;
};

static __inline struct in_multi *
ifmatoinm(struct ifmaddr *ifma)
{
       return ((struct in_multi *)(ifma));
}
# 153 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_var.h"
int in_ifinit(struct ifnet *,
     struct in_ifaddr *, struct sockaddr_in *, int);
struct in_multi *in_addmulti(struct in_addr *, struct ifnet *);
void in_delmulti(struct in_multi *);
int in_hasmulti(struct in_addr *, struct ifnet *);
void in_ifscrub(struct ifnet *, struct in_ifaddr *);
int in_control(struct socket *, u_long, caddr_t, struct ifnet *);
int in_ioctl(u_long, caddr_t, struct ifnet *, int);
void in_prefixlen2mask(struct in_addr *, int);
# 126 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h" 1
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_hdr {
 union {
  struct ip6_hdrctl {
   u_int32_t ip6_un1_flow;
   u_int16_t ip6_un1_plen;
   u_int8_t ip6_un1_nxt;
   u_int8_t ip6_un1_hlim;
  } ip6_un1;
  u_int8_t ip6_un2_vfc;
 } ip6_ctlun;
 struct in6_addr ip6_src;
 struct in6_addr ip6_dst;
} __attribute__((__packed__));
# 116 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_hdr_pseudo {
 struct in6_addr ip6ph_src;
 struct in6_addr ip6ph_dst;
 u_int32_t ip6ph_len;
 u_int8_t ip6ph_zero[3];
 u_int8_t ip6ph_nxt;
} __attribute__((__packed__));





struct ip6_ext {
 u_int8_t ip6e_nxt;
 u_int8_t ip6e_len;
} __attribute__((__packed__));



struct ip6_hbh {
 u_int8_t ip6h_nxt;
 u_int8_t ip6h_len;

} __attribute__((__packed__));



struct ip6_dest {
 u_int8_t ip6d_nxt;
 u_int8_t ip6d_len;

} __attribute__((__packed__));
# 172 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_opt {
 u_int8_t ip6o_type;
 u_int8_t ip6o_len;
} __attribute__((__packed__));


struct ip6_opt_jumbo {
 u_int8_t ip6oj_type;
 u_int8_t ip6oj_len;
 u_int8_t ip6oj_jumbo_len[4];
} __attribute__((__packed__));



struct ip6_opt_nsap {
 u_int8_t ip6on_type;
 u_int8_t ip6on_len;
 u_int8_t ip6on_src_nsap_len;
 u_int8_t ip6on_dst_nsap_len;


} __attribute__((__packed__));


struct ip6_opt_tunnel {
 u_int8_t ip6ot_type;
 u_int8_t ip6ot_len;
 u_int8_t ip6ot_encap_limit;
} __attribute__((__packed__));


struct ip6_opt_router {
 u_int8_t ip6or_type;
 u_int8_t ip6or_len;
 u_int8_t ip6or_value[2];
} __attribute__((__packed__));
# 222 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_rthdr {
 u_int8_t ip6r_nxt;
 u_int8_t ip6r_len;
 u_int8_t ip6r_type;
 u_int8_t ip6r_segleft;

} __attribute__((__packed__));


struct ip6_rthdr0 {
 u_int8_t ip6r0_nxt;
 u_int8_t ip6r0_len;
 u_int8_t ip6r0_type;
 u_int8_t ip6r0_segleft;
 u_int32_t ip6r0_reserved;
} __attribute__((__packed__));


struct ip6_frag {
 u_int8_t ip6f_nxt;
 u_int8_t ip6f_reserved;
 u_int16_t ip6f_offlg;
 u_int32_t ip6f_ident;
} __attribute__((__packed__));
# 129 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/ip6_var.h" 1
# 71 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/ip6_var.h"
struct ip6q {
 struct { struct ip6q *tqe_next; struct ip6q **tqe_prev; } ip6q_queue;
 struct ip6asfrag_list { struct ip6asfrag *lh_first; } ip6q_asfrag;
 struct in6_addr ip6q_src, ip6q_dst;
 int ip6q_unfrglen;
 int ip6q_nfrag;
 u_int32_t ip6q_ident;
 u_int8_t ip6q_nxt;
 u_int8_t ip6q_ttl;
};

struct ip6asfrag {
 struct { struct ip6asfrag *le_next; struct ip6asfrag **le_prev; } ip6af_list;
 struct mbuf *ip6af_m;
 int ip6af_offset;
 int ip6af_frglen;
 int ip6af_off;
 u_int32_t ip6af_flow;
 u_int16_t ip6af_mff;
};



struct ip6_moptions {
 struct { struct in6_multi_mship *lh_first; } im6o_memberships;
 unsigned short im6o_ifidx;
 u_char im6o_hlim;
 u_char im6o_loop;
};






struct ip6po_rhinfo {
 struct ip6_rthdr *ip6po_rhi_rthdr;
 struct route_in6 ip6po_rhi_route;
};



struct ip6_pktopts {

 int ip6po_hlim;


 struct in6_pktinfo *ip6po_pktinfo;


 struct ip6_hbh *ip6po_hbh;


 struct ip6_dest *ip6po_dest1;


 struct ip6po_rhinfo ip6po_rhinfo;


 struct ip6_dest *ip6po_dest2;


 int ip6po_tclass;


 int ip6po_minmtu;




 int ip6po_flags;

};

struct ip6stat {
 u_int64_t ip6s_total;
 u_int64_t ip6s_tooshort;
 u_int64_t ip6s_toosmall;
 u_int64_t ip6s_fragments;
 u_int64_t ip6s_fragdropped;
 u_int64_t ip6s_fragtimeout;
 u_int64_t ip6s_fragoverflow;
 u_int64_t ip6s_forward;
 u_int64_t ip6s_cantforward;
 u_int64_t ip6s_redirectsent;
 u_int64_t ip6s_delivered;
 u_int64_t ip6s_localout;
 u_int64_t ip6s_odropped;
 u_int64_t ip6s_reassembled;
 u_int64_t ip6s_fragmented;
 u_int64_t ip6s_ofragments;
 u_int64_t ip6s_cantfrag;
 u_int64_t ip6s_badoptions;
 u_int64_t ip6s_noroute;
 u_int64_t ip6s_badvers;
 u_int64_t ip6s_rawout;
 u_int64_t ip6s_badscope;
 u_int64_t ip6s_notmember;
 u_int64_t ip6s_nxthist[256];
 u_int64_t ip6s_m1;
 u_int64_t ip6s_m2m[32];
 u_int64_t ip6s_mext1;
 u_int64_t ip6s_mext2m;
 u_int64_t ip6s_nogif;
 u_int64_t ip6s_toomanyhdr;







 u_int64_t ip6s_sources_none;

 u_int64_t ip6s_sources_sameif[16];

 u_int64_t ip6s_sources_otherif[16];




 u_int64_t ip6s_sources_samescope[16];




 u_int64_t ip6s_sources_otherscope[16];

 u_int64_t ip6s_sources_deprecated[16];

 u_int64_t ip6s_forward_cachehit;
 u_int64_t ip6s_forward_cachemiss;
};







extern int ip6_mtudisc_timeout;
extern struct rttimer_queue *icmp6_mtudisc_timeout_q;

extern struct ip6stat ip6stat;
extern int ip6_defhlim;
extern int ip6_defmcasthlim;
extern int ip6_forwarding;
extern int ip6_mforwarding;
extern int ip6_multipath;
extern int ip6_sendredirect;
extern int ip6_use_deprecated;
extern int ip6_mcast_pmtu;
extern int ip6_neighborgcthresh;
extern int ip6_maxifprefixes;
extern int ip6_maxifdefrouters;
extern int ip6_maxdynroutes;

extern struct socket *ip6_mrouter;
extern int ip6_sendredirects;
extern int ip6_maxfragpackets;
extern int ip6_maxfrags;
extern int ip6_log_interval;
extern time_t ip6_log_time;
extern int ip6_hdrnestlimit;
extern int ip6_dad_count;
extern int ip6_dad_pending;

extern int ip6_auto_flowlabel;
extern int ip6_auto_linklocal;

struct in6pcb;
struct inpcb;

int icmp6_ctloutput(int, struct socket *, int, int, struct mbuf **);

void ip6_init(void);
void ip6intr(void);
void ip6_input(struct mbuf *);
void ip6_freepcbopts(struct ip6_pktopts *);
void ip6_freemoptions(struct ip6_moptions *);
int ip6_unknown_opt(u_int8_t *, struct mbuf *, int);
u_int8_t *ip6_get_prevhdr(struct mbuf *, int);
int ip6_nexthdr(struct mbuf *, int, int, int *);
int ip6_lasthdr(struct mbuf *, int, int, int *);
int ip6_mforward(struct ip6_hdr *, struct ifnet *, struct mbuf *);
int ip6_process_hopopts(struct mbuf *, u_int8_t *, int, u_int32_t *,
      u_int32_t *);
void ip6_savecontrol(struct inpcb *, struct mbuf *, struct mbuf **);
int ip6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ip6_forward(struct mbuf *, struct rtentry *, int);

void ip6_mloopback(struct ifnet *, struct mbuf *, struct sockaddr_in6 *);
int ip6_output(struct mbuf *, struct ip6_pktopts *, struct route_in6 *, int,
     struct ip6_moptions *, struct inpcb *);
int ip6_fragment(struct mbuf *, int, u_char, u_long);
int ip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip6_raw_ctloutput(int, struct socket *, int, int, struct mbuf **);
void ip6_initpktopts(struct ip6_pktopts *);
int ip6_setpktopts(struct mbuf *, struct ip6_pktopts *,
     struct ip6_pktopts *, int, int);
void ip6_clearpktopts(struct ip6_pktopts *, int);
void ip6_randomid_init(void);
u_int32_t ip6_randomid(void);
void ip6_send(struct mbuf *);

int route6_input(struct mbuf **, int *, int);

void frag6_init(void);
int frag6_input(struct mbuf **, int *, int);
int frag6_deletefraghdr(struct mbuf *, int);
void frag6_slowtimo(void);
void frag6_drain(void);

void rip6_init(void);
int rip6_input(struct mbuf **mp, int *offp, int proto);
void rip6_ctlinput(int, struct sockaddr *, u_int, void *);
int rip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int rip6_output(struct mbuf *, ...);
int rip6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);
int rip6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

int dest6_input(struct mbuf **, int *, int);
int none_input(struct mbuf **, int *, int);

int in6_pcbselsrc(struct in6_addr **, struct sockaddr_in6 *,
     struct inpcb *, struct ip6_pktopts *);
int in6_selectsrc(struct in6_addr **, struct sockaddr_in6 *,
     struct ip6_moptions *, unsigned int);
struct rtentry *in6_selectroute(struct sockaddr_in6 *, struct ip6_pktopts *,
     struct route_in6 *, unsigned int rtableid);

u_int32_t ip6_randomflowlabel(void);


struct tdb;
struct tdb *
 ip6_output_ipsec_lookup(struct mbuf *, int *, struct inpcb *);
int ip6_output_ipsec_send(struct tdb *, struct mbuf *, int, int);
# 130 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6_var.h" 1
# 82 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6_var.h"
struct in6_addrlifetime {
 time_t ia6t_expire;
 time_t ia6t_preferred;
 u_int32_t ia6t_vltime;
 u_int32_t ia6t_pltime;
};


struct nd_ifinfo;
struct in6_ifextra {
 struct nd_ifinfo *nd_ifinfo;
 void *rs_lhcookie;
 int nprefixes;
 int ndefrouters;
};

struct in6_ifaddr {
 struct ifaddr ia_ifa;



 struct sockaddr_in6 ia_addr;
 struct sockaddr_in6 ia_dstaddr;
 struct sockaddr_in6 ia_prefixmask;
 struct { struct in6_ifaddr *tqe_next; struct in6_ifaddr **tqe_prev; } ia_list;
 int ia6_flags;

 struct in6_addrlifetime ia6_lifetime;
 time_t ia6_createtime;


 time_t ia6_updatetime;


 struct nd_prefix *ia6_ndpr;


 struct { struct in6_multi_mship *lh_first; } ia6_memberships;
};





struct in6_ifstat {
 u_int64_t ifs6_in_receive;
 u_int64_t ifs6_in_hdrerr;
 u_int64_t ifs6_in_toobig;
 u_int64_t ifs6_in_noroute;
 u_int64_t ifs6_in_addrerr;
 u_int64_t ifs6_in_protounknown;

 u_int64_t ifs6_in_truncated;
 u_int64_t ifs6_in_discard;

 u_int64_t ifs6_in_deliver;

 u_int64_t ifs6_out_forward;

 u_int64_t ifs6_out_request;

 u_int64_t ifs6_out_discard;
 u_int64_t ifs6_out_fragok;
 u_int64_t ifs6_out_fragfail;
 u_int64_t ifs6_out_fragcreat;

 u_int64_t ifs6_reass_reqd;

 u_int64_t ifs6_reass_ok;


 u_int64_t ifs6_reass_fail;


 u_int64_t ifs6_in_mcast;
 u_int64_t ifs6_out_mcast;
};





struct icmp6_ifstat {




 u_int64_t ifs6_in_msg;

 u_int64_t ifs6_in_error;

 u_int64_t ifs6_in_dstunreach;

 u_int64_t ifs6_in_adminprohib;

 u_int64_t ifs6_in_timeexceed;

 u_int64_t ifs6_in_paramprob;

 u_int64_t ifs6_in_pkttoobig;

 u_int64_t ifs6_in_echo;

 u_int64_t ifs6_in_echoreply;

 u_int64_t ifs6_in_routersolicit;

 u_int64_t ifs6_in_routeradvert;

 u_int64_t ifs6_in_neighborsolicit;

 u_int64_t ifs6_in_neighboradvert;

 u_int64_t ifs6_in_redirect;

 u_int64_t ifs6_in_mldquery;

 u_int64_t ifs6_in_mldreport;

 u_int64_t ifs6_in_mlddone;





 u_int64_t ifs6_out_msg;

 u_int64_t ifs6_out_error;

 u_int64_t ifs6_out_dstunreach;

 u_int64_t ifs6_out_adminprohib;

 u_int64_t ifs6_out_timeexceed;

 u_int64_t ifs6_out_paramprob;

 u_int64_t ifs6_out_pkttoobig;

 u_int64_t ifs6_out_echo;

 u_int64_t ifs6_out_echoreply;

 u_int64_t ifs6_out_routersolicit;

 u_int64_t ifs6_out_routeradvert;

 u_int64_t ifs6_out_neighborsolicit;

 u_int64_t ifs6_out_neighboradvert;

 u_int64_t ifs6_out_redirect;

 u_int64_t ifs6_out_mldquery;

 u_int64_t ifs6_out_mldreport;

 u_int64_t ifs6_out_mlddone;
};

struct in6_ifreq {
 char ifr_name[16];
 union {
  struct sockaddr_in6 ifru_addr;
  struct sockaddr_in6 ifru_dstaddr;
  short ifru_flags;
  int ifru_flags6;
  int ifru_metric;
  caddr_t ifru_data;
  struct in6_addrlifetime ifru_lifetime;
  struct in6_ifstat ifru_stat;
  struct icmp6_ifstat ifru_icmp6stat;
 } ifr_ifru;
};

struct in6_aliasreq {
 char ifra_name[16];
 union {
  struct sockaddr_in6 ifrau_addr;
  int ifrau_align;
  } ifra_ifrau;



 struct sockaddr_in6 ifra_dstaddr;
 struct sockaddr_in6 ifra_prefixmask;
 int ifra_flags;
 struct in6_addrlifetime ifra_lifetime;
};
# 335 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6_var.h"
struct in6_ifaddrhead { struct in6_ifaddr *tqh_first; struct in6_ifaddr **tqh_last; };
extern struct in6_ifaddrhead in6_ifaddr;
extern struct icmp6stat icmp6stat;





struct in6_multi_mship {
 struct in6_multi *i6mm_maddr;
 struct { struct in6_multi_mship *le_next; struct in6_multi_mship **le_prev; } i6mm_chain;
};

struct in6_multi {
 struct ifmaddr in6m_ifma;



 struct sockaddr_in6 in6m_sin;


 u_int in6m_state;
 u_int in6m_timer;
};

static __inline struct in6_multi *
ifmatoin6m(struct ifmaddr *ifma)
{
       return ((struct in6_multi *)(ifma));
}
# 388 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6_var.h"
struct in6_multi *in6_addmulti(struct in6_addr *, struct ifnet *, int *);
void in6_delmulti(struct in6_multi *);
int in6_hasmulti(struct in6_addr *, struct ifnet *);
struct in6_multi_mship *in6_joingroup(struct ifnet *, struct in6_addr *, int *);
int in6_leavegroup(struct in6_multi_mship *);
int in6_control(struct socket *, u_long, caddr_t, struct ifnet *);
int in6_ioctl(u_long, caddr_t, struct ifnet *, int);
int in6_update_ifa(struct ifnet *, struct in6_aliasreq *,
 struct in6_ifaddr *);
void in6_purgeaddr(struct ifaddr *);
int in6if_do_dad(struct ifnet *);
void *in6_domifattach(struct ifnet *);
void in6_domifdetach(struct ifnet *, void *);
struct in6_ifaddr *in6ifa_ifpforlinklocal(struct ifnet *, int);
struct in6_ifaddr *in6ifa_ifpwithaddr(struct ifnet *, struct in6_addr *);
int in6_addr2scopeid(unsigned int, struct in6_addr *);
int in6_matchlen(struct in6_addr *, struct in6_addr *);
int in6_are_prefix_equal(struct in6_addr *, struct in6_addr *, int);
void in6_prefixlen2mask(struct in6_addr *, int);
void in6_purgeprefix(struct ifnet *);
# 131 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netmpls/mpls.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/netmpls/mpls.h"
struct shim_hdr {
 u_int32_t shim_label;
};
# 84 "/crypt/home/bluhm/openbsd/cvs/src/sys/netmpls/mpls.h"
struct sockaddr_mpls {
 u_int8_t smpls_len;
 u_int8_t smpls_family;
 u_int16_t smpls_pad0;
 u_int32_t smpls_label;
 u_int32_t smpls_pad1[2];
};

struct rt_mpls {
 u_int32_t mpls_label;
 u_int8_t mpls_operation;
 u_int8_t mpls_exp;
};
# 144 "/crypt/home/bluhm/openbsd/cvs/src/sys/netmpls/mpls.h"
struct ifmpwreq {
 uint32_t imr_flags;
 uint32_t imr_type;
 struct shim_hdr imr_lshim;
 struct shim_hdr imr_rshim;
 struct sockaddr_storage imr_nexthop;
};





extern struct domain mplsdomain;

struct mpe_softc {
 struct ifnet sc_if;
 struct ifaddr sc_ifa;
 int sc_unit;
 struct sockaddr_mpls sc_smpls;
 struct { struct mpe_softc *le_next; struct mpe_softc **le_prev; } sc_list;
};






void mpe_input(struct mbuf *, struct ifnet *, struct sockaddr_mpls *,
     u_int8_t);
void mpe_input6(struct mbuf *, struct ifnet *, struct sockaddr_mpls *,
     u_int8_t);

extern int mpls_raw_usrreq(struct socket *, int, struct mbuf *,
   struct mbuf *, struct mbuf *, struct proc *);

extern int mpls_defttl;
extern int mpls_mapttl_ip;
extern int mpls_mapttl_ip6;
extern int mpls_inkloop;


void mpls_init(void);

struct mbuf *mpls_shim_pop(struct mbuf *);
struct mbuf *mpls_shim_swap(struct mbuf *, struct rt_mpls *);
struct mbuf *mpls_shim_push(struct mbuf *, struct rt_mpls *);

int mpls_sysctl(int *, u_int, void *, size_t *, void *, size_t);
int mpls_output(struct ifnet *, struct mbuf *, struct sockaddr *,
      struct rtentry *);
void mpls_input(struct mbuf *);
# 135 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct m_tag;
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/radix.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/radix.h"
struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_p;
 short rn_b;
 char rn_bmask;
 u_char rn_flags;



 union {
  struct {
   caddr_t rn_Key;
   caddr_t rn_Mask;
   struct radix_node *rn_Dupedkey;
  } rn_leaf;
  struct {
   int rn_Off;
   struct radix_node *rn_L;
   struct radix_node *rn_R;
  } rn_node;
 } rn_u;
};
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/radix.h"
struct radix_mask {
 short rm_b;
 char rm_unused;
 u_char rm_flags;
 struct radix_mask *rm_mklist;
 union {
  caddr_t rmu_mask;
  struct radix_node *rmu_leaf;
 } rm_rmu;
 int rm_refs;
};




struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;
 struct radix_node rnh_nodes[3];
 u_int rnh_rtableid;
};

void rn_init(unsigned int);
int rn_inithead(void **, int);
int rn_inithead0(struct radix_node_head *, int);
int rn_refines(void *, void *);
void rn_link_dupedkey(struct radix_node *, struct radix_node *, int);

int rn_walktree(struct radix_node_head *,
     int (*)(struct radix_node *, void *, u_int), void *);

struct radix_node *rn_addmask(void *, int, int);
struct radix_node *rn_addroute(void *, void *, struct radix_node_head *,
       struct radix_node [2], u_int8_t);
struct radix_node *rn_delete(void *, void *, struct radix_node_head *,
       struct radix_node *);
struct radix_node *rn_lookup(void *, void *, struct radix_node_head *);
struct radix_node *rn_match(void *, struct radix_node_head *);
# 55 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 2

union sockaddr_union {
 struct sockaddr sa;
 struct sockaddr_in sin;
 struct sockaddr_in6 sin6;
};
# 102 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct sockaddr_encap {
 u_int8_t sen_len;
 u_int8_t sen_family;
 u_int16_t sen_type;
 union {
  struct {
   u_int8_t Direction;
   struct in_addr Src;
   struct in_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip4;

  struct {
   u_int8_t Direction;
   struct in6_addr Src;
   struct in6_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip6;

  struct ipsec_policy *PolicyHead;
 } Sen;
};
# 163 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct ipsec_id {
 u_int16_t type;
 int16_t len;
};

struct ipsec_ids {
 struct rb_entry id_node_id;
 struct rb_entry id_node_flow;
 struct ipsec_id *id_local;
 struct ipsec_id *id_remote;
 u_int32_t id_flow;
 int id_refcount;
 struct timeout id_timeout;
};
struct ipsec_ids_flows { struct rb_tree rbh_root; };
struct ipsec_ids_tree { struct rb_tree rbh_root; };

struct ipsec_acquire {
 union sockaddr_union ipa_addr;
 u_int32_t ipa_seq;
 struct sockaddr_encap ipa_info;
 struct sockaddr_encap ipa_mask;
 struct timeout ipa_timeout;
 struct ipsec_policy *ipa_policy;
 struct inpcb *ipa_pcb;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_ipo_next;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_next;
};

struct ipsec_policy {
 struct radix_node ipo_nodes[2];
 struct sockaddr_encap ipo_addr;
 struct sockaddr_encap ipo_mask;

 union sockaddr_union ipo_src;
 union sockaddr_union ipo_dst;
# 209 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
 u_int64_t ipo_last_searched;

 u_int8_t ipo_flags;
 u_int8_t ipo_type;
 u_int8_t ipo_sproto;
 u_int ipo_rdomain;

 int ipo_ref_count;

 struct tdb *ipo_tdb;

 struct ipsec_ids *ipo_ids;

 struct ipo_acquires_head { struct ipsec_acquire *tqh_first; struct ipsec_acquire **tqh_last; } ipo_acquires;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_tdb_next;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_list;
};
# 243 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct tdb {
# 252 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
 struct tdb *tdb_hnext;
 struct tdb *tdb_dnext;
 struct tdb *tdb_snext;
 struct tdb *tdb_inext;
 struct tdb *tdb_onext;

 struct xformsw *tdb_xform;
 struct enc_xform *tdb_encalgxform;
 struct auth_hash *tdb_authalgxform;
 struct comp_algo *tdb_compalgxform;
# 281 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
 u_int32_t tdb_flags;

 struct timeout tdb_timer_tmo;
 struct timeout tdb_first_tmo;
 struct timeout tdb_stimer_tmo;
 struct timeout tdb_sfirst_tmo;

 u_int32_t tdb_seq;
 u_int32_t tdb_exp_allocations;
 u_int32_t tdb_soft_allocations;
 u_int32_t tdb_cur_allocations;

 u_int64_t tdb_exp_bytes;
 u_int64_t tdb_soft_bytes;
 u_int64_t tdb_cur_bytes;

 u_int64_t tdb_exp_timeout;
 u_int64_t tdb_soft_timeout;
 u_int64_t tdb_established;

 u_int64_t tdb_first_use;
 u_int64_t tdb_soft_first_use;
 u_int64_t tdb_exp_first_use;



 u_int64_t tdb_last_used;
 u_int64_t tdb_last_marked;

 u_int64_t tdb_cryptoid;

 u_int32_t tdb_spi;
 u_int16_t tdb_amxkeylen;
 u_int16_t tdb_emxkeylen;
 u_int16_t tdb_ivlen;
 u_int8_t tdb_sproto;
 u_int8_t tdb_wnd;
 u_int8_t tdb_satype;
 u_int8_t tdb_updates;

 union sockaddr_union tdb_dst;
 union sockaddr_union tdb_src;

 u_int8_t *tdb_amxkey;
 u_int8_t *tdb_emxkey;




 u_int64_t tdb_rpl;
 u_int32_t tdb_seen[((((2100+32)) + ((32) - 1)) / (32))];

 u_int8_t tdb_iv[4];

 struct ipsec_ids *tdb_ids;
 int tdb_ids_swapped;

 u_int32_t tdb_mtu;
 u_int64_t tdb_mtutimeout;

 u_int16_t tdb_udpencap_port;

 u_int16_t tdb_tag;
 u_int32_t tdb_tap;

 u_int tdb_rdomain;

 struct sockaddr_encap tdb_filter;
 struct sockaddr_encap tdb_filtermask;

 struct tdb_policy_head { struct ipsec_policy *tqh_first; struct ipsec_policy **tqh_last; } tdb_policy_head;
 struct { struct tdb *tqe_next; struct tdb **tqe_prev; } tdb_sync_entry;
};



struct tdb_ident {
 u_int32_t spi;
 union sockaddr_union dst;
 u_int8_t proto;
 u_int rdomain;
};

struct tdb_crypto {
 u_int32_t tc_spi;
 union sockaddr_union tc_dst;
 u_int8_t tc_proto;
 int tc_protoff;
 int tc_skip;
 u_int tc_rdomain;
};

struct ipsecinit {
 u_int8_t *ii_enckey;
 u_int8_t *ii_authkey;
 u_int16_t ii_enckeylen;
 u_int16_t ii_authkeylen;
 u_int8_t ii_encalg;
 u_int8_t ii_authalg;
 u_int8_t ii_compalg;
};
# 399 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct xformsw {
 u_short xf_type;
 u_short xf_flags;
 char *xf_name;
 int (*xf_attach)(void);
 int (*xf_init)(struct tdb *, struct xformsw *, struct ipsecinit *);
 int (*xf_zeroize)(struct tdb *);
 int (*xf_input)(struct mbuf *, struct tdb *, int, int);
 int (*xf_output)(struct mbuf *, struct tdb *, struct mbuf **,
     int, int);
};

extern int ipsec_in_use;
extern u_int64_t ipsec_last_added;
extern int ipsec_policy_pool_initialized;

extern int ipsec_keep_invalid;
extern int ipsec_require_pfs;
extern int ipsec_expire_acquire;
extern int ipsec_soft_allocations;
extern int ipsec_exp_allocations;
extern int ipsec_soft_bytes;
extern int ipsec_exp_bytes;
extern int ipsec_soft_timeout;
extern int ipsec_exp_timeout;
extern int ipsec_soft_first_use;
extern int ipsec_exp_first_use;

extern char ipsec_def_enc[];
extern char ipsec_def_auth[];
extern char ipsec_def_comp[];

extern struct enc_xform enc_xform_des;
extern struct enc_xform enc_xform_3des;
extern struct enc_xform enc_xform_blf;
extern struct enc_xform enc_xform_cast5;

extern struct auth_hash auth_hash_hmac_md5_96;
extern struct auth_hash auth_hash_hmac_sha1_96;
extern struct auth_hash auth_hash_hmac_ripemd_160_96;

extern struct comp_algo comp_algo_deflate;

extern struct ipsec_policy_head { struct ipsec_policy *tqh_first; struct ipsec_policy **tqh_last; } ipsec_policy_head;
extern struct ipsec_acquire_head { struct ipsec_acquire *tqh_first; struct ipsec_acquire **tqh_last; } ipsec_acquire_head;







struct radix_node_head *spd_table_add(unsigned int);
struct radix_node_head *spd_table_get(unsigned int);


uint32_t reserve_spi(u_int, u_int32_t, u_int32_t, union sockaddr_union *,
  union sockaddr_union *, u_int8_t, int *);
struct tdb *gettdb(u_int, u_int32_t, union sockaddr_union *, u_int8_t);
struct tdb *gettdbbydst(u_int, union sockaddr_union *, u_int8_t,
  struct ipsec_ids *,
  struct sockaddr_encap *, struct sockaddr_encap *);
struct tdb *gettdbbysrc(u_int, union sockaddr_union *, u_int8_t,
  struct ipsec_ids *,
  struct sockaddr_encap *, struct sockaddr_encap *);
struct tdb *gettdbbysrcdst(u_int, u_int32_t, union sockaddr_union *,
  union sockaddr_union *, u_int8_t);
void puttdb(struct tdb *);
void tdb_delete(struct tdb *);
struct tdb *tdb_alloc(u_int);
void tdb_free(struct tdb *);
int tdb_init(struct tdb *, u_int16_t, struct ipsecinit *);
int tdb_walk(u_int, int (*)(struct tdb *, void *, int), void *);


int ipe4_attach(void);
int ipe4_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int ipe4_zeroize(struct tdb *);
void ipe4_input(struct mbuf *, ...);
void ipip_input(struct mbuf *, int, struct ifnet *, int);
int ipip_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);

void ip4_input(struct mbuf *, ...);


int ip4_input6(struct mbuf **, int *, int);



int ah_attach(void);
int ah_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int ah_zeroize(struct tdb *);
int ah_input(struct mbuf *, struct tdb *, int, int);
int ah_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
int ah_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ah4_input(struct mbuf *, ...);
void *ah4_ctlinput(int, struct sockaddr *, u_int, void *);
void *udpencap_ctlinput(int, struct sockaddr *, u_int, void *);


int ah6_input(struct mbuf **, int *, int);



int esp_attach(void);
int esp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int esp_zeroize(struct tdb *);
int esp_input(struct mbuf *, struct tdb *, int, int);
int esp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
int esp_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void esp4_input(struct mbuf *, ...);
void *esp4_ctlinput(int, struct sockaddr *, u_int, void *);


int esp6_input(struct mbuf **, int *, int);



int ipcomp_attach(void);
int ipcomp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int ipcomp_zeroize(struct tdb *);
int ipcomp_input(struct mbuf *, struct tdb *, int, int);
int ipcomp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
int ipcomp_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ipcomp4_input(struct mbuf *, ...);


int ipcomp6_input(struct mbuf **, int *, int);



int tcp_signature_tdb_attach(void);
int tcp_signature_tdb_init(struct tdb *, struct xformsw *,
     struct ipsecinit *);
int tcp_signature_tdb_zeroize(struct tdb *);
int tcp_signature_tdb_input(struct mbuf *, struct tdb *, int, int);
int tcp_signature_tdb_output(struct mbuf *, struct tdb *, struct mbuf **,
   int, int);


int checkreplaywindow(struct tdb *, u_int32_t, u_int32_t *, int);


int ipsp_process_packet(struct mbuf *, struct tdb *, int, int);
int ipsp_process_done(struct mbuf *, struct tdb *);
struct tdb *ipsp_spd_lookup(struct mbuf *, int, int, int *, int,
     struct tdb *, struct inpcb *, u_int32_t);
struct tdb *ipsp_spd_inp(struct mbuf *, int, int, int *, int,
     struct tdb *, struct inpcb *, struct ipsec_policy *);
int ipsp_is_unspecified(union sockaddr_union);
int ipsp_aux_match(struct tdb *, struct ipsec_ids *,
     struct sockaddr_encap *, struct sockaddr_encap *);
int ipsp_ids_match(struct ipsec_ids *, struct ipsec_ids *);
struct ipsec_ids *ipsp_ids_insert(struct ipsec_ids *);
struct ipsec_ids *ipsp_ids_lookup(u_int32_t);
void ipsp_ids_free(struct ipsec_ids *);

int ipsec_common_input(struct mbuf *, int, int, int, int, int);
int ipsec_common_input_cb(struct mbuf *, struct tdb *, int, int);
int ipsec_delete_policy(struct ipsec_policy *);
ssize_t ipsec_hdrsz(struct tdb *);
void ipsec_adjust_mtu(struct mbuf *, u_int32_t);
struct ipsec_acquire *ipsec_get_acquire(u_int32_t);
# 139 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_enc.h" 1
# 25 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_enc.h"
struct enchdr {
 u_int32_t af;
 u_int32_t spi;
 u_int32_t flags;
};


struct enc_softc {
 struct ifnet sc_if;
 u_int sc_unit;
 struct ifaddr sc_ifa;
};

struct ifnet *enc_getif(u_int, u_int);
struct ifaddr *enc_getifa(u_int, u_int);
# 140 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 149 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
static uint32_t rt_hashjitter;

extern unsigned int rtmap_limit;

struct rtstat rtstat;
int rttrash;
int ifatrash;

struct pool rtentry_pool;
struct pool rttimer_pool;

void rt_timer_init(void);
int rt_setgwroute(struct rtentry *, u_int);
void rt_putgwroute(struct rtentry *);
int rtflushclone1(struct rtentry *, void *, u_int);
void rtflushclone(unsigned int, struct rtentry *);
int rt_ifa_purge_walker(struct rtentry *, void *, unsigned int);
struct rtentry *rt_match(struct sockaddr *, uint32_t *, int, unsigned int);
struct sockaddr *rt_plentosa(sa_family_t, int, struct sockaddr_in6 *);

struct ifaddr *ifa_ifwithroute(int, struct sockaddr *, struct sockaddr *,
      u_int);
int rtrequest_delete(struct rt_addrinfo *, u_int8_t, struct ifnet *,
     struct rtentry **, u_int);


void db_print_sa(struct sockaddr *);
void db_print_ifa(struct ifaddr *);
int db_show_rtentry(struct rtentry *, void *, unsigned int);




struct rt_label {
 struct { struct rt_label *tqe_next; struct rt_label **tqe_prev; } rtl_entry;
 char rtl_name[32];
 u_int16_t rtl_id;
 int rtl_ref;
};

struct rt_labels { struct rt_label *tqh_first; struct rt_label **tqh_last; } rt_labels = { ((void *)0), &(rt_labels).tqh_first };

void
route_init(void)
{
 pool_init(&rtentry_pool, sizeof(struct rtentry), 0, 0x5, 0,
     "rtentry", ((void *)0));

 while (rt_hashjitter == 0)
  rt_hashjitter = arc4random();




}




int
rtisvalid(struct rtentry *rt)
{
 if (rt == ((void *)0))
  return (0);

 if (!((rt->rt_flags) & (0x1)))
  return (0);

 if (((rt->rt_flags) & (0x2))) {
  ((rt->RT_gw._nh != ((void *)0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 218, "rt->rt_gwroute != NULL"));
      ((!((rt->RT_gw._nh->rt_flags) & (0x2))) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 219, "!ISSET(rt->rt_gwroute->rt_flags, RTF_GATEWAY)"));
      if (!((rt->RT_gw._nh->rt_flags) & (0x1)))
   return (0);
 }

 return (1);
}
# 236 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
struct rtentry *
rt_match(struct sockaddr *dst, uint32_t *src, int flags, unsigned int tableid)
{
 struct rtentry *rt0, *rt = ((void *)0);
 int error = 0;

 do { if (splassert_ctl > 0) { splassert_check(0x5, __func__); } } while (0);

 rt = rtable_match(tableid, dst, src);
 if (rt != ((void *)0)) {
  if ((rt->rt_flags & 0x100) && ((flags) & (1))) {
   struct rt_addrinfo info;

   rt0 = rt;

   memset(&info, 0, sizeof(info));
   info.rti_info[0] = dst;

   ;







   error = rtrequest(0xb, &info,
       rt->rt_priority - 1, &rt, tableid);
   if (error) {
    rt_missmsg(0x7, &info, 0, 0, 0,
        error, tableid);
   } else {

    rt_sendmsg(rt, 0x1, tableid);
    rtfree(rt0);
   }
   ;
  }
  rt->rt_rmx.rmx_pksent++;
 } else
  rtstat.rts_unreach++;
 return (rt);
}
# 296 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
int
rt_hash(struct rtentry *rt, struct sockaddr *dst, uint32_t *src)
{
 uint32_t a, b, c;

 if (src == ((void *)0) || !rtisvalid(rt) || !((rt->rt_flags) & (0x40000)))
  return (-1);

 a = b = 0x9e3779b9;
 c = rt_hashjitter;

 switch (dst->sa_family) {
 case 2:
     {
  struct sockaddr_in *sin;

  if (!ipmultipath)
   return (-1);

  sin = satosin(dst);
  a += sin->sin_addr.s_addr;
  b += (src != ((void *)0)) ? src[0] : 0;
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  break;
     }

 case 24:
     {
  struct sockaddr_in6 *sin6;

  if (!ip6_multipath)
   return (-1);

  sin6 = satosin6(dst);
  a += sin6->sin6_addr.__u6_addr.__u6_addr32[0];
  b += sin6->sin6_addr.__u6_addr.__u6_addr32[2];
  c += (src != ((void *)0)) ? src[0] : 0;
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  a += sin6->sin6_addr.__u6_addr.__u6_addr32[1];
  b += sin6->sin6_addr.__u6_addr.__u6_addr32[3];
  c += (src != ((void *)0)) ? src[1] : 0;
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  a += sin6->sin6_addr.__u6_addr.__u6_addr32[2];
  b += sin6->sin6_addr.__u6_addr.__u6_addr32[1];
  c += (src != ((void *)0)) ? src[2] : 0;
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  a += sin6->sin6_addr.__u6_addr.__u6_addr32[3];
  b += sin6->sin6_addr.__u6_addr.__u6_addr32[0];
  c += (src != ((void *)0)) ? src[3] : 0;
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  break;
     }

 }

 return (c & 0xffff);
}




struct rtentry *
rtalloc_mpath(struct sockaddr *dst, uint32_t *src, unsigned int rtableid)
{
 return (rt_match(dst, src, 1, rtableid));
}
# 371 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
struct rtentry *
rtalloc(struct sockaddr *dst, int flags, unsigned int rtableid)
{
 return (rt_match(dst, ((void *)0), flags, rtableid));
}





int
rt_setgwroute(struct rtentry *rt, u_int rtableid)
{
 struct rtentry *nhrt;

 ;

 ((((rt->rt_flags) & (0x2))) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 388, "ISSET(rt->rt_flags, RTF_GATEWAY)"));


 nhrt = rt_match(rt->rt_gateway, ((void *)0), 1, rtable_l2(rtableid));
 if (nhrt == ((void *)0))
  return (2);


 if (nhrt->rt_ifidx != rt->rt_ifidx) {
  rtfree(nhrt);
  return (65);
 }





 if (((nhrt->rt_flags) & (0x100|0x2))) {
  rtfree(nhrt);
  return (51);
 }


 rt_putgwroute(rt);
 ((rt->RT_gw._nh == ((void *)0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 412, "rt->rt_gwroute == NULL"));





 if (!((rt->rt_rmx.rmx_locks) & (0x1)) && (rt->rt_rmx.rmx_mtu > nhrt->rt_rmx.rmx_mtu))
  rt->rt_rmx.rmx_mtu = nhrt->rt_rmx.rmx_mtu;







 nhrt->rt_flags |= 0x20000;
 nhrt->RT_gw._ref++;

 rt->RT_gw._nh = nhrt;

 return (0);
}




void
rt_putgwroute(struct rtentry *rt)
{
 struct rtentry *nhrt = rt->RT_gw._nh;

 ;

 if (!((rt->rt_flags) & (0x2)) || nhrt == ((void *)0))
  return;

 ((((nhrt->rt_flags) & (0x20000))) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 448, "ISSET(nhrt->rt_flags, RTF_CACHED)"));
 ((nhrt->RT_gw._ref > 0) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 449, "nhrt->rt_cachecnt > 0"));

 --nhrt->RT_gw._ref;
 if (nhrt->RT_gw._ref == 0)
  nhrt->rt_flags &= ~0x20000;

 rtfree(rt->RT_gw._nh);
 rt->RT_gw._nh = ((void *)0);
}

void
rtref(struct rtentry *rt)
{
 _atomic_inc_int(&rt->rt_refcnt);
}

void
rtfree(struct rtentry *rt)
{
 int refcnt;

 if (rt == ((void *)0))
  return;

 refcnt = (int)_atomic_sub_int_nv((&rt->rt_refcnt), 1);
 if (refcnt <= 0) {
  ((!((rt->rt_flags) & (0x1))) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 475, "!ISSET(rt->rt_flags, RTF_UP)"));
  ((!(0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 476, "!RT_ROOT(rt)"));
  _atomic_dec_int(&rttrash);
  if (refcnt < 0) {
   printf("rtfree: %p not freed (neg refs)\n", rt);
   return;
  }

  ;
  rt_timer_remove_all(rt);
  ifafree(rt->rt_ifa);
  rtlabel_unref(rt->rt_labelid);

  if (rt->rt_flags & 0x100000)
   free(rt->rt_llinfo, 127, sizeof(struct rt_mpls));

  free(rt->rt_gateway, 5, (rt->rt_gateway->sa_len>0 ? (1 + (((rt->rt_gateway->sa_len) - 1) | (sizeof(long) - 1))) : sizeof(long)));
  free(((rt)->rt_dest), 5, ((rt)->rt_dest)->sa_len);
  ;

  pool_put(&rtentry_pool, rt);
 }
}

void
rt_sendmsg(struct rtentry *rt, int cmd, u_int rtableid)
{
 struct rt_addrinfo info;
 struct ifnet *ifp;
 struct sockaddr_rtlabel sa_rl;
 struct sockaddr_in6 sa_mask;

 memset(&info, 0, sizeof(info));
 info.rti_info[0] = ((rt)->rt_dest);
 info.rti_info[1] = rt->rt_gateway;
 if (!((rt->rt_flags) & (0x4)))
  info.rti_info[2] = rt_plen2mask(rt, &sa_mask);
 info.rti_info[10] = rtlabel_id2sa(rt->rt_labelid, &sa_rl);
 ifp = if_get(rt->rt_ifidx);
 if (ifp != ((void *)0)) {
  info.rti_info[4] = sdltosa(ifp->if_sadl);
  info.rti_info[5] = rt->rt_ifa->ifa_addr;
 }

 rt_missmsg(cmd, &info, rt->rt_flags, rt->rt_priority, rt->rt_ifidx, 0,
     rtableid);
 if_put(ifp);
}

void
ifafree(struct ifaddr *ifa)
{
 if (ifa == ((void *)0))
  panic("ifafree");
 if (ifa->ifa_refcnt == 0) {
  ifatrash--;
  free(ifa, 9, 0);
 } else
  ifa->ifa_refcnt--;
}







void
rtredirect(struct sockaddr *dst, struct sockaddr *gateway,
    struct sockaddr *src, struct rtentry **rtp, unsigned int rdomain)
{
 struct rtentry *rt;
 int error = 0;
 u_int32_t *stat = ((void *)0);
 struct rt_addrinfo info;
 struct ifaddr *ifa;
 unsigned int ifidx = 0;
 int flags = 0x2|0x4;
 uint8_t prio = 0;

 do { if (rw_status(&netlock) != 0x0001UL) splassert_fail(0x0001UL, rw_status(&netlock), __func__); do { if (splassert_ctl > 0) { splassert_check(0x5, __func__); } } while (0); } while (0);


 rt = rtalloc(gateway, 0, rdomain);
 if (!rtisvalid(rt) || ((rt->rt_flags) & (0x2))) {
  rtfree(rt);
  error = 51;
  goto out;
 }
 ifidx = rt->rt_ifidx;
 ifa = rt->rt_ifa;
 rtfree(rt);
 rt = ((void *)0);

 rt = rtable_lookup(rdomain, dst, ((void *)0), ((void *)0), 64);
# 579 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
 if (rt != ((void *)0) && (!((src)->sa_len == (rt->rt_gateway)->sa_len && bcmp((caddr_t)(src), (caddr_t)(rt->rt_gateway), (src)->sa_len) == 0) || rt->rt_ifa != ifa))
  error = 22;
 else if (ifa_ifwithaddr(gateway, rdomain) != ((void *)0) ||
     (gateway->sa_family = 2 &&
     in_broadcast(satosin(gateway)->sin_addr, rdomain)))
  error = 65;
 if (error)
  goto done;






 if (rt == ((void *)0))
  goto create;




 if (((rt->rt_flags) & (0x2))) {
  if (!((rt->rt_flags) & (0x4))) {




create:
   rtfree(rt);
   flags |= 0x10;
   bzero(&info, sizeof(info));
   info.rti_info[0] = dst;
   info.rti_info[1] = gateway;
   info.rti_ifa = ifa;
   info.rti_flags = flags;
   rt = ((void *)0);
   error = rtrequest(0x1, &info, 56, &rt,
       rdomain);
   if (error == 0) {
    flags = rt->rt_flags;
    prio = rt->rt_priority;
   }
   stat = &rtstat.rts_dynamic;
  } else {




   rt->rt_flags |= 0x20;
   flags |= 0x20;
   prio = rt->rt_priority;
   stat = &rtstat.rts_newgateway;
   rt_setgate(rt, gateway, rdomain);
  }
 } else
  error = 65;
done:
 if (rt) {
  if (rtp && !error)
   *rtp = rt;
  else
   rtfree(rt);
 }
out:
 if (error)
  rtstat.rts_badredirect++;
 else if (stat != ((void *)0))
  (*stat)++;
 bzero((caddr_t)&info, sizeof(info));
 info.rti_info[0] = dst;
 info.rti_info[1] = gateway;
 info.rti_info[6] = src;
 rt_missmsg(0x6, &info, flags, prio, ifidx, error, rdomain);
}




int
rtdeletemsg(struct rtentry *rt, struct ifnet *ifp, u_int tableid)
{
 int error;
 struct rt_addrinfo info;
 unsigned int ifidx;
 struct sockaddr_in6 sa_mask;

 ((rt->rt_ifidx == ifp->if_index) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 664, "rt->rt_ifidx == ifp->if_index"));






 bzero((caddr_t)&info, sizeof(info));
 info.rti_info[0] = ((rt)->rt_dest);
 if (!((rt->rt_flags) & (0x4)))
  info.rti_info[2] = rt_plen2mask(rt, &sa_mask);
 info.rti_info[1] = rt->rt_gateway;
 info.rti_flags = rt->rt_flags;
 ifidx = rt->rt_ifidx;
 error = rtrequest_delete(&info, rt->rt_priority, ifp, &rt, tableid);
 rt_missmsg(0x2, &info, info.rti_flags, rt->rt_priority, ifidx,
     error, tableid);
 if (error == 0)
  rtfree(rt);
 return (error);
}

static inline int
rtequal(struct rtentry *a, struct rtentry *b)
{
 if (a == b)
  return 1;

 if (memcmp(((a)->rt_dest), ((b)->rt_dest), ((a)->rt_dest)->sa_len) == 0 &&
     ((a)->rt_plen) == ((b)->rt_plen))
  return 1;
 else
  return 0;
}

int
rtflushclone1(struct rtentry *rt, void *arg, u_int id)
{
 struct rtentry *parent = arg;
 struct ifnet *ifp;
 int error;

 ifp = if_get(rt->rt_ifidx);






 if (ifp == ((void *)0))
         return 0;

 if (((rt->rt_flags) & (0x10000)) && rtequal(rt->rt_parent, parent)) {
         error = rtdeletemsg(rt, ifp, id);
         if (error == 0)
   error = 35;
 } else
  error = 0;

 if_put(ifp);
 return error;
}

void
rtflushclone(unsigned int rtableid, struct rtentry *parent)
{


 if (!parent || (parent->rt_flags & 0x100) == 0)
  panic("rtflushclone: called with a non-cloning route");

 rtable_walk(rtableid, ((parent)->rt_dest)->sa_family, rtflushclone1, parent);
}

struct ifaddr *
ifa_ifwithroute(int flags, struct sockaddr *dst, struct sockaddr *gateway,
    u_int rtableid)
{
 struct ifaddr *ifa;

 if ((flags & 0x2) == 0) {







  ifa = ((void *)0);
  if (flags & 0x4)
   ifa = ifa_ifwithdstaddr(dst, rtableid);
  if (ifa == ((void *)0))
   ifa = ifa_ifwithaddr(gateway, rtableid);
 } else {





  ifa = ifa_ifwithdstaddr(gateway, rtableid);
 }
 if (ifa == ((void *)0)) {
  if (gateway->sa_family == 18) {
   struct sockaddr_dl *sdl = satosdl(gateway);
   struct ifnet *ifp = if_get(sdl->sdl_index);

   if (ifp != ((void *)0))
    ifa = ifaof_ifpforaddr(dst, ifp);
   if_put(ifp);
  } else {
   struct rtentry *rt;

   rt = rtalloc(gateway, 1, rtableid);
   if (rt != ((void *)0))
    ifa = rt->rt_ifa;
   rtfree(rt);
  }
 }
 if (ifa == ((void *)0))
  return (((void *)0));
 if (ifa->ifa_addr->sa_family != dst->sa_family) {
  struct ifaddr *oifa = ifa;
  ifa = ifaof_ifpforaddr(dst, ifa->ifa_ifp);
  if (ifa == ((void *)0))
   ifa = oifa;
 }
 return (ifa);
}

int
rt_getifa(struct rt_addrinfo *info, u_int rtid)
{
 struct ifnet *ifp = ((void *)0);





 if (info->rti_info[4] != ((void *)0)) {
  struct sockaddr_dl *sdl;

  sdl = satosdl(info->rti_info[4]);
  ifp = if_get(sdl->sdl_index);
 }
# 816 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
 if (info->rti_info[0] &&
     info->rti_info[0]->sa_family == 30)
  info->rti_ifa = enc_getifa(rtid, 0);


 if (info->rti_ifa == ((void *)0) && info->rti_info[5] != ((void *)0))
  info->rti_ifa = ifa_ifwithaddr(info->rti_info[5], rtid);

 if (info->rti_ifa == ((void *)0)) {
  struct sockaddr *sa;

  if ((sa = info->rti_info[5]) == ((void *)0))
   if ((sa = info->rti_info[1]) == ((void *)0))
    sa = info->rti_info[0];

  if (sa != ((void *)0) && ifp != ((void *)0))
   info->rti_ifa = ifaof_ifpforaddr(sa, ifp);
  else if (info->rti_info[0] != ((void *)0) &&
      info->rti_info[1] != ((void *)0))
   info->rti_ifa = ifa_ifwithroute(info->rti_flags,
       info->rti_info[0],
       info->rti_info[1],
       rtid);
  else if (sa != ((void *)0))
   info->rti_ifa = ifa_ifwithroute(info->rti_flags,
       sa, sa, rtid);
 }

 if_put(ifp);

 if (info->rti_ifa == ((void *)0))
  return (51);

 return (0);
}

int
rtrequest_delete(struct rt_addrinfo *info, u_int8_t prio, struct ifnet *ifp,
    struct rtentry **ret_nrt, u_int tableid)
{
 struct rtentry *rt;
 int error;

 do { if (splassert_ctl > 0) { splassert_check(0x5, __func__); } } while (0);

 if (!rtable_exists(tableid))
  return (47);
 rt = rtable_lookup(tableid, info->rti_info[0],
     info->rti_info[2], info->rti_info[1], prio);
 if (rt == ((void *)0))
  return (3);


 if (ifp != ((void *)0) && ifp->if_index != rt->rt_ifidx) {
  rtfree(rt);
  return (3);
 }






 if ((rt->rt_flags & 0x40000) &&
     info->rti_info[1] == ((void *)0)) {
  rtfree(rt);
  return (3);
 }


 error = rtable_delete(tableid, info->rti_info[0],
     info->rti_info[2], rt);
 if (error != 0) {
  rtfree(rt);
  return (3);
 }







 rt_putgwroute(rt);


 if (((rt->rt_flags) & (0x100)))
  rtflushclone(tableid, rt);

 rtfree(rt->rt_parent);
 rt->rt_parent = ((void *)0);

 rt->rt_flags &= ~0x1;

 if (ifp == ((void *)0)) {
  ifp = if_get(rt->rt_ifidx);
  if (ifp != ((void *)0)) {
   ifp->if_rtrequest(ifp, 0x2, rt);
   if_put(ifp);
  }
 } else {
  ((ifp->if_index == rt->rt_ifidx) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 917, "ifp->if_index == rt->rt_ifidx"));
  ifp->if_rtrequest(ifp, 0x2, rt);
 }

 _atomic_inc_int(&rttrash);

 if (ret_nrt != ((void *)0))
  *ret_nrt = rt;
 else
  rtfree(rt);

 return (0);
}

int
rtrequest(int req, struct rt_addrinfo *info, u_int8_t prio,
    struct rtentry **ret_nrt, u_int tableid)
{
 struct ifnet *ifp;
 struct rtentry *rt, *crt;
 struct ifaddr *ifa;
 struct sockaddr *ndst;
 struct sockaddr_rtlabel *sa_rl, sa_rl2;
 struct sockaddr_dl sa_dl = { sizeof(sa_dl), 18 };
 int dlen, error;

 struct sockaddr_mpls *sa_mpls;


 do { if (splassert_ctl > 0) { splassert_check(0x5, __func__); } } while (0);

 if (!rtable_exists(tableid))
  return (47);
 if (info->rti_flags & 0x4)
  info->rti_info[2] = ((void *)0);
 switch (req) {
 case 0x2:
  error = rtrequest_delete(info, prio, ((void *)0), ret_nrt, tableid);
  if (error)
   return (error);
  break;

 case 0xb:
  if (ret_nrt == ((void *)0) || (rt = *ret_nrt) == ((void *)0))
   return (22);
  if ((rt->rt_flags & 0x100) == 0)
   return (22);
  ((rt->rt_ifa->ifa_ifp != ((void *)0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 964, "rt->rt_ifa->ifa_ifp != NULL"));
  info->rti_ifa = rt->rt_ifa;
  info->rti_flags = rt->rt_flags | (0x10000|0x4);
  info->rti_flags &= ~(0x100|0x800000|0x800);
  info->rti_info[1] = sdltosa(&sa_dl);
  info->rti_info[10] =
      rtlabel_id2sa(rt->rt_labelid, &sa_rl2);


 case 0x1:
  if (info->rti_ifa == ((void *)0) && (error = rt_getifa(info, tableid)))
   return (error);
  ifa = info->rti_ifa;
  ifp = ifa->ifa_ifp;
  if (prio == 0)
   prio = ifp->if_priority + 8;

  dlen = info->rti_info[0]->sa_len;
  ndst = malloc(dlen, 5, 0x0002);
  if (ndst == ((void *)0))
   return (55);

  if (info->rti_info[2] != ((void *)0))
   rt_maskedcopy(info->rti_info[0], ndst,
       info->rti_info[2]);
  else
   memcpy(ndst, info->rti_info[0], dlen);

  rt = pool_get(&rtentry_pool, 0x0002 | 0x0008);
  if (rt == ((void *)0)) {
   free(ndst, 5, dlen);
   return (55);
  }

  rt->rt_refcnt = 1;
  rt->rt_flags = info->rti_flags | 0x1;
  rt->rt_priority = prio;
  do { ((&rt->rt_timer)->lh_first) = ((void *)0); } while (0);



  if (rtable_mpath_capable(tableid, ndst->sa_family) &&
      !((rt->rt_flags) & (0x200000)) &&
      (!((ifp->if_data.ifi_link_state) >= 4 || (ifp->if_data.ifi_link_state) == 0) ||
      !((ifp->if_flags) & (0x1)))) {
   rt->rt_flags &= ~0x1;
   rt->rt_priority |= 0x80;
  }


  if (info->rti_info[10] != ((void *)0)) {
   sa_rl = (struct sockaddr_rtlabel *)
       info->rti_info[10];
   rt->rt_labelid = rtlabel_name2id(sa_rl->sr_label);
  }



  if (info->rti_flags & 0x100000 &&
      (info->rti_info[8] != ((void *)0) ||
      info->rti_info[0]->sa_family == 33)) {
   struct rt_mpls *rt_mpls;

   sa_mpls = (struct sockaddr_mpls *)
       info->rti_info[8];

   rt->rt_llinfo = malloc(sizeof(struct rt_mpls),
       127, 0x0002|0x0008);

   if (rt->rt_llinfo == ((void *)0)) {
    free(ndst, 5, dlen);
    pool_put(&rtentry_pool, rt);
    return (12);
   }

   rt_mpls = (struct rt_mpls *)rt->rt_llinfo;

   if (sa_mpls != ((void *)0))
    rt_mpls->mpls_label = sa_mpls->smpls_label;

   rt_mpls->mpls_operation = info->rti_mpls;



   rt->rt_flags |= 0x100000;
  } else
   rt->rt_flags &= ~0x100000;


  ifa->ifa_refcnt++;
  rt->rt_ifa = ifa;
  rt->rt_ifidx = ifp->if_index;




  if (((rt->rt_flags) & (0x10000))) {
   rtref(*ret_nrt);
   rt->rt_parent = *ret_nrt;
   rt->rt_rmx = (*ret_nrt)->rt_rmx;
  }






  if ((error = rt_setgate(rt, info->rti_info[1],
      tableid))) {
   ifafree(ifa);
   rtfree(rt->rt_parent);
   rt_putgwroute(rt);
   free(rt->rt_gateway, 5, 0);
   free(ndst, 5, dlen);
   pool_put(&rtentry_pool, rt);
   return (error);
  }

  error = rtable_insert(tableid, ndst,
      info->rti_info[2], info->rti_info[1],
      rt->rt_priority, rt);
  if (error != 0 && (crt = rtalloc(ndst, 0, tableid)) != ((void *)0)) {

   if (((crt->rt_flags) & (0x10000))) {
    struct ifnet *cifp;

    cifp = if_get(crt->rt_ifidx);
    ((cifp != ((void *)0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 1091, "cifp != NULL"));
    rtdeletemsg(crt, cifp, tableid);
    if_put(cifp);

    error = rtable_insert(tableid, ndst,
        info->rti_info[2],
        info->rti_info[1],
        rt->rt_priority, rt);
   }
   rtfree(crt);
  }
  if (error != 0) {
   ifafree(ifa);
   rtfree(rt->rt_parent);
   rt_putgwroute(rt);
   free(rt->rt_gateway, 5, 0);
   free(ndst, 5, dlen);
   pool_put(&rtentry_pool, rt);
   return (17);
  }
  ifp->if_rtrequest(ifp, req, rt);

  if_group_routechange(info->rti_info[0],
   info->rti_info[2]);

  if (ret_nrt != ((void *)0))
   *ret_nrt = rt;
  else
   rtfree(rt);
  break;
 }

 return (0);
}

int
rt_setgate(struct rtentry *rt, struct sockaddr *gate, u_int rtableid)
{
 int glen = (gate->sa_len>0 ? (1 + (((gate->sa_len) - 1) | (sizeof(long) - 1))) : sizeof(long));
 struct sockaddr *sa;

 if (rt->rt_gateway == ((void *)0) || glen > (rt->rt_gateway->sa_len>0 ? (1 + (((rt->rt_gateway->sa_len) - 1) | (sizeof(long) - 1))) : sizeof(long))) {
  sa = malloc(glen, 5, 0x0002);
  if (sa == ((void *)0))
   return (55);
  free(rt->rt_gateway, 5, 0);
  rt->rt_gateway = sa;
 }
 memmove(rt->rt_gateway, gate, glen);

 if (((rt->rt_flags) & (0x2)))
  return (rt_setgwroute(rt, rtableid));

 return (0);
}





struct rtentry *
rt_getll(struct rtentry *rt)
{
 if (((rt->rt_flags) & (0x2))) {
  ((rt->RT_gw._nh != ((void *)0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 1155, "rt->rt_gwroute != NULL"));
  return (rt->RT_gw._nh);
 }

 return (rt);
}

void
rt_maskedcopy(struct sockaddr *src, struct sockaddr *dst,
    struct sockaddr *netmask)
{
 u_char *cp1 = (u_char *)src;
 u_char *cp2 = (u_char *)dst;
 u_char *cp3 = (u_char *)netmask;
 u_char *cplim = cp2 + *cp3;
 u_char *cplim2 = cp2 + *cp1;

 *cp2++ = *cp1++; *cp2++ = *cp1++;
 cp3 += 2;
 if (cplim > cplim2)
  cplim = cplim2;
 while (cp2 < cplim)
  *cp2++ = *cp1++ & *cp3++;
 if (cp2 < cplim2)
  bzero((caddr_t)cp2, (unsigned)(cplim2 - cp2));
}

int
rt_ifa_add(struct ifaddr *ifa, int flags, struct sockaddr *dst)
{
 struct ifnet *ifp = ifa->ifa_ifp;
 struct rtentry *rt;
 struct sockaddr_rtlabel sa_rl;
 struct rt_addrinfo info;
 unsigned int rtableid = ifp->if_data.ifi_rdomain;
 uint8_t prio = ifp->if_priority + 8;
 int error;

 memset(&info, 0, sizeof(info));
 info.rti_ifa = ifa;
 info.rti_flags = flags | 0x40000;
 info.rti_info[0] = dst;
 if (flags & 0x400)
  info.rti_info[1] = sdltosa(ifp->if_sadl);
 else
  info.rti_info[1] = ifa->ifa_addr;
 info.rti_info[10] = rtlabel_id2sa(ifp->if_rtlabelid, &sa_rl);


 if ((flags & 0x100000) == 0x100000) {
  info.rti_mpls = 0x1;


  rtableid = 0;
 }


 if ((flags & 0x4) == 0)
  info.rti_info[2] = ifa->ifa_netmask;

 if (flags & (0x200000|0x400000))
  prio = 1;

 if (flags & 0x800000)
  prio = ifp->if_priority + 4;

 error = rtrequest(0x1, &info, prio, &rt, rtableid);
 if (error == 0) {





  if (flags & 0x200000)
   rt_sendaddrmsg(rt, 0xc, ifa);
  rt_sendmsg(rt, 0x1, rtableid);
  rtfree(rt);
 }
 return (error);
}

int
rt_ifa_del(struct ifaddr *ifa, int flags, struct sockaddr *dst)
{
 struct ifnet *ifp = ifa->ifa_ifp;
 struct rtentry *rt;
 struct mbuf *m = ((void *)0);
 struct sockaddr *deldst;
 struct rt_addrinfo info;
 struct sockaddr_rtlabel sa_rl;
 unsigned int rtableid = ifp->if_data.ifi_rdomain;
 uint8_t prio = ifp->if_priority + 8;
 int error;


 if ((flags & 0x100000) == 0x100000)

  rtableid = 0;


 if ((flags & 0x4) == 0 && ifa->ifa_netmask) {
  m = m_get(0x0002, 3);
  if (m == ((void *)0))
   return (55);
  deldst = ((struct sockaddr *)((m)->m_hdr.mh_data));
  rt_maskedcopy(dst, deldst, ifa->ifa_netmask);
  dst = deldst;
 }

 memset(&info, 0, sizeof(info));
 info.rti_ifa = ifa;
 info.rti_flags = flags;
 info.rti_info[0] = dst;
 if ((flags & 0x400) == 0)
  info.rti_info[1] = ifa->ifa_addr;
 info.rti_info[10] = rtlabel_id2sa(ifp->if_rtlabelid, &sa_rl);

 if ((flags & 0x4) == 0)
  info.rti_info[2] = ifa->ifa_netmask;

 if (flags & (0x200000|0x400000))
  prio = 1;

 if (flags & 0x800000)
  prio = ifp->if_priority + 4;

 error = rtrequest_delete(&info, prio, ifp, &rt, rtableid);
 if (error == 0) {
  rt_sendmsg(rt, 0x2, rtableid);
  if (flags & 0x200000)
   rt_sendaddrmsg(rt, 0xd, ifa);
  rtfree(rt);
 }
 m_free(m);

 return (error);
}




int
rt_ifa_addlocal(struct ifaddr *ifa)
{
 struct rtentry *rt;
 u_int flags = 0x4|0x200000;
 int error = 0;







 switch (ifa->ifa_addr->sa_family) {
 case 2:
  if (satosin(ifa->ifa_addr)->sin_addr.s_addr == ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0x00000000)); __builtin_constant_p((u_int32_t)(0x00000000)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); })))
   return (0);
  break;

 case 24:
  if ((memcmp(&(&satosin6(ifa->ifa_addr)->sin6_addr)->__u6_addr.__u6_addr8[0], &(&in6addr_any)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0))

   return (0);
  break;

 default:
  break;
 }

 if (!((ifa->ifa_ifp->if_flags) & ((0x8|0x10))))
  flags |= 0x400;


 rt = rtalloc(ifa->ifa_addr, 0, ifa->ifa_ifp->if_data.ifi_rdomain);
 if (rt == ((void *)0) || ((rt->rt_flags) & (flags)) != flags)
  error = rt_ifa_add(ifa, flags, ifa->ifa_addr);
 rtfree(rt);

 return (error);
}




int
rt_ifa_dellocal(struct ifaddr *ifa)
{
 struct rtentry *rt;
 u_int flags = 0x4|0x200000;
 int error = 0;





 switch (ifa->ifa_addr->sa_family) {
 case 2:
  if (satosin(ifa->ifa_addr)->sin_addr.s_addr == ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0x00000000)); __builtin_constant_p((u_int32_t)(0x00000000)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); })))
   return (0);
  break;

 case 24:
  if ((memcmp(&(&satosin6(ifa->ifa_addr)->sin6_addr)->__u6_addr.__u6_addr8[0], &(&in6addr_any)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0))

   return (0);
  break;

 default:
  break;
 }

 if (!((ifa->ifa_ifp->if_flags) & ((0x8|0x10))))
  flags |= 0x400;
# 1378 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
 rt = rtalloc(ifa->ifa_addr, 0, ifa->ifa_ifp->if_data.ifi_rdomain);
 if (rt != ((void *)0) && ((rt->rt_flags) & (flags)) == flags)
  error = rt_ifa_del(ifa, flags, ifa->ifa_addr);
 rtfree(rt);

 return (error);
}




void
rt_ifa_purge(struct ifaddr *ifa)
{
 struct ifnet *ifp = ifa->ifa_ifp;
 unsigned int rtableid;
 int i;

 ((ifp != ((void *)0)) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 1396, "ifp != NULL"));

 for (rtableid = 0; rtableid < rtmap_limit; rtableid++) {

  if (rtable_l2(rtableid) != ifp->if_data.ifi_rdomain)
   continue;
  for (i = 1; i <= 36; i++) {
   rtable_walk(rtableid, i, rt_ifa_purge_walker, ifa);
  }
 }
}

int
rt_ifa_purge_walker(struct rtentry *rt, void *vifa, unsigned int rtableid)
{
 struct ifaddr *ifa = vifa;
 struct ifnet *ifp = ifa->ifa_ifp;
 int error;

 if (rt->rt_ifa != ifa)
  return (0);

 if ((error = rtdeletemsg(rt, ifp, rtableid))) {
  return (error);
 }

 return (35);

}
# 1435 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
struct { struct rttimer_queue *lh_first; } rttimer_queue_head;
static int rt_init_done = 0;
# 1457 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c"
void
rt_timer_init(void)
{
 static struct timeout rt_timer_timeout;

 if (rt_init_done)
  panic("rt_timer_init: already initialized");

 pool_init(&rttimer_pool, sizeof(struct rttimer), 0, 0x5, 0,
     "rttmr", ((void *)0));

 do { ((&rttimer_queue_head)->lh_first) = ((void *)0); } while (0);
 timeout_set_proc(&rt_timer_timeout, rt_timer_timer, &rt_timer_timeout);
 timeout_add_sec(&rt_timer_timeout, 1);
 rt_init_done = 1;
}

struct rttimer_queue *
rt_timer_queue_create(u_int timeout)
{
 struct rttimer_queue *rtq;

 if (rt_init_done == 0)
  rt_timer_init();

 if ((rtq = malloc(sizeof(*rtq), 5, 0x0002|0x0008)) == ((void *)0))
  return (((void *)0));

 rtq->rtq_timeout = timeout;
 rtq->rtq_count = 0;
 do { (&rtq->rtq_head)->tqh_first = ((void *)0); (&rtq->rtq_head)->tqh_last = &(&rtq->rtq_head)->tqh_first; } while (0);
 do { if (((rtq)->rtq_link.le_next = (&rttimer_queue_head)->lh_first) != ((void *)0)) (&rttimer_queue_head)->lh_first->rtq_link.le_prev = &(rtq)->rtq_link.le_next; (&rttimer_queue_head)->lh_first = (rtq); (rtq)->rtq_link.le_prev = &(&rttimer_queue_head)->lh_first; } while (0);

 return (rtq);
}

void
rt_timer_queue_change(struct rttimer_queue *rtq, long timeout)
{
 rtq->rtq_timeout = timeout;
}

void
rt_timer_queue_destroy(struct rttimer_queue *rtq)
{
 struct rttimer *r;

 do { if (rw_status(&netlock) != 0x0001UL) splassert_fail(0x0001UL, rw_status(&netlock), __func__); do { if (splassert_ctl > 0) { splassert_check(0x5, __func__); } } while (0); } while (0);

 while ((r = ((&rtq->rtq_head)->tqh_first)) != ((void *)0)) {
  do { if ((r)->rtt_link.le_next != ((void *)0)) (r)->rtt_link.le_next->rtt_link.le_prev = (r)->rtt_link.le_prev; *(r)->rtt_link.le_prev = (r)->rtt_link.le_next; ((r)->rtt_link.le_prev) = ((void *)-1); ((r)->rtt_link.le_next) = ((void *)-1); } while (0);
  do { if (((r)->rtt_next.tqe_next) != ((void *)0)) (r)->rtt_next.tqe_next->rtt_next.tqe_prev = (r)->rtt_next.tqe_prev; else (&rtq->rtq_head)->tqh_last = (r)->rtt_next.tqe_prev; *(r)->rtt_next.tqe_prev = (r)->rtt_next.tqe_next; ((r)->rtt_next.tqe_prev) = ((void *)-1); ((r)->rtt_next.tqe_next) = ((void *)-1); } while (0);
  { if (r->rtt_func != ((void *)0)) { (*r->rtt_func)(r->rtt_rt, r); } else { struct rt_addrinfo info; bzero(&info, sizeof(info)); info.rti_info[0] = ((r->rtt_rt)->rt_dest); rtrequest(0x2, &info, r->rtt_rt->rt_priority, ((void *)0), r->rtt_tableid); } };
  pool_put(&rttimer_pool, r);
  if (rtq->rtq_count > 0)
   rtq->rtq_count--;
  else
   printf("rt_timer_queue_destroy: rtq_count reached 0\n");
 }

 do { if ((rtq)->rtq_link.le_next != ((void *)0)) (rtq)->rtq_link.le_next->rtq_link.le_prev = (rtq)->rtq_link.le_prev; *(rtq)->rtq_link.le_prev = (rtq)->rtq_link.le_next; ((rtq)->rtq_link.le_prev) = ((void *)-1); ((rtq)->rtq_link.le_next) = ((void *)-1); } while (0);
 free(rtq, 5, sizeof(*rtq));
}

unsigned long
rt_timer_queue_count(struct rttimer_queue *rtq)
{
 return (rtq->rtq_count);
}

void
rt_timer_remove_all(struct rtentry *rt)
{
 struct rttimer *r;

 while ((r = ((&rt->rt_timer)->lh_first)) != ((void *)0)) {
  do { if ((r)->rtt_link.le_next != ((void *)0)) (r)->rtt_link.le_next->rtt_link.le_prev = (r)->rtt_link.le_prev; *(r)->rtt_link.le_prev = (r)->rtt_link.le_next; ((r)->rtt_link.le_prev) = ((void *)-1); ((r)->rtt_link.le_next) = ((void *)-1); } while (0);
  do { if (((r)->rtt_next.tqe_next) != ((void *)0)) (r)->rtt_next.tqe_next->rtt_next.tqe_prev = (r)->rtt_next.tqe_prev; else (&r->rtt_queue->rtq_head)->tqh_last = (r)->rtt_next.tqe_prev; *(r)->rtt_next.tqe_prev = (r)->rtt_next.tqe_next; ((r)->rtt_next.tqe_prev) = ((void *)-1); ((r)->rtt_next.tqe_next) = ((void *)-1); } while (0);
  if (r->rtt_queue->rtq_count > 0)
   r->rtt_queue->rtq_count--;
  else
   printf("rt_timer_remove_all: rtq_count reached 0\n");
  pool_put(&rttimer_pool, r);
 }
}

int
rt_timer_add(struct rtentry *rt, void (*func)(struct rtentry *,
    struct rttimer *), struct rttimer_queue *queue, u_int rtableid)
{
 struct rttimer *r;
 long current_time;

 current_time = time_uptime;
 rt->rt_rmx.rmx_expire = time_uptime + queue->rtq_timeout;





 for (r = ((&rt->rt_timer)->lh_first); r != ((void *)0);
      r = ((r)->rtt_link.le_next)) {
  if (r->rtt_func == func) {
   do { if ((r)->rtt_link.le_next != ((void *)0)) (r)->rtt_link.le_next->rtt_link.le_prev = (r)->rtt_link.le_prev; *(r)->rtt_link.le_prev = (r)->rtt_link.le_next; ((r)->rtt_link.le_prev) = ((void *)-1); ((r)->rtt_link.le_next) = ((void *)-1); } while (0);
   do { if (((r)->rtt_next.tqe_next) != ((void *)0)) (r)->rtt_next.tqe_next->rtt_next.tqe_prev = (r)->rtt_next.tqe_prev; else (&r->rtt_queue->rtq_head)->tqh_last = (r)->rtt_next.tqe_prev; *(r)->rtt_next.tqe_prev = (r)->rtt_next.tqe_next; ((r)->rtt_next.tqe_prev) = ((void *)-1); ((r)->rtt_next.tqe_next) = ((void *)-1); } while (0);
   if (r->rtt_queue->rtq_count > 0)
    r->rtt_queue->rtq_count--;
   else
    printf("rt_timer_add: rtq_count reached 0\n");
   pool_put(&rttimer_pool, r);
   break;
  }
 }

 r = pool_get(&rttimer_pool, 0x0002 | 0x0008);
 if (r == ((void *)0))
  return (55);

 r->rtt_rt = rt;
 r->rtt_time = current_time;
 r->rtt_func = func;
 r->rtt_queue = queue;
 r->rtt_tableid = rtableid;
 do { if (((r)->rtt_link.le_next = (&rt->rt_timer)->lh_first) != ((void *)0)) (&rt->rt_timer)->lh_first->rtt_link.le_prev = &(r)->rtt_link.le_next; (&rt->rt_timer)->lh_first = (r); (r)->rtt_link.le_prev = &(&rt->rt_timer)->lh_first; } while (0);
 do { (r)->rtt_next.tqe_next = ((void *)0); (r)->rtt_next.tqe_prev = (&queue->rtq_head)->tqh_last; *(&queue->rtq_head)->tqh_last = (r); (&queue->rtq_head)->tqh_last = &(r)->rtt_next.tqe_next; } while (0);
 r->rtt_queue->rtq_count++;

 return (0);
}

void
rt_timer_timer(void *arg)
{
 struct timeout *to = (struct timeout *)arg;
 struct rttimer_queue *rtq;
 struct rttimer *r;
 long current_time;
 int s;

 current_time = time_uptime;

 do { rw_enter_write(&netlock); s = splraise(0x5); } while (0);
 for (rtq = ((&rttimer_queue_head)->lh_first); rtq != ((void *)0);
      rtq = ((rtq)->rtq_link.le_next)) {
  while ((r = ((&rtq->rtq_head)->tqh_first)) != ((void *)0) &&
      (r->rtt_time + rtq->rtq_timeout) < current_time) {
   do { if ((r)->rtt_link.le_next != ((void *)0)) (r)->rtt_link.le_next->rtt_link.le_prev = (r)->rtt_link.le_prev; *(r)->rtt_link.le_prev = (r)->rtt_link.le_next; ((r)->rtt_link.le_prev) = ((void *)-1); ((r)->rtt_link.le_next) = ((void *)-1); } while (0);
   do { if (((r)->rtt_next.tqe_next) != ((void *)0)) (r)->rtt_next.tqe_next->rtt_next.tqe_prev = (r)->rtt_next.tqe_prev; else (&rtq->rtq_head)->tqh_last = (r)->rtt_next.tqe_prev; *(r)->rtt_next.tqe_prev = (r)->rtt_next.tqe_next; ((r)->rtt_next.tqe_prev) = ((void *)-1); ((r)->rtt_next.tqe_next) = ((void *)-1); } while (0);
   { if (r->rtt_func != ((void *)0)) { (*r->rtt_func)(r->rtt_rt, r); } else { struct rt_addrinfo info; bzero(&info, sizeof(info)); info.rti_info[0] = ((r->rtt_rt)->rt_dest); rtrequest(0x2, &info, r->rtt_rt->rt_priority, ((void *)0), r->rtt_tableid); } };
   pool_put(&rttimer_pool, r);
   if (rtq->rtq_count > 0)
    rtq->rtq_count--;
   else
    printf("rt_timer_timer: rtq_count reached 0\n");
  }
 }
 do { spllower(s); rw_exit_write(&netlock); } while (0);

 timeout_add_sec(to, 1);
}

u_int16_t
rtlabel_name2id(char *name)
{
 struct rt_label *label, *p = ((void *)0);
 u_int16_t new_id = 1;

 if (!name[0])
  return (0);

 for((label) = ((&rt_labels)->tqh_first); (label) != ((void *)0); (label) = ((label)->rtl_entry.tqe_next))
  if (strcmp(name, label->rtl_name) == 0) {
   label->rtl_ref++;
   return (label->rtl_id);
  }







 if (!(((&rt_labels)->tqh_first) == ((void *)0)))
  for (p = ((&rt_labels)->tqh_first); p != ((void *)0) &&
      p->rtl_id == new_id; p = ((p)->rtl_entry.tqe_next))
   new_id = p->rtl_id + 1;

 if (new_id > 50000)
  return (0);

 label = malloc(sizeof(*label), 5, 0x0002|0x0008);
 if (label == ((void *)0))
  return (0);
 strlcpy(label->rtl_name, name, sizeof(label->rtl_name));
 label->rtl_id = new_id;
 label->rtl_ref++;

 if (p != ((void *)0))
  do { (label)->rtl_entry.tqe_prev = (p)->rtl_entry.tqe_prev; (label)->rtl_entry.tqe_next = (p); *(p)->rtl_entry.tqe_prev = (label); (p)->rtl_entry.tqe_prev = &(label)->rtl_entry.tqe_next; } while (0);
 else
  do { (label)->rtl_entry.tqe_next = ((void *)0); (label)->rtl_entry.tqe_prev = (&rt_labels)->tqh_last; *(&rt_labels)->tqh_last = (label); (&rt_labels)->tqh_last = &(label)->rtl_entry.tqe_next; } while (0);

 return (label->rtl_id);
}

const char *
rtlabel_id2name(u_int16_t id)
{
 struct rt_label *label;

 for((label) = ((&rt_labels)->tqh_first); (label) != ((void *)0); (label) = ((label)->rtl_entry.tqe_next))
  if (label->rtl_id == id)
   return (label->rtl_name);

 return (((void *)0));
}

struct sockaddr *
rtlabel_id2sa(u_int16_t labelid, struct sockaddr_rtlabel *sa_rl)
{
 const char *label;

 if (labelid == 0 || (label = rtlabel_id2name(labelid)) == ((void *)0))
  return (((void *)0));

 bzero(sa_rl, sizeof(*sa_rl));
 sa_rl->sr_len = sizeof(*sa_rl);
 sa_rl->sr_family = 0;
 strlcpy(sa_rl->sr_label, label, sizeof(sa_rl->sr_label));

 return ((struct sockaddr *)sa_rl);
}

void
rtlabel_unref(u_int16_t id)
{
 struct rt_label *p, *next;

 if (id == 0)
  return;

 for (p = ((&rt_labels)->tqh_first); p != ((void *)0); p = next) {
  next = ((p)->rtl_entry.tqe_next);
  if (id == p->rtl_id) {
   if (--p->rtl_ref == 0) {
    do { if (((p)->rtl_entry.tqe_next) != ((void *)0)) (p)->rtl_entry.tqe_next->rtl_entry.tqe_prev = (p)->rtl_entry.tqe_prev; else (&rt_labels)->tqh_last = (p)->rtl_entry.tqe_prev; *(p)->rtl_entry.tqe_prev = (p)->rtl_entry.tqe_next; ((p)->rtl_entry.tqe_prev) = ((void *)-1); ((p)->rtl_entry.tqe_next) = ((void *)-1); } while (0);
    free(p, 5, sizeof(*p));
   }
   break;
  }
 }
}


void
rt_if_track(struct ifnet *ifp)
{
 int i;
 u_int tid;

 for (tid = 0; tid < rtmap_limit; tid++) {

  if (rtable_l2(tid) != ifp->if_data.ifi_rdomain)
   continue;
  for (i = 1; i <= 36; i++) {
   if (!rtable_mpath_capable(tid, i))
    continue;

   rtable_walk(tid, i, rt_if_linkstate_change, ifp);
  }
 }
}

int
rt_if_linkstate_change(struct rtentry *rt, void *arg, u_int id)
{
 struct ifnet *ifp = arg;
 struct sockaddr_in6 sa_mask;

 if (rt->rt_ifidx != ifp->if_index)
      return (0);


 if (rt->rt_flags & 0x200000) {
  rt->rt_flags |= 0x1;
  return (0);
 }

 if (((ifp->if_data.ifi_link_state) >= 4 || (ifp->if_data.ifi_link_state) == 0) && ifp->if_flags & 0x1) {
  if (!(rt->rt_flags & 0x1)) {

   rt->rt_flags |= 0x1;
   rtable_mpath_reprio(id, ((rt)->rt_dest),
       rt_plen2mask(rt, &sa_mask),
       rt->rt_priority & 0x7f, rt);
  }
 } else {
  if (rt->rt_flags & 0x1) {





   if (((rt->rt_flags) & (0x10000|0x10)) &&
       !((rt->rt_flags) & (0x20000))) {
    int error;

    if ((error = rtdeletemsg(rt, ifp, id)))
     return (error);
    return (35);
   }

   rt->rt_flags &= ~0x1;
   rtable_mpath_reprio(id, ((rt)->rt_dest),
       rt_plen2mask(rt, &sa_mask),
       rt->rt_priority | 0x80, rt);
  }
 }
 if_group_routechange(((rt)->rt_dest), rt_plen2mask(rt, &sa_mask));

 return (0);
}


struct sockaddr *
rt_plentosa(sa_family_t af, int plen, struct sockaddr_in6 *sa_mask)
{
 struct sockaddr_in *sin = (struct sockaddr_in *)sa_mask;

 struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *)sa_mask;


 ((plen >= 0 || plen == -1) ? (void)0 : __assert("diagnostic ", "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c", 1789, "plen >= 0 || plen == -1"));

 if (plen == -1)
  return (((void *)0));

 memset(sa_mask, 0, sizeof(*sa_mask));

 switch (af) {
 case 2:
  sin->sin_family = 2;
  sin->sin_len = sizeof(struct sockaddr_in);
  in_prefixlen2mask(&sin->sin_addr, plen);
  break;

 case 24:
  sin6->sin6_family = 24;
  sin6->sin6_len = sizeof(struct sockaddr_in6);
  in6_prefixlen2mask(&sin6->sin6_addr, plen);
  break;

 default:
  return (((void *)0));
 }

 return ((struct sockaddr *)sa_mask);
}

struct sockaddr *
rt_plen2mask(struct rtentry *rt, struct sockaddr_in6 *sa_mask)
{



 return (rt_plentosa(((rt)->rt_dest)->sa_family, ((rt)->rt_plen), sa_mask));

}


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/db_machdep.h" 1
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/db_machdep.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 1
# 63 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
typedef int vm_fault_t;

typedef int vm_inherit_t;
typedef off_t voff_t;

union vm_map_object;
typedef union vm_map_object vm_map_object_t;

struct vm_map_entry;
typedef struct vm_map_entry *vm_map_entry_t;

struct vm_map;
typedef struct vm_map *vm_map_t;

struct vm_page;
typedef struct vm_page *vm_page_t;
# 100 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
typedef int vm_prot_t;
# 166 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mman.h" 1
# 167 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2


struct buf;
struct mount;
struct pglist;
struct vmspace;
struct pmap;


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_param.h" 1
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/vmparam.h" 1
# 74 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_param.h" 2

typedef int boolean_t;
# 177 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pmap.h" 1
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pmap.h"
struct proc;







struct pmap_statistics {
 long resident_count;
 long wired_count;
};
typedef struct pmap_statistics *pmap_statistics_t;

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h" 1
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpufunc.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpufunc.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/specialreg.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpufunc.h" 2

static __inline void
x86_pause(void)
{

}



extern int cpu_feature;

static __inline void
invlpg(u_int64_t addr)
{
        __asm volatile("invlpg (%0)" : : "r" (addr) : "memory");
}

static __inline void
lidt(void *p)
{
 __asm volatile("lidt (%0)" : : "r" (p) : "memory");
}

static __inline void
lldt(u_short sel)
{
 __asm volatile("lldt %0" : : "r" (sel));
}

static __inline void
ltr(u_short sel)
{
 __asm volatile("ltr %0" : : "r" (sel));
}

static __inline void
lcr8(u_int val)
{
 u_int64_t val64 = val;
 __asm volatile("movq %0,%%cr8" : : "r" (val64));
}




static __inline void
lcr0(u_int val)
{
 u_int64_t val64 = val;
 __asm volatile("movq %0,%%cr0" : : "r" (val64));
}

static __inline u_int
rcr0(void)
{
 u_int64_t val64;
 u_int val;
 __asm volatile("movq %%cr0,%0" : "=r" (val64));
 val = val64;
 return val;
}

static __inline u_int64_t
rcr2(void)
{
 u_int64_t val;
 __asm volatile("movq %%cr2,%0" : "=r" (val));
 return val;
}

static __inline void
lcr3(u_int64_t val)
{
 __asm volatile("movq %0,%%cr3" : : "r" (val));
}

static __inline u_int64_t
rcr3(void)
{
 u_int64_t val;
 __asm volatile("movq %%cr3,%0" : "=r" (val));
 return val;
}




static __inline void
lcr4(u_int val)
{
 u_int64_t val64 = val;

 __asm volatile("movq %0,%%cr4" : : "r" (val64));
}

static __inline u_int
rcr4(void)
{
 u_int val;
 u_int64_t val64;
 __asm volatile("movq %%cr4,%0" : "=r" (val64));
 val = val64;
 return val;
}

static __inline void
tlbflush(void)
{
 u_int64_t val;
 __asm volatile("movq %%cr3,%0" : "=r" (val));
 __asm volatile("movq %0,%%cr3" : : "r" (val));
}

static __inline void
tlbflushg(void)
{
# 179 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpufunc.h"
 if (cpu_feature & 0x00002000) {
  u_int cr4 = rcr4();
  lcr4(cr4 & ~0x00000080);
  lcr4(cr4);
 } else
  tlbflush();
}
# 194 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpufunc.h"
static __inline void
disable_intr(void)
{
 __asm volatile("cli");
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}

static __inline u_long
read_rflags(void)
{
 u_long ef;

 __asm volatile("pushfq; popq %0" : "=r" (ef));
 return (ef);
}

static __inline void
write_rflags(u_long ef)
{
 __asm volatile("pushq %0; popfq" : : "r" (ef));
}

static __inline u_long
intr_disable(void)
{
 u_long ef;

 ef = read_rflags();
 disable_intr();
 return (ef);
}

static __inline void
intr_restore(u_long ef)
{
 write_rflags(ef);
}

static __inline u_int64_t
rdmsr(u_int msr)
{
 uint32_t hi, lo;
 __asm volatile("rdmsr" : "=d" (hi), "=a" (lo) : "c" (msr));
 return (((uint64_t)hi << 32) | (uint64_t) lo);
}

static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
 __asm volatile("wrmsr" :
     : "a" (newval & 0xffffffff), "d" (newval >> 32), "c" (msr));
}
# 260 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpufunc.h"
static __inline u_int64_t
rdmsr_locked(u_int msr, u_int code)
{
 uint32_t hi, lo;
 __asm volatile("rdmsr"
     : "=d" (hi), "=a" (lo)
     : "c" (msr), "D" (code));
 return (((uint64_t)hi << 32) | (uint64_t) lo);
}

static __inline void
wrmsr_locked(u_int msr, u_int code, u_int64_t newval)
{
 __asm volatile("wrmsr" :
     : "a" (newval & 0xffffffff), "d" (newval >> 32), "c" (msr), "D" (code));
}

static __inline void
wbinvd(void)
{
 __asm volatile("wbinvd");
}

static __inline void
clflush(u_int64_t addr)
{
 __asm volatile("clflush %0" : "+m" (*(volatile char *)addr));
}

static __inline void
mfence(void)
{
 __asm volatile("mfence" : : : "memory");
}

static __inline u_int64_t
rdtsc(void)
{
 uint32_t hi, lo;

 __asm volatile("rdtsc" : "=d" (hi), "=a" (lo));
 return (((uint64_t)hi << 32) | (uint64_t) lo);
}

static __inline u_int64_t
rdpmc(u_int pmc)
{
 uint32_t hi, lo;

 __asm volatile("rdpmc" : "=d" (hi), "=a" (lo) : "c" (pmc));
 return (((uint64_t)hi << 32) | (uint64_t) lo);
}

static __inline void
monitor(const volatile void *addr, u_long extensions, u_int hints)
{

 __asm volatile("monitor"
     : : "a" (addr), "c" (extensions), "d" (hints));
}

static __inline void
mwait(u_long extensions, u_int hints)
{

 __asm volatile("mwait" : : "a" (hints), "c" (extensions));
}

static __inline void
xsetbv(uint32_t reg, uint64_t mask)
{
 uint32_t lo, hi;

 lo = mask;
 hi = mask >> 32;
 __asm volatile("xsetbv" :: "c" (reg), "a" (lo), "d" (hi) : "memory");
}


static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}




void amd64_errata(struct cpu_info *);
# 74 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h" 2



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_object.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_object.h"
struct uvm_object {
 struct uvm_pagerops *pgops;
 struct uvm_objtree { struct rb_tree rbh_root; } memt;
 int uo_npages;
 int uo_refs;
};
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_object.h"
extern struct uvm_pagerops uvm_vnodeops;
extern struct uvm_pagerops uvm_deviceops;


int uvm_pagecmp(const struct vm_page *, const struct vm_page *);
extern const struct rb_type *const uvm_objtree_RBT_TYPE; __attribute__((__unused__)) static inline void uvm_objtree_RBT_INIT(struct uvm_objtree *head) { _rb_init(&head->rbh_root); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_INSERT(struct uvm_objtree *head, struct vm_page *elm) { return _rb_insert(uvm_objtree_RBT_TYPE, &head->rbh_root, elm); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_REMOVE(struct uvm_objtree *head, struct vm_page *elm) { return _rb_remove(uvm_objtree_RBT_TYPE, &head->rbh_root, elm); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_FIND(struct uvm_objtree *head, const struct vm_page *key) { return _rb_find(uvm_objtree_RBT_TYPE, &head->rbh_root, key); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_NFIND(struct uvm_objtree *head, const struct vm_page *key) { return _rb_nfind(uvm_objtree_RBT_TYPE, &head->rbh_root, key); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_ROOT(struct uvm_objtree *head) { return _rb_root(uvm_objtree_RBT_TYPE, &head->rbh_root); } __attribute__((__unused__)) static inline int uvm_objtree_RBT_EMPTY(struct uvm_objtree *head) { return _rb_empty(&head->rbh_root); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_MIN(struct uvm_objtree *head) { return _rb_min(uvm_objtree_RBT_TYPE, &head->rbh_root); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_MAX(struct uvm_objtree *head) { return _rb_max(uvm_objtree_RBT_TYPE, &head->rbh_root); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_NEXT(struct vm_page *elm) { return _rb_next(uvm_objtree_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_PREV(struct vm_page *elm) { return _rb_prev(uvm_objtree_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_LEFT(struct vm_page *elm) { return _rb_left(uvm_objtree_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_RIGHT(struct vm_page *elm) { return _rb_right(uvm_objtree_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_page * uvm_objtree_RBT_PARENT(struct vm_page *elm) { return _rb_parent(uvm_objtree_RBT_TYPE, elm); } __attribute__((__unused__)) static inline void uvm_objtree_RBT_POISON(struct vm_page *elm, unsigned long poison) { return _rb_poison(uvm_objtree_RBT_TYPE, elm, poison); } __attribute__((__unused__)) static inline int uvm_objtree_RBT_CHECK(struct vm_page *elm, unsigned long poison) { return _rb_check(uvm_objtree_RBT_TYPE, elm, poison); }
# 92 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_object.h"
void uvm_objinit(struct uvm_object *, struct uvm_pagerops *, int);
int uvm_objwire(struct uvm_object *, voff_t, voff_t, struct pglist *);
void uvm_objunwire(struct uvm_object *, voff_t, voff_t);
# 78 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pte.h" 1
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pte.h"
typedef u_int64_t pd_entry_t;
typedef u_int64_t pt_entry_t;
# 160 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pte.h"
extern pt_entry_t pg_nx;
# 79 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h" 2
# 261 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
struct pmap;
typedef struct pmap *pmap_t;





struct pmap_head { struct pmap *lh_first; };
# 282 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
struct pmap {
 struct mutex pm_mtx;
 struct uvm_object pm_obj[4 -1];
 struct { struct pmap *le_next; struct pmap **le_prev; } pm_list;
 pd_entry_t *pm_pdir;
 paddr_t pm_pdirpa;
 struct vm_page *pm_ptphint[4 -1];

 struct pmap_statistics pm_stats;

 u_int64_t pm_cpus;
 int pm_type;
};
# 314 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
struct pv_entry {
 struct pv_entry *pv_next;
 struct pmap *pv_pmap;
 vaddr_t pv_va;
 struct vm_page *pv_ptp;
};






extern u_long PTDpaddr;

extern struct pmap kernel_pmap_store;

extern paddr_t ptp_masks[];
extern int ptp_shifts[];
extern long nkptp[], nbpd[], nkptpmax[];
# 360 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
paddr_t pmap_bootstrap(paddr_t, paddr_t);
boolean_t pmap_clear_attrs(struct vm_page *, unsigned long);
static void pmap_page_protect(struct vm_page *, vm_prot_t);
void pmap_page_remove (struct vm_page *);
static void pmap_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
void pmap_remove(struct pmap *, vaddr_t, vaddr_t);
boolean_t pmap_test_attrs(struct vm_page *, unsigned);
static void pmap_update_pg(vaddr_t);
static void pmap_update_2pg(vaddr_t,vaddr_t);
void pmap_write_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
void pmap_fix_ept(struct pmap *, vaddr_t);

vaddr_t reserve_dumppages(vaddr_t);

paddr_t pmap_prealloc_lowmem_ptps(paddr_t);

void pagezero(vaddr_t);

int pmap_convert(struct pmap *, int);






void pmap_flush_cache(vaddr_t, vsize_t);
# 400 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
static __inline void
pmap_remove_all(struct pmap *pmap)
{

}






__inline static void
pmap_update_pg(vaddr_t va)
{
 invlpg(va);
}





__inline static void
pmap_update_2pg(vaddr_t va, vaddr_t vb)
{
 invlpg(va);
 invlpg(vb);
}
# 437 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
__inline static void
pmap_page_protect(struct vm_page *pg, vm_prot_t prot)
{
 if ((prot & 0x02) == 0) {
  if (prot & (0x01 | 0x04)) {
   (void) pmap_clear_attrs(pg, 0x0000000000000002UL);
  } else {
   pmap_page_remove(pg);
  }
 }
}
# 457 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
__inline static void
pmap_protect(struct pmap *pmap, vaddr_t sva, vaddr_t eva, vm_prot_t prot)
{
 if ((prot & 0x02) == 0) {
  if (prot & (0x01| 0x04)) {
   pmap_write_protect(pmap, sva, eva, prot);
  } else {
   pmap_remove(pmap, sva, eva);
  }
 }
}
# 478 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
static __inline pt_entry_t *
vtopte(vaddr_t va)
{
 return (((pt_entry_t *) (255 * (1ULL << 39))) + (((((va) & ~0xffff000000000000)) & (((0x0000ff8000000000UL|0x0000007fc0000000UL)|0x000000003fe00000UL)|0x00000000001ff000UL)) >> 12));
}

static __inline pt_entry_t *
kvtopte(vaddr_t va)
{
# 497 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
 return (((pt_entry_t *) (255 * (1ULL << 39))) + (((((va) & ~0xffff000000000000)) & (((0x0000ff8000000000UL|0x0000007fc0000000UL)|0x000000003fe00000UL)|0x00000000001ff000UL)) >> 12));
}
# 510 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pmap.h"
struct pv_entry;
struct vm_page_md {
 struct mutex pv_mtx;
 struct pv_entry *pv_list;
};
# 87 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pmap.h" 2
# 102 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pmap.h"


void pmap_activate(struct proc *);


void pmap_deactivate(struct proc *);


void pmap_unwire(pmap_t, vaddr_t);
# 121 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pmap.h"
void pmap_collect(pmap_t);





void pmap_copy_page(struct vm_page *, struct vm_page *);

struct pmap *pmap_create(void);
void pmap_destroy(pmap_t);
int pmap_enter(pmap_t,
      vaddr_t, paddr_t, vm_prot_t, int);
boolean_t pmap_extract(pmap_t, vaddr_t, paddr_t *);

vaddr_t pmap_growkernel(vaddr_t);


void pmap_init(void);

void pmap_kenter_pa(vaddr_t, paddr_t, vm_prot_t);
void pmap_kremove(vaddr_t, vsize_t);







void pmap_page_protect(struct vm_page *, vm_prot_t);




void pmap_protect(pmap_t, vaddr_t, vaddr_t, vm_prot_t);

void pmap_reference(pmap_t);


void pmap_remove(pmap_t, vaddr_t, vaddr_t);
# 168 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pmap.h"
void pmap_zero_page(struct vm_page *);


void pmap_virtual_space(vaddr_t *, vaddr_t *);

vaddr_t pmap_steal_memory(vsize_t, vaddr_t *, vaddr_t *);








# 179 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_page.h" 1
# 92 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_page.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };

struct vm_page {
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } pageq;

 struct rb_entry objt;

 struct vm_anon *uanon;
 struct uvm_object *uobject;
 voff_t offset;

 u_int pg_flags;

 u_int pg_version;
 u_int wire_count;

 paddr_t phys_addr;
 psize_t fpgsz;

 struct vm_page_md mdpage;






};
# 190 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_page.h"
struct vm_physseg {
 paddr_t start;
 paddr_t end;
 paddr_t avail_start;
 paddr_t avail_end;
 struct vm_page *pgs;
 struct vm_page *lastpg;
};







extern boolean_t vm_page_zero_enable;





extern struct vm_physseg vm_physmem[16];
extern int vm_nphysseg;





void uvm_page_init(vaddr_t *, vaddr_t *);







void uvm_pageactivate(struct vm_page *);
vaddr_t uvm_pageboot_alloc(vsize_t);
void uvm_pagecopy(struct vm_page *, struct vm_page *);
void uvm_pagedeactivate(struct vm_page *);
void uvm_pagefree(struct vm_page *);
void uvm_page_unbusy(struct vm_page **, int);
struct vm_page *uvm_pagelookup(struct uvm_object *, voff_t);
void uvm_pageunwire(struct vm_page *);
void uvm_pagewait(struct vm_page *, int);
void uvm_pagewake(struct vm_page *);
void uvm_pagewire(struct vm_page *);
void uvm_pagezero(struct vm_page *);
void uvm_pagealloc_pg(struct vm_page *, struct uvm_object *,
      voff_t, struct vm_anon *);

struct uvm_constraint_range;
psize_t uvm_pagecount(struct uvm_constraint_range*);
# 280 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_page.h"
struct vm_page *PHYS_TO_VM_PAGE(paddr_t);
int vm_physseg_find(paddr_t, int *);
# 181 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h" 1
# 93 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
void uvm_map_clip_end(struct vm_map*, struct vm_map_entry*,
       vaddr_t);
void uvm_map_clip_start(struct vm_map*,
       struct vm_map_entry*, vaddr_t);
# 133 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_anon.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_anon.h"
struct vm_anon {
 struct vm_page *an_page;
 int an_ref;




 int an_swslot;
};
# 74 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_anon.h"
struct vm_aref {
 int ar_pageoff;
 struct vm_amap *ar_amap;
};


struct vm_anon *uvm_analloc(void);
void uvm_anfree(struct vm_anon *);
void uvm_anwait(void);
void uvm_anon_init(void);
void uvm_anon_dropswap(struct vm_anon *);
boolean_t uvm_anon_pagein(struct vm_anon *);
# 134 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h" 2
# 150 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
union vm_map_object {
 struct uvm_object *uvm_obj;
 struct vm_map *sub_map;
};







struct vm_map_entry {
 union {
  struct rb_entry addr_entry;
  struct { struct vm_map_entry *sle_next; } addr_kentry;
 } daddrs;

 union {
  struct rb_entry rbtree;
  struct { struct vm_map_entry *tqe_next; struct vm_map_entry **tqe_prev; } tailq;
  struct { struct vm_map_entry *tqe_next; struct vm_map_entry **tqe_prev; } deadq;
 } dfree;


 vaddr_t start;
 vaddr_t end;

 vsize_t guard;
 vsize_t fspace;

 union vm_map_object object;
 voff_t offset;
 struct vm_aref aref;

 int etype;

 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;

 int wired_count;
 int advice;

 u_int8_t flags;




 vsize_t fspace_augment;
};



struct uvm_map_deadq { struct vm_map_entry *tqh_first; struct vm_map_entry **tqh_last; };
struct uvm_map_addr { struct rb_tree rbh_root; };

extern const struct rb_type *const uvm_map_addr_RBT_TYPE; __attribute__((__unused__)) static inline void uvm_map_addr_RBT_INIT(struct uvm_map_addr *head) { _rb_init(&head->rbh_root); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_INSERT(struct uvm_map_addr *head, struct vm_map_entry *elm) { return _rb_insert(uvm_map_addr_RBT_TYPE, &head->rbh_root, elm); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_REMOVE(struct uvm_map_addr *head, struct vm_map_entry *elm) { return _rb_remove(uvm_map_addr_RBT_TYPE, &head->rbh_root, elm); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_FIND(struct uvm_map_addr *head, const struct vm_map_entry *key) { return _rb_find(uvm_map_addr_RBT_TYPE, &head->rbh_root, key); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_NFIND(struct uvm_map_addr *head, const struct vm_map_entry *key) { return _rb_nfind(uvm_map_addr_RBT_TYPE, &head->rbh_root, key); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_ROOT(struct uvm_map_addr *head) { return _rb_root(uvm_map_addr_RBT_TYPE, &head->rbh_root); } __attribute__((__unused__)) static inline int uvm_map_addr_RBT_EMPTY(struct uvm_map_addr *head) { return _rb_empty(&head->rbh_root); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_MIN(struct uvm_map_addr *head) { return _rb_min(uvm_map_addr_RBT_TYPE, &head->rbh_root); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_MAX(struct uvm_map_addr *head) { return _rb_max(uvm_map_addr_RBT_TYPE, &head->rbh_root); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_NEXT(struct vm_map_entry *elm) { return _rb_next(uvm_map_addr_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_PREV(struct vm_map_entry *elm) { return _rb_prev(uvm_map_addr_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_LEFT(struct vm_map_entry *elm) { return _rb_left(uvm_map_addr_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_RIGHT(struct vm_map_entry *elm) { return _rb_right(uvm_map_addr_RBT_TYPE, elm); } __attribute__((__unused__)) static inline struct vm_map_entry * uvm_map_addr_RBT_PARENT(struct vm_map_entry *elm) { return _rb_parent(uvm_map_addr_RBT_TYPE, elm); } __attribute__((__unused__)) static inline void uvm_map_addr_RBT_POISON(struct vm_map_entry *elm, unsigned long poison) { return _rb_poison(uvm_map_addr_RBT_TYPE, elm, poison); } __attribute__((__unused__)) static inline int uvm_map_addr_RBT_CHECK(struct vm_map_entry *elm, unsigned long poison) { return _rb_check(uvm_map_addr_RBT_TYPE, elm, poison); };
# 291 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
struct vm_map {
 struct pmap * pmap;
 struct rwlock lock;
 struct mutex mtx;

 struct uvm_map_addr addr;

 vsize_t size;
 int ref_count;
 int flags;
 struct mutex flags_lock;
 unsigned int timestamp;

 vaddr_t min_offset;
 vaddr_t max_offset;




 vaddr_t b_start;
 vaddr_t b_end;
 vaddr_t s_start;
 vaddr_t s_end;
# 334 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
 struct uvm_addr_state *uaddr_exe;
 struct uvm_addr_state *uaddr_any[4];
 struct uvm_addr_state *uaddr_brk_stack;
};
# 367 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
struct vm_map_intrsafe {
 struct vm_map vmi_map;
 struct { struct vm_map_intrsafe *le_next; struct vm_map_intrsafe **le_prev; } vmi_list;
};







extern vaddr_t uvm_maxkaddr;





void uvm_map_deallocate(vm_map_t);

int uvm_map_clean(vm_map_t, vaddr_t, vaddr_t, int);
vm_map_t uvm_map_create(pmap_t, vaddr_t, vaddr_t, int);
int uvm_map_extract(struct vm_map*, vaddr_t, vsize_t, vaddr_t*,
      int);
vaddr_t uvm_map_pie(vaddr_t);
vaddr_t uvm_map_hint(struct vmspace *, vm_prot_t, vaddr_t, vaddr_t);
int uvm_map_inherit(vm_map_t, vaddr_t, vaddr_t, vm_inherit_t);
int uvm_map_advice(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_init(void);
boolean_t uvm_map_lookup_entry(vm_map_t, vaddr_t, vm_map_entry_t *);
int uvm_map_replace(vm_map_t, vaddr_t, vaddr_t,
      vm_map_entry_t, int);
int uvm_map_reserve(vm_map_t, vsize_t, vaddr_t, vsize_t,
      vaddr_t *);
void uvm_map_setup(vm_map_t, vaddr_t, vaddr_t, int);
int uvm_map_submap(vm_map_t, vaddr_t, vaddr_t, vm_map_t);
void uvm_unmap(vm_map_t, vaddr_t, vaddr_t);
void uvm_map_set_uaddr(struct vm_map*, struct uvm_addr_state**,
      struct uvm_addr_state*);
int uvm_map_mquery(struct vm_map*, vaddr_t*, vsize_t, voff_t, int);

void uvm_unmap_detach(struct uvm_map_deadq*, int);
void uvm_unmap_remove(struct vm_map*, vaddr_t, vaddr_t,
      struct uvm_map_deadq*, boolean_t, boolean_t);

struct kinfo_vmentry;

int uvm_map_fill_vmmap(struct vm_map *, struct kinfo_vmentry *,
      size_t *);
# 452 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_map.h"
boolean_t vm_map_lock_try_ln(struct vm_map*, char*, int);
void vm_map_lock_ln(struct vm_map*, char*, int);
void vm_map_lock_read_ln(struct vm_map*, char*, int);
void vm_map_unlock_ln(struct vm_map*, char*, int);
void vm_map_unlock_read_ln(struct vm_map*, char*, int);
void vm_map_downgrade_ln(struct vm_map*, char*, int);
void vm_map_upgrade_ln(struct vm_map*, char*, int);
void vm_map_busy_ln(struct vm_map*, char*, int);
void vm_map_unbusy_ln(struct vm_map*, char*, int);
# 182 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_fault.h" 1
# 52 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_fault.h"
struct uvm_faultinfo {
 vm_map_t orig_map;
 vaddr_t orig_rvaddr;
 vsize_t orig_size;
 vm_map_t map;
 unsigned int mapv;
 vm_map_entry_t entry;
 vsize_t size;
};







void uvmfault_init(void);

boolean_t uvmfault_lookup(struct uvm_faultinfo *, boolean_t);
boolean_t uvmfault_relock(struct uvm_faultinfo *);
void uvmfault_unlockall(struct uvm_faultinfo *, struct vm_amap *,
      struct uvm_object *, struct vm_anon *);
int uvmfault_anonget(struct uvm_faultinfo *, struct vm_amap *,
      struct vm_anon *);

int uvm_fault_wire(vm_map_t, vaddr_t, vaddr_t, vm_prot_t);
void uvm_fault_unwire(vm_map_t, vaddr_t, vaddr_t);
void uvm_fault_unwire_locked(vm_map_t, vaddr_t, vaddr_t);
# 185 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pager.h" 1
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pager.h"
struct uvm_pagerops {

 void (*pgo_init)(void);

 void (*pgo_reference)(struct uvm_object *);

 void (*pgo_detach)(struct uvm_object *);

 int (*pgo_fault)(struct uvm_faultinfo *, vaddr_t,
     vm_page_t *, int, int, vm_fault_t,
     vm_prot_t, int);

 boolean_t (*pgo_flush)(struct uvm_object *, voff_t,
     voff_t, int);

 int (*pgo_get)(struct uvm_object *, voff_t,
     vm_page_t *, int *, int, vm_prot_t, int, int);

 int (*pgo_put)(struct uvm_object *, vm_page_t *,
     int, boolean_t);

 void (*pgo_cluster)(struct uvm_object *, voff_t,
     voff_t *, voff_t *);

 struct vm_page ** (*pgo_mk_pcluster)(struct uvm_object *,
     struct vm_page **, int *, struct vm_page *,
     int, voff_t, voff_t);
};
# 122 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_pager.h"
void uvm_pager_dropcluster(struct uvm_object *, struct vm_page *,
      struct vm_page **, int *, int);
void uvm_pager_init(void);
int uvm_pager_put(struct uvm_object *, struct vm_page *,
      struct vm_page ***, int *, int, voff_t, voff_t);


vaddr_t uvm_pagermapin(struct vm_page **, int, int);
void uvm_pagermapout(vaddr_t, int);
struct vm_page **uvm_mk_pcluster(struct uvm_object *, struct vm_page **,
      int *, struct vm_page *, int, voff_t, voff_t);
# 186 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2







struct vmspace {
 struct vm_map vm_map;
 int vm_refcnt;
 caddr_t vm_shm;


 segsz_t vm_rssize;
 segsz_t vm_swrss;
 segsz_t vm_tsize;
 segsz_t vm_dsize;
 segsz_t vm_dused;
 segsz_t vm_ssize;
 caddr_t vm_taddr;
 caddr_t vm_daddr;
 caddr_t vm_maxsaddr;
 caddr_t vm_minsaddr;
};
# 224 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
struct uvm_constraint_range {
 paddr_t ucr_low;
 paddr_t ucr_high;
};



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvmexp.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvmexp.h"
struct uvmexp {

 int pagesize;
 int pagemask;
 int pageshift;


 int npages;
 int free;
 int active;
 int inactive;
 int paging;
 int wired;

 int zeropages;
 int reserve_pagedaemon;
 int reserve_kernel;
 int anonpages;
 int vnodepages;
 int vtextpages;


 int freemin;
 int freetarg;
 int inactarg;
 int wiredmax;
 int anonmin;
 int vtextmin;
 int vnodemin;
 int anonminpct;
 int vtextminpct;
 int vnodeminpct;


 int nswapdev;
 int swpages;
 int swpginuse;
 int swpgonly;
 int nswget;
 int nanon;
 int nanonneeded;
 int nfreeanon;


 int faults;
 int traps;
 int intrs;
 int swtch;
 int softs;
 int syscalls;
 int pageins;

 int obsolete_swapins;
 int obsolete_swapouts;
 int pgswapin;
 int pgswapout;
 int forks;
 int forks_ppwait;
 int forks_sharevm;
 int pga_zerohit;

 int pga_zeromiss;

 int zeroaborts;



 int fltnoram;
 int fltnoanon;
 int fltnoamap;
 int fltpgwait;
 int fltpgrele;
 int fltrelck;
 int fltrelckok;
 int fltanget;
 int fltanretry;
 int fltamcopy;
 int fltnamap;
 int fltnomap;
 int fltlget;
 int fltget;
 int flt_anon;
 int flt_acow;
 int flt_obj;
 int flt_prcopy;
 int flt_przero;


 int pdwoke;
 int pdrevs;
 int pdswout;
 int pdfreed;
 int pdscans;
 int pdanscan;
 int pdobscan;
 int pdreact;
 int pdbusy;
 int pdpageouts;
 int pdpending;
 int pddeact;
 int pdreanon;
 int pdrevnode;
 int pdrevtext;

 int fpswtch;
 int kmapent;
};

struct _ps_strings {
 void *val;
};
# 232 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h" 2
extern struct uvmexp uvmexp;


extern struct uvm_constraint_range isa_constraint;
extern struct uvm_constraint_range dma_constraint;
extern struct uvm_constraint_range no_constraint;
extern struct uvm_constraint_range *uvm_md_constraints[];

extern struct pool *uvm_aiobuf_pool;




struct uvm_coredump_state {
 void *cookie;
 vaddr_t start;
 vaddr_t realend;
 vaddr_t end;
 vm_prot_t prot;
 int flags;
};






extern struct vm_map *exec_map;
extern struct vm_map *kernel_map;
extern struct vm_map *kmem_map;
extern struct vm_map *phys_map;


extern vaddr_t vm_min_kernel_address;







void vmapbuf(struct buf *, vsize_t);
void vunmapbuf(struct buf *, vsize_t);
void cpu_fork(struct proc *, struct proc *, void *,
       size_t, void (*)(void *), void *);
struct uvm_object *uao_create(vsize_t, int);
void uao_detach(struct uvm_object *);
void uao_detach_locked(struct uvm_object *);
void uao_reference(struct uvm_object *);
void uao_reference_locked(struct uvm_object *);
int uvm_fault(vm_map_t, vaddr_t, vm_fault_t, vm_prot_t);




vaddr_t uvm_uarea_alloc(void);
void uvm_uarea_free(struct proc *);
void uvm_exit(struct process *);
void uvm_init_limits(struct proc *);
boolean_t uvm_kernacc(caddr_t, size_t, int);

int uvm_vslock(struct proc *, caddr_t, size_t,
       vm_prot_t);
void uvm_vsunlock(struct proc *, caddr_t, size_t);
int uvm_vslock_device(struct proc *, void *, size_t,
       vm_prot_t, void **);
void uvm_vsunlock_device(struct proc *, void *, size_t,
       void *);
void uvm_pause(void);
void uvm_init(void);
int uvm_io(vm_map_t, struct uio *, int);



vaddr_t uvm_km_alloc1(vm_map_t, vsize_t, vsize_t, boolean_t);
void uvm_km_free(vm_map_t, vaddr_t, vsize_t);
void uvm_km_free_wakeup(vm_map_t, vaddr_t, vsize_t);
vaddr_t uvm_km_kmemalloc_pla(struct vm_map *,
       struct uvm_object *, vsize_t, vsize_t, int,
       paddr_t, paddr_t, paddr_t, paddr_t, int);


vaddr_t uvm_km_valloc(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_try(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_wait(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_align(struct vm_map *, vsize_t,
       vsize_t, int);
vaddr_t uvm_km_valloc_prefer_wait(vm_map_t, vsize_t, voff_t);
struct vm_map *uvm_km_suballoc(vm_map_t, vaddr_t *, vaddr_t *,
       vsize_t, int, boolean_t, vm_map_t);
# 334 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
struct kmem_va_mode {
 struct vm_map **kv_map;
 vsize_t kv_align;
 char kv_wait;
 char kv_singlepage;
};
# 354 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
struct kmem_pa_mode {
 struct uvm_constraint_range *kp_constraint;
 struct uvm_object **kp_object;
 paddr_t kp_align;
 paddr_t kp_boundary;
 int kp_maxseg;
 char kp_nomem;
 char kp_zero;
 char kp_pageable;
};
# 376 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
struct kmem_dyn_mode {
 voff_t kd_prefer;
 int *kd_slowdown;
 char kd_waitok;
 char kd_trylock;
};
# 392 "/crypt/home/bluhm/openbsd/cvs/src/sys/uvm/uvm_extern.h"
extern const struct kmem_va_mode kv_any;
extern const struct kmem_va_mode kv_intrsafe;
extern const struct kmem_va_mode kv_page;

extern const struct kmem_pa_mode kp_dirty;
extern const struct kmem_pa_mode kp_zero;
extern const struct kmem_pa_mode kp_dma;
extern const struct kmem_pa_mode kp_dma_contig;
extern const struct kmem_pa_mode kp_dma_zero;
extern const struct kmem_pa_mode kp_pageable;
extern const struct kmem_pa_mode kp_none;

extern const struct kmem_dyn_mode kd_waitok;
extern const struct kmem_dyn_mode kd_nowait;
extern const struct kmem_dyn_mode kd_trylock;

void *km_alloc(size_t, const struct kmem_va_mode *,
       const struct kmem_pa_mode *,
       const struct kmem_dyn_mode *);
void km_free(void *, size_t, const struct kmem_va_mode *,
       const struct kmem_pa_mode *);
int uvm_map(vm_map_t, vaddr_t *, vsize_t,
       struct uvm_object *, voff_t, vsize_t, unsigned int);
int uvm_mapanon(vm_map_t, vaddr_t *, vsize_t, vsize_t, unsigned int);
int uvm_map_pageable(vm_map_t, vaddr_t,
       vaddr_t, boolean_t, int);
int uvm_map_pageable_all(vm_map_t, int, vsize_t);
boolean_t uvm_map_checkprot(vm_map_t, vaddr_t,
       vaddr_t, vm_prot_t);
int uvm_map_protect(vm_map_t, vaddr_t,
       vaddr_t, vm_prot_t, boolean_t);
struct vmspace *uvmspace_alloc(vaddr_t, vaddr_t,
       boolean_t, boolean_t);
void uvmspace_init(struct vmspace *, struct pmap *,
       vaddr_t, vaddr_t, boolean_t, boolean_t);
void uvmspace_exec(struct proc *, vaddr_t, vaddr_t);
struct vmspace *uvmspace_fork(struct process *);
void uvmspace_free(struct vmspace *);
struct vmspace *uvmspace_share(struct process *);
int uvm_share(vm_map_t, vaddr_t, vm_prot_t,
       vm_map_t, vaddr_t, vsize_t);
void uvm_meter(void);
int uvm_sysctl(int *, u_int, void *, size_t *,
       void *, size_t, struct proc *);
struct vm_page *uvm_pagealloc(struct uvm_object *,
       voff_t, struct vm_anon *, int);
vaddr_t uvm_pagealloc_contig(vaddr_t, vaddr_t,
       vaddr_t, vaddr_t);
int uvm_pagealloc_multi(struct uvm_object *, voff_t,
           vsize_t, int);
void uvm_pagerealloc(struct vm_page *,
       struct uvm_object *, voff_t);
int uvm_pagerealloc_multi(struct uvm_object *, voff_t,
       vsize_t, int, struct uvm_constraint_range *);

void uvm_page_physload(paddr_t, paddr_t, paddr_t,
       paddr_t, int);
void uvm_setpagesize(void);
void uvm_shutdown(void);
void uvm_aio_biodone(struct buf *);
void uvm_aio_aiodone(struct buf *);
void uvm_pageout(void *);
void uvm_aiodone_daemon(void *);
void uvm_wait(const char *);
int uvm_pglistalloc(psize_t, paddr_t, paddr_t,
       paddr_t, paddr_t, struct pglist *, int, int);
void uvm_pglistfree(struct pglist *);
void uvm_pmr_use_inc(paddr_t, paddr_t);
void uvm_swap_init(void);
int uvm_coredump_walkmap(struct proc *,
       void *, int (*)(struct proc *, void *,
       struct uvm_coredump_state *), void *);
void uvm_grow(struct proc *, vaddr_t);
void uvm_deallocate(vm_map_t, vaddr_t, vsize_t);
struct uvm_object *uvn_attach(struct vnode *, vm_prot_t);
void uvm_pagezero_thread(void *);
void kmeminit_nkmempages(void);
void kmeminit(void);
extern u_int nkmempages;

struct process;
struct kinfo_vmentry;
int fill_vmmap(struct process *, struct kinfo_vmentry *,
       size_t *);
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/db_machdep.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/trap.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/db_machdep.h" 2


typedef vaddr_t db_addr_t;
typedef long db_expr_t;

typedef struct trapframe db_regs_t;

extern db_regs_t ddb_regs;
# 82 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/db_machdep.h"
typedef long kgdb_reg_t;







int db_ktrap(int, int, db_regs_t *);

void db_machine_init(void);
int db_enter_ddb(void);
void db_startcpu(int);
void db_stopcpu(int);
void x86_ipi_db(struct cpu_info *);

extern struct mutex ddb_mp_mutex;
# 109 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/db_machdep.h"
extern void db_machine_init(void);

extern void cpu_debug_dump(void);
# 1828 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/ddb/db_output.h" 1
# 36 "/crypt/home/bluhm/openbsd/cvs/src/sys/ddb/db_output.h"
void db_force_whitespace(void);
void db_putchar(int);
int db_print_position(void);
int db_printf(const char *, ...)
    __attribute__((__format__(__kprintf__,1,2)));
int db_vprintf(const char *, va_list)
    __attribute__((__format__(__kprintf__,1,0)));
void db_end_line(int);
# 61 "/crypt/home/bluhm/openbsd/cvs/src/sys/ddb/db_output.h"
char *db_format(char *, size_t, long, int, int, int);


void db_stack_dump(void);
# 1829 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.c" 2

void
db_print_sa(struct sockaddr *sa)
{
 int len;
 u_char *p;

 if (sa == ((void *)0)) {
  db_printf("[NULL]");
  return;
 }

 p = (u_char *)sa;
 len = sa->sa_len;
 db_printf("[");
 while (len > 0) {
  db_printf("%d", *p);
  p++;
  len--;
  if (len)
   db_printf(",");
 }
 db_printf("]\n");
}

void
db_print_ifa(struct ifaddr *ifa)
{
 if (ifa == ((void *)0))
  return;
 db_printf("  ifa_addr=");
 db_print_sa(ifa->ifa_addr);
 db_printf("  ifa_dsta=");
 db_print_sa(ifa->ifa_dstaddr);
 db_printf("  ifa_mask=");
 db_print_sa(ifa->ifa_netmask);
 db_printf("  flags=0x%x, refcnt=%d, metric=%d\n",
     ifa->ifa_flags, ifa->ifa_refcnt, ifa->ifa_metric);
}





int
db_show_rtentry(struct rtentry *rt, void *w, unsigned int id)
{
 db_printf("rtentry=%p", rt);

 db_printf(" flags=0x%x refcnt=%d use=%llu expire=%lld rtableid=%u\n",
     rt->rt_flags, rt->rt_refcnt, rt->rt_rmx.rmx_pksent, rt->rt_rmx.rmx_expire, id);

 db_printf(" key="); db_print_sa(((rt)->rt_dest));
 db_printf(" plen=%d", ((rt)->rt_plen));
 db_printf(" gw="); db_print_sa(rt->rt_gateway);
 db_printf(" ifidx=%u ", rt->rt_ifidx);
 db_printf(" ifa=%p\n", rt->rt_ifa);
 db_print_ifa(rt->rt_ifa);

 db_printf(" gwroute=%p llinfo=%p\n", rt->RT_gw._nh, rt->rt_llinfo);
 return (0);
}





int
db_show_arptab(void)
{
 db_printf("Route tree for AF_INET\n");
 rtable_walk(0, 2, db_show_rtentry, ((void *)0));
 return (0);
}
